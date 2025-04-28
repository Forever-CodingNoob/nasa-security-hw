#!/usr/bin/env -S python3 -W ignore::DeprecationWarning

import os, sys
import socket
import threading

TARGET1 = "soyo.py"
PORT1 = 11452

TARGET2 = "anon.py"
PORT2 = 11451

HOST = "0.0.0.0"

def client_handler(conn, addr, target):
    print(f"Connection from {addr} for {target}")
    pid = os.fork()
    if pid == 0:
        client_socket_fd = conn.fileno()
        os.dup2(client_socket_fd, sys.stdin.fileno())
        os.dup2(client_socket_fd, sys.stdout.fileno())

        with open(os.devnull, 'w') as devnull:
            os.dup2(devnull.fileno(), sys.stderr.fileno())

        conn.close()
        try:
            os.execvp("python3", ["python3", target])
        except Exception as e:
            print(f"Failed to execute {target}: {e}")
            sys.exit(1)
    else:
        conn.close()


def start_server(port, target):
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.bind((HOST, port))
        s.listen()
        print(f"Server for {target} is running on {HOST}:{port}")

        while True:
            conn, addr = s.accept()
            threading.Thread(target=client_handler, args=(conn, addr, target)).start()

if __name__ == "__main__":
    # start both servers
    t1 = threading.Thread(target=start_server, args=(PORT1, TARGET1), daemon=True)
    t2 = threading.Thread(target=start_server, args=(PORT2, TARGET2), daemon=True)

    t1.start()
    t2.start()

    print("Servers are running. Press Ctrl+C to stop.")
    try:
        t1.join()
        t2.join()
    except KeyboardInterrupt:
        print("Shutting down all servers.")

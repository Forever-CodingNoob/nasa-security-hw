#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int iteration_depth = 10;
void obf_func_1(int *x_1, unsigned char *data_1, size_t data_len_1);
void obf_func_2(int *x_2, unsigned char *data_2, size_t data_len_2);
void obf_func_3(int *x_3, unsigned char *data_3, size_t data_len_3);
void obf_func_4(int *x_4, unsigned char *data_4, size_t data_len_4);
void obf_func_5(int *x_5, unsigned char *data_5, size_t data_len_5);
void obf_func_6(int *x_6, unsigned char *data_6, size_t data_len_6);
void obf_func_7(int *x_7, unsigned char *data_7, size_t data_len_7);
void obf_func_8(int *x_8, unsigned char *data_8, size_t data_len_8);
void obf_func_9(int *x_9, unsigned char *data_9, size_t data_len_9);
void obf_func_10(int *x_10, unsigned char *data_10, size_t data_len_10);
void obf_func_11(int *x_11, unsigned char *data_11, size_t data_len_11);
void obf_func_12(int *x_12, unsigned char *data_12, size_t data_len_12);
void obf_func_13(int *x_13, unsigned char *data_13, size_t data_len_13);
void obf_func_14(int *x_14, unsigned char *data_14, size_t data_len_14);
void obf_func_15(int *x_15, unsigned char *data_15, size_t data_len_15);
void obf_func_16(int *x_16, unsigned char *data_16, size_t data_len_16);
void obf_func_17(int *x_17, unsigned char *data_17, size_t data_len_17);
void obf_func_18(int *x_18, unsigned char *data_18, size_t data_len_18);
void obf_func_19(int *x_19, unsigned char *data_19, size_t data_len_19);
void obf_func_20(int *x_20, unsigned char *data_20, size_t data_len_20);
void obf_func_21(int *x_21, unsigned char *data_21, size_t data_len_21);
void obf_func_22(int *x_22, unsigned char *data_22, size_t data_len_22);
void obf_func_23(int *x_23, unsigned char *data_23, size_t data_len_23);
void obf_func_24(int *x_24, unsigned char *data_24, size_t data_len_24);
void obf_func_25(int *x_25, unsigned char *data_25, size_t data_len_25);
void obf_func_26(int *x_26, unsigned char *data_26, size_t data_len_26);
void obf_func_27(int *x_27, unsigned char *data_27, size_t data_len_27);
void obf_func_28(int *x_28, unsigned char *data_28, size_t data_len_28);
void obf_func_29(int *x_29, unsigned char *data_29, size_t data_len_29);
void obf_func_30(int *x_30, unsigned char *data_30, size_t data_len_30);
void obf_func_31(int *x_31, unsigned char *data_31, size_t data_len_31);
void obf_func_32(int *x_32, unsigned char *data_32, size_t data_len_32);
void obf_func_33(int *x_33, unsigned char *data_33, size_t data_len_33);
void obf_func_34(int *x_34, unsigned char *data_34, size_t data_len_34);
void obf_func_35(int *x_35, unsigned char *data_35, size_t data_len_35);
void obf_func_36(int *x_36, unsigned char *data_36, size_t data_len_36);
void obf_func_37(int *x_37, unsigned char *data_37, size_t data_len_37);
void obf_func_38(int *x_38, unsigned char *data_38, size_t data_len_38);
void obf_func_39(int *x_39, unsigned char *data_39, size_t data_len_39);
void obf_func_40(int *x_40, unsigned char *data_40, size_t data_len_40);
void obf_func_41(int *x_41, unsigned char *data_41, size_t data_len_41);
void obf_func_42(int *x_42, unsigned char *data_42, size_t data_len_42);
void obf_func_43(int *x_43, unsigned char *data_43, size_t data_len_43);
void obf_func_44(int *x_44, unsigned char *data_44, size_t data_len_44);
void obf_func_45(int *x_45, unsigned char *data_45, size_t data_len_45);
void obf_func_46(int *x_46, unsigned char *data_46, size_t data_len_46);
void obf_func_47(int *x_47, unsigned char *data_47, size_t data_len_47);
void obf_func_48(int *x_48, unsigned char *data_48, size_t data_len_48);
void obf_func_49(int *x_49, unsigned char *data_49, size_t data_len_49);
void obf_func_50(int *x_50, unsigned char *data_50, size_t data_len_50);
void obf_func_51(int *x_51, unsigned char *data_51, size_t data_len_51);
void obf_func_52(int *x_52, unsigned char *data_52, size_t data_len_52);
void obf_func_53(int *x_53, unsigned char *data_53, size_t data_len_53);
void obf_func_54(int *x_54, unsigned char *data_54, size_t data_len_54);
void obf_func_55(int *x_55, unsigned char *data_55, size_t data_len_55);
void obf_func_56(int *x_56, unsigned char *data_56, size_t data_len_56);
void obf_func_57(int *x_57, unsigned char *data_57, size_t data_len_57);
void obf_func_58(int *x_58, unsigned char *data_58, size_t data_len_58);
void obf_func_59(int *x_59, unsigned char *data_59, size_t data_len_59);
void obf_func_60(int *x_60, unsigned char *data_60, size_t data_len_60);
void obf_func_61(int *x_61, unsigned char *data_61, size_t data_len_61);
void obf_func_62(int *x_62, unsigned char *data_62, size_t data_len_62);
void obf_func_63(int *x_63, unsigned char *data_63, size_t data_len_63);
void obf_func_64(int *x_64, unsigned char *data_64, size_t data_len_64);
void obf_func_65(int *x_65, unsigned char *data_65, size_t data_len_65);
void obf_func_66(int *x_66, unsigned char *data_66, size_t data_len_66);
void obf_func_67(int *x_67, unsigned char *data_67, size_t data_len_67);
void obf_func_68(int *x_68, unsigned char *data_68, size_t data_len_68);
void obf_func_69(int *x_69, unsigned char *data_69, size_t data_len_69);
void obf_func_70(int *x_70, unsigned char *data_70, size_t data_len_70);
void obf_func_71(int *x_71, unsigned char *data_71, size_t data_len_71);
void obf_func_72(int *x_72, unsigned char *data_72, size_t data_len_72);
void obf_func_73(int *x_73, unsigned char *data_73, size_t data_len_73);
void obf_func_74(int *x_74, unsigned char *data_74, size_t data_len_74);
void obf_func_75(int *x_75, unsigned char *data_75, size_t data_len_75);
void obf_func_76(int *x_76, unsigned char *data_76, size_t data_len_76);
void obf_func_77(int *x_77, unsigned char *data_77, size_t data_len_77);
void obf_func_78(int *x_78, unsigned char *data_78, size_t data_len_78);
void obf_func_79(int *x_79, unsigned char *data_79, size_t data_len_79);
void obf_func_80(int *x_80, unsigned char *data_80, size_t data_len_80);
void obf_func_81(int *x_81, unsigned char *data_81, size_t data_len_81);
void obf_func_82(int *x_82, unsigned char *data_82, size_t data_len_82);
void obf_func_83(int *x_83, unsigned char *data_83, size_t data_len_83);
void obf_func_84(int *x_84, unsigned char *data_84, size_t data_len_84);
void obf_func_85(int *x_85, unsigned char *data_85, size_t data_len_85);
void obf_func_86(int *x_86, unsigned char *data_86, size_t data_len_86);
void obf_func_87(int *x_87, unsigned char *data_87, size_t data_len_87);
void obf_func_88(int *x_88, unsigned char *data_88, size_t data_len_88);
void obf_func_89(int *x_89, unsigned char *data_89, size_t data_len_89);
void obf_func_90(int *x_90, unsigned char *data_90, size_t data_len_90);
void obf_func_91(int *x_91, unsigned char *data_91, size_t data_len_91);
void obf_func_92(int *x_92, unsigned char *data_92, size_t data_len_92);
void obf_func_93(int *x_93, unsigned char *data_93, size_t data_len_93);
void obf_func_94(int *x_94, unsigned char *data_94, size_t data_len_94);
void obf_func_95(int *x_95, unsigned char *data_95, size_t data_len_95);
void obf_func_96(int *x_96, unsigned char *data_96, size_t data_len_96);
void obf_func_97(int *x_97, unsigned char *data_97, size_t data_len_97);
void obf_func_98(int *x_98, unsigned char *data_98, size_t data_len_98);
void obf_func_99(int *x_99, unsigned char *data_99, size_t data_len_99);
void obf_func_100(int *x_100, unsigned char *data_100, size_t data_len_100);
void obf_func_101(int *x_101, unsigned char *data_101, size_t data_len_101);
void obf_func_102(int *x_102, unsigned char *data_102, size_t data_len_102);
void obf_func_103(int *x_103, unsigned char *data_103, size_t data_len_103);
void obf_func_104(int *x_104, unsigned char *data_104, size_t data_len_104);
void obf_func_105(int *x_105, unsigned char *data_105, size_t data_len_105);
void obf_func_106(int *x_106, unsigned char *data_106, size_t data_len_106);
void obf_func_107(int *x_107, unsigned char *data_107, size_t data_len_107);
void obf_func_108(int *x_108, unsigned char *data_108, size_t data_len_108);
void obf_func_109(int *x_109, unsigned char *data_109, size_t data_len_109);
void obf_func_110(int *x_110, unsigned char *data_110, size_t data_len_110);
void obf_func_111(int *x_111, unsigned char *data_111, size_t data_len_111);
void obf_func_112(int *x_112, unsigned char *data_112, size_t data_len_112);
void obf_func_113(int *x_113, unsigned char *data_113, size_t data_len_113);
void obf_func_114(int *x_114, unsigned char *data_114, size_t data_len_114);
void obf_func_115(int *x_115, unsigned char *data_115, size_t data_len_115);
void obf_func_116(int *x_116, unsigned char *data_116, size_t data_len_116);
void obf_func_117(int *x_117, unsigned char *data_117, size_t data_len_117);
void obf_func_118(int *x_118, unsigned char *data_118, size_t data_len_118);
void obf_func_119(int *x_119, unsigned char *data_119, size_t data_len_119);
void obf_func_120(int *x_120, unsigned char *data_120, size_t data_len_120);
void obf_func_121(int *x_121, unsigned char *data_121, size_t data_len_121);
void obf_func_122(int *x_122, unsigned char *data_122, size_t data_len_122);
void obf_func_123(int *x_123, unsigned char *data_123, size_t data_len_123);
void obf_func_124(int *x_124, unsigned char *data_124, size_t data_len_124);
void obf_func_125(int *x_125, unsigned char *data_125, size_t data_len_125);
void obf_func_126(int *x_126, unsigned char *data_126, size_t data_len_126);
void obf_func_127(int *x_127, unsigned char *data_127, size_t data_len_127);
void obf_func_128(int *x_128, unsigned char *data_128, size_t data_len_128);
void obf_func_129(int *x_129, unsigned char *data_129, size_t data_len_129);
void obf_func_130(int *x_130, unsigned char *data_130, size_t data_len_130);
void obf_func_131(int *x_131, unsigned char *data_131, size_t data_len_131);
void obf_func_132(int *x_132, unsigned char *data_132, size_t data_len_132);
void obf_func_133(int *x_133, unsigned char *data_133, size_t data_len_133);
void obf_func_134(int *x_134, unsigned char *data_134, size_t data_len_134);
void obf_func_135(int *x_135, unsigned char *data_135, size_t data_len_135);
void obf_func_136(int *x_136, unsigned char *data_136, size_t data_len_136);
void obf_func_137(int *x_137, unsigned char *data_137, size_t data_len_137);
void obf_func_138(int *x_138, unsigned char *data_138, size_t data_len_138);
void obf_func_139(int *x_139, unsigned char *data_139, size_t data_len_139);
void obf_func_140(int *x_140, unsigned char *data_140, size_t data_len_140);
void obf_func_141(int *x_141, unsigned char *data_141, size_t data_len_141);
void obf_func_142(int *x_142, unsigned char *data_142, size_t data_len_142);
void obf_func_143(int *x_143, unsigned char *data_143, size_t data_len_143);
void obf_func_144(int *x_144, unsigned char *data_144, size_t data_len_144);
void obf_func_145(int *x_145, unsigned char *data_145, size_t data_len_145);
void obf_func_146(int *x_146, unsigned char *data_146, size_t data_len_146);
void obf_func_147(int *x_147, unsigned char *data_147, size_t data_len_147);
void obf_func_148(int *x_148, unsigned char *data_148, size_t data_len_148);
void obf_func_149(int *x_149, unsigned char *data_149, size_t data_len_149);
void obf_func_150(int *x_150, unsigned char *data_150, size_t data_len_150);
void obf_func_151(int *x_151, unsigned char *data_151, size_t data_len_151);
void obf_func_152(int *x_152, unsigned char *data_152, size_t data_len_152);
void obf_func_153(int *x_153, unsigned char *data_153, size_t data_len_153);
void obf_func_154(int *x_154, unsigned char *data_154, size_t data_len_154);
void obf_func_155(int *x_155, unsigned char *data_155, size_t data_len_155);
void obf_func_156(int *x_156, unsigned char *data_156, size_t data_len_156);
void obf_func_157(int *x_157, unsigned char *data_157, size_t data_len_157);
void obf_func_158(int *x_158, unsigned char *data_158, size_t data_len_158);
void obf_func_159(int *x_159, unsigned char *data_159, size_t data_len_159);
void obf_func_160(int *x_160, unsigned char *data_160, size_t data_len_160);
void obf_func_161(int *x_161, unsigned char *data_161, size_t data_len_161);
void obf_func_162(int *x_162, unsigned char *data_162, size_t data_len_162);
void obf_func_163(int *x_163, unsigned char *data_163, size_t data_len_163);
void obf_func_164(int *x_164, unsigned char *data_164, size_t data_len_164);
void obf_func_165(int *x_165, unsigned char *data_165, size_t data_len_165);
void obf_func_166(int *x_166, unsigned char *data_166, size_t data_len_166);
void obf_func_167(int *x_167, unsigned char *data_167, size_t data_len_167);
void obf_func_168(int *x_168, unsigned char *data_168, size_t data_len_168);
void obf_func_169(int *x_169, unsigned char *data_169, size_t data_len_169);
void obf_func_170(int *x_170, unsigned char *data_170, size_t data_len_170);
void obf_func_171(int *x_171, unsigned char *data_171, size_t data_len_171);
void obf_func_172(int *x_172, unsigned char *data_172, size_t data_len_172);
void obf_func_173(int *x_173, unsigned char *data_173, size_t data_len_173);
void obf_func_174(int *x_174, unsigned char *data_174, size_t data_len_174);
void obf_func_175(int *x_175, unsigned char *data_175, size_t data_len_175);
void obf_func_176(int *x_176, unsigned char *data_176, size_t data_len_176);
void obf_func_177(int *x_177, unsigned char *data_177, size_t data_len_177);
void obf_func_178(int *x_178, unsigned char *data_178, size_t data_len_178);
void obf_func_179(int *x_179, unsigned char *data_179, size_t data_len_179);
void obf_func_180(int *x_180, unsigned char *data_180, size_t data_len_180);
void obf_func_181(int *x_181, unsigned char *data_181, size_t data_len_181);
void obf_func_182(int *x_182, unsigned char *data_182, size_t data_len_182);
void obf_func_183(int *x_183, unsigned char *data_183, size_t data_len_183);
void obf_func_184(int *x_184, unsigned char *data_184, size_t data_len_184);
void obf_func_185(int *x_185, unsigned char *data_185, size_t data_len_185);
void obf_func_186(int *x_186, unsigned char *data_186, size_t data_len_186);
void obf_func_187(int *x_187, unsigned char *data_187, size_t data_len_187);
void obf_func_188(int *x_188, unsigned char *data_188, size_t data_len_188);
void obf_func_189(int *x_189, unsigned char *data_189, size_t data_len_189);
void obf_func_190(int *x_190, unsigned char *data_190, size_t data_len_190);
void obf_func_191(int *x_191, unsigned char *data_191, size_t data_len_191);
void obf_func_192(int *x_192, unsigned char *data_192, size_t data_len_192);
void obf_func_193(int *x_193, unsigned char *data_193, size_t data_len_193);
void obf_func_194(int *x_194, unsigned char *data_194, size_t data_len_194);
void obf_func_195(int *x_195, unsigned char *data_195, size_t data_len_195);
void obf_func_196(int *x_196, unsigned char *data_196, size_t data_len_196);
void obf_func_197(int *x_197, unsigned char *data_197, size_t data_len_197);
void obf_func_198(int *x_198, unsigned char *data_198, size_t data_len_198);
void obf_func_199(int *x_199, unsigned char *data_199, size_t data_len_199);
void obf_func_200(int *x_200, unsigned char *data_200, size_t data_len_200);
void obf_func_201(int *x_201, unsigned char *data_201, size_t data_len_201);
void obf_func_202(int *x_202, unsigned char *data_202, size_t data_len_202);
void obf_func_203(int *x_203, unsigned char *data_203, size_t data_len_203);
void obf_func_204(int *x_204, unsigned char *data_204, size_t data_len_204);
void obf_func_205(int *x_205, unsigned char *data_205, size_t data_len_205);
void obf_func_206(int *x_206, unsigned char *data_206, size_t data_len_206);
void obf_func_207(int *x_207, unsigned char *data_207, size_t data_len_207);
void obf_func_208(int *x_208, unsigned char *data_208, size_t data_len_208);
void obf_func_209(int *x_209, unsigned char *data_209, size_t data_len_209);
void obf_func_210(int *x_210, unsigned char *data_210, size_t data_len_210);
void obf_func_211(int *x_211, unsigned char *data_211, size_t data_len_211);
void obf_func_212(int *x_212, unsigned char *data_212, size_t data_len_212);
void obf_func_213(int *x_213, unsigned char *data_213, size_t data_len_213);
void obf_func_214(int *x_214, unsigned char *data_214, size_t data_len_214);
void obf_func_215(int *x_215, unsigned char *data_215, size_t data_len_215);
void obf_func_216(int *x_216, unsigned char *data_216, size_t data_len_216);
void obf_func_217(int *x_217, unsigned char *data_217, size_t data_len_217);
void obf_func_218(int *x_218, unsigned char *data_218, size_t data_len_218);
void obf_func_219(int *x_219, unsigned char *data_219, size_t data_len_219);
void obf_func_220(int *x_220, unsigned char *data_220, size_t data_len_220);
void obf_func_221(int *x_221, unsigned char *data_221, size_t data_len_221);
void obf_func_222(int *x_222, unsigned char *data_222, size_t data_len_222);
void obf_func_223(int *x_223, unsigned char *data_223, size_t data_len_223);
void obf_func_224(int *x_224, unsigned char *data_224, size_t data_len_224);
void obf_func_225(int *x_225, unsigned char *data_225, size_t data_len_225);
void obf_func_226(int *x_226, unsigned char *data_226, size_t data_len_226);
void obf_func_227(int *x_227, unsigned char *data_227, size_t data_len_227);
void obf_func_228(int *x_228, unsigned char *data_228, size_t data_len_228);
void obf_func_229(int *x_229, unsigned char *data_229, size_t data_len_229);
void obf_func_230(int *x_230, unsigned char *data_230, size_t data_len_230);
void obf_func_231(int *x_231, unsigned char *data_231, size_t data_len_231);
void obf_func_232(int *x_232, unsigned char *data_232, size_t data_len_232);
void obf_func_233(int *x_233, unsigned char *data_233, size_t data_len_233);
void obf_func_234(int *x_234, unsigned char *data_234, size_t data_len_234);
void obf_func_235(int *x_235, unsigned char *data_235, size_t data_len_235);
void obf_func_236(int *x_236, unsigned char *data_236, size_t data_len_236);
void obf_func_237(int *x_237, unsigned char *data_237, size_t data_len_237);
void obf_func_238(int *x_238, unsigned char *data_238, size_t data_len_238);
void obf_func_239(int *x_239, unsigned char *data_239, size_t data_len_239);
void obf_func_240(int *x_240, unsigned char *data_240, size_t data_len_240);
void obf_func_241(int *x_241, unsigned char *data_241, size_t data_len_241);
void obf_func_242(int *x_242, unsigned char *data_242, size_t data_len_242);
void obf_func_243(int *x_243, unsigned char *data_243, size_t data_len_243);
void obf_func_244(int *x_244, unsigned char *data_244, size_t data_len_244);
void obf_func_245(int *x_245, unsigned char *data_245, size_t data_len_245);
void obf_func_246(int *x_246, unsigned char *data_246, size_t data_len_246);
void obf_func_247(int *x_247, unsigned char *data_247, size_t data_len_247);
void obf_func_248(int *x_248, unsigned char *data_248, size_t data_len_248);
void obf_func_249(int *x_249, unsigned char *data_249, size_t data_len_249);
void obf_func_250(int *x_250, unsigned char *data_250, size_t data_len_250);
void obf_func_251(int *x_251, unsigned char *data_251, size_t data_len_251);
void obf_func_252(int *x_252, unsigned char *data_252, size_t data_len_252);
void obf_func_253(int *x_253, unsigned char *data_253, size_t data_len_253);
void obf_func_254(int *x_254, unsigned char *data_254, size_t data_len_254);
void obf_func_255(int *x_255, unsigned char *data_255, size_t data_len_255);
void obf_func_256(int *x_256, unsigned char *data_256, size_t data_len_256);
void obf_func_257(int *x_257, unsigned char *data_257, size_t data_len_257);
void obf_func_258(int *x_258, unsigned char *data_258, size_t data_len_258);
void obf_func_259(int *x_259, unsigned char *data_259, size_t data_len_259);
void obf_func_260(int *x_260, unsigned char *data_260, size_t data_len_260);
void obf_func_261(int *x_261, unsigned char *data_261, size_t data_len_261);
void obf_func_262(int *x_262, unsigned char *data_262, size_t data_len_262);
void obf_func_263(int *x_263, unsigned char *data_263, size_t data_len_263);
void obf_func_264(int *x_264, unsigned char *data_264, size_t data_len_264);
void obf_func_265(int *x_265, unsigned char *data_265, size_t data_len_265);
void obf_func_266(int *x_266, unsigned char *data_266, size_t data_len_266);
void obf_func_267(int *x_267, unsigned char *data_267, size_t data_len_267);
void obf_func_268(int *x_268, unsigned char *data_268, size_t data_len_268);
void obf_func_269(int *x_269, unsigned char *data_269, size_t data_len_269);
void obf_func_270(int *x_270, unsigned char *data_270, size_t data_len_270);
void obf_func_271(int *x_271, unsigned char *data_271, size_t data_len_271);
void obf_func_272(int *x_272, unsigned char *data_272, size_t data_len_272);
void obf_func_273(int *x_273, unsigned char *data_273, size_t data_len_273);
void obf_func_274(int *x_274, unsigned char *data_274, size_t data_len_274);
void obf_func_275(int *x_275, unsigned char *data_275, size_t data_len_275);
void obf_func_276(int *x_276, unsigned char *data_276, size_t data_len_276);
void obf_func_277(int *x_277, unsigned char *data_277, size_t data_len_277);
void obf_func_278(int *x_278, unsigned char *data_278, size_t data_len_278);
void obf_func_279(int *x_279, unsigned char *data_279, size_t data_len_279);
void obf_func_280(int *x_280, unsigned char *data_280, size_t data_len_280);
void obf_func_281(int *x_281, unsigned char *data_281, size_t data_len_281);
void obf_func_282(int *x_282, unsigned char *data_282, size_t data_len_282);
void obf_func_283(int *x_283, unsigned char *data_283, size_t data_len_283);
void obf_func_284(int *x_284, unsigned char *data_284, size_t data_len_284);
void obf_func_285(int *x_285, unsigned char *data_285, size_t data_len_285);
void obf_func_286(int *x_286, unsigned char *data_286, size_t data_len_286);
void obf_func_287(int *x_287, unsigned char *data_287, size_t data_len_287);
void obf_func_288(int *x_288, unsigned char *data_288, size_t data_len_288);
void obf_func_289(int *x_289, unsigned char *data_289, size_t data_len_289);
void obf_func_290(int *x_290, unsigned char *data_290, size_t data_len_290);
void obf_func_291(int *x_291, unsigned char *data_291, size_t data_len_291);
void obf_func_292(int *x_292, unsigned char *data_292, size_t data_len_292);
void obf_func_293(int *x_293, unsigned char *data_293, size_t data_len_293);
void obf_func_294(int *x_294, unsigned char *data_294, size_t data_len_294);
void obf_func_295(int *x_295, unsigned char *data_295, size_t data_len_295);
void obf_func_296(int *x_296, unsigned char *data_296, size_t data_len_296);
void obf_func_297(int *x_297, unsigned char *data_297, size_t data_len_297);
void obf_func_298(int *x_298, unsigned char *data_298, size_t data_len_298);
void obf_func_299(int *x_299, unsigned char *data_299, size_t data_len_299);
void obf_func_300(int *x_300, unsigned char *data_300, size_t data_len_300);

unsigned char *read_file(const char *path, size_t *len) {
    FILE *f = fopen(path, "rb"); if (!f) return NULL;
    fseek(f, 0, SEEK_END);
    long l = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (l <= 0) { fclose(f); return NULL; }
    unsigned char *buf = malloc(l);
    fread(buf, 1, l, f);
    fclose(f);
    *len = l;
    return buf;
}

void obf_func_266(int *x_266, unsigned char *data_266, size_t data_len_266) {
    char buf_266[114];
    unsigned char* local_buf_266 = (unsigned char*)malloc(514);
    if (!local_buf_266) return;
    for (int j = 0; j < 514; j++) {
        local_buf_266[j] = j < data_len_266 ? data_266[j] : 0;
    }

    unsigned char check_266 = (unsigned char)((uint32_t)local_buf_266[15] * 47 + local_buf_266[11]) ^ local_buf_266[12];
    if (data_len_266 > 15 && check_266 == 0x06) {
        size_t copy_len_266 = ((uint32_t)local_buf_266[4]*45 + local_buf_266[3])^local_buf_266[13];
        copy_len_266 = (copy_len_266 % 114) + 1;
        memcpy(buf_266, local_buf_266, copy_len_266);
    }

    free(local_buf_266);
    if (*x_266 > 0) {
        *x_266 -= 1;
        obf_func_90(x_266, data_266, data_len_266);
    }
}

void obf_func_276(int *x_276, unsigned char *data_276, size_t data_len_276) {
    char buf_276[114];
    unsigned char* local_buf_276 = (unsigned char*)malloc(514);
    if (!local_buf_276) return;
    for (int j = 0; j < 514; j++) {
        local_buf_276[j] = j < data_len_276 ? data_276[j] : 0;
    }

    unsigned char check_276 = (unsigned char)((uint32_t)local_buf_276[12] * 31 + local_buf_276[7]) ^ local_buf_276[5];
    if (data_len_276 > 12 && check_276 == 0x1b) {
        size_t copy_len_276 = ((uint32_t)local_buf_276[13]*45 + local_buf_276[15])^local_buf_276[8];
        copy_len_276 = (copy_len_276 % 110) + 5;
        memcpy(buf_276, local_buf_276, copy_len_276);
    }

    free(local_buf_276);
    if (*x_276 > 0) {
        *x_276 -= 1;
        obf_func_92(x_276, data_276, data_len_276);
    }
}

void obf_func_198(int *x_198, unsigned char *data_198, size_t data_len_198) {
    char buf_198[114];
    unsigned char* local_buf_198 = (unsigned char*)malloc(514);
    if (!local_buf_198) return;
    for (int j = 0; j < 514; j++) {
        local_buf_198[j] = j < data_len_198 ? data_198[j] : 0;
    }

    unsigned char check_198 = (unsigned char)((uint32_t)local_buf_198[14] * 43 + local_buf_198[2]) ^ local_buf_198[7];
    if (data_len_198 > 14 && check_198 == 0x49) {
        size_t copy_len_198 = ((uint32_t)local_buf_198[5]*51 + local_buf_198[8])^local_buf_198[12];
        copy_len_198 = (copy_len_198 % 112) + 3;
        memcpy(buf_198, local_buf_198, copy_len_198);
    }

    free(local_buf_198);
    if (*x_198 > 0) {
        *x_198 -= 1;
        obf_func_19(x_198, data_198, data_len_198);
    }
}

void obf_func_28(int *x_28, unsigned char *data_28, size_t data_len_28) {
    char buf_28[114];
    unsigned char* local_buf_28 = (unsigned char*)malloc(514);
    if (!local_buf_28) return;
    for (int j = 0; j < 514; j++) {
        local_buf_28[j] = j < data_len_28 ? data_28[j] : 0;
    }

    unsigned char check_28 = (unsigned char)((uint32_t)local_buf_28[2] * 37 + local_buf_28[8]) ^ local_buf_28[14];
    if (data_len_28 > 14 && check_28 == 0xcb) {
        size_t copy_len_28 = ((uint32_t)local_buf_28[9]*57 + local_buf_28[3])^local_buf_28[10];
        copy_len_28 = (copy_len_28 % 114) + 1;
        memcpy(buf_28, local_buf_28, copy_len_28);
    }

    free(local_buf_28);
    if (*x_28 > 0) {
        *x_28 -= 1;
        obf_func_203(x_28, data_28, data_len_28);
    }
}

void obf_func_201(int *x_201, unsigned char *data_201, size_t data_len_201) {
    char buf_201[114];
    unsigned char* local_buf_201 = (unsigned char*)malloc(514);
    if (!local_buf_201) return;
    for (int j = 0; j < 514; j++) {
        local_buf_201[j] = j < data_len_201 ? data_201[j] : 0;
    }

    unsigned char check_201 = (unsigned char)((uint32_t)local_buf_201[6] * 31 + local_buf_201[3]) ^ local_buf_201[12];
    if (data_len_201 > 12 && check_201 == 0xc3) {
        size_t copy_len_201 = ((uint32_t)local_buf_201[8]*35 + local_buf_201[15])^local_buf_201[9];
        copy_len_201 = (copy_len_201 % 102) + 13;
        memcpy(buf_201, local_buf_201, copy_len_201);
    }

    free(local_buf_201);
    if (*x_201 > 0) {
        *x_201 -= 1;
        obf_func_103(x_201, data_201, data_len_201);
    }
}

void obf_func_155(int *x_155, unsigned char *data_155, size_t data_len_155) {
    char buf_155[114];
    unsigned char* local_buf_155 = (unsigned char*)malloc(514);
    if (!local_buf_155) return;
    for (int j = 0; j < 514; j++) {
        local_buf_155[j] = j < data_len_155 ? data_155[j] : 0;
    }

    unsigned char check_155 = (unsigned char)((uint32_t)local_buf_155[15] * 37 + local_buf_155[6]) ^ local_buf_155[8];
    if (data_len_155 > 15 && check_155 == 0x06) {
        size_t copy_len_155 = ((uint32_t)local_buf_155[9]*57 + local_buf_155[7])^local_buf_155[4];
        copy_len_155 = (copy_len_155 % 105) + 10;
        memcpy(buf_155, local_buf_155, copy_len_155);
    }

    free(local_buf_155);
    if (*x_155 > 0) {
        *x_155 -= 1;
        obf_func_228(x_155, data_155, data_len_155);
    }
}

void obf_func_233(int *x_233, unsigned char *data_233, size_t data_len_233) {
    char buf_233[114];
    unsigned char* local_buf_233 = (unsigned char*)malloc(514);
    if (!local_buf_233) return;
    for (int j = 0; j < 514; j++) {
        local_buf_233[j] = j < data_len_233 ? data_233[j] : 0;
    }

    unsigned char check_233 = (unsigned char)((uint32_t)local_buf_233[2] * 43 + local_buf_233[13]) ^ local_buf_233[8];
    if (data_len_233 > 13 && check_233 == 0x4a) {
        size_t copy_len_233 = ((uint32_t)local_buf_233[1]*55 + local_buf_233[10])^local_buf_233[12];
        copy_len_233 = (copy_len_233 % 110) + 5;
        memcpy(buf_233, local_buf_233, copy_len_233);
    }

    free(local_buf_233);
    if (*x_233 > 0) {
        *x_233 -= 1;
        obf_func_121(x_233, data_233, data_len_233);
    }
}

void obf_func_117(int *x_117, unsigned char *data_117, size_t data_len_117) {
    char buf_117[114];
    unsigned char* local_buf_117 = (unsigned char*)malloc(514);
    if (!local_buf_117) return;
    for (int j = 0; j < 514; j++) {
        local_buf_117[j] = j < data_len_117 ? data_117[j] : 0;
    }

    unsigned char check_117 = (unsigned char)((uint32_t)local_buf_117[1] * 61 + local_buf_117[13]) ^ local_buf_117[4];
    if (data_len_117 > 13 && check_117 == 0xce) {
        size_t copy_len_117 = ((uint32_t)local_buf_117[15]*33 + local_buf_117[14])^local_buf_117[6];
        copy_len_117 = (copy_len_117 % 105) + 10;
        memcpy(buf_117, local_buf_117, copy_len_117);
    }

    free(local_buf_117);
    if (*x_117 > 0) {
        *x_117 -= 1;
        obf_func_244(x_117, data_117, data_len_117);
    }
}

void obf_func_295(int *x_295, unsigned char *data_295, size_t data_len_295) {
    char buf_295[114];
    unsigned char* local_buf_295 = (unsigned char*)malloc(514);
    if (!local_buf_295) return;
    for (int j = 0; j < 514; j++) {
        local_buf_295[j] = j < data_len_295 ? data_295[j] : 0;
    }

    unsigned char check_295 = (unsigned char)((uint32_t)local_buf_295[9] * 31 + local_buf_295[4]) ^ local_buf_295[14];
    if (data_len_295 > 14 && check_295 == 0x56) {
        size_t copy_len_295 = ((uint32_t)local_buf_295[2]*29 + local_buf_295[10])^local_buf_295[3];
        copy_len_295 = (copy_len_295 % 103) + 12;
        memcpy(buf_295, local_buf_295, copy_len_295);
    }

    free(local_buf_295);
    if (*x_295 > 0) {
        *x_295 -= 1;
        obf_func_123(x_295, data_295, data_len_295);
    }
}

void obf_func_243(int *x_243, unsigned char *data_243, size_t data_len_243) {
    char buf_243[114];
    unsigned char* local_buf_243 = (unsigned char*)malloc(514);
    if (!local_buf_243) return;
    for (int j = 0; j < 514; j++) {
        local_buf_243[j] = j < data_len_243 ? data_243[j] : 0;
    }

    unsigned char check_243 = (unsigned char)((uint32_t)local_buf_243[6] * 59 + local_buf_243[4]) ^ local_buf_243[1];
    if (data_len_243 > 6 && check_243 == 0x47) {
        size_t copy_len_243 = ((uint32_t)local_buf_243[11]*51 + local_buf_243[5])^local_buf_243[14];
        copy_len_243 = (copy_len_243 % 105) + 10;
        memcpy(buf_243, local_buf_243, copy_len_243);
    }

    free(local_buf_243);
    if (*x_243 > 0) {
        *x_243 -= 1;
        obf_func_84(x_243, data_243, data_len_243);
    }
}

void obf_func_230(int *x_230, unsigned char *data_230, size_t data_len_230) {
    char buf_230[114];
    unsigned char* local_buf_230 = (unsigned char*)malloc(514);
    if (!local_buf_230) return;
    for (int j = 0; j < 514; j++) {
        local_buf_230[j] = j < data_len_230 ? data_230[j] : 0;
    }

    unsigned char check_230 = (unsigned char)((uint32_t)local_buf_230[1] * 31 + local_buf_230[3]) ^ local_buf_230[2];
    if (data_len_230 > 3 && check_230 == 0x2c) {
        size_t copy_len_230 = ((uint32_t)local_buf_230[8]*45 + local_buf_230[13])^local_buf_230[10];
        copy_len_230 = (copy_len_230 % 106) + 9;
        memcpy(buf_230, local_buf_230, copy_len_230);
    }

    free(local_buf_230);
    if (*x_230 > 0) {
        *x_230 -= 1;
        obf_func_131(x_230, data_230, data_len_230);
    }
}

void obf_func_287(int *x_287, unsigned char *data_287, size_t data_len_287) {
    char buf_287[114];
    unsigned char* local_buf_287 = (unsigned char*)malloc(514);
    if (!local_buf_287) return;
    for (int j = 0; j < 514; j++) {
        local_buf_287[j] = j < data_len_287 ? data_287[j] : 0;
    }

    unsigned char check_287 = (unsigned char)((uint32_t)local_buf_287[11] * 47 + local_buf_287[15]) ^ local_buf_287[12];
    if (data_len_287 > 15 && check_287 == 0xa6) {
        size_t copy_len_287 = ((uint32_t)local_buf_287[9]*55 + local_buf_287[5])^local_buf_287[3];
        copy_len_287 = (copy_len_287 % 115) + 0;
        memcpy(buf_287, local_buf_287, copy_len_287);
    }

    free(local_buf_287);
    if (*x_287 > 0) {
        *x_287 -= 1;
        obf_func_55(x_287, data_287, data_len_287);
    }
}

void obf_func_244(int *x_244, unsigned char *data_244, size_t data_len_244) {
    char buf_244[114];
    unsigned char* local_buf_244 = (unsigned char*)malloc(514);
    if (!local_buf_244) return;
    for (int j = 0; j < 514; j++) {
        local_buf_244[j] = j < data_len_244 ? data_244[j] : 0;
    }

    unsigned char check_244 = (unsigned char)((uint32_t)local_buf_244[14] * 61 + local_buf_244[8]) ^ local_buf_244[2];
    if (data_len_244 > 14 && check_244 == 0xc0) {
        size_t copy_len_244 = ((uint32_t)local_buf_244[11]*57 + local_buf_244[3])^local_buf_244[7];
        copy_len_244 = (copy_len_244 % 100) + 15;
        memcpy(buf_244, local_buf_244, copy_len_244);
    }

    free(local_buf_244);
    if (*x_244 > 0) {
        *x_244 -= 1;
        obf_func_216(x_244, data_244, data_len_244);
    }
}

void obf_func_4(int *x_4, unsigned char *data_4, size_t data_len_4) {
    char buf_4[114];
    unsigned char* local_buf_4 = (unsigned char*)malloc(514);
    if (!local_buf_4) return;
    for (int j = 0; j < 514; j++) {
        local_buf_4[j] = j < data_len_4 ? data_4[j] : 0;
    }

    unsigned char check_4 = (unsigned char)((uint32_t)local_buf_4[3] * 31 + local_buf_4[7]) ^ local_buf_4[5];
    if (data_len_4 > 7 && check_4 == 0x75) {
        size_t copy_len_4 = ((uint32_t)local_buf_4[4]*39 + local_buf_4[13])^local_buf_4[15];
        copy_len_4 = (copy_len_4 % 115) + 0;
        memcpy(buf_4, local_buf_4, copy_len_4);
    }

    free(local_buf_4);
    if (*x_4 > 0) {
        *x_4 -= 1;
        obf_func_174(x_4, data_4, data_len_4);
    }
}

void obf_func_235(int *x_235, unsigned char *data_235, size_t data_len_235) {
    char buf_235[114];
    unsigned char* local_buf_235 = (unsigned char*)malloc(514);
    if (!local_buf_235) return;
    for (int j = 0; j < 514; j++) {
        local_buf_235[j] = j < data_len_235 ? data_235[j] : 0;
    }

    unsigned char check_235 = (unsigned char)((uint32_t)local_buf_235[1] * 37 + local_buf_235[12]) ^ local_buf_235[5];
    if (data_len_235 > 12 && check_235 == 0xca) {
        size_t copy_len_235 = ((uint32_t)local_buf_235[4]*51 + local_buf_235[2])^local_buf_235[10];
        copy_len_235 = (copy_len_235 % 106) + 9;
        memcpy(buf_235, local_buf_235, copy_len_235);
    }

    free(local_buf_235);
    if (*x_235 > 0) {
        *x_235 -= 1;
        obf_func_292(x_235, data_235, data_len_235);
    }
}

void obf_func_13(int *x_13, unsigned char *data_13, size_t data_len_13) {
    char buf_13[114];
    unsigned char* local_buf_13 = (unsigned char*)malloc(514);
    if (!local_buf_13) return;
    for (int j = 0; j < 514; j++) {
        local_buf_13[j] = j < data_len_13 ? data_13[j] : 0;
    }

    unsigned char check_13 = (unsigned char)((uint32_t)local_buf_13[1] * 41 + local_buf_13[6]) ^ local_buf_13[8];
    if (data_len_13 > 8 && check_13 == 0xcf) {
        size_t copy_len_13 = ((uint32_t)local_buf_13[3]*39 + local_buf_13[15])^local_buf_13[12];
        copy_len_13 = (copy_len_13 % 102) + 13;
        memcpy(buf_13, local_buf_13, copy_len_13);
    }

    free(local_buf_13);
    if (*x_13 > 0) {
        *x_13 -= 1;
        obf_func_148(x_13, data_13, data_len_13);
    }
}

void obf_func_11(int *x_11, unsigned char *data_11, size_t data_len_11) {
    char buf_11[114];
    unsigned char* local_buf_11 = (unsigned char*)malloc(514);
    if (!local_buf_11) return;
    for (int j = 0; j < 514; j++) {
        local_buf_11[j] = j < data_len_11 ? data_11[j] : 0;
    }

    unsigned char check_11 = (unsigned char)((uint32_t)local_buf_11[1] * 53 + local_buf_11[9]) ^ local_buf_11[12];
    if (data_len_11 > 12 && check_11 == 0x81) {
        size_t copy_len_11 = ((uint32_t)local_buf_11[11]*57 + local_buf_11[10])^local_buf_11[13];
        copy_len_11 = (copy_len_11 % 103) + 12;
        memcpy(buf_11, local_buf_11, copy_len_11);
    }

    free(local_buf_11);
    if (*x_11 > 0) {
        *x_11 -= 1;
        obf_func_115(x_11, data_11, data_len_11);
    }
}

void obf_func_186(int *x_186, unsigned char *data_186, size_t data_len_186) {
    char buf_186[114];
    unsigned char* local_buf_186 = (unsigned char*)malloc(514);
    if (!local_buf_186) return;
    for (int j = 0; j < 514; j++) {
        local_buf_186[j] = j < data_len_186 ? data_186[j] : 0;
    }

    unsigned char check_186 = (unsigned char)((uint32_t)local_buf_186[7] * 47 + local_buf_186[6]) ^ local_buf_186[11];
    if (data_len_186 > 11 && check_186 == 0xc7) {
        size_t copy_len_186 = ((uint32_t)local_buf_186[13]*33 + local_buf_186[5])^local_buf_186[12];
        copy_len_186 = (copy_len_186 % 111) + 4;
        memcpy(buf_186, local_buf_186, copy_len_186);
    }

    free(local_buf_186);
    if (*x_186 > 0) {
        *x_186 -= 1;
        obf_func_272(x_186, data_186, data_len_186);
    }
}

void obf_func_38(int *x_38, unsigned char *data_38, size_t data_len_38) {
    char buf_38[114];
    unsigned char* local_buf_38 = (unsigned char*)malloc(514);
    if (!local_buf_38) return;
    for (int j = 0; j < 514; j++) {
        local_buf_38[j] = j < data_len_38 ? data_38[j] : 0;
    }

    unsigned char check_38 = (unsigned char)((uint32_t)local_buf_38[2] * 47 + local_buf_38[1]) ^ local_buf_38[3];
    if (data_len_38 > 3 && check_38 == 0x05) {
        size_t copy_len_38 = ((uint32_t)local_buf_38[4]*45 + local_buf_38[10])^local_buf_38[9];
        copy_len_38 = (copy_len_38 % 114) + 1;
        memcpy(buf_38, local_buf_38, copy_len_38);
    }

    free(local_buf_38);
    if (*x_38 > 0) {
        *x_38 -= 1;
        obf_func_40(x_38, data_38, data_len_38);
    }
}

void obf_func_106(int *x_106, unsigned char *data_106, size_t data_len_106) {
    char buf_106[114];
    unsigned char* local_buf_106 = (unsigned char*)malloc(514);
    if (!local_buf_106) return;
    for (int j = 0; j < 514; j++) {
        local_buf_106[j] = j < data_len_106 ? data_106[j] : 0;
    }

    unsigned char check_106 = (unsigned char)((uint32_t)local_buf_106[10] * 53 + local_buf_106[8]) ^ local_buf_106[5];
    if (data_len_106 > 10 && check_106 == 0xf2) {
        size_t copy_len_106 = ((uint32_t)local_buf_106[9]*45 + local_buf_106[4])^local_buf_106[13];
        copy_len_106 = (copy_len_106 % 106) + 9;
        memcpy(buf_106, local_buf_106, copy_len_106);
    }

    free(local_buf_106);
    if (*x_106 > 0) {
        *x_106 -= 1;
        obf_func_175(x_106, data_106, data_len_106);
    }
}

void obf_func_189(int *x_189, unsigned char *data_189, size_t data_len_189) {
    char buf_189[114];
    unsigned char* local_buf_189 = (unsigned char*)malloc(514);
    if (!local_buf_189) return;
    for (int j = 0; j < 514; j++) {
        local_buf_189[j] = j < data_len_189 ? data_189[j] : 0;
    }

    unsigned char check_189 = (unsigned char)((uint32_t)local_buf_189[8] * 31 + local_buf_189[4]) ^ local_buf_189[9];
    if (data_len_189 > 9 && check_189 == 0x09) {
        size_t copy_len_189 = ((uint32_t)local_buf_189[14]*51 + local_buf_189[5])^local_buf_189[2];
        copy_len_189 = (copy_len_189 % 102) + 13;
        memcpy(buf_189, local_buf_189, copy_len_189);
    }

    free(local_buf_189);
    if (*x_189 > 0) {
        *x_189 -= 1;
        obf_func_54(x_189, data_189, data_len_189);
    }
}

void obf_func_236(int *x_236, unsigned char *data_236, size_t data_len_236) {
    char buf_236[114];
    unsigned char* local_buf_236 = (unsigned char*)malloc(514);
    if (!local_buf_236) return;
    for (int j = 0; j < 514; j++) {
        local_buf_236[j] = j < data_len_236 ? data_236[j] : 0;
    }

    unsigned char check_236 = (unsigned char)((uint32_t)local_buf_236[1] * 37 + local_buf_236[11]) ^ local_buf_236[12];
    if (data_len_236 > 12 && check_236 == 0x70) {
        size_t copy_len_236 = ((uint32_t)local_buf_236[8]*51 + local_buf_236[14])^local_buf_236[15];
        copy_len_236 = (copy_len_236 % 105) + 10;
        memcpy(buf_236, local_buf_236, copy_len_236);
    }

    free(local_buf_236);
    if (*x_236 > 0) {
        *x_236 -= 1;
        obf_func_167(x_236, data_236, data_len_236);
    }
}

void obf_func_275(int *x_275, unsigned char *data_275, size_t data_len_275) {
    char buf_275[114];
    unsigned char* local_buf_275 = (unsigned char*)malloc(514);
    if (!local_buf_275) return;
    for (int j = 0; j < 514; j++) {
        local_buf_275[j] = j < data_len_275 ? data_275[j] : 0;
    }

    unsigned char check_275 = (unsigned char)((uint32_t)local_buf_275[2] * 59 + local_buf_275[7]) ^ local_buf_275[13];
    if (data_len_275 > 13 && check_275 == 0x64) {
        size_t copy_len_275 = ((uint32_t)local_buf_275[14]*55 + local_buf_275[3])^local_buf_275[4];
        copy_len_275 = (copy_len_275 % 113) + 2;
        memcpy(buf_275, local_buf_275, copy_len_275);
    }

    free(local_buf_275);
    if (*x_275 > 0) {
        *x_275 -= 1;
        obf_func_225(x_275, data_275, data_len_275);
    }
}

void obf_func_149(int *x_149, unsigned char *data_149, size_t data_len_149) {
    char buf_149[114];
    unsigned char* local_buf_149 = (unsigned char*)malloc(514);
    if (!local_buf_149) return;
    for (int j = 0; j < 514; j++) {
        local_buf_149[j] = j < data_len_149 ? data_149[j] : 0;
    }

    unsigned char check_149 = (unsigned char)((uint32_t)local_buf_149[15] * 53 + local_buf_149[7]) ^ local_buf_149[9];
    if (data_len_149 > 15 && check_149 == 0xf4) {
        size_t copy_len_149 = ((uint32_t)local_buf_149[3]*35 + local_buf_149[5])^local_buf_149[10];
        copy_len_149 = (copy_len_149 % 113) + 2;
        memcpy(buf_149, local_buf_149, copy_len_149);
    }

    free(local_buf_149);
    if (*x_149 > 0) {
        *x_149 -= 1;
        obf_func_269(x_149, data_149, data_len_149);
    }
}

void obf_func_112(int *x_112, unsigned char *data_112, size_t data_len_112) {
    char buf_112[114];
    unsigned char* local_buf_112 = (unsigned char*)malloc(514);
    if (!local_buf_112) return;
    for (int j = 0; j < 514; j++) {
        local_buf_112[j] = j < data_len_112 ? data_112[j] : 0;
    }

    unsigned char check_112 = (unsigned char)((uint32_t)local_buf_112[8] * 37 + local_buf_112[14]) ^ local_buf_112[5];
    if (data_len_112 > 14 && check_112 == 0xad) {
        size_t copy_len_112 = ((uint32_t)local_buf_112[10]*29 + local_buf_112[15])^local_buf_112[7];
        copy_len_112 = (copy_len_112 % 102) + 13;
        memcpy(buf_112, local_buf_112, copy_len_112);
    }

    free(local_buf_112);
    if (*x_112 > 0) {
        *x_112 -= 1;
        obf_func_38(x_112, data_112, data_len_112);
    }
}

void obf_func_79(int *x_79, unsigned char *data_79, size_t data_len_79) {
    char buf_79[114];
    unsigned char* local_buf_79 = (unsigned char*)malloc(514);
    if (!local_buf_79) return;
    for (int j = 0; j < 514; j++) {
        local_buf_79[j] = j < data_len_79 ? data_79[j] : 0;
    }

    unsigned char check_79 = (unsigned char)((uint32_t)local_buf_79[4] * 53 + local_buf_79[2]) ^ local_buf_79[12];
    if (data_len_79 > 12 && check_79 == 0xe3) {
        size_t copy_len_79 = ((uint32_t)local_buf_79[13]*39 + local_buf_79[7])^local_buf_79[5];
        copy_len_79 = (copy_len_79 % 100) + 15;
        memcpy(buf_79, local_buf_79, copy_len_79);
    }

    free(local_buf_79);
    if (*x_79 > 0) {
        *x_79 -= 1;
        obf_func_179(x_79, data_79, data_len_79);
    }
}

void obf_func_54(int *x_54, unsigned char *data_54, size_t data_len_54) {
    char buf_54[114];
    unsigned char* local_buf_54 = (unsigned char*)malloc(514);
    if (!local_buf_54) return;
    for (int j = 0; j < 514; j++) {
        local_buf_54[j] = j < data_len_54 ? data_54[j] : 0;
    }

    unsigned char check_54 = (unsigned char)((uint32_t)local_buf_54[13] * 41 + local_buf_54[4]) ^ local_buf_54[3];
    if (data_len_54 > 13 && check_54 == 0x8d) {
        size_t copy_len_54 = ((uint32_t)local_buf_54[5]*51 + local_buf_54[11])^local_buf_54[15];
        copy_len_54 = (copy_len_54 % 107) + 8;
        memcpy(buf_54, local_buf_54, copy_len_54);
    }

    free(local_buf_54);
    if (*x_54 > 0) {
        *x_54 -= 1;
        obf_func_100(x_54, data_54, data_len_54);
    }
}

void obf_func_190(int *x_190, unsigned char *data_190, size_t data_len_190) {
    char buf_190[114];
    unsigned char* local_buf_190 = (unsigned char*)malloc(514);
    if (!local_buf_190) return;
    for (int j = 0; j < 514; j++) {
        local_buf_190[j] = j < data_len_190 ? data_190[j] : 0;
    }

    unsigned char check_190 = (unsigned char)((uint32_t)local_buf_190[13] * 59 + local_buf_190[14]) ^ local_buf_190[4];
    if (data_len_190 > 14 && check_190 == 0xf8) {
        size_t copy_len_190 = ((uint32_t)local_buf_190[6]*33 + local_buf_190[3])^local_buf_190[10];
        copy_len_190 = (copy_len_190 % 115) + 0;
        memcpy(buf_190, local_buf_190, copy_len_190);
    }

    free(local_buf_190);
    if (*x_190 > 0) {
        *x_190 -= 1;
        obf_func_60(x_190, data_190, data_len_190);
    }
}

void obf_func_218(int *x_218, unsigned char *data_218, size_t data_len_218) {
    char buf_218[114];
    unsigned char* local_buf_218 = (unsigned char*)malloc(514);
    if (!local_buf_218) return;
    for (int j = 0; j < 514; j++) {
        local_buf_218[j] = j < data_len_218 ? data_218[j] : 0;
    }

    unsigned char check_218 = (unsigned char)((uint32_t)local_buf_218[2] * 41 + local_buf_218[6]) ^ local_buf_218[3];
    if (data_len_218 > 6 && check_218 == 0xc4) {
        size_t copy_len_218 = ((uint32_t)local_buf_218[5]*55 + local_buf_218[15])^local_buf_218[9];
        copy_len_218 = (copy_len_218 % 113) + 2;
        memcpy(buf_218, local_buf_218, copy_len_218);
    }

    free(local_buf_218);
    if (*x_218 > 0) {
        *x_218 -= 1;
        obf_func_293(x_218, data_218, data_len_218);
    }
}

void obf_func_271(int *x_271, unsigned char *data_271, size_t data_len_271) {
    char buf_271[114];
    unsigned char* local_buf_271 = (unsigned char*)malloc(514);
    if (!local_buf_271) return;
    for (int j = 0; j < 514; j++) {
        local_buf_271[j] = j < data_len_271 ? data_271[j] : 0;
    }

    unsigned char check_271 = (unsigned char)((uint32_t)local_buf_271[11] * 47 + local_buf_271[9]) ^ local_buf_271[15];
    if (data_len_271 > 15 && check_271 == 0xa9) {
        size_t copy_len_271 = ((uint32_t)local_buf_271[2]*45 + local_buf_271[12])^local_buf_271[5];
        copy_len_271 = (copy_len_271 % 107) + 8;
        memcpy(buf_271, local_buf_271, copy_len_271);
    }

    free(local_buf_271);
    if (*x_271 > 0) {
        *x_271 -= 1;
        obf_func_160(x_271, data_271, data_len_271);
    }
}

void obf_func_99(int *x_99, unsigned char *data_99, size_t data_len_99) {
    char buf_99[114];
    unsigned char* local_buf_99 = (unsigned char*)malloc(514);
    if (!local_buf_99) return;
    for (int j = 0; j < 514; j++) {
        local_buf_99[j] = j < data_len_99 ? data_99[j] : 0;
    }

    unsigned char check_99 = (unsigned char)((uint32_t)local_buf_99[4] * 59 + local_buf_99[14]) ^ local_buf_99[2];
    if (data_len_99 > 14 && check_99 == 0x39) {
        size_t copy_len_99 = ((uint32_t)local_buf_99[13]*57 + local_buf_99[6])^local_buf_99[15];
        copy_len_99 = (copy_len_99 % 114) + 1;
        memcpy(buf_99, local_buf_99, copy_len_99);
    }

    free(local_buf_99);
    if (*x_99 > 0) {
        *x_99 -= 1;
        obf_func_166(x_99, data_99, data_len_99);
    }
}

void obf_func_182(int *x_182, unsigned char *data_182, size_t data_len_182) {
    char buf_182[114];
    unsigned char* local_buf_182 = (unsigned char*)malloc(514);
    if (!local_buf_182) return;
    for (int j = 0; j < 514; j++) {
        local_buf_182[j] = j < data_len_182 ? data_182[j] : 0;
    }

    unsigned char check_182 = (unsigned char)((uint32_t)local_buf_182[12] * 53 + local_buf_182[15]) ^ local_buf_182[14];
    if (data_len_182 > 15 && check_182 == 0x04) {
        size_t copy_len_182 = ((uint32_t)local_buf_182[8]*45 + local_buf_182[6])^local_buf_182[11];
        copy_len_182 = (copy_len_182 % 114) + 1;
        memcpy(buf_182, local_buf_182, copy_len_182);
    }

    free(local_buf_182);
    if (*x_182 > 0) {
        *x_182 -= 1;
        obf_func_194(x_182, data_182, data_len_182);
    }
}

void obf_func_196(int *x_196, unsigned char *data_196, size_t data_len_196) {
    char buf_196[114];
    unsigned char* local_buf_196 = (unsigned char*)malloc(514);
    if (!local_buf_196) return;
    for (int j = 0; j < 514; j++) {
        local_buf_196[j] = j < data_len_196 ? data_196[j] : 0;
    }

    unsigned char check_196 = (unsigned char)((uint32_t)local_buf_196[5] * 61 + local_buf_196[7]) ^ local_buf_196[4];
    if (data_len_196 > 7 && check_196 == 0xc5) {
        size_t copy_len_196 = ((uint32_t)local_buf_196[12]*45 + local_buf_196[9])^local_buf_196[2];
        copy_len_196 = (copy_len_196 % 114) + 1;
        memcpy(buf_196, local_buf_196, copy_len_196);
    }

    free(local_buf_196);
    if (*x_196 > 0) {
        *x_196 -= 1;
        obf_func_199(x_196, data_196, data_len_196);
    }
}

void obf_func_21(int *x_21, unsigned char *data_21, size_t data_len_21) {
    char buf_21[114];
    unsigned char* local_buf_21 = (unsigned char*)malloc(514);
    if (!local_buf_21) return;
    for (int j = 0; j < 514; j++) {
        local_buf_21[j] = j < data_len_21 ? data_21[j] : 0;
    }

    unsigned char check_21 = (unsigned char)((uint32_t)local_buf_21[9] * 37 + local_buf_21[11]) ^ local_buf_21[12];
    if (data_len_21 > 12 && check_21 == 0xca) {
        size_t copy_len_21 = ((uint32_t)local_buf_21[10]*33 + local_buf_21[1])^local_buf_21[15];
        copy_len_21 = (copy_len_21 % 111) + 4;
        memcpy(buf_21, local_buf_21, copy_len_21);
    }

    free(local_buf_21);
    if (*x_21 > 0) {
        *x_21 -= 1;
        obf_func_143(x_21, data_21, data_len_21);
    }
}

void obf_func_169(int *x_169, unsigned char *data_169, size_t data_len_169) {
    char buf_169[114];
    unsigned char* local_buf_169 = (unsigned char*)malloc(514);
    if (!local_buf_169) return;
    for (int j = 0; j < 514; j++) {
        local_buf_169[j] = j < data_len_169 ? data_169[j] : 0;
    }

    unsigned char check_169 = (unsigned char)((uint32_t)local_buf_169[9] * 31 + local_buf_169[1]) ^ local_buf_169[7];
    if (data_len_169 > 9 && check_169 == 0xee) {
        size_t copy_len_169 = ((uint32_t)local_buf_169[10]*55 + local_buf_169[14])^local_buf_169[11];
        copy_len_169 = (copy_len_169 % 109) + 6;
        memcpy(buf_169, local_buf_169, copy_len_169);
    }

    free(local_buf_169);
    if (*x_169 > 0) {
        *x_169 -= 1;
        obf_func_36(x_169, data_169, data_len_169);
    }
}

void obf_func_122(int *x_122, unsigned char *data_122, size_t data_len_122) {
    char buf_122[114];
    unsigned char* local_buf_122 = (unsigned char*)malloc(514);
    if (!local_buf_122) return;
    for (int j = 0; j < 514; j++) {
        local_buf_122[j] = j < data_len_122 ? data_122[j] : 0;
    }

    unsigned char check_122 = (unsigned char)((uint32_t)local_buf_122[2] * 43 + local_buf_122[10]) ^ local_buf_122[4];
    if (data_len_122 > 10 && check_122 == 0x75) {
        size_t copy_len_122 = ((uint32_t)local_buf_122[12]*35 + local_buf_122[8])^local_buf_122[14];
        copy_len_122 = (copy_len_122 % 101) + 14;
        memcpy(buf_122, local_buf_122, copy_len_122);
    }

    free(local_buf_122);
    if (*x_122 > 0) {
        *x_122 -= 1;
        obf_func_197(x_122, data_122, data_len_122);
    }
}

void obf_func_297(int *x_297, unsigned char *data_297, size_t data_len_297) {
    char buf_297[114];
    unsigned char* local_buf_297 = (unsigned char*)malloc(514);
    if (!local_buf_297) return;
    for (int j = 0; j < 514; j++) {
        local_buf_297[j] = j < data_len_297 ? data_297[j] : 0;
    }

    unsigned char check_297 = (unsigned char)((uint32_t)local_buf_297[5] * 61 + local_buf_297[4]) ^ local_buf_297[9];
    if (data_len_297 > 9 && check_297 == 0x3d) {
        size_t copy_len_297 = ((uint32_t)local_buf_297[14]*51 + local_buf_297[3])^local_buf_297[6];
        copy_len_297 = (copy_len_297 % 115) + 0;
        memcpy(buf_297, local_buf_297, copy_len_297);
    }

    free(local_buf_297);
    if (*x_297 > 0) {
        *x_297 -= 1;
        obf_func_267(x_297, data_297, data_len_297);
    }
}

void obf_func_136(int *x_136, unsigned char *data_136, size_t data_len_136) {
    char buf_136[114];
    unsigned char* local_buf_136 = (unsigned char*)malloc(514);
    if (!local_buf_136) return;
    for (int j = 0; j < 514; j++) {
        local_buf_136[j] = j < data_len_136 ? data_136[j] : 0;
    }

    unsigned char check_136 = (unsigned char)((uint32_t)local_buf_136[2] * 47 + local_buf_136[8]) ^ local_buf_136[14];
    if (data_len_136 > 14 && check_136 == 0x48) {
        size_t copy_len_136 = ((uint32_t)local_buf_136[13]*51 + local_buf_136[7])^local_buf_136[9];
        copy_len_136 = (copy_len_136 % 101) + 14;
        memcpy(buf_136, local_buf_136, copy_len_136);
    }

    free(local_buf_136);
    if (*x_136 > 0) {
        *x_136 -= 1;
        obf_func_298(x_136, data_136, data_len_136);
    }
}

void obf_func_14(int *x_14, unsigned char *data_14, size_t data_len_14) {
    char buf_14[114];
    unsigned char* local_buf_14 = (unsigned char*)malloc(514);
    if (!local_buf_14) return;
    for (int j = 0; j < 514; j++) {
        local_buf_14[j] = j < data_len_14 ? data_14[j] : 0;
    }

    unsigned char check_14 = (unsigned char)((uint32_t)local_buf_14[1] * 47 + local_buf_14[11]) ^ local_buf_14[4];
    if (data_len_14 > 11 && check_14 == 0x14) {
        size_t copy_len_14 = ((uint32_t)local_buf_14[13]*45 + local_buf_14[9])^local_buf_14[12];
        copy_len_14 = (copy_len_14 % 100) + 15;
        memcpy(buf_14, local_buf_14, copy_len_14);
    }

    free(local_buf_14);
    if (*x_14 > 0) {
        *x_14 -= 1;
        obf_func_181(x_14, data_14, data_len_14);
    }
}

void obf_func_31(int *x_31, unsigned char *data_31, size_t data_len_31) {
    char buf_31[114];
    unsigned char* local_buf_31 = (unsigned char*)malloc(514);
    if (!local_buf_31) return;
    for (int j = 0; j < 514; j++) {
        local_buf_31[j] = j < data_len_31 ? data_31[j] : 0;
    }

    unsigned char check_31 = (unsigned char)((uint32_t)local_buf_31[14] * 53 + local_buf_31[4]) ^ local_buf_31[13];
    if (data_len_31 > 14 && check_31 == 0xf7) {
        size_t copy_len_31 = ((uint32_t)local_buf_31[7]*51 + local_buf_31[6])^local_buf_31[3];
        copy_len_31 = (copy_len_31 % 111) + 4;
        memcpy(buf_31, local_buf_31, copy_len_31);
    }

    free(local_buf_31);
    if (*x_31 > 0) {
        *x_31 -= 1;
        obf_func_72(x_31, data_31, data_len_31);
    }
}

void obf_func_141(int *x_141, unsigned char *data_141, size_t data_len_141) {
    char buf_141[114];
    unsigned char* local_buf_141 = (unsigned char*)malloc(514);
    if (!local_buf_141) return;
    for (int j = 0; j < 514; j++) {
        local_buf_141[j] = j < data_len_141 ? data_141[j] : 0;
    }

    unsigned char check_141 = (unsigned char)((uint32_t)local_buf_141[6] * 31 + local_buf_141[3]) ^ local_buf_141[7];
    if (data_len_141 > 7 && check_141 == 0x4b) {
        size_t copy_len_141 = ((uint32_t)local_buf_141[14]*35 + local_buf_141[12])^local_buf_141[1];
        copy_len_141 = (copy_len_141 % 101) + 14;
        memcpy(buf_141, local_buf_141, copy_len_141);
    }

    free(local_buf_141);
    if (*x_141 > 0) {
        *x_141 -= 1;
        obf_func_110(x_141, data_141, data_len_141);
    }
}

void obf_func_67(int *x_67, unsigned char *data_67, size_t data_len_67) {
    char buf_67[114];
    unsigned char* local_buf_67 = (unsigned char*)malloc(514);
    if (!local_buf_67) return;
    for (int j = 0; j < 514; j++) {
        local_buf_67[j] = j < data_len_67 ? data_67[j] : 0;
    }

    unsigned char check_67 = (unsigned char)((uint32_t)local_buf_67[1] * 31 + local_buf_67[11]) ^ local_buf_67[12];
    if (data_len_67 > 12 && check_67 == 0x92) {
        size_t copy_len_67 = ((uint32_t)local_buf_67[9]*57 + local_buf_67[14])^local_buf_67[8];
        copy_len_67 = (copy_len_67 % 110) + 5;
        memcpy(buf_67, local_buf_67, copy_len_67);
    }

    free(local_buf_67);
    if (*x_67 > 0) {
        *x_67 -= 1;
        obf_func_268(x_67, data_67, data_len_67);
    }
}

void obf_func_204(int *x_204, unsigned char *data_204, size_t data_len_204) {
    char buf_204[114];
    unsigned char* local_buf_204 = (unsigned char*)malloc(514);
    if (!local_buf_204) return;
    for (int j = 0; j < 514; j++) {
        local_buf_204[j] = j < data_len_204 ? data_204[j] : 0;
    }

    unsigned char check_204 = (unsigned char)((uint32_t)local_buf_204[2] * 47 + local_buf_204[6]) ^ local_buf_204[11];
    if (data_len_204 > 11 && check_204 == 0x1c) {
        size_t copy_len_204 = ((uint32_t)local_buf_204[7]*45 + local_buf_204[12])^local_buf_204[14];
        copy_len_204 = (copy_len_204 % 106) + 9;
        memcpy(buf_204, local_buf_204, copy_len_204);
    }

    free(local_buf_204);
    if (*x_204 > 0) {
        *x_204 -= 1;
        obf_func_270(x_204, data_204, data_len_204);
    }
}

void obf_func_104(int *x_104, unsigned char *data_104, size_t data_len_104) {
    char buf_104[114];
    unsigned char* local_buf_104 = (unsigned char*)malloc(514);
    if (!local_buf_104) return;
    for (int j = 0; j < 514; j++) {
        local_buf_104[j] = j < data_len_104 ? data_104[j] : 0;
    }

    unsigned char check_104 = (unsigned char)((uint32_t)local_buf_104[2] * 47 + local_buf_104[9]) ^ local_buf_104[11];
    if (data_len_104 > 11 && check_104 == 0x0c) {
        size_t copy_len_104 = ((uint32_t)local_buf_104[14]*39 + local_buf_104[5])^local_buf_104[1];
        copy_len_104 = (copy_len_104 % 109) + 6;
        memcpy(buf_104, local_buf_104, copy_len_104);
    }

    free(local_buf_104);
    if (*x_104 > 0) {
        *x_104 -= 1;
        obf_func_64(x_104, data_104, data_len_104);
    }
}

void obf_func_78(int *x_78, unsigned char *data_78, size_t data_len_78) {
    char buf_78[114];
    unsigned char* local_buf_78 = (unsigned char*)malloc(514);
    if (!local_buf_78) return;
    for (int j = 0; j < 514; j++) {
        local_buf_78[j] = j < data_len_78 ? data_78[j] : 0;
    }

    unsigned char check_78 = (unsigned char)((uint32_t)local_buf_78[5] * 37 + local_buf_78[2]) ^ local_buf_78[12];
    if (data_len_78 > 12 && check_78 == 0xed) {
        size_t copy_len_78 = ((uint32_t)local_buf_78[6]*29 + local_buf_78[1])^local_buf_78[9];
        copy_len_78 = (copy_len_78 % 109) + 6;
        memcpy(buf_78, local_buf_78, copy_len_78);
    }

    free(local_buf_78);
    if (*x_78 > 0) {
        *x_78 -= 1;
        obf_func_262(x_78, data_78, data_len_78);
    }
}

void obf_func_118(int *x_118, unsigned char *data_118, size_t data_len_118) {
    char buf_118[114];
    unsigned char* local_buf_118 = (unsigned char*)malloc(514);
    if (!local_buf_118) return;
    for (int j = 0; j < 514; j++) {
        local_buf_118[j] = j < data_len_118 ? data_118[j] : 0;
    }

    unsigned char check_118 = (unsigned char)((uint32_t)local_buf_118[4] * 53 + local_buf_118[13]) ^ local_buf_118[10];
    if (data_len_118 > 13 && check_118 == 0x19) {
        size_t copy_len_118 = ((uint32_t)local_buf_118[6]*35 + local_buf_118[14])^local_buf_118[9];
        copy_len_118 = (copy_len_118 % 106) + 9;
        memcpy(buf_118, local_buf_118, copy_len_118);
    }

    free(local_buf_118);
    if (*x_118 > 0) {
        *x_118 -= 1;
        obf_func_96(x_118, data_118, data_len_118);
    }
}

void obf_func_245(int *x_245, unsigned char *data_245, size_t data_len_245) {
    char buf_245[114];
    unsigned char* local_buf_245 = (unsigned char*)malloc(514);
    if (!local_buf_245) return;
    for (int j = 0; j < 514; j++) {
        local_buf_245[j] = j < data_len_245 ? data_245[j] : 0;
    }

    unsigned char check_245 = (unsigned char)((uint32_t)local_buf_245[10] * 53 + local_buf_245[15]) ^ local_buf_245[4];
    if (data_len_245 > 15 && check_245 == 0x52) {
        size_t copy_len_245 = ((uint32_t)local_buf_245[7]*45 + local_buf_245[2])^local_buf_245[6];
        copy_len_245 = (copy_len_245 % 101) + 14;
        memcpy(buf_245, local_buf_245, copy_len_245);
    }

    free(local_buf_245);
    if (*x_245 > 0) {
        *x_245 -= 1;
        obf_func_233(x_245, data_245, data_len_245);
    }
}

void obf_func_127(int *x_127, unsigned char *data_127, size_t data_len_127) {
    char buf_127[114];
    unsigned char* local_buf_127 = (unsigned char*)malloc(514);
    if (!local_buf_127) return;
    for (int j = 0; j < 514; j++) {
        local_buf_127[j] = j < data_len_127 ? data_127[j] : 0;
    }

    unsigned char check_127 = (unsigned char)((uint32_t)local_buf_127[6] * 43 + local_buf_127[11]) ^ local_buf_127[10];
    if (data_len_127 > 11 && check_127 == 0xac) {
        size_t copy_len_127 = ((uint32_t)local_buf_127[13]*29 + local_buf_127[2])^local_buf_127[15];
        copy_len_127 = (copy_len_127 % 106) + 9;
        memcpy(buf_127, local_buf_127, copy_len_127);
    }

    free(local_buf_127);
    if (*x_127 > 0) {
        *x_127 -= 1;
        obf_func_250(x_127, data_127, data_len_127);
    }
}

void obf_func_299(int *x_299, unsigned char *data_299, size_t data_len_299) {
    char buf_299[114];
    unsigned char* local_buf_299 = (unsigned char*)malloc(514);
    if (!local_buf_299) return;
    for (int j = 0; j < 514; j++) {
        local_buf_299[j] = j < data_len_299 ? data_299[j] : 0;
    }

    unsigned char check_299 = (unsigned char)((uint32_t)local_buf_299[12] * 31 + local_buf_299[14]) ^ local_buf_299[1];
    if (data_len_299 > 14 && check_299 == 0xaf) {
        size_t copy_len_299 = ((uint32_t)local_buf_299[7]*33 + local_buf_299[9])^local_buf_299[13];
        copy_len_299 = (copy_len_299 % 109) + 6;
        memcpy(buf_299, local_buf_299, copy_len_299);
    }

    free(local_buf_299);
    if (*x_299 > 0) {
        *x_299 -= 1;
        obf_func_31(x_299, data_299, data_len_299);
    }
}

void obf_func_249(int *x_249, unsigned char *data_249, size_t data_len_249) {
    char buf_249[114];
    unsigned char* local_buf_249 = (unsigned char*)malloc(514);
    if (!local_buf_249) return;
    for (int j = 0; j < 514; j++) {
        local_buf_249[j] = j < data_len_249 ? data_249[j] : 0;
    }

    unsigned char check_249 = (unsigned char)((uint32_t)local_buf_249[5] * 47 + local_buf_249[2]) ^ local_buf_249[14];
    if (data_len_249 > 14 && check_249 == 0xda) {
        size_t copy_len_249 = ((uint32_t)local_buf_249[15]*35 + local_buf_249[12])^local_buf_249[8];
        copy_len_249 = (copy_len_249 % 107) + 8;
        memcpy(buf_249, local_buf_249, copy_len_249);
    }

    free(local_buf_249);
    if (*x_249 > 0) {
        *x_249 -= 1;
        obf_func_85(x_249, data_249, data_len_249);
    }
}

void obf_func_46(int *x_46, unsigned char *data_46, size_t data_len_46) {
    char buf_46[114];
    unsigned char* local_buf_46 = (unsigned char*)malloc(514);
    if (!local_buf_46) return;
    for (int j = 0; j < 514; j++) {
        local_buf_46[j] = j < data_len_46 ? data_46[j] : 0;
    }

    unsigned char check_46 = (unsigned char)((uint32_t)local_buf_46[6] * 41 + local_buf_46[4]) ^ local_buf_46[7];
    if (data_len_46 > 7 && check_46 == 0x7b) {
        size_t copy_len_46 = ((uint32_t)local_buf_46[1]*39 + local_buf_46[8])^local_buf_46[5];
        copy_len_46 = (copy_len_46 % 101) + 14;
        memcpy(buf_46, local_buf_46, copy_len_46);
    }

    free(local_buf_46);
    if (*x_46 > 0) {
        *x_46 -= 1;
        obf_func_232(x_46, data_46, data_len_46);
    }
}

void obf_func_29(int *x_29, unsigned char *data_29, size_t data_len_29) {
    char buf_29[114];
    unsigned char* local_buf_29 = (unsigned char*)malloc(514);
    if (!local_buf_29) return;
    for (int j = 0; j < 514; j++) {
        local_buf_29[j] = j < data_len_29 ? data_29[j] : 0;
    }

    unsigned char check_29 = (unsigned char)((uint32_t)local_buf_29[1] * 59 + local_buf_29[14]) ^ local_buf_29[5];
    if (data_len_29 > 14 && check_29 == 0xb4) {
        size_t copy_len_29 = ((uint32_t)local_buf_29[7]*57 + local_buf_29[15])^local_buf_29[2];
        copy_len_29 = (copy_len_29 % 114) + 1;
        memcpy(buf_29, local_buf_29, copy_len_29);
    }

    free(local_buf_29);
    if (*x_29 > 0) {
        *x_29 -= 1;
        obf_func_120(x_29, data_29, data_len_29);
    }
}

void obf_func_185(int *x_185, unsigned char *data_185, size_t data_len_185) {
    char buf_185[114];
    unsigned char* local_buf_185 = (unsigned char*)malloc(514);
    if (!local_buf_185) return;
    for (int j = 0; j < 514; j++) {
        local_buf_185[j] = j < data_len_185 ? data_185[j] : 0;
    }

    unsigned char check_185 = (unsigned char)((uint32_t)local_buf_185[9] * 59 + local_buf_185[10]) ^ local_buf_185[4];
    if (data_len_185 > 10 && check_185 == 0xc8) {
        size_t copy_len_185 = ((uint32_t)local_buf_185[5]*33 + local_buf_185[2])^local_buf_185[13];
        copy_len_185 = (copy_len_185 % 100) + 15;
        memcpy(buf_185, local_buf_185, copy_len_185);
    }

    free(local_buf_185);
    if (*x_185 > 0) {
        *x_185 -= 1;
        obf_func_256(x_185, data_185, data_len_185);
    }
}

void obf_func_260(int *x_260, unsigned char *data_260, size_t data_len_260) {
    char buf_260[114];
    unsigned char* local_buf_260 = (unsigned char*)malloc(514);
    if (!local_buf_260) return;
    for (int j = 0; j < 514; j++) {
        local_buf_260[j] = j < data_len_260 ? data_260[j] : 0;
    }

    unsigned char check_260 = (unsigned char)((uint32_t)local_buf_260[5] * 31 + local_buf_260[14]) ^ local_buf_260[15];
    if (data_len_260 > 15 && check_260 == 0xe6) {
        size_t copy_len_260 = ((uint32_t)local_buf_260[10]*39 + local_buf_260[8])^local_buf_260[13];
        copy_len_260 = (copy_len_260 % 106) + 9;
        memcpy(buf_260, local_buf_260, copy_len_260);
    }

    free(local_buf_260);
    if (*x_260 > 0) {
        *x_260 -= 1;
        obf_func_224(x_260, data_260, data_len_260);
    }
}

void obf_func_278(int *x_278, unsigned char *data_278, size_t data_len_278) {
    char buf_278[114];
    unsigned char* local_buf_278 = (unsigned char*)malloc(514);
    if (!local_buf_278) return;
    for (int j = 0; j < 514; j++) {
        local_buf_278[j] = j < data_len_278 ? data_278[j] : 0;
    }

    unsigned char check_278 = (unsigned char)((uint32_t)local_buf_278[1] * 41 + local_buf_278[14]) ^ local_buf_278[2];
    if (data_len_278 > 14 && check_278 == 0xda) {
        size_t copy_len_278 = ((uint32_t)local_buf_278[4]*57 + local_buf_278[9])^local_buf_278[5];
        copy_len_278 = (copy_len_278 % 115) + 0;
        memcpy(buf_278, local_buf_278, copy_len_278);
    }

    free(local_buf_278);
    if (*x_278 > 0) {
        *x_278 -= 1;
        obf_func_261(x_278, data_278, data_len_278);
    }
}

void obf_func_167(int *x_167, unsigned char *data_167, size_t data_len_167) {
    char buf_167[114];
    unsigned char* local_buf_167 = (unsigned char*)malloc(514);
    if (!local_buf_167) return;
    for (int j = 0; j < 514; j++) {
        local_buf_167[j] = j < data_len_167 ? data_167[j] : 0;
    }

    unsigned char check_167 = (unsigned char)((uint32_t)local_buf_167[5] * 61 + local_buf_167[2]) ^ local_buf_167[6];
    if (data_len_167 > 6 && check_167 == 0x24) {
        size_t copy_len_167 = ((uint32_t)local_buf_167[3]*29 + local_buf_167[8])^local_buf_167[9];
        copy_len_167 = (copy_len_167 % 100) + 15;
        memcpy(buf_167, local_buf_167, copy_len_167);
    }

    free(local_buf_167);
    if (*x_167 > 0) {
        *x_167 -= 1;
        obf_func_214(x_167, data_167, data_len_167);
    }
}

void obf_func_156(int *x_156, unsigned char *data_156, size_t data_len_156) {
    char buf_156[114];
    unsigned char* local_buf_156 = (unsigned char*)malloc(514);
    if (!local_buf_156) return;
    for (int j = 0; j < 514; j++) {
        local_buf_156[j] = j < data_len_156 ? data_156[j] : 0;
    }

    unsigned char check_156 = (unsigned char)((uint32_t)local_buf_156[15] * 61 + local_buf_156[3]) ^ local_buf_156[4];
    if (data_len_156 > 15 && check_156 == 0x3c) {
        size_t copy_len_156 = ((uint32_t)local_buf_156[2]*29 + local_buf_156[7])^local_buf_156[6];
        copy_len_156 = (copy_len_156 % 108) + 7;
        memcpy(buf_156, local_buf_156, copy_len_156);
    }

    free(local_buf_156);
    if (*x_156 > 0) {
        *x_156 -= 1;
        obf_func_88(x_156, data_156, data_len_156);
    }
}

void obf_func_259(int *x_259, unsigned char *data_259, size_t data_len_259) {
    char buf_259[114];
    unsigned char* local_buf_259 = (unsigned char*)malloc(514);
    if (!local_buf_259) return;
    for (int j = 0; j < 514; j++) {
        local_buf_259[j] = j < data_len_259 ? data_259[j] : 0;
    }

    unsigned char check_259 = (unsigned char)((uint32_t)local_buf_259[9] * 53 + local_buf_259[3]) ^ local_buf_259[12];
    if (data_len_259 > 12 && check_259 == 0x77) {
        size_t copy_len_259 = ((uint32_t)local_buf_259[14]*55 + local_buf_259[6])^local_buf_259[15];
        copy_len_259 = (copy_len_259 % 110) + 5;
        memcpy(buf_259, local_buf_259, copy_len_259);
    }

    free(local_buf_259);
    if (*x_259 > 0) {
        *x_259 -= 1;
        obf_func_142(x_259, data_259, data_len_259);
    }
}

void obf_func_73(int *x_73, unsigned char *data_73, size_t data_len_73) {
    char buf_73[114];
    unsigned char* local_buf_73 = (unsigned char*)malloc(514);
    if (!local_buf_73) return;
    for (int j = 0; j < 514; j++) {
        local_buf_73[j] = j < data_len_73 ? data_73[j] : 0;
    }

    unsigned char check_73 = (unsigned char)((uint32_t)local_buf_73[9] * 59 + local_buf_73[4]) ^ local_buf_73[6];
    if (data_len_73 > 9 && check_73 == 0x52) {
        size_t copy_len_73 = ((uint32_t)local_buf_73[11]*33 + local_buf_73[14])^local_buf_73[12];
        copy_len_73 = (copy_len_73 % 111) + 4;
        memcpy(buf_73, local_buf_73, copy_len_73);
    }

    free(local_buf_73);
    if (*x_73 > 0) {
        *x_73 -= 1;
        obf_func_117(x_73, data_73, data_len_73);
    }
}

void obf_func_2(int *x_2, unsigned char *data_2, size_t data_len_2) {
    char buf_2[114];
    unsigned char* local_buf_2 = (unsigned char*)malloc(514);
    if (!local_buf_2) return;
    for (int j = 0; j < 514; j++) {
        local_buf_2[j] = j < data_len_2 ? data_2[j] : 0;
    }

    unsigned char check_2 = (unsigned char)((uint32_t)local_buf_2[4] * 61 + local_buf_2[8]) ^ local_buf_2[2];
    if (data_len_2 > 8 && check_2 == 0xab) {
        size_t copy_len_2 = ((uint32_t)local_buf_2[6]*51 + local_buf_2[3])^local_buf_2[13];
        copy_len_2 = (copy_len_2 % 107) + 8;
        memcpy(buf_2, local_buf_2, copy_len_2);
    }

    free(local_buf_2);
    if (*x_2 > 0) {
        *x_2 -= 1;
        obf_func_289(x_2, data_2, data_len_2);
    }
}

void obf_func_56(int *x_56, unsigned char *data_56, size_t data_len_56) {
    char buf_56[114];
    unsigned char* local_buf_56 = (unsigned char*)malloc(514);
    if (!local_buf_56) return;
    for (int j = 0; j < 514; j++) {
        local_buf_56[j] = j < data_len_56 ? data_56[j] : 0;
    }

    unsigned char check_56 = (unsigned char)((uint32_t)local_buf_56[3] * 47 + local_buf_56[15]) ^ local_buf_56[6];
    if (data_len_56 > 15 && check_56 == 0xb8) {
        size_t copy_len_56 = ((uint32_t)local_buf_56[14]*35 + local_buf_56[11])^local_buf_56[5];
        copy_len_56 = (copy_len_56 % 113) + 2;
        memcpy(buf_56, local_buf_56, copy_len_56);
    }

    free(local_buf_56);
    if (*x_56 > 0) {
        *x_56 -= 1;
        obf_func_201(x_56, data_56, data_len_56);
    }
}

void obf_func_192(int *x_192, unsigned char *data_192, size_t data_len_192) {
    char buf_192[114];
    unsigned char* local_buf_192 = (unsigned char*)malloc(514);
    if (!local_buf_192) return;
    for (int j = 0; j < 514; j++) {
        local_buf_192[j] = j < data_len_192 ? data_192[j] : 0;
    }

    unsigned char check_192 = (unsigned char)((uint32_t)local_buf_192[6] * 61 + local_buf_192[5]) ^ local_buf_192[12];
    if (data_len_192 > 12 && check_192 == 0x4e) {
        size_t copy_len_192 = ((uint32_t)local_buf_192[1]*51 + local_buf_192[10])^local_buf_192[14];
        copy_len_192 = (copy_len_192 % 111) + 4;
        memcpy(buf_192, local_buf_192, copy_len_192);
    }

    free(local_buf_192);
    if (*x_192 > 0) {
        *x_192 -= 1;
        obf_func_290(x_192, data_192, data_len_192);
    }
}

void obf_func_116(int *x_116, unsigned char *data_116, size_t data_len_116) {
    char buf_116[114];
    unsigned char* local_buf_116 = (unsigned char*)malloc(514);
    if (!local_buf_116) return;
    for (int j = 0; j < 514; j++) {
        local_buf_116[j] = j < data_len_116 ? data_116[j] : 0;
    }

    unsigned char check_116 = (unsigned char)((uint32_t)local_buf_116[6] * 37 + local_buf_116[15]) ^ local_buf_116[2];
    if (data_len_116 > 15 && check_116 == 0xf4) {
        size_t copy_len_116 = ((uint32_t)local_buf_116[4]*35 + local_buf_116[7])^local_buf_116[5];
        copy_len_116 = (copy_len_116 % 112) + 3;
        memcpy(buf_116, local_buf_116, copy_len_116);
    }

    free(local_buf_116);
    if (*x_116 > 0) {
        *x_116 -= 1;
        obf_func_15(x_116, data_116, data_len_116);
    }
}

void obf_func_35(int *x_35, unsigned char *data_35, size_t data_len_35) {
    char buf_35[114];
    unsigned char* local_buf_35 = (unsigned char*)malloc(514);
    if (!local_buf_35) return;
    for (int j = 0; j < 514; j++) {
        local_buf_35[j] = j < data_len_35 ? data_35[j] : 0;
    }

    unsigned char check_35 = (unsigned char)((uint32_t)local_buf_35[3] * 61 + local_buf_35[2]) ^ local_buf_35[8];
    if (data_len_35 > 8 && check_35 == 0xb8) {
        size_t copy_len_35 = ((uint32_t)local_buf_35[5]*55 + local_buf_35[14])^local_buf_35[7];
        copy_len_35 = (copy_len_35 % 114) + 1;
        memcpy(buf_35, local_buf_35, copy_len_35);
    }

    free(local_buf_35);
    if (*x_35 > 0) {
        *x_35 -= 1;
        obf_func_116(x_35, data_35, data_len_35);
    }
}

void obf_func_197(int *x_197, unsigned char *data_197, size_t data_len_197) {
    char buf_197[114];
    unsigned char* local_buf_197 = (unsigned char*)malloc(514);
    if (!local_buf_197) return;
    for (int j = 0; j < 514; j++) {
        local_buf_197[j] = j < data_len_197 ? data_197[j] : 0;
    }

    unsigned char check_197 = (unsigned char)((uint32_t)local_buf_197[15] * 61 + local_buf_197[7]) ^ local_buf_197[14];
    if (data_len_197 > 15 && check_197 == 0xff) {
        size_t copy_len_197 = ((uint32_t)local_buf_197[9]*35 + local_buf_197[3])^local_buf_197[8];
        copy_len_197 = (copy_len_197 % 108) + 7;
        memcpy(buf_197, local_buf_197, copy_len_197);
    }

    free(local_buf_197);
    if (*x_197 > 0) {
        *x_197 -= 1;
        obf_func_18(x_197, data_197, data_len_197);
    }
}

void obf_func_241(int *x_241, unsigned char *data_241, size_t data_len_241) {
    char buf_241[114];
    unsigned char* local_buf_241 = (unsigned char*)malloc(514);
    if (!local_buf_241) return;
    for (int j = 0; j < 514; j++) {
        local_buf_241[j] = j < data_len_241 ? data_241[j] : 0;
    }

    unsigned char check_241 = (unsigned char)((uint32_t)local_buf_241[8] * 43 + local_buf_241[7]) ^ local_buf_241[4];
    if (data_len_241 > 8 && check_241 == 0xc1) {
        size_t copy_len_241 = ((uint32_t)local_buf_241[10]*39 + local_buf_241[11])^local_buf_241[13];
        copy_len_241 = (copy_len_241 % 107) + 8;
        memcpy(buf_241, local_buf_241, copy_len_241);
    }

    free(local_buf_241);
    if (*x_241 > 0) {
        *x_241 -= 1;
        obf_func_279(x_241, data_241, data_len_241);
    }
}

void obf_func_183(int *x_183, unsigned char *data_183, size_t data_len_183) {
    char buf_183[114];
    unsigned char* local_buf_183 = (unsigned char*)malloc(514);
    if (!local_buf_183) return;
    for (int j = 0; j < 514; j++) {
        local_buf_183[j] = j < data_len_183 ? data_183[j] : 0;
    }

    unsigned char check_183 = (unsigned char)((uint32_t)local_buf_183[4] * 61 + local_buf_183[15]) ^ local_buf_183[8];
    if (data_len_183 > 15 && check_183 == 0xc5) {
        size_t copy_len_183 = ((uint32_t)local_buf_183[5]*29 + local_buf_183[7])^local_buf_183[2];
        copy_len_183 = (copy_len_183 % 101) + 14;
        memcpy(buf_183, local_buf_183, copy_len_183);
    }

    free(local_buf_183);
    if (*x_183 > 0) {
        *x_183 -= 1;
        obf_func_76(x_183, data_183, data_len_183);
    }
}

void obf_func_142(int *x_142, unsigned char *data_142, size_t data_len_142) {
    char buf_142[114];
    unsigned char* local_buf_142 = (unsigned char*)malloc(514);
    if (!local_buf_142) return;
    for (int j = 0; j < 514; j++) {
        local_buf_142[j] = j < data_len_142 ? data_142[j] : 0;
    }

    unsigned char check_142 = (unsigned char)((uint32_t)local_buf_142[10] * 59 + local_buf_142[15]) ^ local_buf_142[2];
    if (data_len_142 > 15 && check_142 == 0xbe) {
        size_t copy_len_142 = ((uint32_t)local_buf_142[3]*33 + local_buf_142[4])^local_buf_142[14];
        copy_len_142 = (copy_len_142 % 114) + 1;
        memcpy(buf_142, local_buf_142, copy_len_142);
    }

    free(local_buf_142);
    if (*x_142 > 0) {
        *x_142 -= 1;
        obf_func_299(x_142, data_142, data_len_142);
    }
}

void obf_func_103(int *x_103, unsigned char *data_103, size_t data_len_103) {
    char buf_103[114];
    unsigned char* local_buf_103 = (unsigned char*)malloc(514);
    if (!local_buf_103) return;
    for (int j = 0; j < 514; j++) {
        local_buf_103[j] = j < data_len_103 ? data_103[j] : 0;
    }

    unsigned char check_103 = (unsigned char)((uint32_t)local_buf_103[13] * 37 + local_buf_103[6]) ^ local_buf_103[15];
    if (data_len_103 > 15 && check_103 == 0x1f) {
        size_t copy_len_103 = ((uint32_t)local_buf_103[2]*55 + local_buf_103[5])^local_buf_103[11];
        copy_len_103 = (copy_len_103 % 106) + 9;
        memcpy(buf_103, local_buf_103, copy_len_103);
    }

    free(local_buf_103);
    if (*x_103 > 0) {
        *x_103 -= 1;
        obf_func_11(x_103, data_103, data_len_103);
    }
}

void obf_func_90(int *x_90, unsigned char *data_90, size_t data_len_90) {
    char buf_90[114];
    unsigned char* local_buf_90 = (unsigned char*)malloc(514);
    if (!local_buf_90) return;
    for (int j = 0; j < 514; j++) {
        local_buf_90[j] = j < data_len_90 ? data_90[j] : 0;
    }

    unsigned char check_90 = (unsigned char)((uint32_t)local_buf_90[3] * 61 + local_buf_90[11]) ^ local_buf_90[6];
    if (data_len_90 > 11 && check_90 == 0xf2) {
        size_t copy_len_90 = ((uint32_t)local_buf_90[15]*51 + local_buf_90[8])^local_buf_90[7];
        copy_len_90 = (copy_len_90 % 115) + 0;
        memcpy(buf_90, local_buf_90, copy_len_90);
    }

    free(local_buf_90);
    if (*x_90 > 0) {
        *x_90 -= 1;
        obf_func_8(x_90, data_90, data_len_90);
    }
}

void obf_func_33(int *x_33, unsigned char *data_33, size_t data_len_33) {
    char buf_33[114];
    unsigned char* local_buf_33 = (unsigned char*)malloc(514);
    if (!local_buf_33) return;
    for (int j = 0; j < 514; j++) {
        local_buf_33[j] = j < data_len_33 ? data_33[j] : 0;
    }

    unsigned char check_33 = (unsigned char)((uint32_t)local_buf_33[9] * 43 + local_buf_33[11]) ^ local_buf_33[13];
    if (data_len_33 > 13 && check_33 == 0xe5) {
        size_t copy_len_33 = ((uint32_t)local_buf_33[12]*55 + local_buf_33[7])^local_buf_33[2];
        copy_len_33 = (copy_len_33 % 114) + 1;
        memcpy(buf_33, local_buf_33, copy_len_33);
    }

    free(local_buf_33);
    if (*x_33 > 0) {
        *x_33 -= 1;
        obf_func_145(x_33, data_33, data_len_33);
    }
}

void obf_func_240(int *x_240, unsigned char *data_240, size_t data_len_240) {
    char buf_240[114];
    unsigned char* local_buf_240 = (unsigned char*)malloc(514);
    if (!local_buf_240) return;
    for (int j = 0; j < 514; j++) {
        local_buf_240[j] = j < data_len_240 ? data_240[j] : 0;
    }

    unsigned char check_240 = (unsigned char)((uint32_t)local_buf_240[12] * 53 + local_buf_240[11]) ^ local_buf_240[5];
    if (data_len_240 > 12 && check_240 == 0x8f) {
        size_t copy_len_240 = ((uint32_t)local_buf_240[1]*33 + local_buf_240[6])^local_buf_240[13];
        copy_len_240 = (copy_len_240 % 100) + 15;
        memcpy(buf_240, local_buf_240, copy_len_240);
    }

    free(local_buf_240);
    if (*x_240 > 0) {
        *x_240 -= 1;
        obf_func_180(x_240, data_240, data_len_240);
    }
}

void obf_func_289(int *x_289, unsigned char *data_289, size_t data_len_289) {
    char buf_289[114];
    unsigned char* local_buf_289 = (unsigned char*)malloc(514);
    if (!local_buf_289) return;
    for (int j = 0; j < 514; j++) {
        local_buf_289[j] = j < data_len_289 ? data_289[j] : 0;
    }

    unsigned char check_289 = (unsigned char)((uint32_t)local_buf_289[7] * 41 + local_buf_289[13]) ^ local_buf_289[1];
    if (data_len_289 > 13 && check_289 == 0xa4) {
        size_t copy_len_289 = ((uint32_t)local_buf_289[14]*35 + local_buf_289[5])^local_buf_289[11];
        copy_len_289 = (copy_len_289 % 105) + 10;
        memcpy(buf_289, local_buf_289, copy_len_289);
    }

    free(local_buf_289);
    if (*x_289 > 0) {
        *x_289 -= 1;
        obf_func_61(x_289, data_289, data_len_289);
    }
}

void obf_func_202(int *x_202, unsigned char *data_202, size_t data_len_202) {
    char buf_202[114];
    unsigned char* local_buf_202 = (unsigned char*)malloc(514);
    if (!local_buf_202) return;
    for (int j = 0; j < 514; j++) {
        local_buf_202[j] = j < data_len_202 ? data_202[j] : 0;
    }

    unsigned char check_202 = (unsigned char)((uint32_t)local_buf_202[11] * 53 + local_buf_202[8]) ^ local_buf_202[1];
    if (data_len_202 > 11 && check_202 == 0x46) {
        size_t copy_len_202 = ((uint32_t)local_buf_202[5]*39 + local_buf_202[6])^local_buf_202[14];
        copy_len_202 = (copy_len_202 % 100) + 15;
        memcpy(buf_202, local_buf_202, copy_len_202);
    }

    free(local_buf_202);
    if (*x_202 > 0) {
        *x_202 -= 1;
        obf_func_243(x_202, data_202, data_len_202);
    }
}

void obf_func_72(int *x_72, unsigned char *data_72, size_t data_len_72) {
    char buf_72[114];
    unsigned char* local_buf_72 = (unsigned char*)malloc(514);
    if (!local_buf_72) return;
    for (int j = 0; j < 514; j++) {
        local_buf_72[j] = j < data_len_72 ? data_72[j] : 0;
    }

    unsigned char check_72 = (unsigned char)((uint32_t)local_buf_72[10] * 43 + local_buf_72[7]) ^ local_buf_72[15];
    if (data_len_72 > 15 && check_72 == 0x76) {
        size_t copy_len_72 = ((uint32_t)local_buf_72[9]*29 + local_buf_72[2])^local_buf_72[13];
        copy_len_72 = (copy_len_72 % 104) + 11;
        memcpy(buf_72, local_buf_72, copy_len_72);
    }

    free(local_buf_72);
    if (*x_72 > 0) {
        *x_72 -= 1;
        obf_func_155(x_72, data_72, data_len_72);
    }
}

void obf_func_228(int *x_228, unsigned char *data_228, size_t data_len_228) {
    char buf_228[114];
    unsigned char* local_buf_228 = (unsigned char*)malloc(514);
    if (!local_buf_228) return;
    for (int j = 0; j < 514; j++) {
        local_buf_228[j] = j < data_len_228 ? data_228[j] : 0;
    }

    unsigned char check_228 = (unsigned char)((uint32_t)local_buf_228[2] * 47 + local_buf_228[11]) ^ local_buf_228[13];
    if (data_len_228 > 13 && check_228 == 0x58) {
        size_t copy_len_228 = ((uint32_t)local_buf_228[10]*33 + local_buf_228[7])^local_buf_228[4];
        copy_len_228 = (copy_len_228 % 114) + 1;
        memcpy(buf_228, local_buf_228, copy_len_228);
    }

    free(local_buf_228);
    if (*x_228 > 0) {
        *x_228 -= 1;
        obf_func_57(x_228, data_228, data_len_228);
    }
}

void obf_func_95(int *x_95, unsigned char *data_95, size_t data_len_95) {
    char buf_95[114];
    unsigned char* local_buf_95 = (unsigned char*)malloc(514);
    if (!local_buf_95) return;
    for (int j = 0; j < 514; j++) {
        local_buf_95[j] = j < data_len_95 ? data_95[j] : 0;
    }

    unsigned char check_95 = (unsigned char)((uint32_t)local_buf_95[14] * 47 + local_buf_95[9]) ^ local_buf_95[12];
    if (data_len_95 > 14 && check_95 == 0xdb) {
        size_t copy_len_95 = ((uint32_t)local_buf_95[7]*57 + local_buf_95[4])^local_buf_95[6];
        copy_len_95 = (copy_len_95 % 109) + 6;
        memcpy(buf_95, local_buf_95, copy_len_95);
    }

    free(local_buf_95);
    if (*x_95 > 0) {
        *x_95 -= 1;
        obf_func_246(x_95, data_95, data_len_95);
    }
}

void obf_func_224(int *x_224, unsigned char *data_224, size_t data_len_224) {
    char buf_224[114];
    unsigned char* local_buf_224 = (unsigned char*)malloc(514);
    if (!local_buf_224) return;
    for (int j = 0; j < 514; j++) {
        local_buf_224[j] = j < data_len_224 ? data_224[j] : 0;
    }

    unsigned char check_224 = (unsigned char)((uint32_t)local_buf_224[2] * 61 + local_buf_224[1]) ^ local_buf_224[7];
    if (data_len_224 > 7 && check_224 == 0x6e) {
        size_t copy_len_224 = ((uint32_t)local_buf_224[11]*39 + local_buf_224[6])^local_buf_224[9];
        copy_len_224 = (copy_len_224 % 105) + 10;
        memcpy(buf_224, local_buf_224, copy_len_224);
    }

    free(local_buf_224);
    if (*x_224 > 0) {
        *x_224 -= 1;
        obf_func_237(x_224, data_224, data_len_224);
    }
}

void obf_func_293(int *x_293, unsigned char *data_293, size_t data_len_293) {
    char buf_293[114];
    unsigned char* local_buf_293 = (unsigned char*)malloc(514);
    if (!local_buf_293) return;
    for (int j = 0; j < 514; j++) {
        local_buf_293[j] = j < data_len_293 ? data_293[j] : 0;
    }

    unsigned char check_293 = (unsigned char)((uint32_t)local_buf_293[7] * 47 + local_buf_293[12]) ^ local_buf_293[8];
    if (data_len_293 > 12 && check_293 == 0x11) {
        size_t copy_len_293 = ((uint32_t)local_buf_293[15]*29 + local_buf_293[6])^local_buf_293[4];
        copy_len_293 = (copy_len_293 % 109) + 6;
        memcpy(buf_293, local_buf_293, copy_len_293);
    }

    free(local_buf_293);
    if (*x_293 > 0) {
        *x_293 -= 1;
        obf_func_152(x_293, data_293, data_len_293);
    }
}

void obf_func_172(int *x_172, unsigned char *data_172, size_t data_len_172) {
    char buf_172[114];
    unsigned char* local_buf_172 = (unsigned char*)malloc(514);
    if (!local_buf_172) return;
    for (int j = 0; j < 514; j++) {
        local_buf_172[j] = j < data_len_172 ? data_172[j] : 0;
    }

    unsigned char check_172 = (unsigned char)((uint32_t)local_buf_172[5] * 61 + local_buf_172[9]) ^ local_buf_172[12];
    if (data_len_172 > 12 && check_172 == 0x1e) {
        size_t copy_len_172 = ((uint32_t)local_buf_172[4]*51 + local_buf_172[15])^local_buf_172[13];
        copy_len_172 = (copy_len_172 % 105) + 10;
        memcpy(buf_172, local_buf_172, copy_len_172);
    }

    free(local_buf_172);
    if (*x_172 > 0) {
        *x_172 -= 1;
        obf_func_151(x_172, data_172, data_len_172);
    }
}

void obf_func_144(int *x_144, unsigned char *data_144, size_t data_len_144) {
    char buf_144[114];
    unsigned char* local_buf_144 = (unsigned char*)malloc(514);
    if (!local_buf_144) return;
    for (int j = 0; j < 514; j++) {
        local_buf_144[j] = j < data_len_144 ? data_144[j] : 0;
    }

    unsigned char check_144 = (unsigned char)((uint32_t)local_buf_144[3] * 31 + local_buf_144[9]) ^ local_buf_144[15];
    if (data_len_144 > 15 && check_144 == 0xbe) {
        size_t copy_len_144 = ((uint32_t)local_buf_144[1]*55 + local_buf_144[4])^local_buf_144[7];
        copy_len_144 = (copy_len_144 % 111) + 4;
        memcpy(buf_144, local_buf_144, copy_len_144);
    }

    free(local_buf_144);
    if (*x_144 > 0) {
        *x_144 -= 1;
        obf_func_177(x_144, data_144, data_len_144);
    }
}

void obf_func_161(int *x_161, unsigned char *data_161, size_t data_len_161) {
    char buf_161[114];
    unsigned char* local_buf_161 = (unsigned char*)malloc(514);
    if (!local_buf_161) return;
    for (int j = 0; j < 514; j++) {
        local_buf_161[j] = j < data_len_161 ? data_161[j] : 0;
    }

    unsigned char check_161 = (unsigned char)((uint32_t)local_buf_161[6] * 43 + local_buf_161[14]) ^ local_buf_161[2];
    if (data_len_161 > 14 && check_161 == 0x78) {
        size_t copy_len_161 = ((uint32_t)local_buf_161[11]*35 + local_buf_161[9])^local_buf_161[12];
        copy_len_161 = (copy_len_161 % 107) + 8;
        memcpy(buf_161, local_buf_161, copy_len_161);
    }

    free(local_buf_161);
    if (*x_161 > 0) {
        *x_161 -= 1;
        obf_func_56(x_161, data_161, data_len_161);
    }
}

void obf_func_120(int *x_120, unsigned char *data_120, size_t data_len_120) {
    char buf_120[114];
    unsigned char* local_buf_120 = (unsigned char*)malloc(514);
    if (!local_buf_120) return;
    for (int j = 0; j < 514; j++) {
        local_buf_120[j] = j < data_len_120 ? data_120[j] : 0;
    }

    unsigned char check_120 = (unsigned char)((uint32_t)local_buf_120[11] * 37 + local_buf_120[13]) ^ local_buf_120[12];
    if (data_len_120 > 13 && check_120 == 0x48) {
        size_t copy_len_120 = ((uint32_t)local_buf_120[15]*57 + local_buf_120[2])^local_buf_120[4];
        copy_len_120 = (copy_len_120 % 114) + 1;
        memcpy(buf_120, local_buf_120, copy_len_120);
    }

    free(local_buf_120);
    if (*x_120 > 0) {
        *x_120 -= 1;
        obf_func_126(x_120, data_120, data_len_120);
    }
}

void obf_func_159(int *x_159, unsigned char *data_159, size_t data_len_159) {
    char buf_159[114];
    unsigned char* local_buf_159 = (unsigned char*)malloc(514);
    if (!local_buf_159) return;
    for (int j = 0; j < 514; j++) {
        local_buf_159[j] = j < data_len_159 ? data_159[j] : 0;
    }

    unsigned char check_159 = (unsigned char)((uint32_t)local_buf_159[2] * 31 + local_buf_159[4]) ^ local_buf_159[8];
    if (data_len_159 > 8 && check_159 == 0xab) {
        size_t copy_len_159 = ((uint32_t)local_buf_159[5]*51 + local_buf_159[9])^local_buf_159[13];
        copy_len_159 = (copy_len_159 % 112) + 3;
        memcpy(buf_159, local_buf_159, copy_len_159);
    }

    free(local_buf_159);
    if (*x_159 > 0) {
        *x_159 -= 1;
        obf_func_127(x_159, data_159, data_len_159);
    }
}

void obf_func_214(int *x_214, unsigned char *data_214, size_t data_len_214) {
    char buf_214[114];
    unsigned char* local_buf_214 = (unsigned char*)malloc(514);
    if (!local_buf_214) return;
    for (int j = 0; j < 514; j++) {
        local_buf_214[j] = j < data_len_214 ? data_214[j] : 0;
    }

    unsigned char check_214 = (unsigned char)((uint32_t)local_buf_214[3] * 41 + local_buf_214[7]) ^ local_buf_214[5];
    if (data_len_214 > 7 && check_214 == 0xd9) {
        size_t copy_len_214 = ((uint32_t)local_buf_214[11]*39 + local_buf_214[10])^local_buf_214[6];
        copy_len_214 = (copy_len_214 % 111) + 4;
        memcpy(buf_214, local_buf_214, copy_len_214);
    }

    free(local_buf_214);
    if (*x_214 > 0) {
        *x_214 -= 1;
        obf_func_192(x_214, data_214, data_len_214);
    }
}

void obf_func_174(int *x_174, unsigned char *data_174, size_t data_len_174) {
    char buf_174[114];
    unsigned char* local_buf_174 = (unsigned char*)malloc(514);
    if (!local_buf_174) return;
    for (int j = 0; j < 514; j++) {
        local_buf_174[j] = j < data_len_174 ? data_174[j] : 0;
    }

    unsigned char check_174 = (unsigned char)((uint32_t)local_buf_174[5] * 53 + local_buf_174[3]) ^ local_buf_174[4];
    if (data_len_174 > 5 && check_174 == 0x84) {
        size_t copy_len_174 = ((uint32_t)local_buf_174[2]*39 + local_buf_174[7])^local_buf_174[15];
        copy_len_174 = (copy_len_174 % 105) + 10;
        memcpy(buf_174, local_buf_174, copy_len_174);
    }

    free(local_buf_174);
    if (*x_174 > 0) {
        *x_174 -= 1;
        obf_func_171(x_174, data_174, data_len_174);
    }
}

void obf_func_129(int *x_129, unsigned char *data_129, size_t data_len_129) {
    char buf_129[114];
    unsigned char* local_buf_129 = (unsigned char*)malloc(514);
    if (!local_buf_129) return;
    for (int j = 0; j < 514; j++) {
        local_buf_129[j] = j < data_len_129 ? data_129[j] : 0;
    }

    unsigned char check_129 = (unsigned char)((uint32_t)local_buf_129[11] * 31 + local_buf_129[6]) ^ local_buf_129[3];
    if (data_len_129 > 11 && check_129 == 0x84) {
        size_t copy_len_129 = ((uint32_t)local_buf_129[1]*51 + local_buf_129[5])^local_buf_129[4];
        copy_len_129 = (copy_len_129 % 108) + 7;
        memcpy(buf_129, local_buf_129, copy_len_129);
    }

    free(local_buf_129);
    if (*x_129 > 0) {
        *x_129 -= 1;
        obf_func_82(x_129, data_129, data_len_129);
    }
}

void obf_func_270(int *x_270, unsigned char *data_270, size_t data_len_270) {
    char buf_270[114];
    unsigned char* local_buf_270 = (unsigned char*)malloc(514);
    if (!local_buf_270) return;
    for (int j = 0; j < 514; j++) {
        local_buf_270[j] = j < data_len_270 ? data_270[j] : 0;
    }

    unsigned char check_270 = (unsigned char)((uint32_t)local_buf_270[5] * 53 + local_buf_270[3]) ^ local_buf_270[4];
    if (data_len_270 > 5 && check_270 == 0xed) {
        size_t copy_len_270 = ((uint32_t)local_buf_270[11]*57 + local_buf_270[14])^local_buf_270[12];
        copy_len_270 = (copy_len_270 % 108) + 7;
        memcpy(buf_270, local_buf_270, copy_len_270);
    }

    free(local_buf_270);
    if (*x_270 > 0) {
        *x_270 -= 1;
        obf_func_2(x_270, data_270, data_len_270);
    }
}

void obf_func_252(int *x_252, unsigned char *data_252, size_t data_len_252) {
    char buf_252[114];
    unsigned char* local_buf_252 = (unsigned char*)malloc(514);
    if (!local_buf_252) return;
    for (int j = 0; j < 514; j++) {
        local_buf_252[j] = j < data_len_252 ? data_252[j] : 0;
    }

    unsigned char check_252 = (unsigned char)((uint32_t)local_buf_252[6] * 41 + local_buf_252[3]) ^ local_buf_252[15];
    if (data_len_252 > 15 && check_252 == 0x3a) {
        size_t copy_len_252 = ((uint32_t)local_buf_252[14]*33 + local_buf_252[11])^local_buf_252[13];
        copy_len_252 = (copy_len_252 % 114) + 1;
        memcpy(buf_252, local_buf_252, copy_len_252);
    }

    free(local_buf_252);
    if (*x_252 > 0) {
        *x_252 -= 1;
        obf_func_20(x_252, data_252, data_len_252);
    }
}

void obf_func_273(int *x_273, unsigned char *data_273, size_t data_len_273) {
    char buf_273[114];
    unsigned char* local_buf_273 = (unsigned char*)malloc(514);
    if (!local_buf_273) return;
    for (int j = 0; j < 514; j++) {
        local_buf_273[j] = j < data_len_273 ? data_273[j] : 0;
    }

    unsigned char check_273 = (unsigned char)((uint32_t)local_buf_273[11] * 59 + local_buf_273[15]) ^ local_buf_273[5];
    if (data_len_273 > 15 && check_273 == 0x6b) {
        size_t copy_len_273 = ((uint32_t)local_buf_273[10]*29 + local_buf_273[1])^local_buf_273[7];
        copy_len_273 = (copy_len_273 % 103) + 12;
        memcpy(buf_273, local_buf_273, copy_len_273);
    }

    free(local_buf_273);
    if (*x_273 > 0) {
        *x_273 -= 1;
        obf_func_52(x_273, data_273, data_len_273);
    }
}

void obf_func_80(int *x_80, unsigned char *data_80, size_t data_len_80) {
    char buf_80[114];
    unsigned char* local_buf_80 = (unsigned char*)malloc(514);
    if (!local_buf_80) return;
    for (int j = 0; j < 514; j++) {
        local_buf_80[j] = j < data_len_80 ? data_80[j] : 0;
    }

    unsigned char check_80 = (unsigned char)((uint32_t)local_buf_80[6] * 43 + local_buf_80[10]) ^ local_buf_80[9];
    if (data_len_80 > 10 && check_80 == 0x1d) {
        size_t copy_len_80 = ((uint32_t)local_buf_80[7]*29 + local_buf_80[8])^local_buf_80[5];
        copy_len_80 = (copy_len_80 % 107) + 8;
        memcpy(buf_80, local_buf_80, copy_len_80);
    }

    free(local_buf_80);
    if (*x_80 > 0) {
        *x_80 -= 1;
        obf_func_245(x_80, data_80, data_len_80);
    }
}

void obf_func_162(int *x_162, unsigned char *data_162, size_t data_len_162) {
    char buf_162[114];
    unsigned char* local_buf_162 = (unsigned char*)malloc(514);
    if (!local_buf_162) return;
    for (int j = 0; j < 514; j++) {
        local_buf_162[j] = j < data_len_162 ? data_162[j] : 0;
    }

    unsigned char check_162 = (unsigned char)((uint32_t)local_buf_162[1] * 47 + local_buf_162[10]) ^ local_buf_162[9];
    if (data_len_162 > 10 && check_162 == 0x11) {
        size_t copy_len_162 = ((uint32_t)local_buf_162[4]*33 + local_buf_162[8])^local_buf_162[5];
        copy_len_162 = (copy_len_162 % 113) + 2;
        memcpy(buf_162, local_buf_162, copy_len_162);
    }

    free(local_buf_162);
    if (*x_162 > 0) {
        *x_162 -= 1;
        obf_func_147(x_162, data_162, data_len_162);
    }
}

void obf_func_19(int *x_19, unsigned char *data_19, size_t data_len_19) {
    char buf_19[114];
    unsigned char* local_buf_19 = (unsigned char*)malloc(514);
    if (!local_buf_19) return;
    for (int j = 0; j < 514; j++) {
        local_buf_19[j] = j < data_len_19 ? data_19[j] : 0;
    }

    unsigned char check_19 = (unsigned char)((uint32_t)local_buf_19[12] * 37 + local_buf_19[5]) ^ local_buf_19[2];
    if (data_len_19 > 12 && check_19 == 0xef) {
        size_t copy_len_19 = ((uint32_t)local_buf_19[3]*33 + local_buf_19[14])^local_buf_19[10];
        copy_len_19 = (copy_len_19 % 114) + 1;
        memcpy(buf_19, local_buf_19, copy_len_19);
    }

    free(local_buf_19);
    if (*x_19 > 0) {
        *x_19 -= 1;
        obf_func_183(x_19, data_19, data_len_19);
    }
}

void obf_func_246(int *x_246, unsigned char *data_246, size_t data_len_246) {
    char buf_246[114];
    unsigned char* local_buf_246 = (unsigned char*)malloc(514);
    if (!local_buf_246) return;
    for (int j = 0; j < 514; j++) {
        local_buf_246[j] = j < data_len_246 ? data_246[j] : 0;
    }

    unsigned char check_246 = (unsigned char)((uint32_t)local_buf_246[1] * 43 + local_buf_246[12]) ^ local_buf_246[9];
    if (data_len_246 > 12 && check_246 == 0xcf) {
        size_t copy_len_246 = ((uint32_t)local_buf_246[2]*57 + local_buf_246[11])^local_buf_246[4];
        copy_len_246 = (copy_len_246 % 101) + 14;
        memcpy(buf_246, local_buf_246, copy_len_246);
    }

    free(local_buf_246);
    if (*x_246 > 0) {
        *x_246 -= 1;
        obf_func_101(x_246, data_246, data_len_246);
    }
}

void obf_func_158(int *x_158, unsigned char *data_158, size_t data_len_158) {
    char buf_158[114];
    unsigned char* local_buf_158 = (unsigned char*)malloc(514);
    if (!local_buf_158) return;
    for (int j = 0; j < 514; j++) {
        local_buf_158[j] = j < data_len_158 ? data_158[j] : 0;
    }

    unsigned char check_158 = (unsigned char)((uint32_t)local_buf_158[14] * 37 + local_buf_158[3]) ^ local_buf_158[2];
    if (data_len_158 > 14 && check_158 == 0x08) {
        size_t copy_len_158 = ((uint32_t)local_buf_158[6]*45 + local_buf_158[7])^local_buf_158[10];
        copy_len_158 = (copy_len_158 % 111) + 4;
        memcpy(buf_158, local_buf_158, copy_len_158);
    }

    free(local_buf_158);
    if (*x_158 > 0) {
        *x_158 -= 1;
        obf_func_265(x_158, data_158, data_len_158);
    }
}

void obf_func_284(int *x_284, unsigned char *data_284, size_t data_len_284) {
    char buf_284[114];
    unsigned char* local_buf_284 = (unsigned char*)malloc(514);
    if (!local_buf_284) return;
    for (int j = 0; j < 514; j++) {
        local_buf_284[j] = j < data_len_284 ? data_284[j] : 0;
    }

    unsigned char check_284 = (unsigned char)((uint32_t)local_buf_284[9] * 43 + local_buf_284[3]) ^ local_buf_284[5];
    if (data_len_284 > 9 && check_284 == 0xba) {
        size_t copy_len_284 = ((uint32_t)local_buf_284[10]*45 + local_buf_284[1])^local_buf_284[7];
        copy_len_284 = (copy_len_284 % 103) + 12;
        memcpy(buf_284, local_buf_284, copy_len_284);
    }

    free(local_buf_284);
    if (*x_284 > 0) {
        *x_284 -= 1;
        obf_func_129(x_284, data_284, data_len_284);
    }
}

void obf_func_225(int *x_225, unsigned char *data_225, size_t data_len_225) {
    char buf_225[114];
    unsigned char* local_buf_225 = (unsigned char*)malloc(514);
    if (!local_buf_225) return;
    for (int j = 0; j < 514; j++) {
        local_buf_225[j] = j < data_len_225 ? data_225[j] : 0;
    }

    unsigned char check_225 = (unsigned char)((uint32_t)local_buf_225[1] * 31 + local_buf_225[5]) ^ local_buf_225[10];
    if (data_len_225 > 10 && check_225 == 0x8d) {
        size_t copy_len_225 = ((uint32_t)local_buf_225[3]*55 + local_buf_225[14])^local_buf_225[6];
        copy_len_225 = (copy_len_225 % 108) + 7;
        memcpy(buf_225, local_buf_225, copy_len_225);
    }

    free(local_buf_225);
    if (*x_225 > 0) {
        *x_225 -= 1;
        obf_func_109(x_225, data_225, data_len_225);
    }
}

void obf_func_231(int *x_231, unsigned char *data_231, size_t data_len_231) {
    char buf_231[114];
    unsigned char* local_buf_231 = (unsigned char*)malloc(514);
    if (!local_buf_231) return;
    for (int j = 0; j < 514; j++) {
        local_buf_231[j] = j < data_len_231 ? data_231[j] : 0;
    }

    unsigned char check_231 = (unsigned char)((uint32_t)local_buf_231[14] * 61 + local_buf_231[4]) ^ local_buf_231[12];
    if (data_len_231 > 14 && check_231 == 0x60) {
        size_t copy_len_231 = ((uint32_t)local_buf_231[9]*51 + local_buf_231[13])^local_buf_231[11];
        copy_len_231 = (copy_len_231 % 113) + 2;
        memcpy(buf_231, local_buf_231, copy_len_231);
    }

    free(local_buf_231);
    if (*x_231 > 0) {
        *x_231 -= 1;
        obf_func_230(x_231, data_231, data_len_231);
    }
}

void obf_func_105(int *x_105, unsigned char *data_105, size_t data_len_105) {
    char buf_105[114];
    unsigned char* local_buf_105 = (unsigned char*)malloc(514);
    if (!local_buf_105) return;
    for (int j = 0; j < 514; j++) {
        local_buf_105[j] = j < data_len_105 ? data_105[j] : 0;
    }

    unsigned char check_105 = (unsigned char)((uint32_t)local_buf_105[10] * 59 + local_buf_105[1]) ^ local_buf_105[15];
    if (data_len_105 > 15 && check_105 == 0x92) {
        size_t copy_len_105 = ((uint32_t)local_buf_105[12]*45 + local_buf_105[4])^local_buf_105[8];
        copy_len_105 = (copy_len_105 % 107) + 8;
        memcpy(buf_105, local_buf_105, copy_len_105);
    }

    free(local_buf_105);
    if (*x_105 > 0) {
        *x_105 -= 1;
        obf_func_95(x_105, data_105, data_len_105);
    }
}

void obf_func_102(int *x_102, unsigned char *data_102, size_t data_len_102) {
    char buf_102[114];
    unsigned char* local_buf_102 = (unsigned char*)malloc(514);
    if (!local_buf_102) return;
    for (int j = 0; j < 514; j++) {
        local_buf_102[j] = j < data_len_102 ? data_102[j] : 0;
    }

    unsigned char check_102 = (unsigned char)((uint32_t)local_buf_102[9] * 31 + local_buf_102[5]) ^ local_buf_102[10];
    if (data_len_102 > 10 && check_102 == 0xc8) {
        size_t copy_len_102 = ((uint32_t)local_buf_102[4]*51 + local_buf_102[14])^local_buf_102[15];
        copy_len_102 = (copy_len_102 % 111) + 4;
        memcpy(buf_102, local_buf_102, copy_len_102);
    }

    free(local_buf_102);
    if (*x_102 > 0) {
        *x_102 -= 1;
        obf_func_49(x_102, data_102, data_len_102);
    }
}

void obf_func_18(int *x_18, unsigned char *data_18, size_t data_len_18) {
    char buf_18[114];
    unsigned char* local_buf_18 = (unsigned char*)malloc(514);
    if (!local_buf_18) return;
    for (int j = 0; j < 514; j++) {
        local_buf_18[j] = j < data_len_18 ? data_18[j] : 0;
    }

    unsigned char check_18 = (unsigned char)((uint32_t)local_buf_18[3] * 43 + local_buf_18[6]) ^ local_buf_18[5];
    if (data_len_18 > 6 && check_18 == 0x75) {
        size_t copy_len_18 = ((uint32_t)local_buf_18[14]*39 + local_buf_18[10])^local_buf_18[11];
        copy_len_18 = (copy_len_18 % 103) + 12;
        memcpy(buf_18, local_buf_18, copy_len_18);
    }

    free(local_buf_18);
    if (*x_18 > 0) {
        *x_18 -= 1;
        obf_func_234(x_18, data_18, data_len_18);
    }
}

void obf_func_250(int *x_250, unsigned char *data_250, size_t data_len_250) {
    char buf_250[114];
    unsigned char* local_buf_250 = (unsigned char*)malloc(514);
    if (!local_buf_250) return;
    for (int j = 0; j < 514; j++) {
        local_buf_250[j] = j < data_len_250 ? data_250[j] : 0;
    }

    unsigned char check_250 = (unsigned char)((uint32_t)local_buf_250[1] * 61 + local_buf_250[2]) ^ local_buf_250[11];
    if (data_len_250 > 11 && check_250 == 0xbd) {
        size_t copy_len_250 = ((uint32_t)local_buf_250[3]*29 + local_buf_250[6])^local_buf_250[14];
        copy_len_250 = (copy_len_250 % 100) + 15;
        memcpy(buf_250, local_buf_250, copy_len_250);
    }

    free(local_buf_250);
    if (*x_250 > 0) {
        *x_250 -= 1;
        obf_func_63(x_250, data_250, data_len_250);
    }
}

void obf_func_47(int *x_47, unsigned char *data_47, size_t data_len_47) {
    char buf_47[114];
    unsigned char* local_buf_47 = (unsigned char*)malloc(514);
    if (!local_buf_47) return;
    for (int j = 0; j < 514; j++) {
        local_buf_47[j] = j < data_len_47 ? data_47[j] : 0;
    }

    unsigned char check_47 = (unsigned char)((uint32_t)local_buf_47[12] * 59 + local_buf_47[2]) ^ local_buf_47[13];
    if (data_len_47 > 13 && check_47 == 0xfb) {
        size_t copy_len_47 = ((uint32_t)local_buf_47[4]*45 + local_buf_47[9])^local_buf_47[14];
        copy_len_47 = (copy_len_47 % 103) + 12;
        memcpy(buf_47, local_buf_47, copy_len_47);
    }

    free(local_buf_47);
    if (*x_47 > 0) {
        *x_47 -= 1;
        obf_func_91(x_47, data_47, data_len_47);
    }
}

void obf_func_288(int *x_288, unsigned char *data_288, size_t data_len_288) {
    char buf_288[114];
    unsigned char* local_buf_288 = (unsigned char*)malloc(514);
    if (!local_buf_288) return;
    for (int j = 0; j < 514; j++) {
        local_buf_288[j] = j < data_len_288 ? data_288[j] : 0;
    }

    unsigned char check_288 = (unsigned char)((uint32_t)local_buf_288[15] * 37 + local_buf_288[12]) ^ local_buf_288[13];
    if (data_len_288 > 15 && check_288 == 0x5c) {
        size_t copy_len_288 = ((uint32_t)local_buf_288[10]*29 + local_buf_288[7])^local_buf_288[14];
        copy_len_288 = (copy_len_288 % 108) + 7;
        memcpy(buf_288, local_buf_288, copy_len_288);
    }

    free(local_buf_288);
    if (*x_288 > 0) {
        *x_288 -= 1;
        obf_func_17(x_288, data_288, data_len_288);
    }
}

void obf_func_253(int *x_253, unsigned char *data_253, size_t data_len_253) {
    char buf_253[114];
    unsigned char* local_buf_253 = (unsigned char*)malloc(514);
    if (!local_buf_253) return;
    for (int j = 0; j < 514; j++) {
        local_buf_253[j] = j < data_len_253 ? data_253[j] : 0;
    }

    unsigned char check_253 = (unsigned char)((uint32_t)local_buf_253[10] * 61 + local_buf_253[5]) ^ local_buf_253[1];
    if (data_len_253 > 10 && check_253 == 0x5f) {
        size_t copy_len_253 = ((uint32_t)local_buf_253[12]*35 + local_buf_253[8])^local_buf_253[3];
        copy_len_253 = (copy_len_253 % 115) + 0;
        memcpy(buf_253, local_buf_253, copy_len_253);
    }

    free(local_buf_253);
    if (*x_253 > 0) {
        *x_253 -= 1;
        obf_func_87(x_253, data_253, data_len_253);
    }
}

void obf_func_9(int *x_9, unsigned char *data_9, size_t data_len_9) {
    char buf_9[114];
    unsigned char* local_buf_9 = (unsigned char*)malloc(514);
    if (!local_buf_9) return;
    for (int j = 0; j < 514; j++) {
        local_buf_9[j] = j < data_len_9 ? data_9[j] : 0;
    }

    unsigned char check_9 = (unsigned char)((uint32_t)local_buf_9[8] * 31 + local_buf_9[10]) ^ local_buf_9[7];
    if (data_len_9 > 10 && check_9 == 0x9b) {
        size_t copy_len_9 = ((uint32_t)local_buf_9[6]*39 + local_buf_9[15])^local_buf_9[5];
        copy_len_9 = (copy_len_9 % 106) + 9;
        memcpy(buf_9, local_buf_9, copy_len_9);
    }

    free(local_buf_9);
    if (*x_9 > 0) {
        *x_9 -= 1;
        obf_func_22(x_9, data_9, data_len_9);
    }
}

void obf_func_286(int *x_286, unsigned char *data_286, size_t data_len_286) {
    char buf_286[114];
    unsigned char* local_buf_286 = (unsigned char*)malloc(514);
    if (!local_buf_286) return;
    for (int j = 0; j < 514; j++) {
        local_buf_286[j] = j < data_len_286 ? data_286[j] : 0;
    }

    unsigned char check_286 = (unsigned char)((uint32_t)local_buf_286[10] * 37 + local_buf_286[11]) ^ local_buf_286[5];
    if (data_len_286 > 11 && check_286 == 0x45) {
        size_t copy_len_286 = ((uint32_t)local_buf_286[2]*55 + local_buf_286[4])^local_buf_286[8];
        copy_len_286 = (copy_len_286 % 114) + 1;
        memcpy(buf_286, local_buf_286, copy_len_286);
    }

    free(local_buf_286);
    if (*x_286 > 0) {
        *x_286 -= 1;
        obf_func_125(x_286, data_286, data_len_286);
    }
}

void obf_func_59(int *x_59, unsigned char *data_59, size_t data_len_59) {
    char buf_59[114];
    unsigned char* local_buf_59 = (unsigned char*)malloc(514);
    if (!local_buf_59) return;
    for (int j = 0; j < 514; j++) {
        local_buf_59[j] = j < data_len_59 ? data_59[j] : 0;
    }

    unsigned char check_59 = (unsigned char)((uint32_t)local_buf_59[14] * 47 + local_buf_59[5]) ^ local_buf_59[3];
    if (data_len_59 > 14 && check_59 == 0x8a) {
        size_t copy_len_59 = ((uint32_t)local_buf_59[4]*35 + local_buf_59[15])^local_buf_59[6];
        copy_len_59 = (copy_len_59 % 105) + 10;
        memcpy(buf_59, local_buf_59, copy_len_59);
    }

    free(local_buf_59);
    if (*x_59 > 0) {
        *x_59 -= 1;
        obf_func_242(x_59, data_59, data_len_59);
    }
}

void obf_func_143(int *x_143, unsigned char *data_143, size_t data_len_143) {
    char buf_143[114];
    unsigned char* local_buf_143 = (unsigned char*)malloc(514);
    if (!local_buf_143) return;
    for (int j = 0; j < 514; j++) {
        local_buf_143[j] = j < data_len_143 ? data_143[j] : 0;
    }

    unsigned char check_143 = (unsigned char)((uint32_t)local_buf_143[12] * 59 + local_buf_143[2]) ^ local_buf_143[1];
    if (data_len_143 > 12 && check_143 == 0xb6) {
        size_t copy_len_143 = ((uint32_t)local_buf_143[15]*29 + local_buf_143[5])^local_buf_143[13];
        copy_len_143 = (copy_len_143 % 110) + 5;
        memcpy(buf_143, local_buf_143, copy_len_143);
    }

    free(local_buf_143);
    if (*x_143 > 0) {
        *x_143 -= 1;
        obf_func_210(x_143, data_143, data_len_143);
    }
}

void obf_func_139(int *x_139, unsigned char *data_139, size_t data_len_139) {
    char buf_139[114];
    unsigned char* local_buf_139 = (unsigned char*)malloc(514);
    if (!local_buf_139) return;
    for (int j = 0; j < 514; j++) {
        local_buf_139[j] = j < data_len_139 ? data_139[j] : 0;
    }

    unsigned char check_139 = (unsigned char)((uint32_t)local_buf_139[9] * 37 + local_buf_139[3]) ^ local_buf_139[2];
    if (data_len_139 > 9 && check_139 == 0x3b) {
        size_t copy_len_139 = ((uint32_t)local_buf_139[7]*39 + local_buf_139[8])^local_buf_139[4];
        copy_len_139 = (copy_len_139 % 112) + 3;
        memcpy(buf_139, local_buf_139, copy_len_139);
    }

    free(local_buf_139);
    if (*x_139 > 0) {
        *x_139 -= 1;
        obf_func_41(x_139, data_139, data_len_139);
    }
}

void obf_func_34(int *x_34, unsigned char *data_34, size_t data_len_34) {
    char buf_34[114];
    unsigned char* local_buf_34 = (unsigned char*)malloc(514);
    if (!local_buf_34) return;
    for (int j = 0; j < 514; j++) {
        local_buf_34[j] = j < data_len_34 ? data_34[j] : 0;
    }

    unsigned char check_34 = (unsigned char)((uint32_t)local_buf_34[8] * 31 + local_buf_34[12]) ^ local_buf_34[2];
    if (data_len_34 > 12 && check_34 == 0x32) {
        size_t copy_len_34 = ((uint32_t)local_buf_34[15]*55 + local_buf_34[14])^local_buf_34[7];
        copy_len_34 = (copy_len_34 % 104) + 11;
        memcpy(buf_34, local_buf_34, copy_len_34);
    }

    free(local_buf_34);
    if (*x_34 > 0) {
        *x_34 -= 1;
        obf_func_264(x_34, data_34, data_len_34);
    }
}

void obf_func_209(int *x_209, unsigned char *data_209, size_t data_len_209) {
    char buf_209[114];
    unsigned char* local_buf_209 = (unsigned char*)malloc(514);
    if (!local_buf_209) return;
    for (int j = 0; j < 514; j++) {
        local_buf_209[j] = j < data_len_209 ? data_209[j] : 0;
    }

    unsigned char check_209 = (unsigned char)((uint32_t)local_buf_209[10] * 37 + local_buf_209[5]) ^ local_buf_209[4];
    if (data_len_209 > 10 && check_209 == 0x59) {
        size_t copy_len_209 = ((uint32_t)local_buf_209[13]*35 + local_buf_209[15])^local_buf_209[12];
        copy_len_209 = (copy_len_209 % 102) + 13;
        memcpy(buf_209, local_buf_209, copy_len_209);
    }

    free(local_buf_209);
    if (*x_209 > 0) {
        *x_209 -= 1;
        obf_func_24(x_209, data_209, data_len_209);
    }
}

void obf_func_48(int *x_48, unsigned char *data_48, size_t data_len_48) {
    char buf_48[114];
    unsigned char* local_buf_48 = (unsigned char*)malloc(514);
    if (!local_buf_48) return;
    for (int j = 0; j < 514; j++) {
        local_buf_48[j] = j < data_len_48 ? data_48[j] : 0;
    }

    unsigned char check_48 = (unsigned char)((uint32_t)local_buf_48[7] * 31 + local_buf_48[1]) ^ local_buf_48[13];
    if (data_len_48 > 13 && check_48 == 0x36) {
        size_t copy_len_48 = ((uint32_t)local_buf_48[6]*29 + local_buf_48[8])^local_buf_48[2];
        copy_len_48 = (copy_len_48 % 109) + 6;
        memcpy(buf_48, local_buf_48, copy_len_48);
    }

    free(local_buf_48);
    if (*x_48 > 0) {
        *x_48 -= 1;
        obf_func_104(x_48, data_48, data_len_48);
    }
}

void obf_func_176(int *x_176, unsigned char *data_176, size_t data_len_176) {
    char buf_176[114];
    unsigned char* local_buf_176 = (unsigned char*)malloc(514);
    if (!local_buf_176) return;
    for (int j = 0; j < 514; j++) {
        local_buf_176[j] = j < data_len_176 ? data_176[j] : 0;
    }

    unsigned char check_176 = (unsigned char)((uint32_t)local_buf_176[4] * 31 + local_buf_176[14]) ^ local_buf_176[3];
    if (data_len_176 > 14 && check_176 == 0xdf) {
        size_t copy_len_176 = ((uint32_t)local_buf_176[13]*45 + local_buf_176[12])^local_buf_176[10];
        copy_len_176 = (copy_len_176 % 110) + 5;
        memcpy(buf_176, local_buf_176, copy_len_176);
    }

    free(local_buf_176);
    if (*x_176 > 0) {
        *x_176 -= 1;
        obf_func_178(x_176, data_176, data_len_176);
    }
}

void obf_func_43(int *x_43, unsigned char *data_43, size_t data_len_43) {
    char buf_43[114];
    unsigned char* local_buf_43 = (unsigned char*)malloc(514);
    if (!local_buf_43) return;
    for (int j = 0; j < 514; j++) {
        local_buf_43[j] = j < data_len_43 ? data_43[j] : 0;
    }

    unsigned char check_43 = (unsigned char)((uint32_t)local_buf_43[7] * 37 + local_buf_43[5]) ^ local_buf_43[4];
    if (data_len_43 > 7 && check_43 == 0x25) {
        size_t copy_len_43 = ((uint32_t)local_buf_43[15]*29 + local_buf_43[9])^local_buf_43[3];
        copy_len_43 = (copy_len_43 % 113) + 2;
        memcpy(buf_43, local_buf_43, copy_len_43);
    }

    free(local_buf_43);
    if (*x_43 > 0) {
        *x_43 -= 1;
        obf_func_107(x_43, data_43, data_len_43);
    }
}

void obf_func_32(int *x_32, unsigned char *data_32, size_t data_len_32) {
    char buf_32[114];
    unsigned char* local_buf_32 = (unsigned char*)malloc(514);
    if (!local_buf_32) return;
    for (int j = 0; j < 514; j++) {
        local_buf_32[j] = j < data_len_32 ? data_32[j] : 0;
    }

    unsigned char check_32 = (unsigned char)((uint32_t)local_buf_32[14] * 43 + local_buf_32[15]) ^ local_buf_32[13];
    if (data_len_32 > 15 && check_32 == 0x48) {
        size_t copy_len_32 = ((uint32_t)local_buf_32[12]*55 + local_buf_32[9])^local_buf_32[10];
        copy_len_32 = (copy_len_32 % 105) + 10;
        memcpy(buf_32, local_buf_32, copy_len_32);
    }

    free(local_buf_32);
    if (*x_32 > 0) {
        *x_32 -= 1;
        obf_func_158(x_32, data_32, data_len_32);
    }
}

void obf_func_64(int *x_64, unsigned char *data_64, size_t data_len_64) {
    char buf_64[114];
    unsigned char* local_buf_64 = (unsigned char*)malloc(514);
    if (!local_buf_64) return;
    for (int j = 0; j < 514; j++) {
        local_buf_64[j] = j < data_len_64 ? data_64[j] : 0;
    }

    unsigned char check_64 = (unsigned char)((uint32_t)local_buf_64[1] * 61 + local_buf_64[6]) ^ local_buf_64[11];
    if (data_len_64 > 11 && check_64 == 0xe8) {
        size_t copy_len_64 = ((uint32_t)local_buf_64[3]*45 + local_buf_64[9])^local_buf_64[8];
        copy_len_64 = (copy_len_64 % 115) + 0;
        memcpy(buf_64, local_buf_64, copy_len_64);
    }

    free(local_buf_64);
    if (*x_64 > 0) {
        *x_64 -= 1;
        obf_func_287(x_64, data_64, data_len_64);
    }
}

void obf_func_92(int *x_92, unsigned char *data_92, size_t data_len_92) {
    char buf_92[114];
    unsigned char* local_buf_92 = (unsigned char*)malloc(514);
    if (!local_buf_92) return;
    for (int j = 0; j < 514; j++) {
        local_buf_92[j] = j < data_len_92 ? data_92[j] : 0;
    }

    unsigned char check_92 = (unsigned char)((uint32_t)local_buf_92[10] * 59 + local_buf_92[7]) ^ local_buf_92[3];
    if (data_len_92 > 10 && check_92 == 0x1c) {
        size_t copy_len_92 = ((uint32_t)local_buf_92[5]*39 + local_buf_92[2])^local_buf_92[14];
        copy_len_92 = (copy_len_92 % 109) + 6;
        memcpy(buf_92, local_buf_92, copy_len_92);
    }

    free(local_buf_92);
    if (*x_92 > 0) {
        *x_92 -= 1;
        obf_func_240(x_92, data_92, data_len_92);
    }
}

void obf_func_283(int *x_283, unsigned char *data_283, size_t data_len_283) {
    char buf_283[114];
    unsigned char* local_buf_283 = (unsigned char*)malloc(514);
    if (!local_buf_283) return;
    for (int j = 0; j < 514; j++) {
        local_buf_283[j] = j < data_len_283 ? data_283[j] : 0;
    }

    unsigned char check_283 = (unsigned char)((uint32_t)local_buf_283[6] * 43 + local_buf_283[15]) ^ local_buf_283[8];
    if (data_len_283 > 15 && check_283 == 0xa3) {
        size_t copy_len_283 = ((uint32_t)local_buf_283[14]*39 + local_buf_283[13])^local_buf_283[4];
        copy_len_283 = (copy_len_283 % 115) + 0;
        memcpy(buf_283, local_buf_283, copy_len_283);
    }

    free(local_buf_283);
    if (*x_283 > 0) {
        *x_283 -= 1;
        obf_func_273(x_283, data_283, data_len_283);
    }
}

void obf_func_248(int *x_248, unsigned char *data_248, size_t data_len_248) {
    char buf_248[114];
    unsigned char* local_buf_248 = (unsigned char*)malloc(514);
    if (!local_buf_248) return;
    for (int j = 0; j < 514; j++) {
        local_buf_248[j] = j < data_len_248 ? data_248[j] : 0;
    }

    unsigned char check_248 = (unsigned char)((uint32_t)local_buf_248[14] * 31 + local_buf_248[9]) ^ local_buf_248[10];
    if (data_len_248 > 14 && check_248 == 0xdb) {
        size_t copy_len_248 = ((uint32_t)local_buf_248[3]*55 + local_buf_248[1])^local_buf_248[13];
        copy_len_248 = (copy_len_248 % 111) + 4;
        memcpy(buf_248, local_buf_248, copy_len_248);
    }

    free(local_buf_248);
    if (*x_248 > 0) {
        *x_248 -= 1;
        obf_func_241(x_248, data_248, data_len_248);
    }
}

void obf_func_5(int *x_5, unsigned char *data_5, size_t data_len_5) {
    char buf_5[114];
    unsigned char* local_buf_5 = (unsigned char*)malloc(514);
    if (!local_buf_5) return;
    for (int j = 0; j < 514; j++) {
        local_buf_5[j] = j < data_len_5 ? data_5[j] : 0;
    }

    unsigned char check_5 = (unsigned char)((uint32_t)local_buf_5[3] * 61 + local_buf_5[10]) ^ local_buf_5[7];
    if (data_len_5 > 10 && check_5 == 0x75) {
        size_t copy_len_5 = ((uint32_t)local_buf_5[13]*57 + local_buf_5[12])^local_buf_5[2];
        copy_len_5 = (copy_len_5 % 115) + 0;
        memcpy(buf_5, local_buf_5, copy_len_5);
    }

    free(local_buf_5);
    if (*x_5 > 0) {
        *x_5 -= 1;
        obf_func_271(x_5, data_5, data_len_5);
    }
}

void obf_func_180(int *x_180, unsigned char *data_180, size_t data_len_180) {
    char buf_180[114];
    unsigned char* local_buf_180 = (unsigned char*)malloc(514);
    if (!local_buf_180) return;
    for (int j = 0; j < 514; j++) {
        local_buf_180[j] = j < data_len_180 ? data_180[j] : 0;
    }

    unsigned char check_180 = (unsigned char)((uint32_t)local_buf_180[3] * 37 + local_buf_180[14]) ^ local_buf_180[8];
    if (data_len_180 > 14 && check_180 == 0x4a) {
        size_t copy_len_180 = ((uint32_t)local_buf_180[10]*39 + local_buf_180[2])^local_buf_180[4];
        copy_len_180 = (copy_len_180 % 100) + 15;
        memcpy(buf_180, local_buf_180, copy_len_180);
    }

    free(local_buf_180);
    if (*x_180 > 0) {
        *x_180 -= 1;
        obf_func_134(x_180, data_180, data_len_180);
    }
}

void obf_func_111(int *x_111, unsigned char *data_111, size_t data_len_111) {
    char buf_111[114];
    unsigned char* local_buf_111 = (unsigned char*)malloc(514);
    if (!local_buf_111) return;
    for (int j = 0; j < 514; j++) {
        local_buf_111[j] = j < data_len_111 ? data_111[j] : 0;
    }

    unsigned char check_111 = (unsigned char)((uint32_t)local_buf_111[3] * 53 + local_buf_111[11]) ^ local_buf_111[9];
    if (data_len_111 > 11 && check_111 == 0x80) {
        x_111 = 0;
        size_t copy_len_111 = ((uint32_t)local_buf_111[8]*35 + local_buf_111[10])^local_buf_111[5];
        copy_len_111 = (copy_len_111 % 114) + 1;
        memcpy(buf_111, local_buf_111, copy_len_111);
    }

    free(local_buf_111);
    if (*x_111 > 0) {
        *x_111 -= 1;
        obf_func_205(x_111, data_111, data_len_111);
    }
}

void obf_func_145(int *x_145, unsigned char *data_145, size_t data_len_145) {
    char buf_145[114];
    unsigned char* local_buf_145 = (unsigned char*)malloc(514);
    if (!local_buf_145) return;
    for (int j = 0; j < 514; j++) {
        local_buf_145[j] = j < data_len_145 ? data_145[j] : 0;
    }

    unsigned char check_145 = (unsigned char)((uint32_t)local_buf_145[5] * 43 + local_buf_145[12]) ^ local_buf_145[3];
    if (data_len_145 > 12 && check_145 == 0xd5) {
        size_t copy_len_145 = ((uint32_t)local_buf_145[1]*33 + local_buf_145[14])^local_buf_145[2];
        copy_len_145 = (copy_len_145 % 501) + 0;
        memcpy(buf_145, local_buf_145, copy_len_145);
    }

    free(local_buf_145);
    if (*x_145 > 0) {
        *x_145 -= 1;
        obf_func_163(x_145, data_145, data_len_145);
    }
}

void obf_func_12(int *x_12, unsigned char *data_12, size_t data_len_12) {
    char buf_12[114];
    unsigned char* local_buf_12 = (unsigned char*)malloc(514);
    if (!local_buf_12) return;
    for (int j = 0; j < 514; j++) {
        local_buf_12[j] = j < data_len_12 ? data_12[j] : 0;
    }

    unsigned char check_12 = (unsigned char)((uint32_t)local_buf_12[5] * 59 + local_buf_12[8]) ^ local_buf_12[10];
    if (data_len_12 > 10 && check_12 == 0x44) {
        size_t copy_len_12 = ((uint32_t)local_buf_12[9]*45 + local_buf_12[13])^local_buf_12[2];
        copy_len_12 = (copy_len_12 % 101) + 14;
        memcpy(buf_12, local_buf_12, copy_len_12);
    }

    free(local_buf_12);
    if (*x_12 > 0) {
        *x_12 -= 1;
        obf_func_99(x_12, data_12, data_len_12);
    }
}

void obf_func_24(int *x_24, unsigned char *data_24, size_t data_len_24) {
    char buf_24[114];
    unsigned char* local_buf_24 = (unsigned char*)malloc(514);
    if (!local_buf_24) return;
    for (int j = 0; j < 514; j++) {
        local_buf_24[j] = j < data_len_24 ? data_24[j] : 0;
    }

    unsigned char check_24 = (unsigned char)((uint32_t)local_buf_24[12] * 31 + local_buf_24[9]) ^ local_buf_24[2];
    if (data_len_24 > 12 && check_24 == 0x0c) {
        size_t copy_len_24 = ((uint32_t)local_buf_24[5]*55 + local_buf_24[11])^local_buf_24[8];
        copy_len_24 = (copy_len_24 % 106) + 9;
        memcpy(buf_24, local_buf_24, copy_len_24);
    }

    free(local_buf_24);
    if (*x_24 > 0) {
        *x_24 -= 1;
        obf_func_236(x_24, data_24, data_len_24);
    }
}

void obf_func_124(int *x_124, unsigned char *data_124, size_t data_len_124) {
    char buf_124[114];
    unsigned char* local_buf_124 = (unsigned char*)malloc(514);
    if (!local_buf_124) return;
    for (int j = 0; j < 514; j++) {
        local_buf_124[j] = j < data_len_124 ? data_124[j] : 0;
    }

    unsigned char check_124 = (unsigned char)((uint32_t)local_buf_124[15] * 37 + local_buf_124[8]) ^ local_buf_124[3];
    if (data_len_124 > 15 && check_124 == 0xbd) {
        size_t copy_len_124 = ((uint32_t)local_buf_124[12]*55 + local_buf_124[2])^local_buf_124[6];
        copy_len_124 = (copy_len_124 % 102) + 13;
        memcpy(buf_124, local_buf_124, copy_len_124);
    }

    free(local_buf_124);
    if (*x_124 > 0) {
        *x_124 -= 1;
        obf_func_83(x_124, data_124, data_len_124);
    }
}

void obf_func_217(int *x_217, unsigned char *data_217, size_t data_len_217) {
    char buf_217[114];
    unsigned char* local_buf_217 = (unsigned char*)malloc(514);
    if (!local_buf_217) return;
    for (int j = 0; j < 514; j++) {
        local_buf_217[j] = j < data_len_217 ? data_217[j] : 0;
    }

    unsigned char check_217 = (unsigned char)((uint32_t)local_buf_217[10] * 41 + local_buf_217[3]) ^ local_buf_217[5];
    if (data_len_217 > 10 && check_217 == 0xcd) {
        size_t copy_len_217 = ((uint32_t)local_buf_217[8]*45 + local_buf_217[12])^local_buf_217[9];
        copy_len_217 = (copy_len_217 % 109) + 6;
        memcpy(buf_217, local_buf_217, copy_len_217);
    }

    free(local_buf_217);
    if (*x_217 > 0) {
        *x_217 -= 1;
        obf_func_133(x_217, data_217, data_len_217);
    }
}

void obf_func_86(int *x_86, unsigned char *data_86, size_t data_len_86) {
    char buf_86[114];
    unsigned char* local_buf_86 = (unsigned char*)malloc(514);
    if (!local_buf_86) return;
    for (int j = 0; j < 514; j++) {
        local_buf_86[j] = j < data_len_86 ? data_86[j] : 0;
    }

    unsigned char check_86 = (unsigned char)((uint32_t)local_buf_86[8] * 47 + local_buf_86[3]) ^ local_buf_86[7];
    if (data_len_86 > 8 && check_86 == 0x8c) {
        size_t copy_len_86 = ((uint32_t)local_buf_86[13]*57 + local_buf_86[2])^local_buf_86[15];
        copy_len_86 = (copy_len_86 % 115) + 0;
        memcpy(buf_86, local_buf_86, copy_len_86);
    }

    free(local_buf_86);
    if (*x_86 > 0) {
        *x_86 -= 1;
        obf_func_300(x_86, data_86, data_len_86);
    }
}

void obf_func_219(int *x_219, unsigned char *data_219, size_t data_len_219) {
    char buf_219[114];
    unsigned char* local_buf_219 = (unsigned char*)malloc(514);
    if (!local_buf_219) return;
    for (int j = 0; j < 514; j++) {
        local_buf_219[j] = j < data_len_219 ? data_219[j] : 0;
    }

    unsigned char check_219 = (unsigned char)((uint32_t)local_buf_219[6] * 37 + local_buf_219[15]) ^ local_buf_219[11];
    if (data_len_219 > 15 && check_219 == 0xeb) {
        size_t copy_len_219 = ((uint32_t)local_buf_219[10]*57 + local_buf_219[5])^local_buf_219[13];
        copy_len_219 = (copy_len_219 % 111) + 4;
        memcpy(buf_219, local_buf_219, copy_len_219);
    }

    free(local_buf_219);
    if (*x_219 > 0) {
        *x_219 -= 1;
        obf_func_66(x_219, data_219, data_len_219);
    }
}

void obf_func_277(int *x_277, unsigned char *data_277, size_t data_len_277) {
    char buf_277[114];
    unsigned char* local_buf_277 = (unsigned char*)malloc(514);
    if (!local_buf_277) return;
    for (int j = 0; j < 514; j++) {
        local_buf_277[j] = j < data_len_277 ? data_277[j] : 0;
    }

    unsigned char check_277 = (unsigned char)((uint32_t)local_buf_277[6] * 47 + local_buf_277[14]) ^ local_buf_277[10];
    if (data_len_277 > 14 && check_277 == 0x99) {
        size_t copy_len_277 = ((uint32_t)local_buf_277[4]*51 + local_buf_277[7])^local_buf_277[8];
        copy_len_277 = (copy_len_277 % 102) + 13;
        memcpy(buf_277, local_buf_277, copy_len_277);
    }

    free(local_buf_277);
    if (*x_277 > 0) {
        *x_277 -= 1;
        obf_func_35(x_277, data_277, data_len_277);
    }
}

void obf_func_52(int *x_52, unsigned char *data_52, size_t data_len_52) {
    char buf_52[114];
    unsigned char* local_buf_52 = (unsigned char*)malloc(514);
    if (!local_buf_52) return;
    for (int j = 0; j < 514; j++) {
        local_buf_52[j] = j < data_len_52 ? data_52[j] : 0;
    }

    unsigned char check_52 = (unsigned char)((uint32_t)local_buf_52[4] * 37 + local_buf_52[5]) ^ local_buf_52[10];
    if (data_len_52 > 10 && check_52 == 0xb9) {
        size_t copy_len_52 = ((uint32_t)local_buf_52[13]*51 + local_buf_52[6])^local_buf_52[7];
        copy_len_52 = (copy_len_52 % 107) + 8;
        memcpy(buf_52, local_buf_52, copy_len_52);
    }

    free(local_buf_52);
    if (*x_52 > 0) {
        *x_52 -= 1;
        obf_func_274(x_52, data_52, data_len_52);
    }
}

void obf_func_135(int *x_135, unsigned char *data_135, size_t data_len_135) {
    char buf_135[114];
    unsigned char* local_buf_135 = (unsigned char*)malloc(514);
    if (!local_buf_135) return;
    for (int j = 0; j < 514; j++) {
        local_buf_135[j] = j < data_len_135 ? data_135[j] : 0;
    }

    unsigned char check_135 = (unsigned char)((uint32_t)local_buf_135[8] * 47 + local_buf_135[3]) ^ local_buf_135[15];
    if (data_len_135 > 15 && check_135 == 0x91) {
        size_t copy_len_135 = ((uint32_t)local_buf_135[1]*33 + local_buf_135[9])^local_buf_135[14];
        copy_len_135 = (copy_len_135 % 100) + 15;
        memcpy(buf_135, local_buf_135, copy_len_135);
    }

    free(local_buf_135);
    if (*x_135 > 0) {
        *x_135 -= 1;
        obf_func_257(x_135, data_135, data_len_135);
    }
}

void obf_func_239(int *x_239, unsigned char *data_239, size_t data_len_239) {
    char buf_239[114];
    unsigned char* local_buf_239 = (unsigned char*)malloc(514);
    if (!local_buf_239) return;
    for (int j = 0; j < 514; j++) {
        local_buf_239[j] = j < data_len_239 ? data_239[j] : 0;
    }

    unsigned char check_239 = (unsigned char)((uint32_t)local_buf_239[10] * 47 + local_buf_239[2]) ^ local_buf_239[3];
    if (data_len_239 > 10 && check_239 == 0x88) {
        size_t copy_len_239 = ((uint32_t)local_buf_239[6]*35 + local_buf_239[12])^local_buf_239[9];
        copy_len_239 = (copy_len_239 % 115) + 0;
        memcpy(buf_239, local_buf_239, copy_len_239);
    }

    free(local_buf_239);
    if (*x_239 > 0) {
        *x_239 -= 1;
        obf_func_9(x_239, data_239, data_len_239);
    }
}

void obf_func_101(int *x_101, unsigned char *data_101, size_t data_len_101) {
    char buf_101[114];
    unsigned char* local_buf_101 = (unsigned char*)malloc(514);
    if (!local_buf_101) return;
    for (int j = 0; j < 514; j++) {
        local_buf_101[j] = j < data_len_101 ? data_101[j] : 0;
    }

    unsigned char check_101 = (unsigned char)((uint32_t)local_buf_101[15] * 43 + local_buf_101[10]) ^ local_buf_101[13];
    if (data_len_101 > 15 && check_101 == 0x55) {
        size_t copy_len_101 = ((uint32_t)local_buf_101[6]*55 + local_buf_101[12])^local_buf_101[8];
        copy_len_101 = (copy_len_101 % 108) + 7;
        memcpy(buf_101, local_buf_101, copy_len_101);
    }

    free(local_buf_101);
    if (*x_101 > 0) {
        *x_101 -= 1;
        obf_func_195(x_101, data_101, data_len_101);
    }
}

void obf_func_69(int *x_69, unsigned char *data_69, size_t data_len_69) {
    char buf_69[114];
    unsigned char* local_buf_69 = (unsigned char*)malloc(514);
    if (!local_buf_69) return;
    for (int j = 0; j < 514; j++) {
        local_buf_69[j] = j < data_len_69 ? data_69[j] : 0;
    }

    unsigned char check_69 = (unsigned char)((uint32_t)local_buf_69[4] * 37 + local_buf_69[9]) ^ local_buf_69[3];
    if (data_len_69 > 9 && check_69 == 0xb0) {
        size_t copy_len_69 = ((uint32_t)local_buf_69[15]*35 + local_buf_69[7])^local_buf_69[8];
        copy_len_69 = (copy_len_69 % 107) + 8;
        memcpy(buf_69, local_buf_69, copy_len_69);
    }

    free(local_buf_69);
    if (*x_69 > 0) {
        *x_69 -= 1;
        obf_func_294(x_69, data_69, data_len_69);
    }
}

void obf_func_134(int *x_134, unsigned char *data_134, size_t data_len_134) {
    char buf_134[114];
    unsigned char* local_buf_134 = (unsigned char*)malloc(514);
    if (!local_buf_134) return;
    for (int j = 0; j < 514; j++) {
        local_buf_134[j] = j < data_len_134 ? data_134[j] : 0;
    }

    unsigned char check_134 = (unsigned char)((uint32_t)local_buf_134[2] * 43 + local_buf_134[9]) ^ local_buf_134[11];
    if (data_len_134 > 11 && check_134 == 0x62) {
        size_t copy_len_134 = ((uint32_t)local_buf_134[10]*57 + local_buf_134[14])^local_buf_134[13];
        copy_len_134 = (copy_len_134 % 100) + 15;
        memcpy(buf_134, local_buf_134, copy_len_134);
    }

    free(local_buf_134);
    if (*x_134 > 0) {
        *x_134 -= 1;
        obf_func_53(x_134, data_134, data_len_134);
    }
}

void obf_func_140(int *x_140, unsigned char *data_140, size_t data_len_140) {
    char buf_140[114];
    unsigned char* local_buf_140 = (unsigned char*)malloc(514);
    if (!local_buf_140) return;
    for (int j = 0; j < 514; j++) {
        local_buf_140[j] = j < data_len_140 ? data_140[j] : 0;
    }

    unsigned char check_140 = (unsigned char)((uint32_t)local_buf_140[3] * 37 + local_buf_140[4]) ^ local_buf_140[6];
    if (data_len_140 > 6 && check_140 == 0x4b) {
        size_t copy_len_140 = ((uint32_t)local_buf_140[14]*45 + local_buf_140[9])^local_buf_140[5];
        copy_len_140 = (copy_len_140 % 112) + 3;
        memcpy(buf_140, local_buf_140, copy_len_140);
    }

    free(local_buf_140);
    if (*x_140 > 0) {
        *x_140 -= 1;
        obf_func_193(x_140, data_140, data_len_140);
    }
}

void obf_func_81(int *x_81, unsigned char *data_81, size_t data_len_81) {
    char buf_81[114];
    unsigned char* local_buf_81 = (unsigned char*)malloc(514);
    if (!local_buf_81) return;
    for (int j = 0; j < 514; j++) {
        local_buf_81[j] = j < data_len_81 ? data_81[j] : 0;
    }

    unsigned char check_81 = (unsigned char)((uint32_t)local_buf_81[1] * 37 + local_buf_81[11]) ^ local_buf_81[14];
    if (data_len_81 > 14 && check_81 == 0xbc) {
        size_t copy_len_81 = ((uint32_t)local_buf_81[15]*39 + local_buf_81[12])^local_buf_81[5];
        copy_len_81 = (copy_len_81 % 109) + 6;
        memcpy(buf_81, local_buf_81, copy_len_81);
    }

    free(local_buf_81);
    if (*x_81 > 0) {
        *x_81 -= 1;
        obf_func_157(x_81, data_81, data_len_81);
    }
}

void obf_func_213(int *x_213, unsigned char *data_213, size_t data_len_213) {
    char buf_213[114];
    unsigned char* local_buf_213 = (unsigned char*)malloc(514);
    if (!local_buf_213) return;
    for (int j = 0; j < 514; j++) {
        local_buf_213[j] = j < data_len_213 ? data_213[j] : 0;
    }

    unsigned char check_213 = (unsigned char)((uint32_t)local_buf_213[5] * 61 + local_buf_213[15]) ^ local_buf_213[14];
    if (data_len_213 > 15 && check_213 == 0x27) {
        size_t copy_len_213 = ((uint32_t)local_buf_213[10]*45 + local_buf_213[13])^local_buf_213[3];
        copy_len_213 = (copy_len_213 % 111) + 4;
        memcpy(buf_213, local_buf_213, copy_len_213);
    }

    free(local_buf_213);
    if (*x_213 > 0) {
        *x_213 -= 1;
        obf_func_191(x_213, data_213, data_len_213);
    }
}

void obf_func_227(int *x_227, unsigned char *data_227, size_t data_len_227) {
    char buf_227[114];
    unsigned char* local_buf_227 = (unsigned char*)malloc(514);
    if (!local_buf_227) return;
    for (int j = 0; j < 514; j++) {
        local_buf_227[j] = j < data_len_227 ? data_227[j] : 0;
    }

    unsigned char check_227 = (unsigned char)((uint32_t)local_buf_227[8] * 53 + local_buf_227[6]) ^ local_buf_227[1];
    if (data_len_227 > 8 && check_227 == 0x97) {
        size_t copy_len_227 = ((uint32_t)local_buf_227[12]*57 + local_buf_227[4])^local_buf_227[7];
        copy_len_227 = (copy_len_227 % 114) + 1;
        memcpy(buf_227, local_buf_227, copy_len_227);
    }

    free(local_buf_227);
    if (*x_227 > 0) {
        *x_227 -= 1;
        obf_func_48(x_227, data_227, data_len_227);
    }
}

void obf_func_171(int *x_171, unsigned char *data_171, size_t data_len_171) {
    char buf_171[114];
    unsigned char* local_buf_171 = (unsigned char*)malloc(514);
    if (!local_buf_171) return;
    for (int j = 0; j < 514; j++) {
        local_buf_171[j] = j < data_len_171 ? data_171[j] : 0;
    }

    unsigned char check_171 = (unsigned char)((uint32_t)local_buf_171[5] * 37 + local_buf_171[11]) ^ local_buf_171[12];
    if (data_len_171 > 12 && check_171 == 0x90) {
        size_t copy_len_171 = ((uint32_t)local_buf_171[14]*39 + local_buf_171[15])^local_buf_171[13];
        copy_len_171 = (copy_len_171 % 113) + 2;
        memcpy(buf_171, local_buf_171, copy_len_171);
    }

    free(local_buf_171);
    if (*x_171 > 0) {
        *x_171 -= 1;
        obf_func_46(x_171, data_171, data_len_171);
    }
}

void obf_func_181(int *x_181, unsigned char *data_181, size_t data_len_181) {
    char buf_181[114];
    unsigned char* local_buf_181 = (unsigned char*)malloc(514);
    if (!local_buf_181) return;
    for (int j = 0; j < 514; j++) {
        local_buf_181[j] = j < data_len_181 ? data_181[j] : 0;
    }

    unsigned char check_181 = (unsigned char)((uint32_t)local_buf_181[4] * 43 + local_buf_181[14]) ^ local_buf_181[5];
    if (data_len_181 > 14 && check_181 == 0x25) {
        size_t copy_len_181 = ((uint32_t)local_buf_181[2]*57 + local_buf_181[11])^local_buf_181[7];
        copy_len_181 = (copy_len_181 % 110) + 5;
        memcpy(buf_181, local_buf_181, copy_len_181);
    }

    free(local_buf_181);
    if (*x_181 > 0) {
        *x_181 -= 1;
        obf_func_161(x_181, data_181, data_len_181);
    }
}

void obf_func_291(int *x_291, unsigned char *data_291, size_t data_len_291) {
    char buf_291[114];
    unsigned char* local_buf_291 = (unsigned char*)malloc(514);
    if (!local_buf_291) return;
    for (int j = 0; j < 514; j++) {
        local_buf_291[j] = j < data_len_291 ? data_291[j] : 0;
    }

    unsigned char check_291 = (unsigned char)((uint32_t)local_buf_291[12] * 41 + local_buf_291[2]) ^ local_buf_291[10];
    if (data_len_291 > 12 && check_291 == 0xcd) {
        size_t copy_len_291 = ((uint32_t)local_buf_291[6]*55 + local_buf_291[4])^local_buf_291[14];
        copy_len_291 = (copy_len_291 % 106) + 9;
        memcpy(buf_291, local_buf_291, copy_len_291);
    }

    free(local_buf_291);
    if (*x_291 > 0) {
        *x_291 -= 1;
        obf_func_14(x_291, data_291, data_len_291);
    }
}

void obf_func_146(int *x_146, unsigned char *data_146, size_t data_len_146) {
    char buf_146[114];
    unsigned char* local_buf_146 = (unsigned char*)malloc(514);
    if (!local_buf_146) return;
    for (int j = 0; j < 514; j++) {
        local_buf_146[j] = j < data_len_146 ? data_146[j] : 0;
    }

    unsigned char check_146 = (unsigned char)((uint32_t)local_buf_146[12] * 37 + local_buf_146[6]) ^ local_buf_146[9];
    if (data_len_146 > 12 && check_146 == 0x73) {
        size_t copy_len_146 = ((uint32_t)local_buf_146[4]*55 + local_buf_146[2])^local_buf_146[10];
        copy_len_146 = (copy_len_146 % 101) + 14;
        memcpy(buf_146, local_buf_146, copy_len_146);
    }

    free(local_buf_146);
    if (*x_146 > 0) {
        *x_146 -= 1;
        obf_func_165(x_146, data_146, data_len_146);
    }
}

void obf_func_66(int *x_66, unsigned char *data_66, size_t data_len_66) {
    char buf_66[114];
    unsigned char* local_buf_66 = (unsigned char*)malloc(514);
    if (!local_buf_66) return;
    for (int j = 0; j < 514; j++) {
        local_buf_66[j] = j < data_len_66 ? data_66[j] : 0;
    }

    unsigned char check_66 = (unsigned char)((uint32_t)local_buf_66[5] * 41 + local_buf_66[8]) ^ local_buf_66[2];
    if (data_len_66 > 8 && check_66 == 0x90) {
        size_t copy_len_66 = ((uint32_t)local_buf_66[7]*33 + local_buf_66[6])^local_buf_66[14];
        copy_len_66 = (copy_len_66 % 108) + 7;
        memcpy(buf_66, local_buf_66, copy_len_66);
    }

    free(local_buf_66);
    if (*x_66 > 0) {
        *x_66 -= 1;
        obf_func_222(x_66, data_66, data_len_66);
    }
}

void obf_func_39(int *x_39, unsigned char *data_39, size_t data_len_39) {
    char buf_39[114];
    unsigned char* local_buf_39 = (unsigned char*)malloc(514);
    if (!local_buf_39) return;
    for (int j = 0; j < 514; j++) {
        local_buf_39[j] = j < data_len_39 ? data_39[j] : 0;
    }

    unsigned char check_39 = (unsigned char)((uint32_t)local_buf_39[15] * 47 + local_buf_39[8]) ^ local_buf_39[1];
    if (data_len_39 > 15 && check_39 == 0x0d) {
        size_t copy_len_39 = ((uint32_t)local_buf_39[5]*55 + local_buf_39[11])^local_buf_39[14];
        copy_len_39 = (copy_len_39 % 114) + 1;
        memcpy(buf_39, local_buf_39, copy_len_39);
    }

    free(local_buf_39);
    if (*x_39 > 0) {
        *x_39 -= 1;
        obf_func_156(x_39, data_39, data_len_39);
    }
}

void obf_func_265(int *x_265, unsigned char *data_265, size_t data_len_265) {
    char buf_265[114];
    unsigned char* local_buf_265 = (unsigned char*)malloc(514);
    if (!local_buf_265) return;
    for (int j = 0; j < 514; j++) {
        local_buf_265[j] = j < data_len_265 ? data_265[j] : 0;
    }

    unsigned char check_265 = (unsigned char)((uint32_t)local_buf_265[1] * 41 + local_buf_265[6]) ^ local_buf_265[15];
    if (data_len_265 > 15 && check_265 == 0xae) {
        size_t copy_len_265 = ((uint32_t)local_buf_265[8]*39 + local_buf_265[5])^local_buf_265[14];
        copy_len_265 = (copy_len_265 % 106) + 9;
        memcpy(buf_265, local_buf_265, copy_len_265);
    }

    free(local_buf_265);
    if (*x_265 > 0) {
        *x_265 -= 1;
        obf_func_186(x_265, data_265, data_len_265);
    }
}

void obf_func_251(int *x_251, unsigned char *data_251, size_t data_len_251) {
    char buf_251[114];
    unsigned char* local_buf_251 = (unsigned char*)malloc(514);
    if (!local_buf_251) return;
    for (int j = 0; j < 514; j++) {
        local_buf_251[j] = j < data_len_251 ? data_251[j] : 0;
    }

    unsigned char check_251 = (unsigned char)((uint32_t)local_buf_251[13] * 41 + local_buf_251[3]) ^ local_buf_251[1];
    if (data_len_251 > 13 && check_251 == 0x40) {
        size_t copy_len_251 = ((uint32_t)local_buf_251[14]*39 + local_buf_251[10])^local_buf_251[9];
        copy_len_251 = (copy_len_251 % 101) + 14;
        memcpy(buf_251, local_buf_251, copy_len_251);
    }

    free(local_buf_251);
    if (*x_251 > 0) {
        *x_251 -= 1;
        obf_func_124(x_251, data_251, data_len_251);
    }
}

void obf_func_131(int *x_131, unsigned char *data_131, size_t data_len_131) {
    char buf_131[114];
    unsigned char* local_buf_131 = (unsigned char*)malloc(514);
    if (!local_buf_131) return;
    for (int j = 0; j < 514; j++) {
        local_buf_131[j] = j < data_len_131 ? data_131[j] : 0;
    }

    unsigned char check_131 = (unsigned char)((uint32_t)local_buf_131[1] * 61 + local_buf_131[8]) ^ local_buf_131[4];
    if (data_len_131 > 8 && check_131 == 0x2b) {
        size_t copy_len_131 = ((uint32_t)local_buf_131[11]*33 + local_buf_131[15])^local_buf_131[9];
        copy_len_131 = (copy_len_131 % 104) + 11;
        memcpy(buf_131, local_buf_131, copy_len_131);
    }

    free(local_buf_131);
    if (*x_131 > 0) {
        *x_131 -= 1;
        obf_func_30(x_131, data_131, data_len_131);
    }
}

void obf_func_298(int *x_298, unsigned char *data_298, size_t data_len_298) {
    char buf_298[114];
    unsigned char* local_buf_298 = (unsigned char*)malloc(514);
    if (!local_buf_298) return;
    for (int j = 0; j < 514; j++) {
        local_buf_298[j] = j < data_len_298 ? data_298[j] : 0;
    }

    unsigned char check_298 = (unsigned char)((uint32_t)local_buf_298[11] * 47 + local_buf_298[12]) ^ local_buf_298[2];
    if (data_len_298 > 12 && check_298 == 0x84) {
        size_t copy_len_298 = ((uint32_t)local_buf_298[7]*51 + local_buf_298[3])^local_buf_298[15];
        copy_len_298 = (copy_len_298 % 105) + 10;
        memcpy(buf_298, local_buf_298, copy_len_298);
    }

    free(local_buf_298);
    if (*x_298 > 0) {
        *x_298 -= 1;
        obf_func_170(x_298, data_298, data_len_298);
    }
}

void obf_func_300(int *x_300, unsigned char *data_300, size_t data_len_300) {
    char buf_300[114];
    unsigned char* local_buf_300 = (unsigned char*)malloc(514);
    if (!local_buf_300) return;
    for (int j = 0; j < 514; j++) {
        local_buf_300[j] = j < data_len_300 ? data_300[j] : 0;
    }

    unsigned char check_300 = (unsigned char)((uint32_t)local_buf_300[1] * 43 + local_buf_300[6]) ^ local_buf_300[11];
    if (data_len_300 > 11 && check_300 == 0xa7) {
        size_t copy_len_300 = ((uint32_t)local_buf_300[15]*33 + local_buf_300[5])^local_buf_300[14];
        copy_len_300 = (copy_len_300 % 111) + 4;
        memcpy(buf_300, local_buf_300, copy_len_300);
    }

    free(local_buf_300);
    if (*x_300 > 0) {
        *x_300 -= 1;
        obf_func_223(x_300, data_300, data_len_300);
    }
}

void obf_func_82(int *x_82, unsigned char *data_82, size_t data_len_82) {
    char buf_82[114];
    unsigned char* local_buf_82 = (unsigned char*)malloc(514);
    if (!local_buf_82) return;
    for (int j = 0; j < 514; j++) {
        local_buf_82[j] = j < data_len_82 ? data_82[j] : 0;
    }

    unsigned char check_82 = (unsigned char)((uint32_t)local_buf_82[10] * 37 + local_buf_82[3]) ^ local_buf_82[11];
    if (data_len_82 > 11 && check_82 == 0x80) {
        size_t copy_len_82 = ((uint32_t)local_buf_82[1]*33 + local_buf_82[13])^local_buf_82[9];
        copy_len_82 = (copy_len_82 % 107) + 8;
        memcpy(buf_82, local_buf_82, copy_len_82);
    }

    free(local_buf_82);
    if (*x_82 > 0) {
        *x_82 -= 1;
        obf_func_185(x_82, data_82, data_len_82);
    }
}

void obf_func_3(int *x_3, unsigned char *data_3, size_t data_len_3) {
    char buf_3[114];
    unsigned char* local_buf_3 = (unsigned char*)malloc(514);
    if (!local_buf_3) return;
    for (int j = 0; j < 514; j++) {
        local_buf_3[j] = j < data_len_3 ? data_3[j] : 0;
    }

    unsigned char check_3 = (unsigned char)((uint32_t)local_buf_3[4] * 47 + local_buf_3[3]) ^ local_buf_3[8];
    if (data_len_3 > 8 && check_3 == 0x6c) {
        size_t copy_len_3 = ((uint32_t)local_buf_3[15]*29 + local_buf_3[7])^local_buf_3[1];
        copy_len_3 = (copy_len_3 % 104) + 11;
        memcpy(buf_3, local_buf_3, copy_len_3);
    }

    free(local_buf_3);
    if (*x_3 > 0) {
        *x_3 -= 1;
        obf_func_50(x_3, data_3, data_len_3);
    }
}

void obf_func_280(int *x_280, unsigned char *data_280, size_t data_len_280) {
    char buf_280[114];
    unsigned char* local_buf_280 = (unsigned char*)malloc(514);
    if (!local_buf_280) return;
    for (int j = 0; j < 514; j++) {
        local_buf_280[j] = j < data_len_280 ? data_280[j] : 0;
    }

    unsigned char check_280 = (unsigned char)((uint32_t)local_buf_280[6] * 31 + local_buf_280[10]) ^ local_buf_280[14];
    if (data_len_280 > 14 && check_280 == 0x9f) {
        size_t copy_len_280 = ((uint32_t)local_buf_280[1]*45 + local_buf_280[7])^local_buf_280[5];
        copy_len_280 = (copy_len_280 % 114) + 1;
        memcpy(buf_280, local_buf_280, copy_len_280);
    }

    free(local_buf_280);
    if (*x_280 > 0) {
        *x_280 -= 1;
        obf_func_37(x_280, data_280, data_len_280);
    }
}

void obf_func_53(int *x_53, unsigned char *data_53, size_t data_len_53) {
    char buf_53[114];
    unsigned char* local_buf_53 = (unsigned char*)malloc(514);
    if (!local_buf_53) return;
    for (int j = 0; j < 514; j++) {
        local_buf_53[j] = j < data_len_53 ? data_53[j] : 0;
    }

    unsigned char check_53 = (unsigned char)((uint32_t)local_buf_53[2] * 59 + local_buf_53[10]) ^ local_buf_53[14];
    if (data_len_53 > 14 && check_53 == 0x08) {
        size_t copy_len_53 = ((uint32_t)local_buf_53[5]*33 + local_buf_53[12])^local_buf_53[7];
        copy_len_53 = (copy_len_53 % 105) + 10;
        memcpy(buf_53, local_buf_53, copy_len_53);
    }

    free(local_buf_53);
    if (*x_53 > 0) {
        *x_53 -= 1;
        obf_func_176(x_53, data_53, data_len_53);
    }
}

void obf_func_50(int *x_50, unsigned char *data_50, size_t data_len_50) {
    char buf_50[114];
    unsigned char* local_buf_50 = (unsigned char*)malloc(514);
    if (!local_buf_50) return;
    for (int j = 0; j < 514; j++) {
        local_buf_50[j] = j < data_len_50 ? data_50[j] : 0;
    }

    unsigned char check_50 = (unsigned char)((uint32_t)local_buf_50[4] * 43 + local_buf_50[1]) ^ local_buf_50[7];
    if (data_len_50 > 7 && check_50 == 0xb2) {
        size_t copy_len_50 = ((uint32_t)local_buf_50[11]*57 + local_buf_50[9])^local_buf_50[14];
        copy_len_50 = (copy_len_50 % 102) + 13;
        memcpy(buf_50, local_buf_50, copy_len_50);
    }

    free(local_buf_50);
    if (*x_50 > 0) {
        *x_50 -= 1;
        obf_func_286(x_50, data_50, data_len_50);
    }
}

void obf_func_15(int *x_15, unsigned char *data_15, size_t data_len_15) {
    char buf_15[114];
    unsigned char* local_buf_15 = (unsigned char*)malloc(514);
    if (!local_buf_15) return;
    for (int j = 0; j < 514; j++) {
        local_buf_15[j] = j < data_len_15 ? data_15[j] : 0;
    }

    unsigned char check_15 = (unsigned char)((uint32_t)local_buf_15[13] * 59 + local_buf_15[12]) ^ local_buf_15[5];
    if (data_len_15 > 13 && check_15 == 0xae) {
        size_t copy_len_15 = ((uint32_t)local_buf_15[11]*39 + local_buf_15[14])^local_buf_15[9];
        copy_len_15 = (copy_len_15 % 113) + 2;
        memcpy(buf_15, local_buf_15, copy_len_15);
    }

    free(local_buf_15);
    if (*x_15 > 0) {
        *x_15 -= 1;
        obf_func_209(x_15, data_15, data_len_15);
    }
}

void obf_func_23(int *x_23, unsigned char *data_23, size_t data_len_23) {
    char buf_23[114];
    unsigned char* local_buf_23 = (unsigned char*)malloc(514);
    if (!local_buf_23) return;
    for (int j = 0; j < 514; j++) {
        local_buf_23[j] = j < data_len_23 ? data_23[j] : 0;
    }

    unsigned char check_23 = (unsigned char)((uint32_t)local_buf_23[8] * 41 + local_buf_23[7]) ^ local_buf_23[2];
    if (data_len_23 > 8 && check_23 == 0x9c) {
        size_t copy_len_23 = ((uint32_t)local_buf_23[6]*51 + local_buf_23[5])^local_buf_23[11];
        copy_len_23 = (copy_len_23 % 105) + 10;
        memcpy(buf_23, local_buf_23, copy_len_23);
    }

    free(local_buf_23);
    if (*x_23 > 0) {
        *x_23 -= 1;
        obf_func_32(x_23, data_23, data_len_23);
    }
}

void obf_func_97(int *x_97, unsigned char *data_97, size_t data_len_97) {
    char buf_97[114];
    unsigned char* local_buf_97 = (unsigned char*)malloc(514);
    if (!local_buf_97) return;
    for (int j = 0; j < 514; j++) {
        local_buf_97[j] = j < data_len_97 ? data_97[j] : 0;
    }

    unsigned char check_97 = (unsigned char)((uint32_t)local_buf_97[13] * 47 + local_buf_97[15]) ^ local_buf_97[8];
    if (data_len_97 > 15 && check_97 == 0xf6) {
        size_t copy_len_97 = ((uint32_t)local_buf_97[4]*35 + local_buf_97[9])^local_buf_97[6];
        copy_len_97 = (copy_len_97 % 111) + 4;
        memcpy(buf_97, local_buf_97, copy_len_97);
    }

    free(local_buf_97);
    if (*x_97 > 0) {
        *x_97 -= 1;
        obf_func_249(x_97, data_97, data_len_97);
    }
}

void obf_func_96(int *x_96, unsigned char *data_96, size_t data_len_96) {
    char buf_96[114];
    unsigned char* local_buf_96 = (unsigned char*)malloc(514);
    if (!local_buf_96) return;
    for (int j = 0; j < 514; j++) {
        local_buf_96[j] = j < data_len_96 ? data_96[j] : 0;
    }

    unsigned char check_96 = (unsigned char)((uint32_t)local_buf_96[9] * 37 + local_buf_96[3]) ^ local_buf_96[1];
    if (data_len_96 > 9 && check_96 == 0xd3) {
        size_t copy_len_96 = ((uint32_t)local_buf_96[6]*51 + local_buf_96[11])^local_buf_96[8];
        copy_len_96 = (copy_len_96 % 107) + 8;
        memcpy(buf_96, local_buf_96, copy_len_96);
    }

    free(local_buf_96);
    if (*x_96 > 0) {
        *x_96 -= 1;
        obf_func_78(x_96, data_96, data_len_96);
    }
}

void obf_func_200(int *x_200, unsigned char *data_200, size_t data_len_200) {
    char buf_200[114];
    unsigned char* local_buf_200 = (unsigned char*)malloc(514);
    if (!local_buf_200) return;
    for (int j = 0; j < 514; j++) {
        local_buf_200[j] = j < data_len_200 ? data_200[j] : 0;
    }

    unsigned char check_200 = (unsigned char)((uint32_t)local_buf_200[12] * 53 + local_buf_200[9]) ^ local_buf_200[10];
    if (data_len_200 > 12 && check_200 == 0x66) {
        size_t copy_len_200 = ((uint32_t)local_buf_200[1]*29 + local_buf_200[15])^local_buf_200[14];
        copy_len_200 = (copy_len_200 % 110) + 5;
        memcpy(buf_200, local_buf_200, copy_len_200);
    }

    free(local_buf_200);
    if (*x_200 > 0) {
        *x_200 -= 1;
        obf_func_258(x_200, data_200, data_len_200);
    }
}

void obf_func_150(int *x_150, unsigned char *data_150, size_t data_len_150) {
    char buf_150[114];
    unsigned char* local_buf_150 = (unsigned char*)malloc(514);
    if (!local_buf_150) return;
    for (int j = 0; j < 514; j++) {
        local_buf_150[j] = j < data_len_150 ? data_150[j] : 0;
    }

    unsigned char check_150 = (unsigned char)((uint32_t)local_buf_150[6] * 31 + local_buf_150[7]) ^ local_buf_150[11];
    if (data_len_150 > 11 && check_150 == 0xf2) {
        size_t copy_len_150 = ((uint32_t)local_buf_150[3]*45 + local_buf_150[2])^local_buf_150[5];
        copy_len_150 = (copy_len_150 % 102) + 13;
        memcpy(buf_150, local_buf_150, copy_len_150);
    }

    free(local_buf_150);
    if (*x_150 > 0) {
        *x_150 -= 1;
        obf_func_254(x_150, data_150, data_len_150);
    }
}

void obf_func_151(int *x_151, unsigned char *data_151, size_t data_len_151) {
    char buf_151[114];
    unsigned char* local_buf_151 = (unsigned char*)malloc(514);
    if (!local_buf_151) return;
    for (int j = 0; j < 514; j++) {
        local_buf_151[j] = j < data_len_151 ? data_151[j] : 0;
    }

    unsigned char check_151 = (unsigned char)((uint32_t)local_buf_151[3] * 37 + local_buf_151[13]) ^ local_buf_151[4];
    if (data_len_151 > 13 && check_151 == 0x92) {
        size_t copy_len_151 = ((uint32_t)local_buf_151[5]*57 + local_buf_151[9])^local_buf_151[6];
        copy_len_151 = (copy_len_151 % 113) + 2;
        memcpy(buf_151, local_buf_151, copy_len_151);
    }

    free(local_buf_151);
    if (*x_151 > 0) {
        *x_151 -= 1;
        obf_func_206(x_151, data_151, data_len_151);
    }
}

void obf_func_205(int *x_205, unsigned char *data_205, size_t data_len_205) {
    char buf_205[114];
    unsigned char* local_buf_205 = (unsigned char*)malloc(514);
    if (!local_buf_205) return;
    for (int j = 0; j < 514; j++) {
        local_buf_205[j] = j < data_len_205 ? data_205[j] : 0;
    }

    unsigned char check_205 = (unsigned char)((uint32_t)local_buf_205[9] * 37 + local_buf_205[2]) ^ local_buf_205[1];
    if (data_len_205 > 9 && check_205 == 0xf7) {
        size_t copy_len_205 = ((uint32_t)local_buf_205[6]*45 + local_buf_205[11])^local_buf_205[4];
        copy_len_205 = (copy_len_205 % 105) + 10;
        memcpy(buf_205, local_buf_205, copy_len_205);
    }

    free(local_buf_205);
    if (*x_205 > 0) {
        *x_205 -= 1;
        obf_func_153(x_205, data_205, data_len_205);
    }
}

void obf_func_187(int *x_187, unsigned char *data_187, size_t data_len_187) {
    char buf_187[114];
    unsigned char* local_buf_187 = (unsigned char*)malloc(514);
    if (!local_buf_187) return;
    for (int j = 0; j < 514; j++) {
        local_buf_187[j] = j < data_len_187 ? data_187[j] : 0;
    }

    unsigned char check_187 = (unsigned char)((uint32_t)local_buf_187[15] * 31 + local_buf_187[9]) ^ local_buf_187[12];
    if (data_len_187 > 15 && check_187 == 0xef) {
        size_t copy_len_187 = ((uint32_t)local_buf_187[7]*29 + local_buf_187[13])^local_buf_187[4];
        copy_len_187 = (copy_len_187 % 103) + 12;
        memcpy(buf_187, local_buf_187, copy_len_187);
    }

    free(local_buf_187);
    if (*x_187 > 0) {
        *x_187 -= 1;
        obf_func_190(x_187, data_187, data_len_187);
    }
}

void obf_func_93(int *x_93, unsigned char *data_93, size_t data_len_93) {
    char buf_93[114];
    unsigned char* local_buf_93 = (unsigned char*)malloc(514);
    if (!local_buf_93) return;
    for (int j = 0; j < 514; j++) {
        local_buf_93[j] = j < data_len_93 ? data_93[j] : 0;
    }

    unsigned char check_93 = (unsigned char)((uint32_t)local_buf_93[13] * 37 + local_buf_93[9]) ^ local_buf_93[12];
    if (data_len_93 > 13 && check_93 == 0x40) {
        size_t copy_len_93 = ((uint32_t)local_buf_93[4]*55 + local_buf_93[1])^local_buf_93[14];
        copy_len_93 = (copy_len_93 % 110) + 5;
        memcpy(buf_93, local_buf_93, copy_len_93);
    }

    free(local_buf_93);
    if (*x_93 > 0) {
        *x_93 -= 1;
        obf_func_266(x_93, data_93, data_len_93);
    }
}

void obf_func_166(int *x_166, unsigned char *data_166, size_t data_len_166) {
    char buf_166[114];
    unsigned char* local_buf_166 = (unsigned char*)malloc(514);
    if (!local_buf_166) return;
    for (int j = 0; j < 514; j++) {
        local_buf_166[j] = j < data_len_166 ? data_166[j] : 0;
    }

    unsigned char check_166 = (unsigned char)((uint32_t)local_buf_166[1] * 59 + local_buf_166[11]) ^ local_buf_166[4];
    if (data_len_166 > 11 && check_166 == 0x39) {
        size_t copy_len_166 = ((uint32_t)local_buf_166[13]*33 + local_buf_166[10])^local_buf_166[3];
        copy_len_166 = (copy_len_166 % 101) + 14;
        memcpy(buf_166, local_buf_166, copy_len_166);
    }

    free(local_buf_166);
    if (*x_166 > 0) {
        *x_166 -= 1;
        obf_func_283(x_166, data_166, data_len_166);
    }
}

void obf_func_75(int *x_75, unsigned char *data_75, size_t data_len_75) {
    char buf_75[114];
    unsigned char* local_buf_75 = (unsigned char*)malloc(514);
    if (!local_buf_75) return;
    for (int j = 0; j < 514; j++) {
        local_buf_75[j] = j < data_len_75 ? data_75[j] : 0;
    }

    unsigned char check_75 = (unsigned char)((uint32_t)local_buf_75[3] * 31 + local_buf_75[8]) ^ local_buf_75[7];
    if (data_len_75 > 8 && check_75 == 0x37) {
        size_t copy_len_75 = ((uint32_t)local_buf_75[9]*33 + local_buf_75[10])^local_buf_75[6];
        copy_len_75 = (copy_len_75 % 100) + 15;
        memcpy(buf_75, local_buf_75, copy_len_75);
    }

    free(local_buf_75);
    if (*x_75 > 0) {
        *x_75 -= 1;
        obf_func_34(x_75, data_75, data_len_75);
    }
}

void obf_func_138(int *x_138, unsigned char *data_138, size_t data_len_138) {
    char buf_138[114];
    unsigned char* local_buf_138 = (unsigned char*)malloc(514);
    if (!local_buf_138) return;
    for (int j = 0; j < 514; j++) {
        local_buf_138[j] = j < data_len_138 ? data_138[j] : 0;
    }

    unsigned char check_138 = (unsigned char)((uint32_t)local_buf_138[2] * 43 + local_buf_138[5]) ^ local_buf_138[14];
    if (data_len_138 > 14 && check_138 == 0x4e) {
        size_t copy_len_138 = ((uint32_t)local_buf_138[1]*51 + local_buf_138[7])^local_buf_138[3];
        copy_len_138 = (copy_len_138 % 112) + 3;
        memcpy(buf_138, local_buf_138, copy_len_138);
    }

    free(local_buf_138);
    if (*x_138 > 0) {
        *x_138 -= 1;
        obf_func_93(x_138, data_138, data_len_138);
    }
}

void obf_func_272(int *x_272, unsigned char *data_272, size_t data_len_272) {
    char buf_272[114];
    unsigned char* local_buf_272 = (unsigned char*)malloc(514);
    if (!local_buf_272) return;
    for (int j = 0; j < 514; j++) {
        local_buf_272[j] = j < data_len_272 ? data_272[j] : 0;
    }

    unsigned char check_272 = (unsigned char)((uint32_t)local_buf_272[5] * 47 + local_buf_272[6]) ^ local_buf_272[10];
    if (data_len_272 > 10 && check_272 == 0x6c) {
        size_t copy_len_272 = ((uint32_t)local_buf_272[7]*29 + local_buf_272[12])^local_buf_272[1];
        copy_len_272 = (copy_len_272 % 113) + 2;
        memcpy(buf_272, local_buf_272, copy_len_272);
    }

    free(local_buf_272);
    if (*x_272 > 0) {
        *x_272 -= 1;
        obf_func_4(x_272, data_272, data_len_272);
    }
}

void obf_func_173(int *x_173, unsigned char *data_173, size_t data_len_173) {
    char buf_173[114];
    unsigned char* local_buf_173 = (unsigned char*)malloc(514);
    if (!local_buf_173) return;
    for (int j = 0; j < 514; j++) {
        local_buf_173[j] = j < data_len_173 ? data_173[j] : 0;
    }

    unsigned char check_173 = (unsigned char)((uint32_t)local_buf_173[9] * 53 + local_buf_173[11]) ^ local_buf_173[12];
    if (data_len_173 > 12 && check_173 == 0x3a) {
        size_t copy_len_173 = ((uint32_t)local_buf_173[15]*39 + local_buf_173[8])^local_buf_173[1];
        copy_len_173 = (copy_len_173 % 112) + 3;
        memcpy(buf_173, local_buf_173, copy_len_173);
    }

    free(local_buf_173);
    if (*x_173 > 0) {
        *x_173 -= 1;
        obf_func_168(x_173, data_173, data_len_173);
    }
}

void obf_func_36(int *x_36, unsigned char *data_36, size_t data_len_36) {
    char buf_36[114];
    unsigned char* local_buf_36 = (unsigned char*)malloc(514);
    if (!local_buf_36) return;
    for (int j = 0; j < 514; j++) {
        local_buf_36[j] = j < data_len_36 ? data_36[j] : 0;
    }

    unsigned char check_36 = (unsigned char)((uint32_t)local_buf_36[6] * 61 + local_buf_36[7]) ^ local_buf_36[12];
    if (data_len_36 > 12 && check_36 == 0x30) {
        size_t copy_len_36 = ((uint32_t)local_buf_36[10]*29 + local_buf_36[5])^local_buf_36[4];
        copy_len_36 = (copy_len_36 % 107) + 8;
        memcpy(buf_36, local_buf_36, copy_len_36);
    }

    free(local_buf_36);
    if (*x_36 > 0) {
        *x_36 -= 1;
        obf_func_43(x_36, data_36, data_len_36);
    }
}

void obf_func_234(int *x_234, unsigned char *data_234, size_t data_len_234) {
    char buf_234[114];
    unsigned char* local_buf_234 = (unsigned char*)malloc(514);
    if (!local_buf_234) return;
    for (int j = 0; j < 514; j++) {
        local_buf_234[j] = j < data_len_234 ? data_234[j] : 0;
    }

    unsigned char check_234 = (unsigned char)((uint32_t)local_buf_234[8] * 53 + local_buf_234[6]) ^ local_buf_234[14];
    if (data_len_234 > 14 && check_234 == 0x88) {
        size_t copy_len_234 = ((uint32_t)local_buf_234[1]*35 + local_buf_234[3])^local_buf_234[4];
        copy_len_234 = (copy_len_234 % 110) + 5;
        memcpy(buf_234, local_buf_234, copy_len_234);
    }

    free(local_buf_234);
    if (*x_234 > 0) {
        *x_234 -= 1;
        obf_func_291(x_234, data_234, data_len_234);
    }
}

void obf_func_89(int *x_89, unsigned char *data_89, size_t data_len_89) {
    char buf_89[114];
    unsigned char* local_buf_89 = (unsigned char*)malloc(514);
    if (!local_buf_89) return;
    for (int j = 0; j < 514; j++) {
        local_buf_89[j] = j < data_len_89 ? data_89[j] : 0;
    }

    unsigned char check_89 = (unsigned char)((uint32_t)local_buf_89[9] * 47 + local_buf_89[8]) ^ local_buf_89[2];
    if (data_len_89 > 9 && check_89 == 0x77) {
        size_t copy_len_89 = ((uint32_t)local_buf_89[7]*29 + local_buf_89[4])^local_buf_89[1];
        copy_len_89 = (copy_len_89 % 104) + 11;
        memcpy(buf_89, local_buf_89, copy_len_89);
    }

    free(local_buf_89);
    if (*x_89 > 0) {
        *x_89 -= 1;
        obf_func_106(x_89, data_89, data_len_89);
    }
}

void obf_func_282(int *x_282, unsigned char *data_282, size_t data_len_282) {
    char buf_282[114];
    unsigned char* local_buf_282 = (unsigned char*)malloc(514);
    if (!local_buf_282) return;
    for (int j = 0; j < 514; j++) {
        local_buf_282[j] = j < data_len_282 ? data_282[j] : 0;
    }

    unsigned char check_282 = (unsigned char)((uint32_t)local_buf_282[14] * 53 + local_buf_282[5]) ^ local_buf_282[7];
    if (data_len_282 > 14 && check_282 == 0xe7) {
        size_t copy_len_282 = ((uint32_t)local_buf_282[15]*35 + local_buf_282[11])^local_buf_282[10];
        copy_len_282 = (copy_len_282 % 104) + 11;
        memcpy(buf_282, local_buf_282, copy_len_282);
    }

    free(local_buf_282);
    if (*x_282 > 0) {
        *x_282 -= 1;
        obf_func_296(x_282, data_282, data_len_282);
    }
}

void obf_func_274(int *x_274, unsigned char *data_274, size_t data_len_274) {
    char buf_274[114];
    unsigned char* local_buf_274 = (unsigned char*)malloc(514);
    if (!local_buf_274) return;
    for (int j = 0; j < 514; j++) {
        local_buf_274[j] = j < data_len_274 ? data_274[j] : 0;
    }

    unsigned char check_274 = (unsigned char)((uint32_t)local_buf_274[11] * 59 + local_buf_274[9]) ^ local_buf_274[13];
    if (data_len_274 > 13 && check_274 == 0x22) {
        size_t copy_len_274 = ((uint32_t)local_buf_274[12]*57 + local_buf_274[3])^local_buf_274[10];
        copy_len_274 = (copy_len_274 % 102) + 13;
        memcpy(buf_274, local_buf_274, copy_len_274);
    }

    free(local_buf_274);
    if (*x_274 > 0) {
        *x_274 -= 1;
        obf_func_184(x_274, data_274, data_len_274);
    }
}

void obf_func_237(int *x_237, unsigned char *data_237, size_t data_len_237) {
    char buf_237[114];
    unsigned char* local_buf_237 = (unsigned char*)malloc(514);
    if (!local_buf_237) return;
    for (int j = 0; j < 514; j++) {
        local_buf_237[j] = j < data_len_237 ? data_237[j] : 0;
    }

    unsigned char check_237 = (unsigned char)((uint32_t)local_buf_237[2] * 47 + local_buf_237[12]) ^ local_buf_237[8];
    if (data_len_237 > 12 && check_237 == 0xb6) {
        size_t copy_len_237 = ((uint32_t)local_buf_237[11]*51 + local_buf_237[15])^local_buf_237[7];
        copy_len_237 = (copy_len_237 % 108) + 7;
        memcpy(buf_237, local_buf_237, copy_len_237);
    }

    free(local_buf_237);
    if (*x_237 > 0) {
        *x_237 -= 1;
        obf_func_253(x_237, data_237, data_len_237);
    }
}

void obf_func_27(int *x_27, unsigned char *data_27, size_t data_len_27) {
    char buf_27[114];
    unsigned char* local_buf_27 = (unsigned char*)malloc(514);
    if (!local_buf_27) return;
    for (int j = 0; j < 514; j++) {
        local_buf_27[j] = j < data_len_27 ? data_27[j] : 0;
    }

    unsigned char check_27 = (unsigned char)((uint32_t)local_buf_27[3] * 43 + local_buf_27[11]) ^ local_buf_27[4];
    if (data_len_27 > 11 && check_27 == 0x69) {
        size_t copy_len_27 = ((uint32_t)local_buf_27[7]*51 + local_buf_27[9])^local_buf_27[5];
        copy_len_27 = (copy_len_27 % 110) + 5;
        memcpy(buf_27, local_buf_27, copy_len_27);
    }

    free(local_buf_27);
    if (*x_27 > 0) {
        *x_27 -= 1;
        obf_func_226(x_27, data_27, data_len_27);
    }
}

void obf_func_71(int *x_71, unsigned char *data_71, size_t data_len_71) {
    char buf_71[114];
    unsigned char* local_buf_71 = (unsigned char*)malloc(514);
    if (!local_buf_71) return;
    for (int j = 0; j < 514; j++) {
        local_buf_71[j] = j < data_len_71 ? data_71[j] : 0;
    }

    unsigned char check_71 = (unsigned char)((uint32_t)local_buf_71[11] * 31 + local_buf_71[7]) ^ local_buf_71[5];
    if (data_len_71 > 11 && check_71 == 0xfa) {
        size_t copy_len_71 = ((uint32_t)local_buf_71[6]*57 + local_buf_71[14])^local_buf_71[10];
        copy_len_71 = (copy_len_71 % 109) + 6;
        memcpy(buf_71, local_buf_71, copy_len_71);
    }

    free(local_buf_71);
    if (*x_71 > 0) {
        *x_71 -= 1;
        obf_func_80(x_71, data_71, data_len_71);
    }
}

void obf_func_168(int *x_168, unsigned char *data_168, size_t data_len_168) {
    char buf_168[114];
    unsigned char* local_buf_168 = (unsigned char*)malloc(514);
    if (!local_buf_168) return;
    for (int j = 0; j < 514; j++) {
        local_buf_168[j] = j < data_len_168 ? data_168[j] : 0;
    }

    unsigned char check_168 = (unsigned char)((uint32_t)local_buf_168[2] * 31 + local_buf_168[11]) ^ local_buf_168[4];
    if (data_len_168 > 11 && check_168 == 0xb5) {
        size_t copy_len_168 = ((uint32_t)local_buf_168[5]*39 + local_buf_168[1])^local_buf_168[6];
        copy_len_168 = (copy_len_168 % 114) + 1;
        memcpy(buf_168, local_buf_168, copy_len_168);
    }

    free(local_buf_168);
    if (*x_168 > 0) {
        *x_168 -= 1;
        obf_func_114(x_168, data_168, data_len_168);
    }
}

void obf_func_42(int *x_42, unsigned char *data_42, size_t data_len_42) {
    char buf_42[114];
    unsigned char* local_buf_42 = (unsigned char*)malloc(514);
    if (!local_buf_42) return;
    for (int j = 0; j < 514; j++) {
        local_buf_42[j] = j < data_len_42 ? data_42[j] : 0;
    }

    unsigned char check_42 = (unsigned char)((uint32_t)local_buf_42[5] * 43 + local_buf_42[8]) ^ local_buf_42[13];
    if (data_len_42 > 13 && check_42 == 0x50) {
        size_t copy_len_42 = ((uint32_t)local_buf_42[7]*45 + local_buf_42[3])^local_buf_42[11];
        copy_len_42 = (copy_len_42 % 103) + 12;
        memcpy(buf_42, local_buf_42, copy_len_42);
    }

    free(local_buf_42);
    if (*x_42 > 0) {
        *x_42 -= 1;
        obf_func_73(x_42, data_42, data_len_42);
    }
}

void obf_func_194(int *x_194, unsigned char *data_194, size_t data_len_194) {
    char buf_194[114];
    unsigned char* local_buf_194 = (unsigned char*)malloc(514);
    if (!local_buf_194) return;
    for (int j = 0; j < 514; j++) {
        local_buf_194[j] = j < data_len_194 ? data_194[j] : 0;
    }

    unsigned char check_194 = (unsigned char)((uint32_t)local_buf_194[12] * 47 + local_buf_194[14]) ^ local_buf_194[10];
    if (data_len_194 > 14 && check_194 == 0x6e) {
        size_t copy_len_194 = ((uint32_t)local_buf_194[11]*35 + local_buf_194[15])^local_buf_194[7];
        copy_len_194 = (copy_len_194 % 113) + 2;
        memcpy(buf_194, local_buf_194, copy_len_194);
    }

    free(local_buf_194);
    if (*x_194 > 0) {
        *x_194 -= 1;
        obf_func_169(x_194, data_194, data_len_194);
    }
}

void obf_func_108(int *x_108, unsigned char *data_108, size_t data_len_108) {
    char buf_108[114];
    unsigned char* local_buf_108 = (unsigned char*)malloc(514);
    if (!local_buf_108) return;
    for (int j = 0; j < 514; j++) {
        local_buf_108[j] = j < data_len_108 ? data_108[j] : 0;
    }

    unsigned char check_108 = (unsigned char)((uint32_t)local_buf_108[9] * 47 + local_buf_108[2]) ^ local_buf_108[8];
    if (data_len_108 > 9 && check_108 == 0xbb) {
        size_t copy_len_108 = ((uint32_t)local_buf_108[6]*55 + local_buf_108[14])^local_buf_108[1];
        copy_len_108 = (copy_len_108 % 105) + 10;
        memcpy(buf_108, local_buf_108, copy_len_108);
    }

    free(local_buf_108);
    if (*x_108 > 0) {
        *x_108 -= 1;
        obf_func_21(x_108, data_108, data_len_108);
    }
}

void obf_func_61(int *x_61, unsigned char *data_61, size_t data_len_61) {
    char buf_61[114];
    unsigned char* local_buf_61 = (unsigned char*)malloc(514);
    if (!local_buf_61) return;
    for (int j = 0; j < 514; j++) {
        local_buf_61[j] = j < data_len_61 ? data_61[j] : 0;
    }

    unsigned char check_61 = (unsigned char)((uint32_t)local_buf_61[10] * 59 + local_buf_61[15]) ^ local_buf_61[8];
    if (data_len_61 > 15 && check_61 == 0xa1) {
        size_t copy_len_61 = ((uint32_t)local_buf_61[5]*35 + local_buf_61[12])^local_buf_61[14];
        copy_len_61 = (copy_len_61 % 111) + 4;
        memcpy(buf_61, local_buf_61, copy_len_61);
    }

    free(local_buf_61);
    if (*x_61 > 0) {
        *x_61 -= 1;
        obf_func_207(x_61, data_61, data_len_61);
    }
}

void obf_func_208(int *x_208, unsigned char *data_208, size_t data_len_208) {
    char buf_208[114];
    unsigned char* local_buf_208 = (unsigned char*)malloc(514);
    if (!local_buf_208) return;
    for (int j = 0; j < 514; j++) {
        local_buf_208[j] = j < data_len_208 ? data_208[j] : 0;
    }

    unsigned char check_208 = (unsigned char)((uint32_t)local_buf_208[11] * 59 + local_buf_208[7]) ^ local_buf_208[12];
    if (data_len_208 > 12 && check_208 == 0xc1) {
        size_t copy_len_208 = ((uint32_t)local_buf_208[13]*35 + local_buf_208[1])^local_buf_208[14];
        copy_len_208 = (copy_len_208 % 106) + 9;
        memcpy(buf_208, local_buf_208, copy_len_208);
    }

    free(local_buf_208);
    if (*x_208 > 0) {
        *x_208 -= 1;
        obf_func_247(x_208, data_208, data_len_208);
    }
}

void obf_func_114(int *x_114, unsigned char *data_114, size_t data_len_114) {
    char buf_114[114];
    unsigned char* local_buf_114 = (unsigned char*)malloc(514);
    if (!local_buf_114) return;
    for (int j = 0; j < 514; j++) {
        local_buf_114[j] = j < data_len_114 ? data_114[j] : 0;
    }

    unsigned char check_114 = (unsigned char)((uint32_t)local_buf_114[11] * 43 + local_buf_114[12]) ^ local_buf_114[15];
    if (data_len_114 > 15 && check_114 == 0x08) {
        size_t copy_len_114 = ((uint32_t)local_buf_114[14]*55 + local_buf_114[10])^local_buf_114[2];
        copy_len_114 = (copy_len_114 % 115) + 0;
        memcpy(buf_114, local_buf_114, copy_len_114);
    }

    free(local_buf_114);
    if (*x_114 > 0) {
        *x_114 -= 1;
        obf_func_39(x_114, data_114, data_len_114);
    }
}

void obf_func_179(int *x_179, unsigned char *data_179, size_t data_len_179) {
    char buf_179[114];
    unsigned char* local_buf_179 = (unsigned char*)malloc(514);
    if (!local_buf_179) return;
    for (int j = 0; j < 514; j++) {
        local_buf_179[j] = j < data_len_179 ? data_179[j] : 0;
    }

    unsigned char check_179 = (unsigned char)((uint32_t)local_buf_179[14] * 47 + local_buf_179[11]) ^ local_buf_179[9];
    if (data_len_179 > 14 && check_179 == 0x49) {
        size_t copy_len_179 = ((uint32_t)local_buf_179[2]*29 + local_buf_179[3])^local_buf_179[6];
        copy_len_179 = (copy_len_179 % 112) + 3;
        memcpy(buf_179, local_buf_179, copy_len_179);
    }

    free(local_buf_179);
    if (*x_179 > 0) {
        *x_179 -= 1;
        obf_func_26(x_179, data_179, data_len_179);
    }
}

void obf_func_17(int *x_17, unsigned char *data_17, size_t data_len_17) {
    char buf_17[114];
    unsigned char* local_buf_17 = (unsigned char*)malloc(514);
    if (!local_buf_17) return;
    for (int j = 0; j < 514; j++) {
        local_buf_17[j] = j < data_len_17 ? data_17[j] : 0;
    }

    unsigned char check_17 = (unsigned char)((uint32_t)local_buf_17[2] * 31 + local_buf_17[9]) ^ local_buf_17[3];
    if (data_len_17 > 9 && check_17 == 0x23) {
        size_t copy_len_17 = ((uint32_t)local_buf_17[13]*29 + local_buf_17[11])^local_buf_17[8];
        copy_len_17 = (copy_len_17 % 103) + 12;
        memcpy(buf_17, local_buf_17, copy_len_17);
    }

    free(local_buf_17);
    if (*x_17 > 0) {
        *x_17 -= 1;
        obf_func_211(x_17, data_17, data_len_17);
    }
}

void obf_func_25(int *x_25, unsigned char *data_25, size_t data_len_25) {
    char buf_25[114];
    unsigned char* local_buf_25 = (unsigned char*)malloc(514);
    if (!local_buf_25) return;
    for (int j = 0; j < 514; j++) {
        local_buf_25[j] = j < data_len_25 ? data_25[j] : 0;
    }

    unsigned char check_25 = (unsigned char)((uint32_t)local_buf_25[6] * 53 + local_buf_25[4]) ^ local_buf_25[9];
    if (data_len_25 > 9 && check_25 == 0x5c) {
        size_t copy_len_25 = ((uint32_t)local_buf_25[7]*45 + local_buf_25[11])^local_buf_25[10];
        copy_len_25 = (copy_len_25 % 104) + 11;
        memcpy(buf_25, local_buf_25, copy_len_25);
    }

    free(local_buf_25);
    if (*x_25 > 0) {
        *x_25 -= 1;
        obf_func_260(x_25, data_25, data_len_25);
    }
}

void obf_func_1(int *x_1, unsigned char *data_1, size_t data_len_1) {
    char buf_1[114];
    unsigned char* local_buf_1 = (unsigned char*)malloc(514);
    if (!local_buf_1) return;
    for (int j = 0; j < 514; j++) {
        local_buf_1[j] = j < data_len_1 ? data_1[j] : 0;
    }

    unsigned char check_1 = (unsigned char)((uint32_t)local_buf_1[12] * 61 + local_buf_1[11]) ^ local_buf_1[1];
    if (data_len_1 > 12 && check_1 == 0x66) {
        size_t copy_len_1 = ((uint32_t)local_buf_1[9]*51 + local_buf_1[2])^local_buf_1[13];
        copy_len_1 = (copy_len_1 % 102) + 13;
        memcpy(buf_1, local_buf_1, copy_len_1);
    }

    free(local_buf_1);
    if (*x_1 > 0) {
        *x_1 -= 1;
        obf_func_231(x_1, data_1, data_len_1);
    }
}

void obf_func_285(int *x_285, unsigned char *data_285, size_t data_len_285) {
    char buf_285[114];
    unsigned char* local_buf_285 = (unsigned char*)malloc(514);
    if (!local_buf_285) return;
    for (int j = 0; j < 514; j++) {
        local_buf_285[j] = j < data_len_285 ? data_285[j] : 0;
    }

    unsigned char check_285 = (unsigned char)((uint32_t)local_buf_285[12] * 37 + local_buf_285[2]) ^ local_buf_285[1];
    if (data_len_285 > 12 && check_285 == 0x30) {
        size_t copy_len_285 = ((uint32_t)local_buf_285[8]*51 + local_buf_285[4])^local_buf_285[7];
        copy_len_285 = (copy_len_285 % 107) + 8;
        memcpy(buf_285, local_buf_285, copy_len_285);
    }

    free(local_buf_285);
    if (*x_285 > 0) {
        *x_285 -= 1;
        obf_func_13(x_285, data_285, data_len_285);
    }
}

void obf_func_110(int *x_110, unsigned char *data_110, size_t data_len_110) {
    char buf_110[114];
    unsigned char* local_buf_110 = (unsigned char*)malloc(514);
    if (!local_buf_110) return;
    for (int j = 0; j < 514; j++) {
        local_buf_110[j] = j < data_len_110 ? data_110[j] : 0;
    }

    unsigned char check_110 = (unsigned char)((uint32_t)local_buf_110[14] * 31 + local_buf_110[13]) ^ local_buf_110[2];
    if (data_len_110 > 14 && check_110 == 0x28) {
        size_t copy_len_110 = ((uint32_t)local_buf_110[7]*35 + local_buf_110[6])^local_buf_110[9];
        copy_len_110 = (copy_len_110 % 106) + 9;
        memcpy(buf_110, local_buf_110, copy_len_110);
    }

    free(local_buf_110);
    if (*x_110 > 0) {
        *x_110 -= 1;
        obf_func_213(x_110, data_110, data_len_110);
    }
}

void obf_func_261(int *x_261, unsigned char *data_261, size_t data_len_261) {
    char buf_261[114];
    unsigned char* local_buf_261 = (unsigned char*)malloc(514);
    if (!local_buf_261) return;
    for (int j = 0; j < 514; j++) {
        local_buf_261[j] = j < data_len_261 ? data_261[j] : 0;
    }

    unsigned char check_261 = (unsigned char)((uint32_t)local_buf_261[12] * 59 + local_buf_261[7]) ^ local_buf_261[10];
    if (data_len_261 > 12 && check_261 == 0x07) {
        size_t copy_len_261 = ((uint32_t)local_buf_261[4]*45 + local_buf_261[6])^local_buf_261[2];
        copy_len_261 = (copy_len_261 % 110) + 5;
        memcpy(buf_261, local_buf_261, copy_len_261);
    }

    free(local_buf_261);
    if (*x_261 > 0) {
        *x_261 -= 1;
        obf_func_65(x_261, data_261, data_len_261);
    }
}

void obf_func_26(int *x_26, unsigned char *data_26, size_t data_len_26) {
    char buf_26[114];
    unsigned char* local_buf_26 = (unsigned char*)malloc(514);
    if (!local_buf_26) return;
    for (int j = 0; j < 514; j++) {
        local_buf_26[j] = j < data_len_26 ? data_26[j] : 0;
    }

    unsigned char check_26 = (unsigned char)((uint32_t)local_buf_26[7] * 61 + local_buf_26[9]) ^ local_buf_26[15];
    if (data_len_26 > 15 && check_26 == 0x03) {
        size_t copy_len_26 = ((uint32_t)local_buf_26[6]*57 + local_buf_26[5])^local_buf_26[11];
        copy_len_26 = (copy_len_26 % 114) + 1;
        memcpy(buf_26, local_buf_26, copy_len_26);
    }

    free(local_buf_26);
    if (*x_26 > 0) {
        *x_26 -= 1;
        obf_func_75(x_26, data_26, data_len_26);
    }
}

void obf_func_83(int *x_83, unsigned char *data_83, size_t data_len_83) {
    char buf_83[114];
    unsigned char* local_buf_83 = (unsigned char*)malloc(514);
    if (!local_buf_83) return;
    for (int j = 0; j < 514; j++) {
        local_buf_83[j] = j < data_len_83 ? data_83[j] : 0;
    }

    unsigned char check_83 = (unsigned char)((uint32_t)local_buf_83[1] * 31 + local_buf_83[11]) ^ local_buf_83[10];
    if (data_len_83 > 11 && check_83 == 0xb7) {
        size_t copy_len_83 = ((uint32_t)local_buf_83[12]*57 + local_buf_83[13])^local_buf_83[9];
        copy_len_83 = (copy_len_83 % 108) + 7;
        memcpy(buf_83, local_buf_83, copy_len_83);
    }

    free(local_buf_83);
    if (*x_83 > 0) {
        *x_83 -= 1;
        obf_func_200(x_83, data_83, data_len_83);
    }
}

void obf_func_76(int *x_76, unsigned char *data_76, size_t data_len_76) {
    char buf_76[114];
    unsigned char* local_buf_76 = (unsigned char*)malloc(514);
    if (!local_buf_76) return;
    for (int j = 0; j < 514; j++) {
        local_buf_76[j] = j < data_len_76 ? data_76[j] : 0;
    }

    unsigned char check_76 = (unsigned char)((uint32_t)local_buf_76[8] * 61 + local_buf_76[5]) ^ local_buf_76[10];
    if (data_len_76 > 10 && check_76 == 0xd9) {
        size_t copy_len_76 = ((uint32_t)local_buf_76[13]*39 + local_buf_76[6])^local_buf_76[2];
        copy_len_76 = (copy_len_76 % 106) + 9;
        memcpy(buf_76, local_buf_76, copy_len_76);
    }

    free(local_buf_76);
    if (*x_76 > 0) {
        *x_76 -= 1;
        obf_func_137(x_76, data_76, data_len_76);
    }
}

void obf_func_22(int *x_22, unsigned char *data_22, size_t data_len_22) {
    char buf_22[114];
    unsigned char* local_buf_22 = (unsigned char*)malloc(514);
    if (!local_buf_22) return;
    for (int j = 0; j < 514; j++) {
        local_buf_22[j] = j < data_len_22 ? data_22[j] : 0;
    }

    unsigned char check_22 = (unsigned char)((uint32_t)local_buf_22[12] * 59 + local_buf_22[1]) ^ local_buf_22[13];
    if (data_len_22 > 13 && check_22 == 0x09) {
        size_t copy_len_22 = ((uint32_t)local_buf_22[14]*29 + local_buf_22[2])^local_buf_22[6];
        copy_len_22 = (copy_len_22 % 108) + 7;
        memcpy(buf_22, local_buf_22, copy_len_22);
    }

    free(local_buf_22);
    if (*x_22 > 0) {
        *x_22 -= 1;
        obf_func_45(x_22, data_22, data_len_22);
    }
}

void obf_func_115(int *x_115, unsigned char *data_115, size_t data_len_115) {
    char buf_115[114];
    unsigned char* local_buf_115 = (unsigned char*)malloc(514);
    if (!local_buf_115) return;
    for (int j = 0; j < 514; j++) {
        local_buf_115[j] = j < data_len_115 ? data_115[j] : 0;
    }

    unsigned char check_115 = (unsigned char)((uint32_t)local_buf_115[14] * 53 + local_buf_115[11]) ^ local_buf_115[8];
    if (data_len_115 > 14 && check_115 == 0x76) {
        size_t copy_len_115 = ((uint32_t)local_buf_115[3]*45 + local_buf_115[5])^local_buf_115[6];
        copy_len_115 = (copy_len_115 % 108) + 7;
        memcpy(buf_115, local_buf_115, copy_len_115);
    }

    free(local_buf_115);
    if (*x_115 > 0) {
        *x_115 -= 1;
        obf_func_29(x_115, data_115, data_len_115);
    }
}

void obf_func_294(int *x_294, unsigned char *data_294, size_t data_len_294) {
    char buf_294[114];
    unsigned char* local_buf_294 = (unsigned char*)malloc(514);
    if (!local_buf_294) return;
    for (int j = 0; j < 514; j++) {
        local_buf_294[j] = j < data_len_294 ? data_294[j] : 0;
    }

    unsigned char check_294 = (unsigned char)((uint32_t)local_buf_294[13] * 47 + local_buf_294[2]) ^ local_buf_294[14];
    if (data_len_294 > 14 && check_294 == 0xdb) {
        size_t copy_len_294 = ((uint32_t)local_buf_294[5]*57 + local_buf_294[4])^local_buf_294[10];
        copy_len_294 = (copy_len_294 % 102) + 13;
        memcpy(buf_294, local_buf_294, copy_len_294);
    }

    free(local_buf_294);
    if (*x_294 > 0) {
        *x_294 -= 1;
        obf_func_89(x_294, data_294, data_len_294);
    }
}

void obf_func_74(int *x_74, unsigned char *data_74, size_t data_len_74) {
    char buf_74[114];
    unsigned char* local_buf_74 = (unsigned char*)malloc(514);
    if (!local_buf_74) return;
    for (int j = 0; j < 514; j++) {
        local_buf_74[j] = j < data_len_74 ? data_74[j] : 0;
    }

    unsigned char check_74 = (unsigned char)((uint32_t)local_buf_74[7] * 43 + local_buf_74[12]) ^ local_buf_74[13];
    if (data_len_74 > 13 && check_74 == 0xad) {
        size_t copy_len_74 = ((uint32_t)local_buf_74[14]*55 + local_buf_74[15])^local_buf_74[1];
        copy_len_74 = (copy_len_74 % 112) + 3;
        memcpy(buf_74, local_buf_74, copy_len_74);
    }

    free(local_buf_74);
    if (*x_74 > 0) {
        *x_74 -= 1;
        obf_func_16(x_74, data_74, data_len_74);
    }
}

void obf_func_84(int *x_84, unsigned char *data_84, size_t data_len_84) {
    char buf_84[114];
    unsigned char* local_buf_84 = (unsigned char*)malloc(514);
    if (!local_buf_84) return;
    for (int j = 0; j < 514; j++) {
        local_buf_84[j] = j < data_len_84 ? data_84[j] : 0;
    }

    unsigned char check_84 = (unsigned char)((uint32_t)local_buf_84[2] * 47 + local_buf_84[5]) ^ local_buf_84[12];
    if (data_len_84 > 12 && check_84 == 0x16) {
        size_t copy_len_84 = ((uint32_t)local_buf_84[15]*33 + local_buf_84[11])^local_buf_84[1];
        copy_len_84 = (copy_len_84 % 102) + 13;
        memcpy(buf_84, local_buf_84, copy_len_84);
    }

    free(local_buf_84);
    if (*x_84 > 0) {
        *x_84 -= 1;
        obf_func_150(x_84, data_84, data_len_84);
    }
}

void obf_func_188(int *x_188, unsigned char *data_188, size_t data_len_188) {
    char buf_188[114];
    unsigned char* local_buf_188 = (unsigned char*)malloc(514);
    if (!local_buf_188) return;
    for (int j = 0; j < 514; j++) {
        local_buf_188[j] = j < data_len_188 ? data_188[j] : 0;
    }

    unsigned char check_188 = (unsigned char)((uint32_t)local_buf_188[3] * 37 + local_buf_188[1]) ^ local_buf_188[15];
    if (data_len_188 > 15 && check_188 == 0x0b) {
        size_t copy_len_188 = ((uint32_t)local_buf_188[14]*57 + local_buf_188[9])^local_buf_188[6];
        copy_len_188 = (copy_len_188 % 113) + 2;
        memcpy(buf_188, local_buf_188, copy_len_188);
    }

    free(local_buf_188);
    if (*x_188 > 0) {
        *x_188 -= 1;
        obf_func_255(x_188, data_188, data_len_188);
    }
}

void obf_func_44(int *x_44, unsigned char *data_44, size_t data_len_44) {
    char buf_44[114];
    unsigned char* local_buf_44 = (unsigned char*)malloc(514);
    if (!local_buf_44) return;
    for (int j = 0; j < 514; j++) {
        local_buf_44[j] = j < data_len_44 ? data_44[j] : 0;
    }

    unsigned char check_44 = (unsigned char)((uint32_t)local_buf_44[9] * 47 + local_buf_44[10]) ^ local_buf_44[3];
    if (data_len_44 > 10 && check_44 == 0xb0) {
        size_t copy_len_44 = ((uint32_t)local_buf_44[4]*51 + local_buf_44[12])^local_buf_44[13];
        copy_len_44 = (copy_len_44 % 111) + 4;
        memcpy(buf_44, local_buf_44, copy_len_44);
    }

    free(local_buf_44);
    if (*x_44 > 0) {
        *x_44 -= 1;
        obf_func_212(x_44, data_44, data_len_44);
    }
}

void obf_func_6(int *x_6, unsigned char *data_6, size_t data_len_6) {
    char buf_6[114];
    unsigned char* local_buf_6 = (unsigned char*)malloc(514);
    if (!local_buf_6) return;
    for (int j = 0; j < 514; j++) {
        local_buf_6[j] = j < data_len_6 ? data_6[j] : 0;
    }

    unsigned char check_6 = (unsigned char)((uint32_t)local_buf_6[11] * 61 + local_buf_6[4]) ^ local_buf_6[9];
    if (data_len_6 > 11 && check_6 == 0xc3) {
        size_t copy_len_6 = ((uint32_t)local_buf_6[5]*45 + local_buf_6[15])^local_buf_6[12];
        copy_len_6 = (copy_len_6 % 114) + 1;
        memcpy(buf_6, local_buf_6, copy_len_6);
    }

    free(local_buf_6);
    if (*x_6 > 0) {
        *x_6 -= 1;
        obf_func_23(x_6, data_6, data_len_6);
    }
}

void obf_func_221(int *x_221, unsigned char *data_221, size_t data_len_221) {
    char buf_221[114];
    unsigned char* local_buf_221 = (unsigned char*)malloc(514);
    if (!local_buf_221) return;
    for (int j = 0; j < 514; j++) {
        local_buf_221[j] = j < data_len_221 ? data_221[j] : 0;
    }

    unsigned char check_221 = (unsigned char)((uint32_t)local_buf_221[12] * 41 + local_buf_221[8]) ^ local_buf_221[7];
    if (data_len_221 > 12 && check_221 == 0x46) {
        size_t copy_len_221 = ((uint32_t)local_buf_221[15]*29 + local_buf_221[13])^local_buf_221[1];
        copy_len_221 = (copy_len_221 % 105) + 10;
        memcpy(buf_221, local_buf_221, copy_len_221);
    }

    free(local_buf_221);
    if (*x_221 > 0) {
        *x_221 -= 1;
        obf_func_208(x_221, data_221, data_len_221);
    }
}

void obf_func_132(int *x_132, unsigned char *data_132, size_t data_len_132) {
    char buf_132[114];
    unsigned char* local_buf_132 = (unsigned char*)malloc(514);
    if (!local_buf_132) return;
    for (int j = 0; j < 514; j++) {
        local_buf_132[j] = j < data_len_132 ? data_132[j] : 0;
    }

    unsigned char check_132 = (unsigned char)((uint32_t)local_buf_132[7] * 53 + local_buf_132[15]) ^ local_buf_132[5];
    if (data_len_132 > 15 && check_132 == 0x6e) {
        size_t copy_len_132 = ((uint32_t)local_buf_132[12]*45 + local_buf_132[8])^local_buf_132[1];
        copy_len_132 = (copy_len_132 % 108) + 7;
        memcpy(buf_132, local_buf_132, copy_len_132);
    }

    free(local_buf_132);
    if (*x_132 > 0) {
        *x_132 -= 1;
        obf_func_227(x_132, data_132, data_len_132);
    }
}

void obf_func_263(int *x_263, unsigned char *data_263, size_t data_len_263) {
    char buf_263[114];
    unsigned char* local_buf_263 = (unsigned char*)malloc(514);
    if (!local_buf_263) return;
    for (int j = 0; j < 514; j++) {
        local_buf_263[j] = j < data_len_263 ? data_263[j] : 0;
    }

    unsigned char check_263 = (unsigned char)((uint32_t)local_buf_263[9] * 47 + local_buf_263[5]) ^ local_buf_263[4];
    if (data_len_263 > 9 && check_263 == 0x24) {
        size_t copy_len_263 = ((uint32_t)local_buf_263[2]*39 + local_buf_263[13])^local_buf_263[7];
        copy_len_263 = (copy_len_263 % 112) + 3;
        memcpy(buf_263, local_buf_263, copy_len_263);
    }

    free(local_buf_263);
    if (*x_263 > 0) {
        *x_263 -= 1;
        obf_func_97(x_263, data_263, data_len_263);
    }
}

void obf_func_177(int *x_177, unsigned char *data_177, size_t data_len_177) {
    char buf_177[114];
    unsigned char* local_buf_177 = (unsigned char*)malloc(514);
    if (!local_buf_177) return;
    for (int j = 0; j < 514; j++) {
        local_buf_177[j] = j < data_len_177 ? data_177[j] : 0;
    }

    unsigned char check_177 = (unsigned char)((uint32_t)local_buf_177[10] * 59 + local_buf_177[5]) ^ local_buf_177[6];
    if (data_len_177 > 10 && check_177 == 0xd9) {
        size_t copy_len_177 = ((uint32_t)local_buf_177[1]*51 + local_buf_177[11])^local_buf_177[12];
        copy_len_177 = (copy_len_177 % 109) + 6;
        memcpy(buf_177, local_buf_177, copy_len_177);
    }

    free(local_buf_177);
    if (*x_177 > 0) {
        *x_177 -= 1;
        obf_func_251(x_177, data_177, data_len_177);
    }
}

void obf_func_267(int *x_267, unsigned char *data_267, size_t data_len_267) {
    char buf_267[114];
    unsigned char* local_buf_267 = (unsigned char*)malloc(514);
    if (!local_buf_267) return;
    for (int j = 0; j < 514; j++) {
        local_buf_267[j] = j < data_len_267 ? data_267[j] : 0;
    }

    unsigned char check_267 = (unsigned char)((uint32_t)local_buf_267[14] * 31 + local_buf_267[2]) ^ local_buf_267[7];
    if (data_len_267 > 14 && check_267 == 0x07) {
        size_t copy_len_267 = ((uint32_t)local_buf_267[8]*35 + local_buf_267[5])^local_buf_267[9];
        copy_len_267 = (copy_len_267 % 104) + 11;
        memcpy(buf_267, local_buf_267, copy_len_267);
    }

    free(local_buf_267);
    if (*x_267 > 0) {
        *x_267 -= 1;
        obf_func_81(x_267, data_267, data_len_267);
    }
}

void obf_func_98(int *x_98, unsigned char *data_98, size_t data_len_98) {
    char buf_98[114];
    unsigned char* local_buf_98 = (unsigned char*)malloc(514);
    if (!local_buf_98) return;
    for (int j = 0; j < 514; j++) {
        local_buf_98[j] = j < data_len_98 ? data_98[j] : 0;
    }

    unsigned char check_98 = (unsigned char)((uint32_t)local_buf_98[6] * 43 + local_buf_98[10]) ^ local_buf_98[9];
    if (data_len_98 > 10 && check_98 == 0x3b) {
        size_t copy_len_98 = ((uint32_t)local_buf_98[15]*29 + local_buf_98[3])^local_buf_98[1];
        copy_len_98 = (copy_len_98 % 106) + 9;
        memcpy(buf_98, local_buf_98, copy_len_98);
    }

    free(local_buf_98);
    if (*x_98 > 0) {
        *x_98 -= 1;
        obf_func_6(x_98, data_98, data_len_98);
    }
}

void obf_func_57(int *x_57, unsigned char *data_57, size_t data_len_57) {
    char buf_57[114];
    unsigned char* local_buf_57 = (unsigned char*)malloc(514);
    if (!local_buf_57) return;
    for (int j = 0; j < 514; j++) {
        local_buf_57[j] = j < data_len_57 ? data_57[j] : 0;
    }

    unsigned char check_57 = (unsigned char)((uint32_t)local_buf_57[3] * 53 + local_buf_57[6]) ^ local_buf_57[13];
    if (data_len_57 > 13 && check_57 == 0x4b) {
        size_t copy_len_57 = ((uint32_t)local_buf_57[8]*45 + local_buf_57[12])^local_buf_57[4];
        copy_len_57 = (copy_len_57 % 112) + 3;
        memcpy(buf_57, local_buf_57, copy_len_57);
    }

    free(local_buf_57);
    if (*x_57 > 0) {
        *x_57 -= 1;
        obf_func_204(x_57, data_57, data_len_57);
    }
}

void obf_func_128(int *x_128, unsigned char *data_128, size_t data_len_128) {
    char buf_128[114];
    unsigned char* local_buf_128 = (unsigned char*)malloc(514);
    if (!local_buf_128) return;
    for (int j = 0; j < 514; j++) {
        local_buf_128[j] = j < data_len_128 ? data_128[j] : 0;
    }

    unsigned char check_128 = (unsigned char)((uint32_t)local_buf_128[13] * 41 + local_buf_128[11]) ^ local_buf_128[15];
    if (data_len_128 > 15 && check_128 == 0x15) {
        size_t copy_len_128 = ((uint32_t)local_buf_128[2]*55 + local_buf_128[1])^local_buf_128[6];
        copy_len_128 = (copy_len_128 % 108) + 7;
        memcpy(buf_128, local_buf_128, copy_len_128);
    }

    free(local_buf_128);
    if (*x_128 > 0) {
        *x_128 -= 1;
        obf_func_12(x_128, data_128, data_len_128);
    }
}

void obf_func_107(int *x_107, unsigned char *data_107, size_t data_len_107) {
    char buf_107[114];
    unsigned char* local_buf_107 = (unsigned char*)malloc(514);
    if (!local_buf_107) return;
    for (int j = 0; j < 514; j++) {
        local_buf_107[j] = j < data_len_107 ? data_107[j] : 0;
    }

    unsigned char check_107 = (unsigned char)((uint32_t)local_buf_107[5] * 31 + local_buf_107[12]) ^ local_buf_107[8];
    if (data_len_107 > 12 && check_107 == 0x74) {
        size_t copy_len_107 = ((uint32_t)local_buf_107[14]*35 + local_buf_107[9])^local_buf_107[6];
        copy_len_107 = (copy_len_107 % 114) + 1;
        memcpy(buf_107, local_buf_107, copy_len_107);
    }

    free(local_buf_107);
    if (*x_107 > 0) {
        *x_107 -= 1;
        obf_func_139(x_107, data_107, data_len_107);
    }
}

void obf_func_199(int *x_199, unsigned char *data_199, size_t data_len_199) {
    char buf_199[114];
    unsigned char* local_buf_199 = (unsigned char*)malloc(514);
    if (!local_buf_199) return;
    for (int j = 0; j < 514; j++) {
        local_buf_199[j] = j < data_len_199 ? data_199[j] : 0;
    }

    unsigned char check_199 = (unsigned char)((uint32_t)local_buf_199[7] * 53 + local_buf_199[4]) ^ local_buf_199[5];
    if (data_len_199 > 7 && check_199 == 0xd7) {
        size_t copy_len_199 = ((uint32_t)local_buf_199[6]*29 + local_buf_199[2])^local_buf_199[1];
        copy_len_199 = (copy_len_199 % 104) + 11;
        memcpy(buf_199, local_buf_199, copy_len_199);
    }

    free(local_buf_199);
    if (*x_199 > 0) {
        *x_199 -= 1;
        obf_func_69(x_199, data_199, data_len_199);
    }
}

void obf_func_100(int *x_100, unsigned char *data_100, size_t data_len_100) {
    char buf_100[114];
    unsigned char* local_buf_100 = (unsigned char*)malloc(514);
    if (!local_buf_100) return;
    for (int j = 0; j < 514; j++) {
        local_buf_100[j] = j < data_len_100 ? data_100[j] : 0;
    }

    unsigned char check_100 = (unsigned char)((uint32_t)local_buf_100[3] * 37 + local_buf_100[12]) ^ local_buf_100[8];
    if (data_len_100 > 12 && check_100 == 0x40) {
        size_t copy_len_100 = ((uint32_t)local_buf_100[11]*35 + local_buf_100[15])^local_buf_100[2];
        copy_len_100 = (copy_len_100 % 108) + 7;
        memcpy(buf_100, local_buf_100, copy_len_100);
    }

    free(local_buf_100);
    if (*x_100 > 0) {
        *x_100 -= 1;
        obf_func_238(x_100, data_100, data_len_100);
    }
}

void obf_func_193(int *x_193, unsigned char *data_193, size_t data_len_193) {
    char buf_193[114];
    unsigned char* local_buf_193 = (unsigned char*)malloc(514);
    if (!local_buf_193) return;
    for (int j = 0; j < 514; j++) {
        local_buf_193[j] = j < data_len_193 ? data_193[j] : 0;
    }

    unsigned char check_193 = (unsigned char)((uint32_t)local_buf_193[12] * 53 + local_buf_193[10]) ^ local_buf_193[14];
    if (data_len_193 > 14 && check_193 == 0xfc) {
        size_t copy_len_193 = ((uint32_t)local_buf_193[1]*39 + local_buf_193[9])^local_buf_193[11];
        copy_len_193 = (copy_len_193 % 114) + 1;
        memcpy(buf_193, local_buf_193, copy_len_193);
    }

    free(local_buf_193);
    if (*x_193 > 0) {
        *x_193 -= 1;
        obf_func_58(x_193, data_193, data_len_193);
    }
}

void obf_func_55(int *x_55, unsigned char *data_55, size_t data_len_55) {
    char buf_55[114];
    unsigned char* local_buf_55 = (unsigned char*)malloc(514);
    if (!local_buf_55) return;
    for (int j = 0; j < 514; j++) {
        local_buf_55[j] = j < data_len_55 ? data_55[j] : 0;
    }

    unsigned char check_55 = (unsigned char)((uint32_t)local_buf_55[3] * 59 + local_buf_55[5]) ^ local_buf_55[15];
    if (data_len_55 > 15 && check_55 == 0x78) {
        size_t copy_len_55 = ((uint32_t)local_buf_55[1]*57 + local_buf_55[11])^local_buf_55[14];
        copy_len_55 = (copy_len_55 % 100) + 15;
        memcpy(buf_55, local_buf_55, copy_len_55);
    }

    free(local_buf_55);
    if (*x_55 > 0) {
        *x_55 -= 1;
        obf_func_113(x_55, data_55, data_len_55);
    }
}

void obf_func_210(int *x_210, unsigned char *data_210, size_t data_len_210) {
    char buf_210[114];
    unsigned char* local_buf_210 = (unsigned char*)malloc(514);
    if (!local_buf_210) return;
    for (int j = 0; j < 514; j++) {
        local_buf_210[j] = j < data_len_210 ? data_210[j] : 0;
    }

    unsigned char check_210 = (unsigned char)((uint32_t)local_buf_210[8] * 43 + local_buf_210[9]) ^ local_buf_210[10];
    if (data_len_210 > 10 && check_210 == 0xa9) {
        size_t copy_len_210 = ((uint32_t)local_buf_210[11]*35 + local_buf_210[13])^local_buf_210[6];
        copy_len_210 = (copy_len_210 % 106) + 9;
        memcpy(buf_210, local_buf_210, copy_len_210);
    }

    free(local_buf_210);
    if (*x_210 > 0) {
        *x_210 -= 1;
        obf_func_51(x_210, data_210, data_len_210);
    }
}

void obf_func_206(int *x_206, unsigned char *data_206, size_t data_len_206) {
    char buf_206[114];
    unsigned char* local_buf_206 = (unsigned char*)malloc(514);
    if (!local_buf_206) return;
    for (int j = 0; j < 514; j++) {
        local_buf_206[j] = j < data_len_206 ? data_206[j] : 0;
    }

    unsigned char check_206 = (unsigned char)((uint32_t)local_buf_206[3] * 41 + local_buf_206[15]) ^ local_buf_206[1];
    if (data_len_206 > 15 && check_206 == 0xbc) {
        size_t copy_len_206 = ((uint32_t)local_buf_206[12]*39 + local_buf_206[4])^local_buf_206[14];
        copy_len_206 = (copy_len_206 % 111) + 4;
        memcpy(buf_206, local_buf_206, copy_len_206);
    }

    free(local_buf_206);
    if (*x_206 > 0) {
        *x_206 -= 1;
        obf_func_79(x_206, data_206, data_len_206);
    }
}

void obf_func_223(int *x_223, unsigned char *data_223, size_t data_len_223) {
    char buf_223[114];
    unsigned char* local_buf_223 = (unsigned char*)malloc(514);
    if (!local_buf_223) return;
    for (int j = 0; j < 514; j++) {
        local_buf_223[j] = j < data_len_223 ? data_223[j] : 0;
    }

    unsigned char check_223 = (unsigned char)((uint32_t)local_buf_223[6] * 53 + local_buf_223[12]) ^ local_buf_223[11];
    if (data_len_223 > 12 && check_223 == 0x91) {
        size_t copy_len_223 = ((uint32_t)local_buf_223[13]*39 + local_buf_223[2])^local_buf_223[8];
        copy_len_223 = (copy_len_223 % 101) + 14;
        memcpy(buf_223, local_buf_223, copy_len_223);
    }

    free(local_buf_223);
    if (*x_223 > 0) {
        *x_223 -= 1;
        obf_func_7(x_223, data_223, data_len_223);
    }
}

void obf_func_262(int *x_262, unsigned char *data_262, size_t data_len_262) {
    char buf_262[114];
    unsigned char* local_buf_262 = (unsigned char*)malloc(514);
    if (!local_buf_262) return;
    for (int j = 0; j < 514; j++) {
        local_buf_262[j] = j < data_len_262 ? data_262[j] : 0;
    }

    unsigned char check_262 = (unsigned char)((uint32_t)local_buf_262[6] * 47 + local_buf_262[11]) ^ local_buf_262[13];
    if (data_len_262 > 13 && check_262 == 0xef) {
        size_t copy_len_262 = ((uint32_t)local_buf_262[3]*51 + local_buf_262[12])^local_buf_262[2];
        copy_len_262 = (copy_len_262 % 114) + 1;
        memcpy(buf_262, local_buf_262, copy_len_262);
    }

    free(local_buf_262);
    if (*x_262 > 0) {
        *x_262 -= 1;
        obf_func_68(x_262, data_262, data_len_262);
    }
}

void obf_func_130(int *x_130, unsigned char *data_130, size_t data_len_130) {
    char buf_130[114];
    unsigned char* local_buf_130 = (unsigned char*)malloc(514);
    if (!local_buf_130) return;
    for (int j = 0; j < 514; j++) {
        local_buf_130[j] = j < data_len_130 ? data_130[j] : 0;
    }

    unsigned char check_130 = (unsigned char)((uint32_t)local_buf_130[3] * 37 + local_buf_130[13]) ^ local_buf_130[7];
    if (data_len_130 > 13 && check_130 == 0xbb) {
        size_t copy_len_130 = ((uint32_t)local_buf_130[14]*29 + local_buf_130[1])^local_buf_130[9];
        copy_len_130 = (copy_len_130 % 101) + 14;
        memcpy(buf_130, local_buf_130, copy_len_130);
    }

    free(local_buf_130);
    if (*x_130 > 0) {
        *x_130 -= 1;
        obf_func_28(x_130, data_130, data_len_130);
    }
}

void obf_func_137(int *x_137, unsigned char *data_137, size_t data_len_137) {
    char buf_137[114];
    unsigned char* local_buf_137 = (unsigned char*)malloc(514);
    if (!local_buf_137) return;
    for (int j = 0; j < 514; j++) {
        local_buf_137[j] = j < data_len_137 ? data_137[j] : 0;
    }

    unsigned char check_137 = (unsigned char)((uint32_t)local_buf_137[1] * 59 + local_buf_137[6]) ^ local_buf_137[7];
    if (data_len_137 > 7 && check_137 == 0xb7) {
        size_t copy_len_137 = ((uint32_t)local_buf_137[13]*57 + local_buf_137[14])^local_buf_137[8];
        copy_len_137 = (copy_len_137 % 103) + 12;
        memcpy(buf_137, local_buf_137, copy_len_137);
    }

    free(local_buf_137);
    if (*x_137 > 0) {
        *x_137 -= 1;
        obf_func_25(x_137, data_137, data_len_137);
    }
}

void obf_func_7(int *x_7, unsigned char *data_7, size_t data_len_7) {
    char buf_7[114];
    unsigned char* local_buf_7 = (unsigned char*)malloc(514);
    if (!local_buf_7) return;
    for (int j = 0; j < 514; j++) {
        local_buf_7[j] = j < data_len_7 ? data_7[j] : 0;
    }

    unsigned char check_7 = (unsigned char)((uint32_t)local_buf_7[7] * 47 + local_buf_7[10]) ^ local_buf_7[13];
    if (data_len_7 > 13 && check_7 == 0x2b) {
        size_t copy_len_7 = ((uint32_t)local_buf_7[3]*57 + local_buf_7[5])^local_buf_7[8];
        copy_len_7 = (copy_len_7 % 100) + 15;
        memcpy(buf_7, local_buf_7, copy_len_7);
    }

    free(local_buf_7);
    if (*x_7 > 0) {
        *x_7 -= 1;
        obf_func_281(x_7, data_7, data_len_7);
    }
}

void obf_func_63(int *x_63, unsigned char *data_63, size_t data_len_63) {
    char buf_63[114];
    unsigned char* local_buf_63 = (unsigned char*)malloc(514);
    if (!local_buf_63) return;
    for (int j = 0; j < 514; j++) {
        local_buf_63[j] = j < data_len_63 ? data_63[j] : 0;
    }

    unsigned char check_63 = (unsigned char)((uint32_t)local_buf_63[1] * 37 + local_buf_63[10]) ^ local_buf_63[3];
    if (data_len_63 > 10 && check_63 == 0x4a) {
        size_t copy_len_63 = ((uint32_t)local_buf_63[9]*35 + local_buf_63[7])^local_buf_63[2];
        copy_len_63 = (copy_len_63 % 111) + 4;
        memcpy(buf_63, local_buf_63, copy_len_63);
    }

    free(local_buf_63);
    if (*x_63 > 0) {
        *x_63 -= 1;
        obf_func_276(x_63, data_63, data_len_63);
    }
}

void obf_func_279(int *x_279, unsigned char *data_279, size_t data_len_279) {
    char buf_279[114];
    unsigned char* local_buf_279 = (unsigned char*)malloc(514);
    if (!local_buf_279) return;
    for (int j = 0; j < 514; j++) {
        local_buf_279[j] = j < data_len_279 ? data_279[j] : 0;
    }

    unsigned char check_279 = (unsigned char)((uint32_t)local_buf_279[14] * 41 + local_buf_279[15]) ^ local_buf_279[5];
    if (data_len_279 > 15 && check_279 == 0x16) {
        size_t copy_len_279 = ((uint32_t)local_buf_279[1]*51 + local_buf_279[2])^local_buf_279[13];
        copy_len_279 = (copy_len_279 % 102) + 13;
        memcpy(buf_279, local_buf_279, copy_len_279);
    }

    free(local_buf_279);
    if (*x_279 > 0) {
        *x_279 -= 1;
        obf_func_275(x_279, data_279, data_len_279);
    }
}

void obf_func_94(int *x_94, unsigned char *data_94, size_t data_len_94) {
    char buf_94[114];
    unsigned char* local_buf_94 = (unsigned char*)malloc(514);
    if (!local_buf_94) return;
    for (int j = 0; j < 514; j++) {
        local_buf_94[j] = j < data_len_94 ? data_94[j] : 0;
    }

    unsigned char check_94 = (unsigned char)((uint32_t)local_buf_94[5] * 41 + local_buf_94[2]) ^ local_buf_94[13];
    if (data_len_94 > 13 && check_94 == 0xf7) {
        size_t copy_len_94 = ((uint32_t)local_buf_94[15]*35 + local_buf_94[14])^local_buf_94[3];
        copy_len_94 = (copy_len_94 % 111) + 4;
        memcpy(buf_94, local_buf_94, copy_len_94);
    }

    free(local_buf_94);
    if (*x_94 > 0) {
        *x_94 -= 1;
        obf_func_162(x_94, data_94, data_len_94);
    }
}

void obf_func_222(int *x_222, unsigned char *data_222, size_t data_len_222) {
    char buf_222[114];
    unsigned char* local_buf_222 = (unsigned char*)malloc(514);
    if (!local_buf_222) return;
    for (int j = 0; j < 514; j++) {
        local_buf_222[j] = j < data_len_222 ? data_222[j] : 0;
    }

    unsigned char check_222 = (unsigned char)((uint32_t)local_buf_222[1] * 43 + local_buf_222[4]) ^ local_buf_222[13];
    if (data_len_222 > 13 && check_222 == 0x73) {
        size_t copy_len_222 = ((uint32_t)local_buf_222[9]*51 + local_buf_222[12])^local_buf_222[10];
        copy_len_222 = (copy_len_222 % 112) + 3;
        memcpy(buf_222, local_buf_222, copy_len_222);
    }

    free(local_buf_222);
    if (*x_222 > 0) {
        *x_222 -= 1;
        obf_func_280(x_222, data_222, data_len_222);
    }
}

void obf_func_68(int *x_68, unsigned char *data_68, size_t data_len_68) {
    char buf_68[114];
    unsigned char* local_buf_68 = (unsigned char*)malloc(514);
    if (!local_buf_68) return;
    for (int j = 0; j < 514; j++) {
        local_buf_68[j] = j < data_len_68 ? data_68[j] : 0;
    }

    unsigned char check_68 = (unsigned char)((uint32_t)local_buf_68[15] * 37 + local_buf_68[2]) ^ local_buf_68[13];
    if (data_len_68 > 15 && check_68 == 0x3f) {
        size_t copy_len_68 = ((uint32_t)local_buf_68[6]*45 + local_buf_68[4])^local_buf_68[10];
        copy_len_68 = (copy_len_68 % 111) + 4;
        memcpy(buf_68, local_buf_68, copy_len_68);
    }

    free(local_buf_68);
    if (*x_68 > 0) {
        *x_68 -= 1;
        obf_func_188(x_68, data_68, data_len_68);
    }
}

void obf_func_152(int *x_152, unsigned char *data_152, size_t data_len_152) {
    char buf_152[114];
    unsigned char* local_buf_152 = (unsigned char*)malloc(514);
    if (!local_buf_152) return;
    for (int j = 0; j < 514; j++) {
        local_buf_152[j] = j < data_len_152 ? data_152[j] : 0;
    }

    unsigned char check_152 = (unsigned char)((uint32_t)local_buf_152[10] * 31 + local_buf_152[6]) ^ local_buf_152[7];
    if (data_len_152 > 10 && check_152 == 0x3e) {
        size_t copy_len_152 = ((uint32_t)local_buf_152[3]*29 + local_buf_152[5])^local_buf_152[15];
        copy_len_152 = (copy_len_152 % 100) + 15;
        memcpy(buf_152, local_buf_152, copy_len_152);
    }

    free(local_buf_152);
    if (*x_152 > 0) {
        *x_152 -= 1;
        obf_func_47(x_152, data_152, data_len_152);
    }
}

void obf_func_40(int *x_40, unsigned char *data_40, size_t data_len_40) {
    char buf_40[114];
    unsigned char* local_buf_40 = (unsigned char*)malloc(514);
    if (!local_buf_40) return;
    for (int j = 0; j < 514; j++) {
        local_buf_40[j] = j < data_len_40 ? data_40[j] : 0;
    }

    unsigned char check_40 = (unsigned char)((uint32_t)local_buf_40[7] * 37 + local_buf_40[15]) ^ local_buf_40[2];
    if (data_len_40 > 15 && check_40 == 0xc5) {
        size_t copy_len_40 = ((uint32_t)local_buf_40[14]*29 + local_buf_40[4])^local_buf_40[10];
        copy_len_40 = (copy_len_40 % 110) + 5;
        memcpy(buf_40, local_buf_40, copy_len_40);
    }

    free(local_buf_40);
    if (*x_40 > 0) {
        *x_40 -= 1;
        obf_func_86(x_40, data_40, data_len_40);
    }
}

void obf_func_232(int *x_232, unsigned char *data_232, size_t data_len_232) {
    char buf_232[114];
    unsigned char* local_buf_232 = (unsigned char*)malloc(514);
    if (!local_buf_232) return;
    for (int j = 0; j < 514; j++) {
        local_buf_232[j] = j < data_len_232 ? data_232[j] : 0;
    }

    unsigned char check_232 = (unsigned char)((uint32_t)local_buf_232[8] * 41 + local_buf_232[15]) ^ local_buf_232[4];
    if (data_len_232 > 15 && check_232 == 0x96) {
        size_t copy_len_232 = ((uint32_t)local_buf_232[9]*33 + local_buf_232[10])^local_buf_232[11];
        copy_len_232 = (copy_len_232 % 106) + 9;
        memcpy(buf_232, local_buf_232, copy_len_232);
    }

    free(local_buf_232);
    if (*x_232 > 0) {
        *x_232 -= 1;
        obf_func_282(x_232, data_232, data_len_232);
    }
}

void obf_func_8(int *x_8, unsigned char *data_8, size_t data_len_8) {
    char buf_8[114];
    unsigned char* local_buf_8 = (unsigned char*)malloc(514);
    if (!local_buf_8) return;
    for (int j = 0; j < 514; j++) {
        local_buf_8[j] = j < data_len_8 ? data_8[j] : 0;
    }

    unsigned char check_8 = (unsigned char)((uint32_t)local_buf_8[8] * 41 + local_buf_8[14]) ^ local_buf_8[13];
    if (data_len_8 > 14 && check_8 == 0xc1) {
        size_t copy_len_8 = ((uint32_t)local_buf_8[11]*35 + local_buf_8[4])^local_buf_8[5];
        copy_len_8 = (copy_len_8 % 103) + 12;
        memcpy(buf_8, local_buf_8, copy_len_8);
    }

    free(local_buf_8);
    if (*x_8 > 0) {
        *x_8 -= 1;
        obf_func_59(x_8, data_8, data_len_8);
    }
}

void obf_func_147(int *x_147, unsigned char *data_147, size_t data_len_147) {
    char buf_147[114];
    unsigned char* local_buf_147 = (unsigned char*)malloc(514);
    if (!local_buf_147) return;
    for (int j = 0; j < 514; j++) {
        local_buf_147[j] = j < data_len_147 ? data_147[j] : 0;
    }

    unsigned char check_147 = (unsigned char)((uint32_t)local_buf_147[14] * 37 + local_buf_147[6]) ^ local_buf_147[2];
    if (data_len_147 > 14 && check_147 == 0xd3) {
        size_t copy_len_147 = ((uint32_t)local_buf_147[10]*57 + local_buf_147[9])^local_buf_147[8];
        copy_len_147 = (copy_len_147 % 102) + 13;
        memcpy(buf_147, local_buf_147, copy_len_147);
    }

    free(local_buf_147);
    if (*x_147 > 0) {
        *x_147 -= 1;
        obf_func_149(x_147, data_147, data_len_147);
    }
}

void obf_func_242(int *x_242, unsigned char *data_242, size_t data_len_242) {
    char buf_242[114];
    unsigned char* local_buf_242 = (unsigned char*)malloc(514);
    if (!local_buf_242) return;
    for (int j = 0; j < 514; j++) {
        local_buf_242[j] = j < data_len_242 ? data_242[j] : 0;
    }

    unsigned char check_242 = (unsigned char)((uint32_t)local_buf_242[4] * 53 + local_buf_242[13]) ^ local_buf_242[7];
    if (data_len_242 > 13 && check_242 == 0xaa) {
        size_t copy_len_242 = ((uint32_t)local_buf_242[12]*39 + local_buf_242[10])^local_buf_242[6];
        copy_len_242 = (copy_len_242 % 100) + 15;
        memcpy(buf_242, local_buf_242, copy_len_242);
    }

    free(local_buf_242);
    if (*x_242 > 0) {
        *x_242 -= 100 - data_len_242;
        obf_func_90(x_242, data_242, data_len_242);
    }
}

void obf_func_269(int *x_269, unsigned char *data_269, size_t data_len_269) {
    char buf_269[114];
    unsigned char* local_buf_269 = (unsigned char*)malloc(514);
    if (!local_buf_269) return;
    for (int j = 0; j < 514; j++) {
        local_buf_269[j] = j < data_len_269 ? data_269[j] : 0;
    }

    unsigned char check_269 = (unsigned char)((uint32_t)local_buf_269[10] * 37 + local_buf_269[8]) ^ local_buf_269[9];
    if (data_len_269 > 10 && check_269 == 0xd0) {
        size_t copy_len_269 = ((uint32_t)local_buf_269[6]*55 + local_buf_269[3])^local_buf_269[5];
        copy_len_269 = (copy_len_269 % 100) + 15;
        memcpy(buf_269, local_buf_269, copy_len_269);
    }

    free(local_buf_269);
    if (*x_269 > 0) {
        *x_269 -= 1;
        obf_func_215(x_269, data_269, data_len_269);
    }
}

void obf_func_60(int *x_60, unsigned char *data_60, size_t data_len_60) {
    char buf_60[114];
    unsigned char* local_buf_60 = (unsigned char*)malloc(514);
    if (!local_buf_60) return;
    for (int j = 0; j < 514; j++) {
        local_buf_60[j] = j < data_len_60 ? data_60[j] : 0;
    }

    unsigned char check_60 = (unsigned char)((uint32_t)local_buf_60[9] * 43 + local_buf_60[2]) ^ local_buf_60[13];
    if (data_len_60 > 13 && check_60 == 0xea) {
        size_t copy_len_60 = ((uint32_t)local_buf_60[15]*55 + local_buf_60[8])^local_buf_60[3];
        copy_len_60 = (copy_len_60 % 103) + 12;
        memcpy(buf_60, local_buf_60, copy_len_60);
    }

    free(local_buf_60);
    if (*x_60 > 0) {
        *x_60 -= 1;
        obf_func_128(x_60, data_60, data_len_60);
    }
}

void obf_func_41(int *x_41, unsigned char *data_41, size_t data_len_41) {
    char buf_41[114];
    unsigned char* local_buf_41 = (unsigned char*)malloc(514);
    if (!local_buf_41) return;
    for (int j = 0; j < 514; j++) {
        local_buf_41[j] = j < data_len_41 ? data_41[j] : 0;
    }

    unsigned char check_41 = (unsigned char)((uint32_t)local_buf_41[14] * 59 + local_buf_41[12]) ^ local_buf_41[13];
    if (data_len_41 > 14 && check_41 == 0x0f) {
        size_t copy_len_41 = ((uint32_t)local_buf_41[6]*51 + local_buf_41[7])^local_buf_41[8];
        copy_len_41 = (copy_len_41 % 107) + 8;
        memcpy(buf_41, local_buf_41, copy_len_41);
    }

    free(local_buf_41);
    if (*x_41 > 0) {
        *x_41 -= 1;
        obf_func_119(x_41, data_41, data_len_41);
    }
}

void obf_func_264(int *x_264, unsigned char *data_264, size_t data_len_264) {
    char buf_264[114];
    unsigned char* local_buf_264 = (unsigned char*)malloc(514);
    if (!local_buf_264) return;
    for (int j = 0; j < 514; j++) {
        local_buf_264[j] = j < data_len_264 ? data_264[j] : 0;
    }

    unsigned char check_264 = (unsigned char)((uint32_t)local_buf_264[15] * 61 + local_buf_264[13]) ^ local_buf_264[5];
    if (data_len_264 > 15 && check_264 == 0xc1) {
        size_t copy_len_264 = ((uint32_t)local_buf_264[8]*33 + local_buf_264[4])^local_buf_264[11];
        copy_len_264 = (copy_len_264 % 105) + 10;
        memcpy(buf_264, local_buf_264, copy_len_264);
    }

    free(local_buf_264);
    if (*x_264 > 0) {
        *x_264 -= 1;
        obf_func_10(x_264, data_264, data_len_264);
    }
}

void obf_func_133(int *x_133, unsigned char *data_133, size_t data_len_133) {
    char buf_133[114];
    unsigned char* local_buf_133 = (unsigned char*)malloc(514);
    if (!local_buf_133) return;
    for (int j = 0; j < 514; j++) {
        local_buf_133[j] = j < data_len_133 ? data_133[j] : 0;
    }

    unsigned char check_133 = (unsigned char)((uint32_t)local_buf_133[3] * 41 + local_buf_133[14]) ^ local_buf_133[9];
    if (data_len_133 > 14 && check_133 == 0xb2) {
        size_t copy_len_133 = ((uint32_t)local_buf_133[4]*51 + local_buf_133[7])^local_buf_133[5];
        copy_len_133 = (copy_len_133 % 115) + 0;
        memcpy(buf_133, local_buf_133, copy_len_133);
    }

    free(local_buf_133);
    if (*x_133 > 0) {
        *x_133 -= 1;
        obf_func_111(x_133, data_133, data_len_133);
    }
}

void obf_func_49(int *x_49, unsigned char *data_49, size_t data_len_49) {
    char buf_49[114];
    unsigned char* local_buf_49 = (unsigned char*)malloc(514);
    if (!local_buf_49) return;
    for (int j = 0; j < 514; j++) {
        local_buf_49[j] = j < data_len_49 ? data_49[j] : 0;
    }

    unsigned char check_49 = (unsigned char)((uint32_t)local_buf_49[12] * 61 + local_buf_49[6]) ^ local_buf_49[5];
    if (data_len_49 > 12 && check_49 == 0x04) {
        size_t copy_len_49 = ((uint32_t)local_buf_49[4]*55 + local_buf_49[13])^local_buf_49[15];
        copy_len_49 = (copy_len_49 % 114) + 1;
        memcpy(buf_49, local_buf_49, copy_len_49);
    }

    free(local_buf_49);
    if (*x_49 > 0) {
        *x_49 -= 1;
        obf_func_284(x_49, data_49, data_len_49);
    }
}

void obf_func_109(int *x_109, unsigned char *data_109, size_t data_len_109) {
    char buf_109[114];
    unsigned char* local_buf_109 = (unsigned char*)malloc(514);
    if (!local_buf_109) return;
    for (int j = 0; j < 514; j++) {
        local_buf_109[j] = j < data_len_109 ? data_109[j] : 0;
    }

    unsigned char check_109 = (unsigned char)((uint32_t)local_buf_109[15] * 47 + local_buf_109[10]) ^ local_buf_109[7];
    if (data_len_109 > 15 && check_109 == 0x92) {
        size_t copy_len_109 = ((uint32_t)local_buf_109[14]*45 + local_buf_109[2])^local_buf_109[12];
        copy_len_109 = (copy_len_109 % 114) + 1;
        memcpy(buf_109, local_buf_109, copy_len_109);
    }

    free(local_buf_109);
    if (*x_109 > 0) {
        *x_109 -= 1;
        obf_func_27(x_109, data_109, data_len_109);
    }
}

void obf_func_296(int *x_296, unsigned char *data_296, size_t data_len_296) {
    char buf_296[114];
    unsigned char* local_buf_296 = (unsigned char*)malloc(514);
    if (!local_buf_296) return;
    for (int j = 0; j < 514; j++) {
        local_buf_296[j] = j < data_len_296 ? data_296[j] : 0;
    }

    unsigned char check_296 = (unsigned char)((uint32_t)local_buf_296[9] * 31 + local_buf_296[3]) ^ local_buf_296[4];
    if (data_len_296 > 9 && check_296 == 0x6e) {
        size_t copy_len_296 = ((uint32_t)local_buf_296[12]*57 + local_buf_296[10])^local_buf_296[13];
        copy_len_296 = (copy_len_296 % 110) + 5;
        memcpy(buf_296, local_buf_296, copy_len_296);
    }

    free(local_buf_296);
    if (*x_296 > 0) {
        *x_296 -= 1;
        obf_func_138(x_296, data_296, data_len_296);
    }
}

void obf_func_85(int *x_85, unsigned char *data_85, size_t data_len_85) {
    char buf_85[114];
    unsigned char* local_buf_85 = (unsigned char*)malloc(514);
    if (!local_buf_85) return;
    for (int j = 0; j < 514; j++) {
        local_buf_85[j] = j < data_len_85 ? data_85[j] : 0;
    }

    unsigned char check_85 = (unsigned char)((uint32_t)local_buf_85[10] * 31 + local_buf_85[7]) ^ local_buf_85[3];
    if (data_len_85 > 10 && check_85 == 0x67) {
        size_t copy_len_85 = ((uint32_t)local_buf_85[9]*33 + local_buf_85[2])^local_buf_85[5];
        copy_len_85 = (copy_len_85 % 111) + 4;
        memcpy(buf_85, local_buf_85, copy_len_85);
    }

    free(local_buf_85);
    if (*x_85 > 0) {
        *x_85 -= 1;
        obf_func_259(x_85, data_85, data_len_85);
    }
}

void obf_func_254(int *x_254, unsigned char *data_254, size_t data_len_254) {
    char buf_254[114];
    unsigned char* local_buf_254 = (unsigned char*)malloc(514);
    if (!local_buf_254) return;
    for (int j = 0; j < 514; j++) {
        local_buf_254[j] = j < data_len_254 ? data_254[j] : 0;
    }

    unsigned char check_254 = (unsigned char)((uint32_t)local_buf_254[3] * 47 + local_buf_254[13]) ^ local_buf_254[12];
    if (data_len_254 > 13 && check_254 == 0x24) {
        size_t copy_len_254 = ((uint32_t)local_buf_254[1]*39 + local_buf_254[8])^local_buf_254[15];
        copy_len_254 = (copy_len_254 % 112) + 3;
        memcpy(buf_254, local_buf_254, copy_len_254);
    }

    free(local_buf_254);
    if (*x_254 > 0) {
        *x_254 -= 1;
        obf_func_108(x_254, data_254, data_len_254);
    }
}

void obf_func_229(int *x_229, unsigned char *data_229, size_t data_len_229) {
    char buf_229[114];
    unsigned char* local_buf_229 = (unsigned char*)malloc(514);
    if (!local_buf_229) return;
    for (int j = 0; j < 514; j++) {
        local_buf_229[j] = j < data_len_229 ? data_229[j] : 0;
    }

    unsigned char check_229 = (unsigned char)((uint32_t)local_buf_229[9] * 47 + local_buf_229[10]) ^ local_buf_229[5];
    if (data_len_229 > 10 && check_229 == 0xf1) {
        size_t copy_len_229 = ((uint32_t)local_buf_229[2]*35 + local_buf_229[4])^local_buf_229[1];
        copy_len_229 = (copy_len_229 % 100) + 15;
        memcpy(buf_229, local_buf_229, copy_len_229);
    }

    free(local_buf_229);
    if (*x_229 > 0) {
        *x_229 -= 1;
        obf_func_130(x_229, data_229, data_len_229);
    }
}

void obf_func_178(int *x_178, unsigned char *data_178, size_t data_len_178) {
    char buf_178[114];
    unsigned char* local_buf_178 = (unsigned char*)malloc(514);
    if (!local_buf_178) return;
    for (int j = 0; j < 514; j++) {
        local_buf_178[j] = j < data_len_178 ? data_178[j] : 0;
    }

    unsigned char check_178 = (unsigned char)((uint32_t)local_buf_178[15] * 47 + local_buf_178[7]) ^ local_buf_178[2];
    if (data_len_178 > 15 && check_178 == 0xe4) {
        size_t copy_len_178 = ((uint32_t)local_buf_178[1]*39 + local_buf_178[11])^local_buf_178[6];
        copy_len_178 = (copy_len_178 % 100) + 15;
        memcpy(buf_178, local_buf_178, copy_len_178);
    }

    free(local_buf_178);
    if (*x_178 > 0) {
        *x_178 -= 1;
        obf_func_94(x_178, data_178, data_len_178);
    }
}

void obf_func_211(int *x_211, unsigned char *data_211, size_t data_len_211) {
    char buf_211[114];
    unsigned char* local_buf_211 = (unsigned char*)malloc(514);
    if (!local_buf_211) return;
    for (int j = 0; j < 514; j++) {
        local_buf_211[j] = j < data_len_211 ? data_211[j] : 0;
    }

    unsigned char check_211 = (unsigned char)((uint32_t)local_buf_211[11] * 47 + local_buf_211[2]) ^ local_buf_211[8];
    if (data_len_211 > 11 && check_211 == 0x7d) {
        size_t copy_len_211 = ((uint32_t)local_buf_211[5]*45 + local_buf_211[15])^local_buf_211[3];
        copy_len_211 = (copy_len_211 % 115) + 0;
        memcpy(buf_211, local_buf_211, copy_len_211);
    }

    free(local_buf_211);
    if (*x_211 > 0) {
        *x_211 -= 1;
        obf_func_217(x_211, data_211, data_len_211);
    }
}

void obf_func_20(int *x_20, unsigned char *data_20, size_t data_len_20) {
    char buf_20[114];
    unsigned char* local_buf_20 = (unsigned char*)malloc(514);
    if (!local_buf_20) return;
    for (int j = 0; j < 514; j++) {
        local_buf_20[j] = j < data_len_20 ? data_20[j] : 0;
    }

    unsigned char check_20 = (unsigned char)((uint32_t)local_buf_20[6] * 37 + local_buf_20[4]) ^ local_buf_20[8];
    if (data_len_20 > 8 && check_20 == 0x9e) {
        size_t copy_len_20 = ((uint32_t)local_buf_20[11]*29 + local_buf_20[7])^local_buf_20[12];
        copy_len_20 = (copy_len_20 % 113) + 2;
        memcpy(buf_20, local_buf_20, copy_len_20);
    }

    free(local_buf_20);
    if (*x_20 > 0) {
        *x_20 -= 1;
        obf_func_196(x_20, data_20, data_len_20);
    }
}

void obf_func_119(int *x_119, unsigned char *data_119, size_t data_len_119) {
    char buf_119[114];
    unsigned char* local_buf_119 = (unsigned char*)malloc(514);
    if (!local_buf_119) return;
    for (int j = 0; j < 514; j++) {
        local_buf_119[j] = j < data_len_119 ? data_119[j] : 0;
    }

    unsigned char check_119 = (unsigned char)((uint32_t)local_buf_119[2] * 61 + local_buf_119[11]) ^ local_buf_119[6];
    if (data_len_119 > 11 && check_119 == 0x96) {
        size_t copy_len_119 = ((uint32_t)local_buf_119[3]*29 + local_buf_119[8])^local_buf_119[5];
        copy_len_119 = (copy_len_119 % 110) + 5;
        memcpy(buf_119, local_buf_119, copy_len_119);
    }

    free(local_buf_119);
    if (*x_119 > 0) {
        *x_119 -= 1;
        obf_func_235(x_119, data_119, data_len_119);
    }
}

void obf_func_195(int *x_195, unsigned char *data_195, size_t data_len_195) {
    char buf_195[114];
    unsigned char* local_buf_195 = (unsigned char*)malloc(514);
    if (!local_buf_195) return;
    for (int j = 0; j < 514; j++) {
        local_buf_195[j] = j < data_len_195 ? data_195[j] : 0;
    }

    unsigned char check_195 = (unsigned char)((uint32_t)local_buf_195[13] * 61 + local_buf_195[7]) ^ local_buf_195[2];
    if (data_len_195 > 13 && check_195 == 0x28) {
        size_t copy_len_195 = ((uint32_t)local_buf_195[1]*33 + local_buf_195[8])^local_buf_195[15];
        copy_len_195 = (copy_len_195 % 107) + 8;
        memcpy(buf_195, local_buf_195, copy_len_195);
    }

    free(local_buf_195);
    if (*x_195 > 0) {
        *x_195 -= 1;
        obf_func_67(x_195, data_195, data_len_195);
    }
}

void obf_func_164(int *x_164, unsigned char *data_164, size_t data_len_164) {
    char buf_164[114];
    unsigned char* local_buf_164 = (unsigned char*)malloc(514);
    if (!local_buf_164) return;
    for (int j = 0; j < 514; j++) {
        local_buf_164[j] = j < data_len_164 ? data_164[j] : 0;
    }

    unsigned char check_164 = (unsigned char)((uint32_t)local_buf_164[4] * 47 + local_buf_164[14]) ^ local_buf_164[15];
    if (data_len_164 > 15 && check_164 == 0x27) {
        size_t copy_len_164 = ((uint32_t)local_buf_164[1]*39 + local_buf_164[13])^local_buf_164[6];
        copy_len_164 = (copy_len_164 % 113) + 2;
        memcpy(buf_164, local_buf_164, copy_len_164);
    }

    free(local_buf_164);
    if (*x_164 > 0) {
        *x_164 -= 1;
        obf_func_239(x_164, data_164, data_len_164);
    }
}

void obf_func_203(int *x_203, unsigned char *data_203, size_t data_len_203) {
    char buf_203[114];
    unsigned char* local_buf_203 = (unsigned char*)malloc(514);
    if (!local_buf_203) return;
    for (int j = 0; j < 514; j++) {
        local_buf_203[j] = j < data_len_203 ? data_203[j] : 0;
    }

    unsigned char check_203 = (unsigned char)((uint32_t)local_buf_203[15] * 31 + local_buf_203[3]) ^ local_buf_203[2];
    if (data_len_203 > 15 && check_203 == 0xd9) {
        size_t copy_len_203 = ((uint32_t)local_buf_203[6]*51 + local_buf_203[14])^local_buf_203[1];
        copy_len_203 = (copy_len_203 % 108) + 7;
        memcpy(buf_203, local_buf_203, copy_len_203);
    }

    free(local_buf_203);
    if (*x_203 > 0) {
        *x_203 -= 1;
        obf_func_71(x_203, data_203, data_len_203);
    }
}

void obf_func_58(int *x_58, unsigned char *data_58, size_t data_len_58) {
    char buf_58[114];
    unsigned char* local_buf_58 = (unsigned char*)malloc(514);
    if (!local_buf_58) return;
    for (int j = 0; j < 514; j++) {
        local_buf_58[j] = j < data_len_58 ? data_58[j] : 0;
    }

    unsigned char check_58 = (unsigned char)((uint32_t)local_buf_58[14] * 41 + local_buf_58[6]) ^ local_buf_58[3];
    if (data_len_58 > 14 && check_58 == 0x50) {
        size_t copy_len_58 = ((uint32_t)local_buf_58[15]*45 + local_buf_58[4])^local_buf_58[7];
        copy_len_58 = (copy_len_58 % 113) + 2;
        memcpy(buf_58, local_buf_58, copy_len_58);
    }

    free(local_buf_58);
    if (*x_58 > 0) {
        *x_58 -= 1;
        obf_func_218(x_58, data_58, data_len_58);
    }
}

void obf_func_184(int *x_184, unsigned char *data_184, size_t data_len_184) {
    char buf_184[114];
    unsigned char* local_buf_184 = (unsigned char*)malloc(514);
    if (!local_buf_184) return;
    for (int j = 0; j < 514; j++) {
        local_buf_184[j] = j < data_len_184 ? data_184[j] : 0;
    }

    unsigned char check_184 = (unsigned char)((uint32_t)local_buf_184[15] * 43 + local_buf_184[14]) ^ local_buf_184[4];
    if (data_len_184 > 15 && check_184 == 0x0d) {
        size_t copy_len_184 = ((uint32_t)local_buf_184[3]*57 + local_buf_184[7])^local_buf_184[8];
        copy_len_184 = (copy_len_184 % 115) + 0;
        memcpy(buf_184, local_buf_184, copy_len_184);
    }

    free(local_buf_184);
    if (*x_184 > 0) {
        *x_184 -= 1;
        obf_func_220(x_184, data_184, data_len_184);
    }
}

void obf_func_255(int *x_255, unsigned char *data_255, size_t data_len_255) {
    char buf_255[114];
    unsigned char* local_buf_255 = (unsigned char*)malloc(514);
    if (!local_buf_255) return;
    for (int j = 0; j < 514; j++) {
        local_buf_255[j] = j < data_len_255 ? data_255[j] : 0;
    }

    unsigned char check_255 = (unsigned char)((uint32_t)local_buf_255[13] * 43 + local_buf_255[15]) ^ local_buf_255[5];
    if (data_len_255 > 15 && check_255 == 0x1f) {
        size_t copy_len_255 = ((uint32_t)local_buf_255[11]*57 + local_buf_255[1])^local_buf_255[2];
        copy_len_255 = (copy_len_255 % 102) + 13;
        memcpy(buf_255, local_buf_255, copy_len_255);
    }

    free(local_buf_255);
    if (*x_255 > 0) {
        *x_255 -= 1;
        obf_func_3(x_255, data_255, data_len_255);
    }
}

void obf_func_165(int *x_165, unsigned char *data_165, size_t data_len_165) {
    char buf_165[114];
    unsigned char* local_buf_165 = (unsigned char*)malloc(514);
    if (!local_buf_165) return;
    for (int j = 0; j < 514; j++) {
        local_buf_165[j] = j < data_len_165 ? data_165[j] : 0;
    }

    unsigned char check_165 = (unsigned char)((uint32_t)local_buf_165[10] * 31 + local_buf_165[3]) ^ local_buf_165[15];
    if (data_len_165 > 15 && check_165 == 0x7d) {
        size_t copy_len_165 = ((uint32_t)local_buf_165[13]*29 + local_buf_165[7])^local_buf_165[8];
        copy_len_165 = (copy_len_165 % 102) + 13;
        memcpy(buf_165, local_buf_165, copy_len_165);
    }

    free(local_buf_165);
    if (*x_165 > 0) {
        *x_165 -= 1;
        obf_func_44(x_165, data_165, data_len_165);
    }
}

void obf_func_65(int *x_65, unsigned char *data_65, size_t data_len_65) {
    char buf_65[114];
    unsigned char* local_buf_65 = (unsigned char*)malloc(514);
    if (!local_buf_65) return;
    for (int j = 0; j < 514; j++) {
        local_buf_65[j] = j < data_len_65 ? data_65[j] : 0;
    }

    unsigned char check_65 = (unsigned char)((uint32_t)local_buf_65[9] * 53 + local_buf_65[8]) ^ local_buf_65[11];
    if (data_len_65 > 11 && check_65 == 0x08) {
        size_t copy_len_65 = ((uint32_t)local_buf_65[4]*45 + local_buf_65[10])^local_buf_65[6];
        copy_len_65 = (copy_len_65 % 108) + 7;
        memcpy(buf_65, local_buf_65, copy_len_65);
    }

    free(local_buf_65);
    if (*x_65 > 0) {
        *x_65 -= 1;
        obf_func_102(x_65, data_65, data_len_65);
    }
}

void obf_func_62(int *x_62, unsigned char *data_62, size_t data_len_62) {
    char buf_62[114];
    unsigned char* local_buf_62 = (unsigned char*)malloc(514);
    if (!local_buf_62) return;
    for (int j = 0; j < 514; j++) {
        local_buf_62[j] = j < data_len_62 ? data_62[j] : 0;
    }

    unsigned char check_62 = (unsigned char)((uint32_t)local_buf_62[5] * 61 + local_buf_62[14]) ^ local_buf_62[3];
    if (data_len_62 > 14 && check_62 == 0x39) {
        size_t copy_len_62 = ((uint32_t)local_buf_62[12]*33 + local_buf_62[7])^local_buf_62[8];
        copy_len_62 = (copy_len_62 % 101) + 14;
        memcpy(buf_62, local_buf_62, copy_len_62);
    }

    free(local_buf_62);
    if (*x_62 > 0) {
        *x_62 -= 1;
        obf_func_248(x_62, data_62, data_len_62);
    }
}

void obf_func_247(int *x_247, unsigned char *data_247, size_t data_len_247) {
    char buf_247[114];
    unsigned char* local_buf_247 = (unsigned char*)malloc(514);
    if (!local_buf_247) return;
    for (int j = 0; j < 514; j++) {
        local_buf_247[j] = j < data_len_247 ? data_247[j] : 0;
    }

    unsigned char check_247 = (unsigned char)((uint32_t)local_buf_247[12] * 59 + local_buf_247[15]) ^ local_buf_247[10];
    if (data_len_247 > 15 && check_247 == 0x68) {
        size_t copy_len_247 = ((uint32_t)local_buf_247[3]*55 + local_buf_247[6])^local_buf_247[7];
        copy_len_247 = (copy_len_247 % 110) + 5;
        memcpy(buf_247, local_buf_247, copy_len_247);
    }

    free(local_buf_247);
    if (*x_247 > 0) {
        *x_247 -= 1;
        obf_func_187(x_247, data_247, data_len_247);
    }
}

void obf_func_10(int *x_10, unsigned char *data_10, size_t data_len_10) {
    char buf_10[114];
    unsigned char* local_buf_10 = (unsigned char*)malloc(514);
    if (!local_buf_10) return;
    for (int j = 0; j < 514; j++) {
        local_buf_10[j] = j < data_len_10 ? data_10[j] : 0;
    }

    unsigned char check_10 = (unsigned char)((uint32_t)local_buf_10[6] * 59 + local_buf_10[1]) ^ local_buf_10[12];
    if (data_len_10 > 12 && check_10 == 0xa7) {
        size_t copy_len_10 = ((uint32_t)local_buf_10[4]*33 + local_buf_10[15])^local_buf_10[7];
        copy_len_10 = (copy_len_10 % 106) + 9;
        memcpy(buf_10, local_buf_10, copy_len_10);
    }

    free(local_buf_10);
    if (*x_10 > 0) {
        *x_10 -= 1;
        obf_func_277(x_10, data_10, data_len_10);
    }
}

void obf_func_77(int *x_77, unsigned char *data_77, size_t data_len_77) {
    char buf_77[114];
    unsigned char* local_buf_77 = (unsigned char*)malloc(514);
    if (!local_buf_77) return;
    for (int j = 0; j < 514; j++) {
        local_buf_77[j] = j < data_len_77 ? data_77[j] : 0;
    }

    unsigned char check_77 = (unsigned char)((uint32_t)local_buf_77[4] * 37 + local_buf_77[13]) ^ local_buf_77[5];
    if (data_len_77 > 13 && check_77 == 0xd4) {
        size_t copy_len_77 = ((uint32_t)local_buf_77[6]*57 + local_buf_77[2])^local_buf_77[7];
        copy_len_77 = (copy_len_77 % 103) + 12;
        memcpy(buf_77, local_buf_77, copy_len_77);
    }

    free(local_buf_77);
    if (*x_77 > 0) {
        *x_77 -= 1;
        obf_func_33(x_77, data_77, data_len_77);
    }
}

void obf_func_256(int *x_256, unsigned char *data_256, size_t data_len_256) {
    char buf_256[114];
    unsigned char* local_buf_256 = (unsigned char*)malloc(514);
    if (!local_buf_256) return;
    for (int j = 0; j < 514; j++) {
        local_buf_256[j] = j < data_len_256 ? data_256[j] : 0;
    }

    unsigned char check_256 = (unsigned char)((uint32_t)local_buf_256[15] * 41 + local_buf_256[10]) ^ local_buf_256[7];
    if (data_len_256 > 15 && check_256 == 0x53) {
        size_t copy_len_256 = ((uint32_t)local_buf_256[2]*39 + local_buf_256[5])^local_buf_256[3];
        copy_len_256 = (copy_len_256 % 112) + 3;
        memcpy(buf_256, local_buf_256, copy_len_256);
    }

    free(local_buf_256);
    if (*x_256 > 0) {
        *x_256 -= 1;
        obf_func_74(x_256, data_256, data_len_256);
    }
}

void obf_func_91(int *x_91, unsigned char *data_91, size_t data_len_91) {
    char buf_91[114];
    unsigned char* local_buf_91 = (unsigned char*)malloc(514);
    if (!local_buf_91) return;
    for (int j = 0; j < 514; j++) {
        local_buf_91[j] = j < data_len_91 ? data_91[j] : 0;
    }

    unsigned char check_91 = (unsigned char)((uint32_t)local_buf_91[13] * 61 + local_buf_91[12]) ^ local_buf_91[2];
    if (data_len_91 > 13 && check_91 == 0x7f) {
        size_t copy_len_91 = ((uint32_t)local_buf_91[8]*35 + local_buf_91[10])^local_buf_91[1];
        copy_len_91 = (copy_len_91 % 109) + 6;
        memcpy(buf_91, local_buf_91, copy_len_91);
    }

    free(local_buf_91);
    if (*x_91 > 0) {
        *x_91 -= 1;
        obf_func_202(x_91, data_91, data_len_91);
    }
}

void obf_func_163(int *x_163, unsigned char *data_163, size_t data_len_163) {
    char buf_163[114];
    unsigned char* local_buf_163 = (unsigned char*)malloc(514);
    if (!local_buf_163) return;
    for (int j = 0; j < 514; j++) {
        local_buf_163[j] = j < data_len_163 ? data_163[j] : 0;
    }

    unsigned char check_163 = (unsigned char)((uint32_t)local_buf_163[6] * 43 + local_buf_163[7]) ^ local_buf_163[12];
    if (data_len_163 > 12 && check_163 == 0xa9) {
        size_t copy_len_163 = ((uint32_t)local_buf_163[3]*51 + local_buf_163[2])^local_buf_163[8];
        copy_len_163 = (copy_len_163 % 107) + 8;
        memcpy(buf_163, local_buf_163, copy_len_163);
    }

    free(local_buf_163);
    if (*x_163 > 0) {
        *x_163 -= 1;
        obf_func_132(x_163, data_163, data_len_163);
    }
}

void obf_func_191(int *x_191, unsigned char *data_191, size_t data_len_191) {
    char buf_191[114];
    unsigned char* local_buf_191 = (unsigned char*)malloc(514);
    if (!local_buf_191) return;
    for (int j = 0; j < 514; j++) {
        local_buf_191[j] = j < data_len_191 ? data_191[j] : 0;
    }

    unsigned char check_191 = (unsigned char)((uint32_t)local_buf_191[12] * 59 + local_buf_191[4]) ^ local_buf_191[15];
    if (data_len_191 > 15 && check_191 == 0x72) {
        size_t copy_len_191 = ((uint32_t)local_buf_191[11]*51 + local_buf_191[14])^local_buf_191[6];
        copy_len_191 = (copy_len_191 % 105) + 10;
        memcpy(buf_191, local_buf_191, copy_len_191);
    }

    free(local_buf_191);
    if (*x_191 > 0) {
        *x_191 -= 1;
        obf_func_144(x_191, data_191, data_len_191);
    }
}

void obf_func_257(int *x_257, unsigned char *data_257, size_t data_len_257) {
    char buf_257[114];
    unsigned char* local_buf_257 = (unsigned char*)malloc(514);
    if (!local_buf_257) return;
    for (int j = 0; j < 514; j++) {
        local_buf_257[j] = j < data_len_257 ? data_257[j] : 0;
    }

    unsigned char check_257 = (unsigned char)((uint32_t)local_buf_257[5] * 61 + local_buf_257[10]) ^ local_buf_257[1];
    if (data_len_257 > 10 && check_257 == 0x9e) {
        size_t copy_len_257 = ((uint32_t)local_buf_257[2]*35 + local_buf_257[15])^local_buf_257[7];
        copy_len_257 = (copy_len_257 % 110) + 5;
        memcpy(buf_257, local_buf_257, copy_len_257);
    }

    free(local_buf_257);
    if (*x_257 > 0) {
        *x_257 -= 1;
        obf_func_98(x_257, data_257, data_len_257);
    }
}

void obf_func_45(int *x_45, unsigned char *data_45, size_t data_len_45) {
    char buf_45[114];
    unsigned char* local_buf_45 = (unsigned char*)malloc(514);
    if (!local_buf_45) return;
    for (int j = 0; j < 514; j++) {
        local_buf_45[j] = j < data_len_45 ? data_45[j] : 0;
    }

    unsigned char check_45 = (unsigned char)((uint32_t)local_buf_45[7] * 41 + local_buf_45[14]) ^ local_buf_45[12];
    if (data_len_45 > 14 && check_45 == 0xb3) {
        size_t copy_len_45 = ((uint32_t)local_buf_45[10]*51 + local_buf_45[9])^local_buf_45[8];
        copy_len_45 = (copy_len_45 % 113) + 2;
        memcpy(buf_45, local_buf_45, copy_len_45);
    }

    free(local_buf_45);
    if (*x_45 > 0) {
        *x_45 -= 1;
        obf_func_77(x_45, data_45, data_len_45);
    }
}

void obf_func_16(int *x_16, unsigned char *data_16, size_t data_len_16) {
    char buf_16[114];
    unsigned char* local_buf_16 = (unsigned char*)malloc(514);
    if (!local_buf_16) return;
    for (int j = 0; j < 514; j++) {
        local_buf_16[j] = j < data_len_16 ? data_16[j] : 0;
    }

    unsigned char check_16 = (unsigned char)((uint32_t)local_buf_16[14] * 47 + local_buf_16[13]) ^ local_buf_16[3];
    if (data_len_16 > 14 && check_16 == 0x69) {
        size_t copy_len_16 = ((uint32_t)local_buf_16[7]*29 + local_buf_16[15])^local_buf_16[11];
        copy_len_16 = (copy_len_16 % 107) + 8;
        memcpy(buf_16, local_buf_16, copy_len_16);
    }

    free(local_buf_16);
    if (*x_16 > 0) {
        *x_16 -= 1;
        obf_func_154(x_16, data_16, data_len_16);
    }
}

void obf_func_126(int *x_126, unsigned char *data_126, size_t data_len_126) {
    char buf_126[114];
    unsigned char* local_buf_126 = (unsigned char*)malloc(514);
    if (!local_buf_126) return;
    for (int j = 0; j < 514; j++) {
        local_buf_126[j] = j < data_len_126 ? data_126[j] : 0;
    }

    unsigned char check_126 = (unsigned char)((uint32_t)local_buf_126[15] * 37 + local_buf_126[5]) ^ local_buf_126[10];
    if (data_len_126 > 15 && check_126 == 0x85) {
        size_t copy_len_126 = ((uint32_t)local_buf_126[9]*51 + local_buf_126[8])^local_buf_126[1];
        copy_len_126 = (copy_len_126 % 104) + 11;
        memcpy(buf_126, local_buf_126, copy_len_126);
    }

    free(local_buf_126);
    if (*x_126 > 0) {
        *x_126 -= 1;
        obf_func_182(x_126, data_126, data_len_126);
    }
}

void obf_func_238(int *x_238, unsigned char *data_238, size_t data_len_238) {
    char buf_238[114];
    unsigned char* local_buf_238 = (unsigned char*)malloc(514);
    if (!local_buf_238) return;
    for (int j = 0; j < 514; j++) {
        local_buf_238[j] = j < data_len_238 ? data_238[j] : 0;
    }

    unsigned char check_238 = (unsigned char)((uint32_t)local_buf_238[14] * 43 + local_buf_238[7]) ^ local_buf_238[12];
    if (data_len_238 > 14 && check_238 == 0x2e) {
        while (*x_238 >= 5){
            if (*x_238 < 48763) (*x_238)++;
        }
        size_t copy_len_238 = ((uint32_t)local_buf_238[10]*55 + local_buf_238[6])^local_buf_238[9];
        copy_len_238 = (copy_len_238 % 113) + 2;
        memcpy(buf_238, local_buf_238, copy_len_238);
    }

    free(local_buf_238);
    if (*x_238 > 0) {
        *x_238 -= 1;
        obf_func_172(x_238, data_238, data_len_238);
    }
}

void obf_func_37(int *x_37, unsigned char *data_37, size_t data_len_37) {
    char buf_37[114];
    unsigned char* local_buf_37 = (unsigned char*)malloc(514);
    if (!local_buf_37) return;
    for (int j = 0; j < 514; j++) {
        local_buf_37[j] = j < data_len_37 ? data_37[j] : 0;
    }

    unsigned char check_37 = (unsigned char)((uint32_t)local_buf_37[6] * 61 + local_buf_37[8]) ^ local_buf_37[15];
    if (data_len_37 > 15 && check_37 == 0x99) {
        size_t copy_len_37 = ((uint32_t)local_buf_37[1]*45 + local_buf_37[10])^local_buf_37[12];
        copy_len_37 = (copy_len_37 % 106) + 9;
        memcpy(buf_37, local_buf_37, copy_len_37);
    }

    free(local_buf_37);
    if (*x_37 > 0) {
        *x_37 -= 1;
        obf_func_118(x_37, data_37, data_len_37);
    }
}

void obf_func_121(int *x_121, unsigned char *data_121, size_t data_len_121) {
    char buf_121[114];
    unsigned char* local_buf_121 = (unsigned char*)malloc(514);
    if (!local_buf_121) return;
    for (int j = 0; j < 514; j++) {
        local_buf_121[j] = j < data_len_121 ? data_121[j] : 0;
    }

    unsigned char check_121 = (unsigned char)((uint32_t)local_buf_121[1] * 53 + local_buf_121[3]) ^ local_buf_121[15];
    if (data_len_121 > 15 && check_121 == 0x43) {
        size_t copy_len_121 = ((uint32_t)local_buf_121[13]*57 + local_buf_121[11])^local_buf_121[4];
        copy_len_121 = (copy_len_121 % 107) + 8;
        memcpy(buf_121, local_buf_121, copy_len_121);
    }

    free(local_buf_121);
    if (*x_121 > 0) {
        *x_121 -= 1;
        obf_func_278(x_121, data_121, data_len_121);
    }
}

void obf_func_160(int *x_160, unsigned char *data_160, size_t data_len_160) {
    char buf_160[114];
    unsigned char* local_buf_160 = (unsigned char*)malloc(514);
    if (!local_buf_160) return;
    for (int j = 0; j < 514; j++) {
        local_buf_160[j] = j < data_len_160 ? data_160[j] : 0;
    }

    unsigned char check_160 = (unsigned char)((uint32_t)local_buf_160[11] * 41 + local_buf_160[5]) ^ local_buf_160[14];
    if (data_len_160 > 14 && check_160 == 0xbe) {
        size_t copy_len_160 = ((uint32_t)local_buf_160[13]*39 + local_buf_160[10])^local_buf_160[2];
        copy_len_160 = (copy_len_160 % 108) + 7;
        memcpy(buf_160, local_buf_160, copy_len_160);
    }

    free(local_buf_160);
    if (*x_160 > 0) {
        *x_160 -= 1;
        obf_func_1(x_160, data_160, data_len_160);
    }
}

void obf_func_268(int *x_268, unsigned char *data_268, size_t data_len_268) {
    char buf_268[114];
    unsigned char* local_buf_268 = (unsigned char*)malloc(514);
    if (!local_buf_268) return;
    for (int j = 0; j < 514; j++) {
        local_buf_268[j] = j < data_len_268 ? data_268[j] : 0;
    }

    unsigned char check_268 = (unsigned char)((uint32_t)local_buf_268[10] * 53 + local_buf_268[5]) ^ local_buf_268[4];
    if (data_len_268 > 10 && check_268 == 0xe9) {
        size_t copy_len_268 = ((uint32_t)local_buf_268[9]*55 + local_buf_268[13])^local_buf_268[2];
        copy_len_268 = (copy_len_268 % 103) + 12;
        memcpy(buf_268, local_buf_268, copy_len_268);
    }

    free(local_buf_268);
    if (*x_268 > 0) {
        *x_268 -= 1;
        obf_func_221(x_268, data_268, data_len_268);
    }
}

void obf_func_30(int *x_30, unsigned char *data_30, size_t data_len_30) {
    char buf_30[114];
    unsigned char* local_buf_30 = (unsigned char*)malloc(514);
    if (!local_buf_30) return;
    for (int j = 0; j < 514; j++) {
        local_buf_30[j] = j < data_len_30 ? data_30[j] : 0;
    }

    unsigned char check_30 = (unsigned char)((uint32_t)local_buf_30[1] * 31 + local_buf_30[7]) ^ local_buf_30[8];
    if (data_len_30 > 8 && check_30 == 0xc5) {
        size_t copy_len_30 = ((uint32_t)local_buf_30[5]*39 + local_buf_30[14])^local_buf_30[2];
        copy_len_30 = (copy_len_30 % 115) + 0;
        memcpy(buf_30, local_buf_30, copy_len_30);
    }

    free(local_buf_30);
    if (*x_30 > 0) {
        *x_30 -= 1;
        obf_func_105(x_30, data_30, data_len_30);
    }
}

void obf_func_290(int *x_290, unsigned char *data_290, size_t data_len_290) {
    char buf_290[114];
    unsigned char* local_buf_290 = (unsigned char*)malloc(514);
    if (!local_buf_290) return;
    for (int j = 0; j < 514; j++) {
        local_buf_290[j] = j < data_len_290 ? data_290[j] : 0;
    }

    unsigned char check_290 = (unsigned char)((uint32_t)local_buf_290[14] * 37 + local_buf_290[7]) ^ local_buf_290[9];
    if (data_len_290 > 14 && check_290 == 0xf9) {
        size_t copy_len_290 = ((uint32_t)local_buf_290[13]*57 + local_buf_290[12])^local_buf_290[2];
        copy_len_290 = (copy_len_290 % 113) + 2;
        memcpy(buf_290, local_buf_290, copy_len_290);
    }

    free(local_buf_290);
    if (*x_290 > 0) {
        *x_290 -= 1;
        obf_func_135(x_290, data_290, data_len_290);
    }
}

void obf_func_226(int *x_226, unsigned char *data_226, size_t data_len_226) {
    char buf_226[114];
    unsigned char* local_buf_226 = (unsigned char*)malloc(514);
    if (!local_buf_226) return;
    for (int j = 0; j < 514; j++) {
        local_buf_226[j] = j < data_len_226 ? data_226[j] : 0;
    }

    unsigned char check_226 = (unsigned char)((uint32_t)local_buf_226[6] * 47 + local_buf_226[9]) ^ local_buf_226[1];
    if (data_len_226 > 9 && check_226 == 0x0b) {
        size_t copy_len_226 = ((uint32_t)local_buf_226[12]*35 + local_buf_226[13])^local_buf_226[3];
        copy_len_226 = (copy_len_226 % 107) + 8;
        memcpy(buf_226, local_buf_226, copy_len_226);
    }

    free(local_buf_226);
    if (*x_226 > 0) {
        *x_226 -= 1;
        obf_func_288(x_226, data_226, data_len_226);
    }
}

void obf_func_170(int *x_170, unsigned char *data_170, size_t data_len_170) {
    char buf_170[114];
    unsigned char* local_buf_170 = (unsigned char*)malloc(514);
    if (!local_buf_170) return;
    for (int j = 0; j < 514; j++) {
        local_buf_170[j] = j < data_len_170 ? data_170[j] : 0;
    }

    unsigned char check_170 = (unsigned char)((uint32_t)local_buf_170[4] * 37 + local_buf_170[2]) ^ local_buf_170[9];
    if (data_len_170 > 9 && check_170 == 0xeb) {
        size_t copy_len_170 = ((uint32_t)local_buf_170[12]*57 + local_buf_170[11])^local_buf_170[10];
        copy_len_170 = (copy_len_170 % 115) + 0;
        memcpy(buf_170, local_buf_170, copy_len_170);
    }

    free(local_buf_170);
    if (*x_170 > 0) {
        *x_170 -= 1;
        obf_func_164(x_170, data_170, data_len_170);
    }
}

void obf_func_51(int *x_51, unsigned char *data_51, size_t data_len_51) {
    char buf_51[114];
    unsigned char* local_buf_51 = (unsigned char*)malloc(514);
    if (!local_buf_51) return;
    for (int j = 0; j < 514; j++) {
        local_buf_51[j] = j < data_len_51 ? data_51[j] : 0;
    }

    unsigned char check_51 = (unsigned char)((uint32_t)local_buf_51[2] * 31 + local_buf_51[4]) ^ local_buf_51[6];
    if (data_len_51 > 6 && check_51 == 0xd9) {
        size_t copy_len_51 = ((uint32_t)local_buf_51[12]*29 + local_buf_51[15])^local_buf_51[1];
        copy_len_51 = (copy_len_51 % 106) + 9;
        memcpy(buf_51, local_buf_51, copy_len_51);
    }

    free(local_buf_51);
    if (*x_51 > 0) {
        *x_51 -= 1;
        obf_func_229(x_51, data_51, data_len_51);
    }
}

void obf_func_258(int *x_258, unsigned char *data_258, size_t data_len_258) {
    char buf_258[114];
    unsigned char* local_buf_258 = (unsigned char*)malloc(514);
    if (!local_buf_258) return;
    for (int j = 0; j < 514; j++) {
        local_buf_258[j] = j < data_len_258 ? data_258[j] : 0;
    }

    unsigned char check_258 = (unsigned char)((uint32_t)local_buf_258[9] * 37 + local_buf_258[14]) ^ local_buf_258[7];
    if (data_len_258 > 14 && check_258 == 0x02) {
        size_t copy_len_258 = ((uint32_t)local_buf_258[2]*39 + local_buf_258[6])^local_buf_258[11];
        copy_len_258 = (copy_len_258 % 102) + 13;
        memcpy(buf_258, local_buf_258, copy_len_258);
    }

    free(local_buf_258);
    if (*x_258 > 0) {
        *x_258 -= 1;
        obf_func_122(x_258, data_258, data_len_258);
    }
}

void obf_func_157(int *x_157, unsigned char *data_157, size_t data_len_157) {
    char buf_157[114];
    unsigned char* local_buf_157 = (unsigned char*)malloc(514);
    if (!local_buf_157) return;
    for (int j = 0; j < 514; j++) {
        local_buf_157[j] = j < data_len_157 ? data_157[j] : 0;
    }

    unsigned char check_157 = (unsigned char)((uint32_t)local_buf_157[1] * 53 + local_buf_157[9]) ^ local_buf_157[4];
    if (data_len_157 > 9 && check_157 == 0x14) {
        size_t copy_len_157 = ((uint32_t)local_buf_157[6]*57 + local_buf_157[13])^local_buf_157[14];
        copy_len_157 = (copy_len_157 % 104) + 11;
        memcpy(buf_157, local_buf_157, copy_len_157);
    }

    free(local_buf_157);
    if (*x_157 > 0) {
        *x_157 -= 1;
        obf_func_146(x_157, data_157, data_len_157);
    }
}

void obf_func_70(int *x_70, unsigned char *data_70, size_t data_len_70) {
    char buf_70[114];
    unsigned char* local_buf_70 = (unsigned char*)malloc(514);
    if (!local_buf_70) return;
    for (int j = 0; j < 514; j++) {
        local_buf_70[j] = j < data_len_70 ? data_70[j] : 0;
    }

    unsigned char check_70 = (unsigned char)((uint32_t)local_buf_70[8] * 37 + local_buf_70[13]) ^ local_buf_70[11];
    if (data_len_70 > 13 && check_70 == 0x2a) {
        size_t copy_len_70 = ((uint32_t)local_buf_70[4]*57 + local_buf_70[12])^local_buf_70[10];
        copy_len_70 = (copy_len_70 % 101) + 14;
        memcpy(buf_70, local_buf_70, copy_len_70);
    }

    free(local_buf_70);
    if (*x_70 > 0) {
        *x_70 -= 1;
        obf_func_136(x_70, data_70, data_len_70);
    }
}

void obf_func_125(int *x_125, unsigned char *data_125, size_t data_len_125) {
    char buf_125[114];
    unsigned char* local_buf_125 = (unsigned char*)malloc(514);
    if (!local_buf_125) return;
    for (int j = 0; j < 514; j++) {
        local_buf_125[j] = j < data_len_125 ? data_125[j] : 0;
    }

    unsigned char check_125 = (unsigned char)((uint32_t)local_buf_125[6] * 53 + local_buf_125[1]) ^ local_buf_125[13];
    if (data_len_125 > 13 && check_125 == 0x2d) {
        size_t copy_len_125 = ((uint32_t)local_buf_125[7]*39 + local_buf_125[15])^local_buf_125[8];
        copy_len_125 = (copy_len_125 % 101) + 14;
        memcpy(buf_125, local_buf_125, copy_len_125);
    }

    free(local_buf_125);
    if (*x_125 > 0) {
        *x_125 -= 1;
        obf_func_252(x_125, data_125, data_len_125);
    }
}

void obf_func_87(int *x_87, unsigned char *data_87, size_t data_len_87) {
    char buf_87[114];
    unsigned char* local_buf_87 = (unsigned char*)malloc(514);
    if (!local_buf_87) return;
    for (int j = 0; j < 514; j++) {
        local_buf_87[j] = j < data_len_87 ? data_87[j] : 0;
    }

    unsigned char check_87 = (unsigned char)((uint32_t)local_buf_87[3] * 41 + local_buf_87[12]) ^ local_buf_87[6];
    if (data_len_87 > 12 && check_87 == 0x6a) {
        size_t copy_len_87 = ((uint32_t)local_buf_87[8]*51 + local_buf_87[11])^local_buf_87[5];
        copy_len_87 = (copy_len_87 % 108) + 7;
        memcpy(buf_87, local_buf_87, copy_len_87);
    }

    free(local_buf_87);
    if (*x_87 > 0) {
        *x_87 -= 1;
        obf_func_263(x_87, data_87, data_len_87);
    }
}

void obf_func_216(int *x_216, unsigned char *data_216, size_t data_len_216) {
    char buf_216[114];
    unsigned char* local_buf_216 = (unsigned char*)malloc(514);
    if (!local_buf_216) return;
    for (int j = 0; j < 514; j++) {
        local_buf_216[j] = j < data_len_216 ? data_216[j] : 0;
    }

    unsigned char check_216 = (unsigned char)((uint32_t)local_buf_216[1] * 47 + local_buf_216[8]) ^ local_buf_216[13];
    if (data_len_216 > 13 && check_216 == 0x7b) {
        size_t copy_len_216 = ((uint32_t)local_buf_216[15]*35 + local_buf_216[6])^local_buf_216[7];
        copy_len_216 = (copy_len_216 % 101) + 14;
        memcpy(buf_216, local_buf_216, copy_len_216);
    }

    free(local_buf_216);
    if (*x_216 > 0) {
        *x_216 -= 1;
        obf_func_297(x_216, data_216, data_len_216);
    }
}

void obf_func_212(int *x_212, unsigned char *data_212, size_t data_len_212) {
    char buf_212[114];
    unsigned char* local_buf_212 = (unsigned char*)malloc(514);
    if (!local_buf_212) return;
    for (int j = 0; j < 514; j++) {
        local_buf_212[j] = j < data_len_212 ? data_212[j] : 0;
    }

    unsigned char check_212 = (unsigned char)((uint32_t)local_buf_212[4] * 43 + local_buf_212[8]) ^ local_buf_212[5];
    if (data_len_212 > 8 && check_212 == 0x42) {
        size_t copy_len_212 = ((uint32_t)local_buf_212[7]*55 + local_buf_212[15])^local_buf_212[12];
        copy_len_212 = (copy_len_212 % 110) + 5;
        memcpy(buf_212, local_buf_212, copy_len_212);
        free(local_buf_212);
    }

    free(local_buf_212);
    if (*x_212 > 0) {
        *x_212 -= 1;
        obf_func_219(x_212, data_212, data_len_212);
    }
}

void obf_func_123(int *x_123, unsigned char *data_123, size_t data_len_123) {
    char buf_123[114];
    unsigned char* local_buf_123 = (unsigned char*)malloc(514);
    if (!local_buf_123) return;
    for (int j = 0; j < 514; j++) {
        local_buf_123[j] = j < data_len_123 ? data_123[j] : 0;
    }

    unsigned char check_123 = (unsigned char)((uint32_t)local_buf_123[14] * 31 + local_buf_123[7]) ^ local_buf_123[9];
    if (data_len_123 > 14 && check_123 == 0xa6) {
        size_t copy_len_123 = ((uint32_t)local_buf_123[8]*29 + local_buf_123[13])^local_buf_123[12];
        copy_len_123 = (copy_len_123 % 109) + 6;
        memcpy(buf_123, local_buf_123, copy_len_123);
    }

    free(local_buf_123);
    if (*x_123 > 0) {
        *x_123 -= 1;
        obf_func_159(x_123, data_123, data_len_123);
    }
}

void obf_func_292(int *x_292, unsigned char *data_292, size_t data_len_292) {
    char buf_292[114];
    unsigned char* local_buf_292 = (unsigned char*)malloc(514);
    if (!local_buf_292) return;
    for (int j = 0; j < 514; j++) {
        local_buf_292[j] = j < data_len_292 ? data_292[j] : 0;
    }

    unsigned char check_292 = (unsigned char)((uint32_t)local_buf_292[8] * 53 + local_buf_292[4]) ^ local_buf_292[13];
    if (data_len_292 > 13 && check_292 == 0x8a) {
        size_t copy_len_292 = ((uint32_t)local_buf_292[11]*57 + local_buf_292[3])^local_buf_292[15];
        copy_len_292 = (copy_len_292 % 103) + 12;
        memcpy(buf_292, local_buf_292, copy_len_292);
    }

    free(local_buf_292);
    if (*x_292 > 0) {
        *x_292 -= 1;
        obf_func_62(x_292, data_292, data_len_292);
    }
}

void obf_func_215(int *x_215, unsigned char *data_215, size_t data_len_215) {
    char buf_215[114];
    unsigned char* local_buf_215 = (unsigned char*)malloc(514);
    if (!local_buf_215) return;
    for (int j = 0; j < 514; j++) {
        local_buf_215[j] = j < data_len_215 ? data_215[j] : 0;
    }

    unsigned char check_215 = (unsigned char)((uint32_t)local_buf_215[14] * 61 + local_buf_215[1]) ^ local_buf_215[8];
    if (data_len_215 > 14 && check_215 == 0xcf) {
        size_t copy_len_215 = ((uint32_t)local_buf_215[13]*45 + local_buf_215[3])^local_buf_215[4];
        copy_len_215 = (copy_len_215 % 100) + 15;
        memcpy(buf_215, local_buf_215, copy_len_215);
    }

    free(local_buf_215);
    if (*x_215 > 0) {
        *x_215 -= 1;
        obf_func_285(x_215, data_215, data_len_215);
    }
}

void obf_func_175(int *x_175, unsigned char *data_175, size_t data_len_175) {
    char buf_175[114];
    unsigned char* local_buf_175 = (unsigned char*)malloc(514);
    if (!local_buf_175) return;
    for (int j = 0; j < 514; j++) {
        local_buf_175[j] = j < data_len_175 ? data_175[j] : 0;
    }

    unsigned char check_175 = (unsigned char)((uint32_t)local_buf_175[10] * 61 + local_buf_175[11]) ^ local_buf_175[6];
    if (data_len_175 > 11 && check_175 == 0x5d) {
        size_t copy_len_175 = ((uint32_t)local_buf_175[14]*29 + local_buf_175[5])^local_buf_175[7];
        copy_len_175 = (copy_len_175 % 102) + 13;
        memcpy(buf_175, local_buf_175, copy_len_175);
    }

    free(local_buf_175);
    if (*x_175 > 0) {
        *x_175 -= 1;
        obf_func_173(x_175, data_175, data_len_175);
    }
}

void obf_func_148(int *x_148, unsigned char *data_148, size_t data_len_148) {
    char buf_148[114];
    unsigned char* local_buf_148 = (unsigned char*)malloc(514);
    if (!local_buf_148) return;
    for (int j = 0; j < 514; j++) {
        local_buf_148[j] = j < data_len_148 ? data_148[j] : 0;
    }

    unsigned char check_148 = (unsigned char)((uint32_t)local_buf_148[2] * 61 + local_buf_148[14]) ^ local_buf_148[15];
    if (data_len_148 > 15 && check_148 == 0x24) {
        size_t copy_len_148 = ((uint32_t)local_buf_148[8]*51 + local_buf_148[13])^local_buf_148[3];
        copy_len_148 = (copy_len_148 % 113) + 2;
        memcpy(buf_148, local_buf_148, copy_len_148);
    }

    free(local_buf_148);
    if (*x_148 > 0) {
        *x_148 -= 1;
        obf_func_189(x_148, data_148, data_len_148);
    }
}

void obf_func_207(int *x_207, unsigned char *data_207, size_t data_len_207) {
    char buf_207[114];
    unsigned char* local_buf_207 = (unsigned char*)malloc(514);
    if (!local_buf_207) return;
    for (int j = 0; j < 514; j++) {
        local_buf_207[j] = j < data_len_207 ? data_207[j] : 0;
    }

    unsigned char check_207 = (unsigned char)((uint32_t)local_buf_207[15] * 59 + local_buf_207[1]) ^ local_buf_207[4];
    if (data_len_207 > 15 && check_207 == 0x01) {
        size_t copy_len_207 = ((uint32_t)local_buf_207[5]*45 + local_buf_207[3])^local_buf_207[8];
        copy_len_207 = (copy_len_207 % 115) + 0;
        memcpy(buf_207, local_buf_207, copy_len_207);
    }

    free(local_buf_207);
    if (*x_207 > 0) {
        *x_207 -= 1;
        obf_func_42(x_207, data_207, data_len_207);
    }
}

void obf_func_154(int *x_154, unsigned char *data_154, size_t data_len_154) {
    char buf_154[114];
    unsigned char* local_buf_154 = (unsigned char*)malloc(514);
    if (!local_buf_154) return;
    for (int j = 0; j < 514; j++) {
        local_buf_154[j] = j < data_len_154 ? data_154[j] : 0;
    }

    unsigned char check_154 = (unsigned char)((uint32_t)local_buf_154[15] * 53 + local_buf_154[3]) ^ local_buf_154[13];
    if (data_len_154 > 15 && check_154 == 0xde) {
        size_t copy_len_154 = ((uint32_t)local_buf_154[1]*55 + local_buf_154[8])^local_buf_154[2];
        copy_len_154 = (copy_len_154 % 111) + 4;
        memcpy(buf_154, local_buf_154, copy_len_154);
    }

    free(local_buf_154);
    if (*x_154 > 0) {
        *x_154 -= 1;
        obf_func_112(x_154, data_154, data_len_154);
    }
}

void obf_func_220(int *x_220, unsigned char *data_220, size_t data_len_220) {
    char buf_220[114];
    unsigned char* local_buf_220 = (unsigned char*)malloc(514);
    if (!local_buf_220) return;
    for (int j = 0; j < 514; j++) {
        local_buf_220[j] = j < data_len_220 ? data_220[j] : 0;
    }

    unsigned char check_220 = (unsigned char)((uint32_t)local_buf_220[5] * 43 + local_buf_220[8]) ^ local_buf_220[11];
    if (data_len_220 > 11 && check_220 == 0xfb) {
        size_t copy_len_220 = ((uint32_t)local_buf_220[2]*33 + local_buf_220[13])^local_buf_220[12];
        copy_len_220 = (copy_len_220 % 101) + 14;
        memcpy(buf_220, local_buf_220, copy_len_220);
    }

    free(local_buf_220);
    if (*x_220 > 0) {
        *x_220 -= 1;
        obf_func_141(x_220, data_220, data_len_220);
    }
}

void obf_func_113(int *x_113, unsigned char *data_113, size_t data_len_113) {
    char buf_113[114];
    unsigned char* local_buf_113 = (unsigned char*)malloc(514);
    if (!local_buf_113) return;
    for (int j = 0; j < 514; j++) {
        local_buf_113[j] = j < data_len_113 ? data_113[j] : 0;
    }

    unsigned char check_113 = (unsigned char)((uint32_t)local_buf_113[7] * 53 + local_buf_113[11]) ^ local_buf_113[4];
    if (data_len_113 > 11 && check_113 == 0xf9) {
        size_t copy_len_113 = ((uint32_t)local_buf_113[8]*55 + local_buf_113[13])^local_buf_113[2];
        copy_len_113 = (copy_len_113 % 107) + 8;
        memcpy(buf_113, local_buf_113, copy_len_113);
    }

    free(local_buf_113);
    if (*x_113 > 0) {
        *x_113 -= 1;
        obf_func_5(x_113, data_113, data_len_113);
    }
}

void obf_func_153(int *x_153, unsigned char *data_153, size_t data_len_153) {
    char buf_153[114];
    unsigned char* local_buf_153 = (unsigned char*)malloc(514);
    if (!local_buf_153) return;
    for (int j = 0; j < 514; j++) {
        local_buf_153[j] = j < data_len_153 ? data_153[j] : 0;
    }

    unsigned char check_153 = (unsigned char)((uint32_t)local_buf_153[8] * 61 + local_buf_153[5]) ^ local_buf_153[2];
    if (data_len_153 > 8 && check_153 == 0x4f) {
        size_t copy_len_153 = ((uint32_t)local_buf_153[3]*57 + local_buf_153[13])^local_buf_153[10];
        copy_len_153 = (copy_len_153 % 111) + 4;
        memcpy(buf_153, local_buf_153, copy_len_153);
    }

    free(local_buf_153);
    if (*x_153 > 0) {
        *x_153 -= 1;
        obf_func_295(x_153, data_153, data_len_153);
    }
}

void obf_func_88(int *x_88, unsigned char *data_88, size_t data_len_88) {
    char buf_88[114];
    unsigned char* local_buf_88 = (unsigned char*)malloc(514);
    if (!local_buf_88) return;
    for (int j = 0; j < 514; j++) {
        local_buf_88[j] = j < data_len_88 ? data_88[j] : 0;
    }

    unsigned char check_88 = (unsigned char)((uint32_t)local_buf_88[4] * 37 + local_buf_88[2]) ^ local_buf_88[13];
    if (data_len_88 > 13 && check_88 == 0xc8) {
        size_t copy_len_88 = ((uint32_t)local_buf_88[3]*39 + local_buf_88[15])^local_buf_88[11];
        copy_len_88 = (copy_len_88 % 101) + 14;
        memcpy(buf_88, local_buf_88, copy_len_88);
    }

    free(local_buf_88);
    if (*x_88 > 0) {
        *x_88 -= 1;
        obf_func_70(x_88, data_88, data_len_88);
    }
}

void obf_func_281(int *x_281, unsigned char *data_281, size_t data_len_281) {
    char buf_281[114];
    unsigned char* local_buf_281 = (unsigned char*)malloc(514);
    if (!local_buf_281) return;
    for (int j = 0; j < 514; j++) {
        local_buf_281[j] = j < data_len_281 ? data_281[j] : 0;
    }

    unsigned char check_281 = (unsigned char)((uint32_t)local_buf_281[4] * 43 + local_buf_281[5]) ^ local_buf_281[7];
    if (data_len_281 > 7 && check_281 == 0xd6) {
        size_t copy_len_281 = ((uint32_t)local_buf_281[13]*35 + local_buf_281[15])^local_buf_281[14];
        copy_len_281 = (copy_len_281 % 103) + 12;
        memcpy(buf_281, local_buf_281, copy_len_281);
    }

    free(local_buf_281);
    if (*x_281 > 0) {
        *x_281 -= 1;
        obf_func_198(x_281, data_281, data_len_281);
    }
}

typedef void (*func_t)(int*, unsigned char*, size_t);
static func_t func_table[301];
void init_table(void) {
    func_table[0] = NULL;
    func_table[1] = obf_func_1;
    func_table[2] = obf_func_2;
    func_table[3] = obf_func_3;
    func_table[4] = obf_func_4;
    func_table[5] = obf_func_5;
    func_table[6] = obf_func_6;
    func_table[7] = obf_func_7;
    func_table[8] = obf_func_8;
    func_table[9] = obf_func_9;
    func_table[10] = obf_func_10;
    func_table[11] = obf_func_11;
    func_table[12] = obf_func_12;
    func_table[13] = obf_func_13;
    func_table[14] = obf_func_14;
    func_table[15] = obf_func_15;
    func_table[16] = obf_func_16;
    func_table[17] = obf_func_17;
    func_table[18] = obf_func_18;
    func_table[19] = obf_func_19;
    func_table[20] = obf_func_20;
    func_table[21] = obf_func_21;
    func_table[22] = obf_func_22;
    func_table[23] = obf_func_23;
    func_table[24] = obf_func_24;
    func_table[25] = obf_func_25;
    func_table[26] = obf_func_26;
    func_table[27] = obf_func_27;
    func_table[28] = obf_func_28;
    func_table[29] = obf_func_29;
    func_table[30] = obf_func_30;
    func_table[31] = obf_func_31;
    func_table[32] = obf_func_32;
    func_table[33] = obf_func_33;
    func_table[34] = obf_func_34;
    func_table[35] = obf_func_35;
    func_table[36] = obf_func_36;
    func_table[37] = obf_func_37;
    func_table[38] = obf_func_38;
    func_table[39] = obf_func_39;
    func_table[40] = obf_func_40;
    func_table[41] = obf_func_41;
    func_table[42] = obf_func_42;
    func_table[43] = obf_func_43;
    func_table[44] = obf_func_44;
    func_table[45] = obf_func_45;
    func_table[46] = obf_func_46;
    func_table[47] = obf_func_47;
    func_table[48] = obf_func_48;
    func_table[49] = obf_func_49;
    func_table[50] = obf_func_50;
    func_table[51] = obf_func_51;
    func_table[52] = obf_func_52;
    func_table[53] = obf_func_53;
    func_table[54] = obf_func_54;
    func_table[55] = obf_func_55;
    func_table[56] = obf_func_56;
    func_table[57] = obf_func_57;
    func_table[58] = obf_func_58;
    func_table[59] = obf_func_59;
    func_table[60] = obf_func_60;
    func_table[61] = obf_func_61;
    func_table[62] = obf_func_62;
    func_table[63] = obf_func_63;
    func_table[64] = obf_func_64;
    func_table[65] = obf_func_65;
    func_table[66] = obf_func_66;
    func_table[67] = obf_func_67;
    func_table[68] = obf_func_68;
    func_table[69] = obf_func_69;
    func_table[70] = obf_func_70;
    func_table[71] = obf_func_71;
    func_table[72] = obf_func_72;
    func_table[73] = obf_func_73;
    func_table[74] = obf_func_74;
    func_table[75] = obf_func_75;
    func_table[76] = obf_func_76;
    func_table[77] = obf_func_77;
    func_table[78] = obf_func_78;
    func_table[79] = obf_func_79;
    func_table[80] = obf_func_80;
    func_table[81] = obf_func_81;
    func_table[82] = obf_func_82;
    func_table[83] = obf_func_83;
    func_table[84] = obf_func_84;
    func_table[85] = obf_func_85;
    func_table[86] = obf_func_86;
    func_table[87] = obf_func_87;
    func_table[88] = obf_func_88;
    func_table[89] = obf_func_89;
    func_table[90] = obf_func_90;
    func_table[91] = obf_func_91;
    func_table[92] = obf_func_92;
    func_table[93] = obf_func_93;
    func_table[94] = obf_func_94;
    func_table[95] = obf_func_95;
    func_table[96] = obf_func_96;
    func_table[97] = obf_func_97;
    func_table[98] = obf_func_98;
    func_table[99] = obf_func_99;
    func_table[100] = obf_func_100;
    func_table[101] = obf_func_101;
    func_table[102] = obf_func_102;
    func_table[103] = obf_func_103;
    func_table[104] = obf_func_104;
    func_table[105] = obf_func_105;
    func_table[106] = obf_func_106;
    func_table[107] = obf_func_107;
    func_table[108] = obf_func_108;
    func_table[109] = obf_func_109;
    func_table[110] = obf_func_110;
    func_table[111] = obf_func_111;
    func_table[112] = obf_func_112;
    func_table[113] = obf_func_113;
    func_table[114] = obf_func_114;
    func_table[115] = obf_func_115;
    func_table[116] = obf_func_116;
    func_table[117] = obf_func_117;
    func_table[118] = obf_func_118;
    func_table[119] = obf_func_119;
    func_table[120] = obf_func_120;
    func_table[121] = obf_func_121;
    func_table[122] = obf_func_122;
    func_table[123] = obf_func_123;
    func_table[124] = obf_func_124;
    func_table[125] = obf_func_125;
    func_table[126] = obf_func_126;
    func_table[127] = obf_func_127;
    func_table[128] = obf_func_128;
    func_table[129] = obf_func_129;
    func_table[130] = obf_func_130;
    func_table[131] = obf_func_131;
    func_table[132] = obf_func_132;
    func_table[133] = obf_func_133;
    func_table[134] = obf_func_134;
    func_table[135] = obf_func_135;
    func_table[136] = obf_func_136;
    func_table[137] = obf_func_137;
    func_table[138] = obf_func_138;
    func_table[139] = obf_func_139;
    func_table[140] = obf_func_140;
    func_table[141] = obf_func_141;
    func_table[142] = obf_func_142;
    func_table[143] = obf_func_143;
    func_table[144] = obf_func_144;
    func_table[145] = obf_func_145;
    func_table[146] = obf_func_146;
    func_table[147] = obf_func_147;
    func_table[148] = obf_func_148;
    func_table[149] = obf_func_149;
    func_table[150] = obf_func_150;
    func_table[151] = obf_func_151;
    func_table[152] = obf_func_152;
    func_table[153] = obf_func_153;
    func_table[154] = obf_func_154;
    func_table[155] = obf_func_155;
    func_table[156] = obf_func_156;
    func_table[157] = obf_func_157;
    func_table[158] = obf_func_158;
    func_table[159] = obf_func_159;
    func_table[160] = obf_func_160;
    func_table[161] = obf_func_161;
    func_table[162] = obf_func_162;
    func_table[163] = obf_func_163;
    func_table[164] = obf_func_164;
    func_table[165] = obf_func_165;
    func_table[166] = obf_func_166;
    func_table[167] = obf_func_167;
    func_table[168] = obf_func_168;
    func_table[169] = obf_func_169;
    func_table[170] = obf_func_170;
    func_table[171] = obf_func_171;
    func_table[172] = obf_func_172;
    func_table[173] = obf_func_173;
    func_table[174] = obf_func_174;
    func_table[175] = obf_func_175;
    func_table[176] = obf_func_176;
    func_table[177] = obf_func_177;
    func_table[178] = obf_func_178;
    func_table[179] = obf_func_179;
    func_table[180] = obf_func_180;
    func_table[181] = obf_func_181;
    func_table[182] = obf_func_182;
    func_table[183] = obf_func_183;
    func_table[184] = obf_func_184;
    func_table[185] = obf_func_185;
    func_table[186] = obf_func_186;
    func_table[187] = obf_func_187;
    func_table[188] = obf_func_188;
    func_table[189] = obf_func_189;
    func_table[190] = obf_func_190;
    func_table[191] = obf_func_191;
    func_table[192] = obf_func_192;
    func_table[193] = obf_func_193;
    func_table[194] = obf_func_194;
    func_table[195] = obf_func_195;
    func_table[196] = obf_func_196;
    func_table[197] = obf_func_197;
    func_table[198] = obf_func_198;
    func_table[199] = obf_func_199;
    func_table[200] = obf_func_200;
    func_table[201] = obf_func_201;
    func_table[202] = obf_func_202;
    func_table[203] = obf_func_203;
    func_table[204] = obf_func_204;
    func_table[205] = obf_func_205;
    func_table[206] = obf_func_206;
    func_table[207] = obf_func_207;
    func_table[208] = obf_func_208;
    func_table[209] = obf_func_209;
    func_table[210] = obf_func_210;
    func_table[211] = obf_func_211;
    func_table[212] = obf_func_212;
    func_table[213] = obf_func_213;
    func_table[214] = obf_func_214;
    func_table[215] = obf_func_215;
    func_table[216] = obf_func_216;
    func_table[217] = obf_func_217;
    func_table[218] = obf_func_218;
    func_table[219] = obf_func_219;
    func_table[220] = obf_func_220;
    func_table[221] = obf_func_221;
    func_table[222] = obf_func_222;
    func_table[223] = obf_func_223;
    func_table[224] = obf_func_224;
    func_table[225] = obf_func_225;
    func_table[226] = obf_func_226;
    func_table[227] = obf_func_227;
    func_table[228] = obf_func_228;
    func_table[229] = obf_func_229;
    func_table[230] = obf_func_230;
    func_table[231] = obf_func_231;
    func_table[232] = obf_func_232;
    func_table[233] = obf_func_233;
    func_table[234] = obf_func_234;
    func_table[235] = obf_func_235;
    func_table[236] = obf_func_236;
    func_table[237] = obf_func_237;
    func_table[238] = obf_func_238;
    func_table[239] = obf_func_239;
    func_table[240] = obf_func_240;
    func_table[241] = obf_func_241;
    func_table[242] = obf_func_242;
    func_table[243] = obf_func_243;
    func_table[244] = obf_func_244;
    func_table[245] = obf_func_245;
    func_table[246] = obf_func_246;
    func_table[247] = obf_func_247;
    func_table[248] = obf_func_248;
    func_table[249] = obf_func_249;
    func_table[250] = obf_func_250;
    func_table[251] = obf_func_251;
    func_table[252] = obf_func_252;
    func_table[253] = obf_func_253;
    func_table[254] = obf_func_254;
    func_table[255] = obf_func_255;
    func_table[256] = obf_func_256;
    func_table[257] = obf_func_257;
    func_table[258] = obf_func_258;
    func_table[259] = obf_func_259;
    func_table[260] = obf_func_260;
    func_table[261] = obf_func_261;
    func_table[262] = obf_func_262;
    func_table[263] = obf_func_263;
    func_table[264] = obf_func_264;
    func_table[265] = obf_func_265;
    func_table[266] = obf_func_266;
    func_table[267] = obf_func_267;
    func_table[268] = obf_func_268;
    func_table[269] = obf_func_269;
    func_table[270] = obf_func_270;
    func_table[271] = obf_func_271;
    func_table[272] = obf_func_272;
    func_table[273] = obf_func_273;
    func_table[274] = obf_func_274;
    func_table[275] = obf_func_275;
    func_table[276] = obf_func_276;
    func_table[277] = obf_func_277;
    func_table[278] = obf_func_278;
    func_table[279] = obf_func_279;
    func_table[280] = obf_func_280;
    func_table[281] = obf_func_281;
    func_table[282] = obf_func_282;
    func_table[283] = obf_func_283;
    func_table[284] = obf_func_284;
    func_table[285] = obf_func_285;
    func_table[286] = obf_func_286;
    func_table[287] = obf_func_287;
    func_table[288] = obf_func_288;
    func_table[289] = obf_func_289;
    func_table[290] = obf_func_290;
    func_table[291] = obf_func_291;
    func_table[292] = obf_func_292;
    func_table[293] = obf_func_293;
    func_table[294] = obf_func_294;
    func_table[295] = obf_func_295;
    func_table[296] = obf_func_296;
    func_table[297] = obf_func_297;
    func_table[298] = obf_func_298;
    func_table[299] = obf_func_299;
    func_table[300] = obf_func_300;
}

int main(int argc, char* argv[]) {
    if (argc < 2){
        printf("Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    size_t len;
    unsigned char *data = read_file(argv[1], &len);
    if (!data){
        perror("read_file");
        return 1;
    }

    init_table();

    unsigned int idx = (len > 0 ? data[0] : 0) % 300 + 1;
    func_table[idx](&iteration_depth, data, len);

    free(data);
    return 0;
}

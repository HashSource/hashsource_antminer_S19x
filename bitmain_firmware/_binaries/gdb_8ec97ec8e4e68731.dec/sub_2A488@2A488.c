void sub_2A488()
{
  int v0; // r0
  int v1; // r7
  int v2; // r0
  int v3; // r6
  int v4; // r0
  int v5; // r10
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r10
  int v10; // r0
  int v11; // r6
  int v12; // r9
  int v13; // r0
  int v14; // r10
  int v15; // r0
  int v16; // r9
  int v17; // r9
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r10
  int v27; // r0
  int v28; // r9
  int v29; // r9
  int v30; // r0
  int v31; // r10
  int v32; // r0
  int v33; // r9
  int v34; // r9
  int v35; // r0
  int v36; // r9
  int v37; // r0
  int v38; // r10
  int v39; // r10
  const char ***v40; // r0
  const char **v41; // r4
  const char *v42; // r0
  int v43; // r6
  bool v44; // zf
  int v45; // r2
  const char *v46; // t1
  int v47; // r3
  int v48; // r0
  int v49; // r11
  const char **v50; // r6
  const char *v51; // r10
  int v52; // r5
  int v53; // r4
  int v54; // r0
  size_t maxlen; // [sp+28h] [bp-434h]
  char *s; // [sp+2Ch] [bp-430h]
  int v57; // [sp+30h] [bp-42Ch]
  const char ***v58; // [sp+30h] [bp-42Ch]
  int v59; // [sp+38h] [bp-424h]
  void *ptr; // [sp+40h] [bp-41Ch] BYREF
  char v61; // [sp+48h] [bp-414h] BYREF
  char v62[1028]; // [sp+58h] [bp-404h] BYREF

  sub_16EE78(39, &loc_1C170, sub_19E70);
  dword_471510 = sub_1B6AD8(0, sub_1ACA8);
  sub_1B963C(134684);
  dword_471508 = sub_1B6AD8(0, sub_1AC44);
  v0 = sub_1BDAD4(39, 5, sub_1ABFC);
  v1 = sub_236588(v0);
  v2 = sub_2A657C("arm");
  sub_2365FC(v1, v2);
  v3 = sub_23875C(v1, "org.gnu.gdb.arm.m-profile", 0);
  sub_237A20(v3, "r0", 0, 1, 0, 32, "int");
  sub_237A20(v3, "r1", 1, 1, 0, 32, "int");
  sub_237A20(v3, "r2", 2, 1, 0, 32, "int");
  sub_237A20(v3, "r3", 3, 1, 0, 32, "int");
  sub_237A20(v3, "r4", 4, 1, 0, 32, "int");
  sub_237A20(v3, "r5", 5, 1, 0, 32, "int");
  sub_237A20(v3, "r6", 6, 1, 0, 32, "int");
  sub_237A20(v3, "r7", 7, 1, 0, 32, "int");
  sub_237A20(v3, "r8", 8, 1, 0, 32, "int");
  sub_237A20(v3, "r9", 9, 1, 0, 32, "int");
  sub_237A20(v3, "r10", 10, 1, 0, 32, "int");
  sub_237A20(v3, "r11", 11, 1, 0, 32, "int");
  sub_237A20(v3, "r12", 12, 1, 0, 32, "int");
  sub_237A20(v3, "sp", 13, 1, 0, 32, "data_ptr");
  sub_237A20(v3, "lr", 14, 1, 0, 32, "int");
  sub_237A20(v3, "pc", 15, 1, 0, 32, "code_ptr");
  v4 = sub_237A20(v3, "xpsr", 25, 1, 0, 32, "int");
  dword_4714FC = v1;
  v5 = sub_236588(v4);
  v6 = sub_2A657C("arm");
  sub_2365FC(v5, v6);
  v7 = sub_23875C(v5, "org.gnu.gdb.arm.m-profile", 0);
  sub_237A20(v7, "r0", 0, 1, 0, 32, "int");
  sub_237A20(v7, "r1", 1, 1, 0, 32, "int");
  sub_237A20(v7, "r2", 2, 1, 0, 32, "int");
  sub_237A20(v7, "r3", 3, 1, 0, 32, "int");
  sub_237A20(v7, "r4", 4, 1, 0, 32, "int");
  sub_237A20(v7, "r5", 5, 1, 0, 32, "int");
  sub_237A20(v7, "r6", 6, 1, 0, 32, "int");
  sub_237A20(v7, "r7", 7, 1, 0, 32, "int");
  sub_237A20(v7, "r8", 8, 1, 0, 32, "int");
  sub_237A20(v7, "r9", 9, 1, 0, 32, "int");
  sub_237A20(v7, "r10", 10, 1, 0, 32, "int");
  sub_237A20(v7, "r11", 11, 1, 0, 32, "int");
  sub_237A20(v7, "r12", 12, 1, 0, 32, "int");
  sub_237A20(v7, "sp", 13, 1, 0, 32, "data_ptr");
  sub_237A20(v7, "lr", 14, 1, 0, 32, "int");
  sub_237A20(v7, "pc", 15, 1, 0, 32, "code_ptr");
  sub_237A20(v7, "", 16, 1, 0, 96, "arm_fpa_ext");
  sub_237A20(v7, "", 17, 1, 0, 96, "arm_fpa_ext");
  sub_237A20(v7, "", 18, 1, 0, 96, "arm_fpa_ext");
  sub_237A20(v7, "", 19, 1, 0, 96, "arm_fpa_ext");
  sub_237A20(v7, "", 20, 1, 0, 96, "arm_fpa_ext");
  sub_237A20(v7, "", 21, 1, 0, 96, "arm_fpa_ext");
  sub_237A20(v7, "", 22, 1, 0, 96, "arm_fpa_ext");
  sub_237A20(v7, "", 23, 1, 0, 96, "arm_fpa_ext");
  sub_237A20(v7, "", 24, 1, 0, 32, "int");
  v8 = sub_237A20(v7, "xpsr", 25, 1, 0, 32, "int");
  dword_4714F8 = v5;
  v9 = sub_236588(v8);
  v10 = sub_2A657C("arm");
  sub_2365FC(v9, v10);
  v11 = sub_23875C(v9, "org.gnu.gdb.arm.m-profile", 0);
  sub_237A20(v11, "r0", 0, 1, 0, 32, "int");
  sub_237A20(v11, "r1", 1, 1, 0, 32, "int");
  sub_237A20(v11, "r2", 2, 1, 0, 32, "int");
  sub_237A20(v11, "r3", 3, 1, 0, 32, "int");
  sub_237A20(v11, "r4", 4, 1, 0, 32, "int");
  sub_237A20(v11, "r5", 5, 1, 0, 32, "int");
  sub_237A20(v11, "r6", 6, 1, 0, 32, "int");
  sub_237A20(v11, "r7", 7, 1, 0, 32, "int");
  sub_237A20(v11, "r8", 8, 1, 0, 32, "int");
  sub_237A20(v11, "r9", 9, 1, 0, 32, "int");
  sub_237A20(v11, "r10", 10, 1, 0, 32, "int");
  sub_237A20(v11, "r11", 11, 1, 0, 32, "int");
  sub_237A20(v11, "r12", 12, 1, 0, 32, "int");
  sub_237A20(v11, "sp", 13, 1, 0, 32, "data_ptr");
  sub_237A20(v11, "lr", 14, 1, 0, 32, "int");
  sub_237A20(v11, "pc", 15, 1, 0, 32, "code_ptr");
  sub_237A20(v11, "xpsr", 25, 1, 0, 32, "int");
  v12 = sub_23875C(v9, "org.gnu.gdb.arm.vfp", 0);
  sub_237A20(v12, "d0", 26, 1, 0, 64, "ieee_double");
  sub_237A20(v12, "d1", 27, 1, 0, 64, "ieee_double");
  sub_237A20(v12, "d2", 28, 1, 0, 64, "ieee_double");
  sub_237A20(v12, "d3", 29, 1, 0, 64, "ieee_double");
  sub_237A20(v12, "d4", 30, 1, 0, 64, "ieee_double");
  sub_237A20(v12, "d5", 31, 1, 0, 64, "ieee_double");
  sub_237A20(v12, "d6", 32, 1, 0, 64, "ieee_double");
  sub_237A20(v12, "d7", 33, 1, 0, 64, "ieee_double");
  sub_237A20(v12, "d8", 34, 1, 0, 64, "ieee_double");
  sub_237A20(v12, "d9", 35, 1, 0, 64, "ieee_double");
  sub_237A20(v12, "d10", 36, 1, 0, 64, "ieee_double");
  sub_237A20(v12, "d11", 37, 1, 0, 64, "ieee_double");
  sub_237A20(v12, "d12", 38, 1, 0, 64, "ieee_double");
  sub_237A20(v12, "d13", 39, 1, 0, 64, "ieee_double");
  sub_237A20(v12, "d14", 40, 1, 0, 64, "ieee_double");
  sub_237A20(v12, "d15", 41, 1, 0, 64, "ieee_double");
  v13 = sub_237A20(v12, "fpscr", 42, 1, "float", 32, "int");
  dword_471500 = v9;
  v14 = sub_236588(v13);
  v15 = sub_2A657C("iwmmxt");
  sub_2365FC(v14, v15);
  v16 = sub_23875C(v14, "org.gnu.gdb.arm.core", 0);
  sub_237A20(v16, "r0", 0, 1, 0, 32, "uint32");
  sub_237A20(v16, "r1", 1, 1, 0, 32, "uint32");
  sub_237A20(v16, "r2", 2, 1, 0, 32, "uint32");
  sub_237A20(v16, "r3", 3, 1, 0, 32, "uint32");
  sub_237A20(v16, "r4", 4, 1, 0, 32, "uint32");
  sub_237A20(v16, "r5", 5, 1, 0, 32, "uint32");
  sub_237A20(v16, "r6", 6, 1, 0, 32, "uint32");
  sub_237A20(v16, "r7", 7, 1, 0, 32, "uint32");
  sub_237A20(v16, "r8", 8, 1, 0, 32, "uint32");
  sub_237A20(v16, "r9", 9, 1, 0, 32, "uint32");
  sub_237A20(v16, "r10", 10, 1, 0, 32, "uint32");
  sub_237A20(v16, "r11", 11, 1, 0, 32, "uint32");
  sub_237A20(v16, "r12", 12, 1, 0, 32, "uint32");
  sub_237A20(v16, "sp", 13, 1, 0, 32, "data_ptr");
  sub_237A20(v16, "lr", 14, 1, 0, 32, "int");
  sub_237A20(v16, "pc", 15, 1, 0, 32, "code_ptr");
  sub_237A20(v16, "cpsr", 25, 1, 0, 32, "int");
  v17 = sub_23875C(v14, "org.gnu.gdb.xscale.iwmmxt", 0);
  v18 = sub_2361D0(v17, "uint8");
  sub_237BD0(v17, "iwmmxt_v8u8", v18, 8);
  v19 = sub_2361D0(v17, "uint16");
  sub_237BD0(v17, "iwmmxt_v4u16", v19, 4);
  v20 = sub_2361D0(v17, "uint32");
  sub_237BD0(v17, "iwmmxt_v2u32", v20, 2);
  v57 = sub_237DBC(v17, "iwmmxt_vec64i");
  v21 = sub_2361D0(v17, "iwmmxt_v8u8");
  sub_2380CC(v57, "u8", v21);
  v22 = sub_2361D0(v17, "iwmmxt_v4u16");
  sub_2380CC(v57, "u16", v22);
  v23 = sub_2361D0(v17, "iwmmxt_v2u32");
  sub_2380CC(v57, "u32", v23);
  v24 = sub_2361D0(v17, "uint64");
  sub_2380CC(v57, "u64", v24);
  sub_237A20(v17, "wR0", 26, 1, 0, 64, "iwmmxt_vec64i");
  sub_237A20(v17, "wR1", 27, 1, 0, 64, "iwmmxt_vec64i");
  sub_237A20(v17, "wR2", 28, 1, 0, 64, "iwmmxt_vec64i");
  sub_237A20(v17, "wR3", 29, 1, 0, 64, "iwmmxt_vec64i");
  sub_237A20(v17, "wR4", 30, 1, 0, 64, "iwmmxt_vec64i");
  sub_237A20(v17, "wR5", 31, 1, 0, 64, "iwmmxt_vec64i");
  sub_237A20(v17, "wR6", 32, 1, 0, 64, "iwmmxt_vec64i");
  sub_237A20(v17, "wR7", 33, 1, 0, 64, "iwmmxt_vec64i");
  sub_237A20(v17, "wR8", 34, 1, 0, 64, "iwmmxt_vec64i");
  sub_237A20(v17, "wR9", 35, 1, 0, 64, "iwmmxt_vec64i");
  sub_237A20(v17, "wR10", 36, 1, 0, 64, "iwmmxt_vec64i");
  sub_237A20(v17, "wR11", 37, 1, 0, 64, "iwmmxt_vec64i");
  sub_237A20(v17, "wR12", 38, 1, 0, 64, "iwmmxt_vec64i");
  sub_237A20(v17, "wR13", 39, 1, 0, 64, "iwmmxt_vec64i");
  sub_237A20(v17, "wR14", 40, 1, 0, 64, "iwmmxt_vec64i");
  sub_237A20(v17, "wR15", 41, 1, 0, 64, "iwmmxt_vec64i");
  sub_237A20(v17, "wCSSF", 42, 1, "vector", 32, "int");
  sub_237A20(v17, "wCASF", 43, 1, "vector", 32, "int");
  sub_237A20(v17, "wCGR0", 44, 1, "vector", 32, "int");
  sub_237A20(v17, "wCGR1", 45, 1, "vector", 32, "int");
  sub_237A20(v17, "wCGR2", 46, 1, "vector", 32, "int");
  v25 = sub_237A20(v17, "wCGR3", 47, 1, "vector", 32, "int");
  dword_4717D8 = v14;
  v26 = sub_236588(v25);
  v27 = sub_2A657C("arm");
  sub_2365FC(v26, v27);
  v28 = sub_23875C(v26, "org.gnu.gdb.arm.core", 0);
  sub_237A20(v28, "r0", 0, 1, 0, 32, "uint32");
  sub_237A20(v28, "r1", 1, 1, 0, 32, "uint32");
  sub_237A20(v28, "r2", 2, 1, 0, 32, "uint32");
  sub_237A20(v28, "r3", 3, 1, 0, 32, "uint32");
  sub_237A20(v28, "r4", 4, 1, 0, 32, "uint32");
  sub_237A20(v28, "r5", 5, 1, 0, 32, "uint32");
  sub_237A20(v28, "r6", 6, 1, 0, 32, "uint32");
  sub_237A20(v28, "r7", 7, 1, 0, 32, "uint32");
  sub_237A20(v28, "r8", 8, 1, 0, 32, "uint32");
  sub_237A20(v28, "r9", 9, 1, 0, 32, "uint32");
  sub_237A20(v28, "r10", 10, 1, 0, 32, "uint32");
  sub_237A20(v28, "r11", 11, 1, 0, 32, "uint32");
  sub_237A20(v28, "r12", 12, 1, 0, 32, "uint32");
  sub_237A20(v28, "sp", 13, 1, 0, 32, "data_ptr");
  sub_237A20(v28, "lr", 14, 1, 0, 32, "int");
  sub_237A20(v28, "pc", 15, 1, 0, 32, "code_ptr");
  sub_237A20(v28, "cpsr", 25, 1, 0, 32, "int");
  v29 = sub_23875C(v26, "org.gnu.gdb.arm.vfp", 0);
  sub_237A20(v29, "d0", 26, 1, 0, 64, "ieee_double");
  sub_237A20(v29, "d1", 27, 1, 0, 64, "ieee_double");
  sub_237A20(v29, "d2", 28, 1, 0, 64, "ieee_double");
  sub_237A20(v29, "d3", 29, 1, 0, 64, "ieee_double");
  sub_237A20(v29, "d4", 30, 1, 0, 64, "ieee_double");
  sub_237A20(v29, "d5", 31, 1, 0, 64, "ieee_double");
  sub_237A20(v29, "d6", 32, 1, 0, 64, "ieee_double");
  sub_237A20(v29, "d7", 33, 1, 0, 64, "ieee_double");
  sub_237A20(v29, "d8", 34, 1, 0, 64, "ieee_double");
  sub_237A20(v29, "d9", 35, 1, 0, 64, "ieee_double");
  sub_237A20(v29, "d10", 36, 1, 0, 64, "ieee_double");
  sub_237A20(v29, "d11", 37, 1, 0, 64, "ieee_double");
  sub_237A20(v29, "d12", 38, 1, 0, 64, "ieee_double");
  sub_237A20(v29, "d13", 39, 1, 0, 64, "ieee_double");
  sub_237A20(v29, "d14", 40, 1, 0, 64, "ieee_double");
  sub_237A20(v29, "d15", 41, 1, 0, 64, "ieee_double");
  v30 = sub_237A20(v29, "fpscr", 42, 1, "float", 32, "int");
  dword_4717DC = v26;
  v31 = sub_236588(v30);
  v32 = sub_2A657C("arm");
  sub_2365FC(v31, v32);
  v33 = sub_23875C(v31, "org.gnu.gdb.arm.core", 0);
  sub_237A20(v33, "r0", 0, 1, 0, 32, "uint32");
  sub_237A20(v33, "r1", 1, 1, 0, 32, "uint32");
  sub_237A20(v33, "r2", 2, 1, 0, 32, "uint32");
  sub_237A20(v33, "r3", 3, 1, 0, 32, "uint32");
  sub_237A20(v33, "r4", 4, 1, 0, 32, "uint32");
  sub_237A20(v33, "r5", 5, 1, 0, 32, "uint32");
  sub_237A20(v33, "r6", 6, 1, 0, 32, "uint32");
  sub_237A20(v33, "r7", 7, 1, 0, 32, "uint32");
  sub_237A20(v33, "r8", 8, 1, 0, 32, "uint32");
  sub_237A20(v33, "r9", 9, 1, 0, 32, "uint32");
  sub_237A20(v33, "r10", 10, 1, 0, 32, "uint32");
  sub_237A20(v33, "r11", 11, 1, 0, 32, "uint32");
  sub_237A20(v33, "r12", 12, 1, 0, 32, "uint32");
  sub_237A20(v33, "sp", 13, 1, 0, 32, "data_ptr");
  sub_237A20(v33, "lr", 14, 1, 0, 32, "int");
  sub_237A20(v33, "pc", 15, 1, 0, 32, "code_ptr");
  sub_237A20(v33, "cpsr", 25, 1, 0, 32, "int");
  v34 = sub_23875C(v31, "org.gnu.gdb.arm.vfp", 0);
  sub_237A20(v34, "d0", 26, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d1", 27, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d2", 28, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d3", 29, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d4", 30, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d5", 31, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d6", 32, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d7", 33, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d8", 34, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d9", 35, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d10", 36, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d11", 37, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d12", 38, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d13", 39, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d14", 40, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d15", 41, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d16", 42, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d17", 43, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d18", 44, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d19", 45, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d20", 46, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d21", 47, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d22", 48, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d23", 49, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d24", 50, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d25", 51, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d26", 52, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d27", 53, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d28", 54, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d29", 55, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d30", 56, 1, 0, 64, "ieee_double");
  sub_237A20(v34, "d31", 57, 1, 0, 64, "ieee_double");
  v35 = sub_237A20(v34, "fpscr", 58, 1, "float", 32, "int");
  dword_4717E0 = v31;
  v36 = sub_236588(v35);
  v37 = sub_2A657C("arm");
  sub_2365FC(v36, v37);
  v38 = sub_23875C(v36, "org.gnu.gdb.arm.core", 0);
  sub_237A20(v38, "r0", 0, 1, 0, 32, "uint32");
  sub_237A20(v38, "r1", 1, 1, 0, 32, "uint32");
  sub_237A20(v38, "r2", 2, 1, 0, 32, "uint32");
  sub_237A20(v38, "r3", 3, 1, 0, 32, "uint32");
  sub_237A20(v38, "r4", 4, 1, 0, 32, "uint32");
  sub_237A20(v38, "r5", 5, 1, 0, 32, "uint32");
  sub_237A20(v38, "r6", 6, 1, 0, 32, "uint32");
  sub_237A20(v38, "r7", 7, 1, 0, 32, "uint32");
  sub_237A20(v38, "r8", 8, 1, 0, 32, "uint32");
  sub_237A20(v38, "r9", 9, 1, 0, 32, "uint32");
  sub_237A20(v38, "r10", 10, 1, 0, 32, "uint32");
  sub_237A20(v38, "r11", 11, 1, 0, 32, "uint32");
  sub_237A20(v38, "r12", 12, 1, 0, 32, "uint32");
  sub_237A20(v38, "sp", 13, 1, 0, 32, "data_ptr");
  sub_237A20(v38, "lr", 14, 1, 0, 32, "int");
  sub_237A20(v38, "pc", 15, 1, 0, 32, "code_ptr");
  sub_237A20(v38, "cpsr", 25, 1, 0, 32, "int");
  v39 = sub_23875C(v36, "org.gnu.gdb.arm.vfp", 0);
  sub_237A20(v39, "d0", 26, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d1", 27, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d2", 28, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d3", 29, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d4", 30, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d5", 31, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d6", 32, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d7", 33, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d8", 34, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d9", 35, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d10", 36, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d11", 37, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d12", 38, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d13", 39, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d14", 40, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d15", 41, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d16", 42, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d17", 43, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d18", 44, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d19", 45, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d20", 46, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d21", 47, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d22", 48, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d23", 49, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d24", 50, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d25", 51, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d26", 52, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d27", 53, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d28", 54, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d29", 55, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d30", 56, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "d31", 57, 1, 0, 64, "ieee_double");
  sub_237A20(v39, "fpscr", 58, 1, "float", 32, "int");
  sub_23875C(v36, "org.gnu.gdb.arm.neon", 0);
  dword_4717E4 = v36;
  sub_533F8("arm", -1, sub_1ABC0, "Various ARM-specific commands.", &dword_4714F4, "set arm ", 0, &dword_47475C);
  sub_533F8("arm", -1, sub_1AB78, "Various ARM-specific commands.", &dword_4714F0, "show arm ", 0, &dword_47474C);
  dword_471504 = sub_327254("reg-names-std");
  v40 = (const char ***)sub_2A2B24();
  v41 = *v40;
  v58 = v40;
  v42 = *v41;
  if ( *v41 )
  {
    v43 = 0;
    do
    {
      v44 = strncmp(v42, "reg-names-", 0xAu) == 0;
      v46 = v41[1];
      ++v41;
      v42 = v46;
      if ( v44 )
        v45 = v43 + 2;
      v47 = v43 + 1;
      if ( v44 )
      {
        ++v43;
        v47 = v45;
      }
    }
    while ( v42 );
    v48 = 4 * v47;
    v59 = 4 * v43;
  }
  else
  {
    v59 = 0;
    v48 = 4;
  }
  v49 = sub_93028(v48);
  v50 = *v58;
  v51 = **v58;
  dword_4717E8 = v49;
  if ( v51 )
  {
    v52 = 0;
    s = v62;
    v53 = 0;
    maxlen = 1024;
    do
    {
      while ( strncmp(v51, "reg-names-", 0xAu) )
      {
        v51 = v50[++v53];
        if ( !v51 )
          goto LABEL_14;
      }
      *(_DWORD *)(v49 + 4 * v52++) = v51 + 10;
      ++v53;
      v54 = snprintf(s, maxlen, "%s - %s\n");
      v50 = *v58;
      v49 = dword_4717E8;
      v51 = (*v58)[v53];
      s += v54;
      maxlen -= v54;
    }
    while ( v51 );
  }
LABEL_14:
  *(_DWORD *)(v49 + v59) = 0;
  sub_931D8(&ptr, "%s%s%s", "The valid values are:\n", v62, "The default is \"std\".");
  sub_534EC(
    "disassembler",
    -1,
    dword_4717E8,
    &dword_47150C,
    "Set the disassembly style.",
    "Show the disassembly style.",
    ptr,
    sub_21564,
    sub_1AAD4,
    &dword_4714F4,
    &dword_4714F0);
  sub_535B8(
    "apcs32",
    -1,
    &dword_469618,
    "Set usage of ARM 32-bit mode.",
    "Show usage of ARM 32-bit mode.",
    "When off, a 26-bit PC will be used.",
    0,
    0,
    &dword_4714F4,
    &dword_4714F0);
  sub_534EC(
    "fpu",
    -1,
    off_349480,
    &off_4696B8,
    "Set the floating point type.",
    "Show the floating point type.",
    "auto - Determine the FP typefrom the OS-ABI.\n"
    "softfpa - Software FP, mixed-endian doubles on little-endian ARMs.\n"
    "fpa - FPA co-processor (GCC compiled).\n"
    "softvfp - Software FP with pure-endian doubles.\n"
    "vfp - VFP co-processor.",
    &loc_1F9A0,
    sub_1AA48,
    &dword_4714F4,
    &dword_4714F0);
  sub_534EC(
    "abi",
    4,
    off_349470,
    &off_469624,
    "Set the ABI.",
    "Show the ABI.",
    0,
    &loc_1F910,
    sub_1A9C4,
    &dword_4714F4,
    &dword_4714F0);
  sub_534EC(
    "fallback-mode",
    4,
    &off_349DD8,
    off_469620,
    "Set the mode assumed when symbols are unavailable.",
    "Show the mode assumed when symbols are unavailable.",
    0,
    0,
    sub_1A9AC,
    &dword_4714F4,
    &dword_4714F0);
  sub_534EC(
    "force-mode",
    4,
    &off_349DD8,
    off_46961C,
    "Set the mode assumed even when symbols are available.",
    "Show the mode assumed even when symbols are available.",
    0,
    0,
    sub_1A994,
    &dword_4714F4,
    &dword_4714F0);
  sub_535B8(
    "arm",
    11,
    &dword_471514,
    "Set ARM debugging.",
    "Show ARM debugging.",
    "When on, arm-specific debugging is enabled.",
    0,
    0,
    &dword_474750,
    &dword_474748);
  if ( ptr != &v61 )
    sub_339E64(ptr);
}

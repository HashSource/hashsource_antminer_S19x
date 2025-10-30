int __fastcall sub_188198(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v7; // r4
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int result; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r6
  int v16; // [sp+0h] [bp-18h] BYREF
  int v17; // [sp+4h] [bp-14h]
  int v18; // [sp+8h] [bp-10h]
  int v19; // [sp+Ch] [bp-Ch]
  int v20; // [sp+10h] [bp-8h]
  int varg_r1; // [sp+2Ch] [bp+14h]
  int varg_r2; // [sp+30h] [bp+18h]
  int varg_r3; // [sp+34h] [bp+1Ch]

  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  v7 = (_DWORD *)((int (*)(void))loc_23DBE4)();
  ((void (__fastcall *)(int *, int))loc_15CFA0)(&v16, a1);
  v8 = v17;
  v9 = v18;
  v10 = v19;
  v7[19] = v16;
  v7[20] = v8;
  v7[21] = v9;
  v7[22] = v10;
  v7[23] = v20;
  sub_15F9BC((int)&v16, a1);
  result = v16;
  v12 = v17;
  v13 = v18;
  v14 = v19;
  v15 = varg_r2;
  v7[24] = v16;
  v7[25] = v12;
  v7[26] = v13;
  v7[27] = v14;
  v7[28] = v20;
  v7[45] = v15;
  v7[44] = a6;
  return result;
}

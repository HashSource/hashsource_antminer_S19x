int __fastcall sub_C920(int a1, __int64 *a2)
{
  unsigned int v3; // r8
  unsigned int v4; // r0
  char v5; // r1
  char v6; // r12
  int v7; // r3
  unsigned int v8; // r1
  __int16 v9; // r3
  bool v10; // cc
  int result; // r0
  unsigned int v12; // [sp+0h] [bp-18h] BYREF
  int v13; // [sp+4h] [bp-14h]
  int v14; // [sp+8h] [bp-10h] BYREF
  int v15; // [sp+Ch] [bp-Ch]
  int v16; // [sp+10h] [bp-8h]

  sub_B78C((int *)&v12, a2);
  v3 = v12;
  v4 = sub_B264(&v14, v13);
  v5 = v15;
  v6 = v14;
  *(_BYTE *)(a1 + 6) = v16;
  *(_BYTE *)(a1 + 5) = v5;
  *(_BYTE *)(a1 + 4) = v6;
  v7 = v4 + v3 + 693595;
  v8 = (v7 >> 31) ^ (((v7 >> 31) ^ (unsigned int)v7) / 7);
  *(_BYTE *)(a1 + 3) = v7 - 7 * v8 + 1;
  sub_C840(&v12, v8);
  v9 = v12;
  v10 = v12 > 0xFFFE;
  *(_BYTE *)(a1 + 2) = v13 + 1;
  result = !v10;
  *(_WORD *)a1 = v9 + 1;
  return result;
}

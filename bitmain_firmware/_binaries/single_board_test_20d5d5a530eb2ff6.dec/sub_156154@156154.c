int __fastcall sub_156154(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  unsigned int v4; // r1
  unsigned int v6[13]; // [sp+0h] [bp-50h] BYREF
  int v7; // [sp+34h] [bp-1Ch]
  int v8; // [sp+38h] [bp-18h]
  int v9; // [sp+3Ch] [bp-14h]
  int v10; // [sp+50h] [bp+0h]

  v10 = a4;
  sub_155C98(v6, a1, a2);
  sub_155530(v6);
  v4 = v6[12] | v6[10] | v6[9] | v6[7] | v6[5] | v6[4] | v6[2] | v6[1] | v6[0] | v6[3] | v6[6] | v6[8] | v6[11];
  return (int)(((v9 | v8 | v7 | v4) - 1) & ~(v9 | v8 | v7 | v4)) >> 31;
}

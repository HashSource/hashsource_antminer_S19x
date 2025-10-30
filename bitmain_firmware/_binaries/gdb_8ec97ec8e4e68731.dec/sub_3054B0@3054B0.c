int __fastcall sub_3054B0(_DWORD *a1)
{
  int v2; // r5
  _DWORD *v3; // r4
  size_t v4; // r2
  char *v5; // r0
  int v6; // r3
  unsigned __int16 *v7; // r1
  int v8; // lr
  int v9; // r2
  int v10; // r3

  v2 = sub_3053D4(a1);
  if ( !v2 )
  {
    v3 = (_DWORD *)a1[7];
    v4 = 2 * (v3[19] + 0x7FFFFFFF);
    v5 = (char *)v3[17];
    v3[15] = 2 * v3[11];
    *(_WORD *)&v5[v4] = 0;
    memset(v5, 0, v4);
    v6 = v3[33];
    v3[27] = 0;
    v3[23] = 0;
    v3[29] = 0;
    v7 = (unsigned __int16 *)((char *)&unk_468330 + 12 * v6);
    v8 = v7[1];
    v9 = v7[2];
    v10 = v7[3];
    v3[35] = *v7;
    v3[32] = v8;
    v3[36] = v9;
    v3[31] = v10;
    v3[1453] = 0;
    v3[26] = 0;
    v3[18] = 0;
    v3[30] = 2;
    v3[24] = 2;
  }
  return v2;
}

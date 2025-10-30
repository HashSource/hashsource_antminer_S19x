bool __fastcall sub_3D430(_BYTE *a1, unsigned __int8 *a2, int a3)
{
  int v3; // r3
  int v4; // r12
  unsigned __int8 *v5; // r1
  int v6; // r3
  bool v7; // zf
  char *v8; // r3
  int v9; // r12
  char *v10; // r12
  char v12[2048]; // [sp+0h] [bp-800h] BYREF

  if ( !*a2 )
    return !a3;
  if ( !a3 )
    return 0;
  if ( !a2[1] )
  {
LABEL_16:
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
    {
      strcpy(v12, "hex2bin str truncated");
      sub_3B6AC(3, v12, 0, *(int *)"truncated");
      return 0;
    }
    return 0;
  }
  v3 = *(_DWORD *)&aTqFreezethaw[4 * *a2 + 96];
  v4 = *(_DWORD *)&aTqFreezethaw[4 * a2[1] + 96];
  if ( (v4 | v3) >= 0 )
  {
    v5 = a2 + 4;
    do
    {
      --a3;
      *a1++ = v4 | (16 * v3);
      v6 = *(v5 - 2);
      v7 = v6 == 0;
      v8 = &aTqFreezethaw[4 * v6];
      if ( v7 )
        return !a3;
      if ( !a3 )
        return 0;
      v9 = *(v5 - 1);
      v5 += 2;
      v7 = v9 == 0;
      v10 = &aTqFreezethaw[4 * v9];
      if ( v7 )
        goto LABEL_16;
      v3 = *((_DWORD *)v8 + 24);
      v4 = *((_DWORD *)v10 + 24);
    }
    while ( (v4 | v3) >= 0 );
  }
  if ( !byte_5C0EFC && !byte_4B9A21 && dword_B3094 <= 2 )
    return 0;
  strcpy(v12, "hex2bin scan failed");
  sub_3B6AC(3, v12, 0, *(int *)" failed");
  return 0;
}

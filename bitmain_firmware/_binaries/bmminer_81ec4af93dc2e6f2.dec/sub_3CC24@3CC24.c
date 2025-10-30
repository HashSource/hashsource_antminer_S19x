int __fastcall sub_3CC24(_BYTE *a1, unsigned __int8 *a2, int a3)
{
  unsigned int v4; // r3
  unsigned int v5; // lr
  int result; // r0
  unsigned __int8 *v7; // r1
  int v8; // r3
  bool v9; // zf
  char *v10; // r3
  int v11; // r12
  char *v12; // r12
  char v13[2064]; // [sp-810h] [bp-810h] BYREF

  if ( !*a2 )
    return !a3;
  if ( !a3 )
    return 0;
  if ( !a2[1] )
  {
LABEL_16:
    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
    {
      strcpy(v13, "hex2bin str truncated");
      sub_3AF5C(3, v13, 0, *(int *)"truncated");
    }
    return 0;
  }
  v4 = *(_DWORD *)&aTqFreezethaw[4 * a2[1] + 96];
  v5 = *(_DWORD *)&aTqFreezethaw[4 * *a2 + 96];
  result = (v4 >> 31) | (v5 >> 31);
  if ( !result )
  {
    v7 = a2 + 4;
    while ( 1 )
    {
      --a3;
      *a1++ = v4 | (16 * v5);
      v8 = *(v7 - 2);
      v9 = v8 == 0;
      v10 = &aTqFreezethaw[4 * v8];
      if ( v9 )
        break;
      if ( !a3 )
        return result;
      v11 = *(v7 - 1);
      v7 += 2;
      v9 = v11 == 0;
      v12 = &aTqFreezethaw[4 * v11];
      if ( v9 )
        goto LABEL_16;
      v5 = *((_DWORD *)v10 + 24);
      v4 = *((_DWORD *)v12 + 24);
      if ( ((v5 | v4) & 0x80000000) != 0 )
        goto LABEL_11;
    }
    return !a3;
  }
LABEL_11:
  if ( !byte_5BC044 && !byte_4B6CA5 && dword_AFC2C <= 2 )
    return 0;
  strcpy(v13, "hex2bin scan failed");
  sub_3AF5C(3, v13, 0, *(int *)" failed");
  return 0;
}

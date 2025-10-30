_BYTE **__fastcall sub_ADE9C(_BYTE **result, int a2, int a3, int a4, char a5)
{
  char v5; // r6
  _BYTE *v6; // r5
  char v7; // r6
  _BYTE *v8; // lr
  int v9; // r4
  int j; // r5
  int v11; // r6
  int v12; // r3
  _BYTE *v13; // r3
  int v14; // r8
  int v15; // r12
  int v16; // r7
  _BYTE *v17; // r3
  _BYTE *v18; // r8
  int v19; // r4
  int i; // r6
  _BYTE *v21; // r5
  int v22; // r4

  if ( a2 )
    v5 = 32;
  else
    v5 = 0;
  v6 = *result;
  v7 = v5 | a5 & 0xC0;
  if ( a4 > 30 )
  {
    v18 = v6 + 1;
    *v6 = v7 | 0x1F;
    v19 = a4;
    for ( i = 0; ; ++i )
    {
      v19 >>= 7;
      if ( !v19 )
        break;
    }
    v21 = &v6[i];
    v18[i] = a4 & 0x7F;
    v22 = i;
    while ( 1 )
    {
      --v22;
      a4 >>= 7;
      if ( v22 == -1 )
        break;
      --v21;
      if ( i == v22 )
        v21[1] = a4 & 0x7F;
      else
        v21[1] = a4 & 0x7F | 0x80;
    }
    v8 = &v18[i + 1];
    if ( a2 != 2 )
      goto LABEL_6;
LABEL_28:
    *v8 = 0x80;
    *result = v8 + 1;
    return result;
  }
  v8 = v6 + 1;
  *v6 = v7 | a4 & 0x1F;
  if ( a2 == 2 )
    goto LABEL_28;
LABEL_6:
  if ( a3 > 127 )
  {
    v9 = a3;
    for ( j = 0; ; ++j )
    {
      v9 >>= 8;
      v11 = j + 1;
      v12 = j + 1;
      if ( !v9 )
        break;
    }
    *v8 = v11 | 0x80;
    if ( j > 31 )
    {
      v13 = &v8[j - 33];
      do
      {
        j -= 32;
        v14 = a3 >> 8;
        v15 = a3 >> 16;
        v16 = a3 >> 24;
        v13[34] = a3;
        __pld(v13);
        v13[30] = 0;
        a3 = 0;
        v13[29] = 0;
        v13 -= 32;
        v13[60] = 0;
        v13[59] = 0;
        v13[58] = 0;
        v13[57] = 0;
        v13[56] = 0;
        v13[55] = 0;
        v13[54] = 0;
        v13[53] = 0;
        v13[52] = 0;
        v13[51] = 0;
        v13[50] = 0;
        v13[49] = 0;
        v13[48] = 0;
        v13[47] = 0;
        v13[46] = 0;
        v13[45] = 0;
        v13[44] = 0;
        v13[43] = 0;
        v13[42] = 0;
        v13[41] = 0;
        v13[40] = 0;
        v13[39] = 0;
        v13[38] = 0;
        v13[37] = 0;
        v13[36] = 0;
        v13[65] = v14;
        v13[64] = v15;
        v13[63] = v16;
        v13[35] = 0;
      }
      while ( (unsigned int)j > 0x1F );
      v12 = j + 1;
    }
    else
    {
      v9 = a3;
    }
    v17 = &v8[v12];
    do
    {
      *v17-- = v9;
      v9 >>= 8;
    }
    while ( v17 - v8 > 0 );
    *result = &v8[v11 + 1];
  }
  else
  {
    *v8 = a3;
    *result = v8 + 1;
  }
  return result;
}

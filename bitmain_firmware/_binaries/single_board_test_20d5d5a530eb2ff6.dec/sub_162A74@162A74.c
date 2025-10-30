_BYTE *__fastcall sub_162A74(int a1, int a2)
{
  int v2; // r4
  int v4; // r5
  char *v5; // r7
  unsigned __int8 *v6; // r3
  unsigned int v7; // r2
  unsigned int v8; // r3
  int v9; // r0
  _BYTE *v11; // r7
  int v12; // r4
  int v13; // r8
  unsigned int v14; // r2
  int v15; // r3
  unsigned int v16; // r2
  int v17; // r1
  int v18; // r0
  int v19; // r5

  v2 = a2 & 1;
  if ( (a2 & 1) != 0 )
    return 0;
  v4 = a2;
  if ( a2 <= 0 )
  {
    if ( a2 )
    {
      v5 = (char *)(a2 & 1);
LABEL_20:
      if ( !*(_BYTE *)(a1 + v4 - 2) && !*(_BYTE *)(a1 + v4 - 1) )
        goto LABEL_22;
    }
    else
    {
      v5 = 0;
    }
    ++v5;
LABEL_22:
    v11 = CRYPTO_malloc(v5);
    if ( !v11 )
    {
      sub_D0048(35, 127, 65, (int)"crypto/pkcs12/p12_utl.c", 203);
      return 0;
    }
    if ( v4 <= 0 )
    {
      if ( v4 )
      {
        v13 = 0;
LABEL_37:
        v19 = v4 + a1;
        if ( !*(_BYTE *)(v19 - 2) && !*(_BYTE *)(v19 - 1) )
          return v11;
      }
      else
      {
        v13 = 0;
      }
      v11[v13] = 0;
      return v11;
    }
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = v4 - v12;
        if ( v4 - v12 != 1 )
          break;
LABEL_35:
        v18 = -1;
LABEL_36:
        v12 += 2;
        v13 += v18;
        if ( v12 >= v4 )
          goto LABEL_37;
      }
      v14 = *(unsigned __int8 *)(a1 + v12 + 1) | (*(unsigned __int8 *)(a1 + v12) << 8);
      if ( v14 - 55296 < 0x800 )
      {
        if ( v17 <= 3 )
          goto LABEL_35;
        v15 = (v14 - 55296) << 10;
        v16 = (*(unsigned __int8 *)(a1 + v12 + 3) | (*(unsigned __int8 *)(a1 + v12 + 2) << 8)) - 56320;
        if ( v16 >= 0x400 )
          goto LABEL_35;
        v14 = (v16 | v15) + 0x10000;
      }
      if ( v17 >= 4 )
        v17 = 4;
      v18 = sub_12B7E0(&v11[v13], v17, v14);
      if ( v18 != 4 )
        goto LABEL_36;
      v12 += 4;
      v13 += 4;
      if ( v12 >= v4 )
        goto LABEL_37;
    }
  }
  if ( a2 != 1 )
  {
    v5 = (char *)(a2 & 1);
    v6 = (unsigned __int8 *)a1;
    do
    {
      v7 = v6[1] | (*v6 << 8);
      if ( v7 - 55296 < 0x800 )
      {
        if ( a2 <= 3 )
          break;
        v8 = (v6[3] | (v6[2] << 8)) - 56320;
        v7 = (((v7 - 55296) << 10) | v8) + 0x10000;
        if ( v8 >= 0x400 )
          break;
      }
      if ( a2 >= 4 )
        a2 = 4;
      v9 = sub_12B7E0(0, a2, v7);
      if ( v9 < 0 )
        break;
      v5 += v9;
      if ( v9 == 4 )
        v2 += 4;
      else
        v2 += 2;
      a2 = v4 - v2;
      v6 = (unsigned __int8 *)(a1 + v2);
      if ( v2 >= v4 )
        goto LABEL_20;
    }
    while ( a2 != 1 );
  }
  return sub_16278C(a1, v4);
}

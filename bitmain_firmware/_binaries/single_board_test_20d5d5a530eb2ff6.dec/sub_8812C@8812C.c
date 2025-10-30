int __fastcall sub_8812C(int a1, int a2, signed int a3, char a4)
{
  _BOOL4 v4; // r4
  int result; // r0
  int v10; // r11
  int v11; // r0
  int v12; // r2
  int v13; // r6
  int v14; // r0
  int v15; // r1
  int v16; // lr
  char *v17; // r2
  _BYTE *v18; // r4
  bool v19; // cc
  _BYTE *v20; // r1
  _DWORD *v21; // r6
  _BYTE *v22; // r3

  v4 = a3 == 0;
  if ( !a2 )
    v4 = 0;
  if ( v4 )
  {
    sub_D0048(20, 393, 173, "ssl/ssl_lib.c", 244);
    return 0;
  }
  if ( *(unsigned __int8 *)(a1 + 520) >= (unsigned int)a3 )
    goto LABEL_5;
  v10 = a3 + 1;
  v11 = CRYPTO_realloc(*(_DWORD *)(a1 + 512), 4 * (a3 + 1), "ssl/ssl_lib.c", 253);
  v12 = 255;
  v13 = v11;
  if ( !v11 )
  {
LABEL_20:
    sub_D0048(20, 393, 65, "ssl/ssl_lib.c", v12);
    return -1;
  }
  *(_DWORD *)(a1 + 512) = v11;
  v14 = CRYPTO_realloc(*(_DWORD *)(a1 + 516), v10, "ssl/ssl_lib.c", 260);
  if ( !v14 )
  {
    v12 = 262;
    goto LABEL_20;
  }
  v15 = *(unsigned __int8 *)(a1 + 520);
  *(_DWORD *)(a1 + 516) = v14;
  v16 = v15 + 1;
  if ( a3 > v15 + 1 )
  {
    if ( a3 - 7 > v15 + 2 )
    {
      v17 = (char *)(v13 + 4 * (v15 + 26));
      v18 = (_BYTE *)(v14 + v15);
      do
      {
        __pld(v17);
        v19 = a3 - 7 <= v16 + 9;
        v20 = v18;
        *((_DWORD *)v17 - 25) = 0;
        v18 += 8;
        *(v18 - 7) = 0;
        v16 += 8;
        *((_DWORD *)v17 - 24) = 0;
        v17 += 32;
        v20[2] = 0;
        *((_DWORD *)v17 - 31) = 0;
        v20[3] = 0;
        *((_DWORD *)v17 - 30) = 0;
        v20[4] = 0;
        *((_DWORD *)v17 - 29) = 0;
        v20[5] = 0;
        *((_DWORD *)v17 - 28) = 0;
        v20[6] = 0;
        *((_DWORD *)v17 - 27) = 0;
        v20[7] = 0;
        *((_DWORD *)v17 - 26) = 0;
        v20[8] = 0;
      }
      while ( !v19 );
    }
    v21 = (_DWORD *)(v13 + 4 * v16);
    v22 = (_BYTE *)(v14 + v16);
    do
    {
      *v21++ = 0;
      *v22++ = 0;
    }
    while ( a3 > (int)&v22[-v14] );
  }
  *(_BYTE *)(a1 + 520) = a3;
LABEL_5:
  result = 1;
  if ( !a2 )
    a4 = 0;
  *(_DWORD *)(*(_DWORD *)(a1 + 512) + 4 * a3) = a2;
  *(_BYTE *)(*(_DWORD *)(a1 + 516) + a3) = a4;
  return result;
}

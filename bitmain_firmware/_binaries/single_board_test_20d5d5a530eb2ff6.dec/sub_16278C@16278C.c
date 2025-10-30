_BYTE *__fastcall sub_16278C(int a1, int a2)
{
  int v2; // r7
  _BYTE *v5; // r4
  char *v6; // r2
  int v7; // r3
  char v8; // r12
  char v9; // r11
  int v10; // r9
  int v11; // r8
  int v12; // r12
  int v13; // lr
  int v14; // r0
  int v15; // r1
  int v16; // r2
  char v17; // r1

  if ( (a2 & 1) != 0 )
    return 0;
  v2 = a2 / 2;
  if ( !a2 || *(_BYTE *)(a1 + a2 - 1) )
    ++v2;
  v5 = CRYPTO_malloc((void *)v2);
  if ( v5 )
  {
    if ( a2 > 0 )
    {
      if ( a2 <= 32 )
      {
        v7 = 0;
      }
      else
      {
        v6 = (char *)(a1 + 47);
        v7 = 0;
        do
        {
          v8 = *(v6 - 46);
          __pld(v6);
          v5[v7 >> 1] = v8;
          v5[(v7 + 2) >> 1] = *(v6 - 44);
          v9 = *(v6 - 42);
          v6 += 32;
          v5[(v7 + 4) >> 1] = v9;
          v5[(v7 + 6) >> 1] = *(v6 - 72);
          v5[(v7 + 8) >> 1] = *(v6 - 70);
          v10 = (v7 + 20) >> 1;
          v5[(v7 + 10) >> 1] = *(v6 - 68);
          v11 = (v7 + 22) >> 1;
          v5[(v7 + 12) >> 1] = *(v6 - 66);
          v12 = (v7 + 24) >> 1;
          v5[(v7 + 14) >> 1] = *(v6 - 64);
          v13 = (v7 + 26) >> 1;
          v5[(v7 + 16) >> 1] = *(v6 - 62);
          v14 = (v7 + 28) >> 1;
          v5[(v7 + 18) >> 1] = *(v6 - 60);
          v15 = v7 + 30;
          v7 += 32;
          v5[v10] = *(v6 - 58);
          v5[v11] = *(v6 - 56);
          v5[v12] = *(v6 - 54);
          v5[v13] = *(v6 - 52);
          v5[v14] = *(v6 - 50);
          v5[v15 >> 1] = *(v6 - 48);
        }
        while ( v7 != ((a2 - 33) & 0xFFFFFFE0) + 32 );
      }
      do
      {
        v16 = v7 >> 1;
        v17 = *(_BYTE *)(a1 + v7 + 1);
        v7 += 2;
        v5[v16] = v17;
      }
      while ( a2 > v7 );
    }
    v5[v2 - 1] = 0;
    return v5;
  }
  else
  {
    sub_D0048(35, 124, 65, (int)"crypto/pkcs12/p12_utl.c", 56);
    return 0;
  }
}

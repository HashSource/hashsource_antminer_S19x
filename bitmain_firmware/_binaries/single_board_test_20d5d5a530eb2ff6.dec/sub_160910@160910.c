_DWORD *__fastcall sub_160910(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  void *v6; // r0
  int v7; // r0
  void *v8; // r0

  v4 = sub_E0740((void *)0x1C);
  v5 = v4;
  if ( v4 )
  {
    v4[6] = 102400;
    *v4 = 4096;
    v6 = sub_B7E30();
    v5[4] = sub_B655C((int)v6);
    if ( a2 <= 0 )
      v7 = 4096;
    else
      v7 = a2;
    v5[3] = a1;
    v5[2] = v7;
    v8 = CRYPTO_malloc((void *)v7);
    v5[1] = v8;
    if ( v8 && v5[4] )
      return v5;
    sub_1608E0((int)v5);
  }
  return 0;
}

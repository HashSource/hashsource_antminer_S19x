int __fastcall sub_45784(_DWORD *a1, _DWORD *a2, char *a3, char *a4, int a5)
{
  int v9; // r4
  int *v10; // r11
  int v11; // r7
  int v12; // r0
  int v13; // r1
  int v14; // r0
  int v15; // r2
  bool v16; // cc

  v9 = 0;
  v10 = _errno_location();
  *v10 = 0;
  v11 = sub_456C0(a2, a3);
  v12 = sub_456C0(a2, a4);
  if ( !*v10 )
  {
    v13 = v12 * a5;
    v14 = v11;
    if ( v13 < 0 )
    {
      do
      {
        v13 += 1000000000;
        --v14;
      }
      while ( v13 < 0 );
    }
    else if ( v13 > 999999999 )
    {
      v15 = v13 - 1000000000;
      v16 = v13 - 1000000000 <= 999999999;
      if ( v13 - 1000000000 <= 999999999 )
        v14 = v11 + 1;
      else
        v13 -= 2013265920;
      if ( v16 )
        v13 = v15;
      else
        v13 += 13238272;
      if ( !v16 )
      {
        v14 += 2;
        v13 += 27648;
      }
    }
    v9 = 1;
    *a1 = v14 - 2085978496;
    a1[1] = sub_8BFD0(500000000, (__PAIR64__(v13, 0) + 500000000) >> 32, 1000000000, 0);
  }
  return v9;
}

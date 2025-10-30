int __fastcall sub_46608(_DWORD *a1, _DWORD *a2, char *a3, char *a4, int a5)
{
  int v9; // r7
  int *v10; // r11
  int v11; // r5
  int v12; // r0
  signed int v14; // r3
  int v15; // r2
  signed int v16; // r0
  bool v17; // cc
  __int64 v18; // d17

  v9 = 0;
  v10 = _errno_location();
  *v10 = 0;
  v11 = sub_46544(a2, a3);
  v12 = sub_46544(a2, a4);
  if ( !*v10 )
  {
    v14 = v12 * a5;
    v15 = v11;
    if ( v12 * a5 < 0 )
    {
      do
      {
        --v15;
        v14 += 1000000000;
      }
      while ( v14 < 0 );
    }
    else if ( v14 > 999999999 )
    {
      v16 = v14 - 1000000000;
      v17 = v14 - 1000000000 <= 999999999;
      if ( v14 - 1000000000 <= 999999999 )
        v15 = v11 + 1;
      else
        v14 -= 2013265920;
      if ( v17 )
      {
        v14 = v16;
      }
      else
      {
        v15 += 2;
        v14 += 13265920;
      }
    }
    v18 = vshld_n_s64(vshrd_n_s64(vdup_n_s32(v14).n64_i64[0], 0x20u), 0x20u);
    *a1 = v15 - 2085978496;
    v9 = 1;
    a1[1] = sub_8D518(v18 + 500000000, (unsigned __int64)(v18 + 500000000) >> 32, 1000000000, 0);
  }
  return v9;
}

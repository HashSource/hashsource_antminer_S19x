int __fastcall sub_8B6E8(int a1, int a2, unsigned int a3, unsigned int *a4)
{
  int v8; // r7
  int v9; // r0
  unsigned int v10; // r0
  unsigned int v11; // r5
  int v12; // r0
  int v13; // r10
  int v15; // r3

  v8 = *(_DWORD *)(*(_DWORD *)(a1 + 124) + 216);
  v9 = sub_D8D8C(v8);
  v10 = sub_D8C78(v9);
  if ( (v10 > a3) | (v10 >> 31) )
  {
    sub_95494(a1, 80, 560, 68, "ssl/ssl_lib.c", 4578);
    sub_D1504(0);
    return 0;
  }
  else
  {
    v11 = v10;
    v12 = sub_D14F4(v10);
    v13 = v12;
    if ( v12 )
    {
      if ( sub_D17B4(v12, v8) && sub_D16E4(v13, a2, 0) > 0 )
      {
        *a4 = v11;
        sub_D1504(v13);
        return 1;
      }
      v15 = 4592;
    }
    else
    {
      v15 = 4585;
    }
    sub_95494(a1, 80, 560, 68, "ssl/ssl_lib.c", v15);
    sub_D1504(v13);
    return 0;
  }
}

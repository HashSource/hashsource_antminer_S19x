_DWORD *__fastcall sub_BB6F8(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  int (*v4)(void); // r3

  v2 = (_DWORD *)sub_E0740(24, "crypto/comp/comp_lib.c", 22);
  v3 = v2;
  if ( v2 )
  {
    v4 = *(int (**)(void))(a1 + 8);
    *v2 = a1;
    if ( v4 && !v4() )
    {
      CRYPTO_free(v3, "crypto/comp/comp_lib.c", 28);
      return 0;
    }
    else
    {
      return v3;
    }
  }
  else
  {
    sub_D0048(41, 103, 65, "crypto/comp/comp_lib.c", 23);
    return 0;
  }
}

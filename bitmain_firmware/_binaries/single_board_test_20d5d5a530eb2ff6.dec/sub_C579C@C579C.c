int __fastcall sub_C579C(int a1)
{
  int v1; // r2
  int (*v2)(void); // r3

  if ( a1 && (v1 = *(_DWORD *)(a1 + 12)) != 0 && *(_DWORD *)(a1 + 16) )
  {
    v2 = *(int (**)(void))(*(_DWORD *)v1 + 180);
    if ( v2 )
      return v2();
    sub_D0048(16, 177, 66, "crypto/ec/ec_key.c", 264);
  }
  else
  {
    sub_D0048(16, 177, 67, "crypto/ec/ec_key.c", 259);
  }
  return 0;
}

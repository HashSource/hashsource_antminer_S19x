int __fastcall sub_D9C24(int a1)
{
  int (*v1)(void); // r4

  v1 = *(int (**)(void))(*(_DWORD *)(a1 + 12) + 136);
  if ( v1 )
  {
    if ( v1() )
    {
      return 1;
    }
    else
    {
      sub_D0048(6, 202, 182, (int)"crypto/evp/p_lib.c", 298);
      return 0;
    }
  }
  else
  {
    sub_D0048(6, 202, 150, (int)"crypto/evp/p_lib.c", 293);
    return 0;
  }
}

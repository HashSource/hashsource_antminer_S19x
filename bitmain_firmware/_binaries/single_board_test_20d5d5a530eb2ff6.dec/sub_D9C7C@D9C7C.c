int __fastcall sub_D9C7C(int a1)
{
  int (*v1)(void); // r4

  v1 = *(int (**)(void))(*(_DWORD *)(a1 + 12) + 140);
  if ( v1 )
  {
    if ( v1() )
    {
      return 1;
    }
    else
    {
      sub_D0048(6, 203, 182, (int)"crypto/evp/p_lib.c", 315);
      return 0;
    }
  }
  else
  {
    sub_D0048(6, 203, 150, (int)"crypto/evp/p_lib.c", 310);
    return 0;
  }
}

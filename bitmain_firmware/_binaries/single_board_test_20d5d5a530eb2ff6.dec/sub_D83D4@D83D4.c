int __fastcall sub_D83D4(int a1)
{
  int (*v1)(void); // r4
  int result; // r0

  if ( *(_DWORD *)a1 )
  {
    v1 = *(int (**)(void))(*(_DWORD *)a1 + 44);
    if ( v1 )
    {
      result = v1();
      if ( result == -1 )
      {
        sub_D0048(6, 124, 133, (int)"crypto/evp/evp_enc.c", 670);
        return 0;
      }
    }
    else
    {
      sub_D0048(6, 124, 132, (int)"crypto/evp/evp_enc.c", 663);
      return 0;
    }
  }
  else
  {
    sub_D0048(6, 124, 131, (int)"crypto/evp/evp_enc.c", 658);
    return 0;
  }
  return result;
}

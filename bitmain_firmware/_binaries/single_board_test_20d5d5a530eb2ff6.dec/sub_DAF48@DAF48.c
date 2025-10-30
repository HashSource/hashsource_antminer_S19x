int __fastcall sub_DAF48(_DWORD *a1, int *a2)
{
  int (__fastcall *v3)(_DWORD *); // r3
  int result; // r0
  int v6; // r4
  _DWORD *v7; // r1

  if ( !a1 || !*a1 || (v3 = *(int (__fastcall **)(_DWORD *))(*a1 + 24)) == 0 )
  {
    sub_D0048(6, 148, 150, (int)"crypto/evp/pmeth_gn.c", 41);
    return -2;
  }
  if ( a1[4] != 2 )
  {
    sub_D0048(6, 148, 151, (int)"crypto/evp/pmeth_gn.c", 46);
    return -1;
  }
  if ( !a2 )
    return -1;
  if ( *a2 )
  {
    result = v3(a1);
  }
  else
  {
    v7 = EVP_PKEY_new();
    *a2 = (int)v7;
    if ( !v7 )
    {
      sub_D0048(6, 148, 65, (int)"crypto/evp/pmeth_gn.c", 57);
      return -1;
    }
    result = (*(int (__fastcall **)(_DWORD *))(*a1 + 24))(a1);
  }
  v6 = result;
  if ( result <= 0 )
  {
    sub_DA240(*a2);
    *a2 = 0;
    return v6;
  }
  return result;
}

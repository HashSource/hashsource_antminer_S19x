int __fastcall sub_DA8E0(_DWORD *a1)
{
  if ( a1 && *a1 && *(_DWORD *)(*a1 + 48) )
  {
    if ( a1[4] == 16 )
    {
      return (*(int (__fastcall **)(_DWORD *))(*a1 + 48))(a1);
    }
    else
    {
      sub_D0048(6, 142, 151, (int)"crypto/evp/pmeth_fn.c", 96);
      return -1;
    }
  }
  else
  {
    sub_D0048(6, 142, 150, (int)"crypto/evp/pmeth_fn.c", 92);
    return -2;
  }
}

int __fastcall sub_11BAE4(int a1)
{
  int (__fastcall **v1)(_DWORD); // r3
  int (__fastcall *v2)(_DWORD); // r3

  if ( *(_DWORD *)(a1 + 24) )
  {
    v1 = *(int (__fastcall ***)(_DWORD))(a1 + 20);
    if ( v1 )
    {
      v2 = *v1;
      if ( v2 )
        return v2(*(_DWORD *)(a1 + 24));
    }
  }
  sub_D0048(34, 143, 148, (int)"crypto/x509v3/v3_conf.c", 373);
  return 0;
}

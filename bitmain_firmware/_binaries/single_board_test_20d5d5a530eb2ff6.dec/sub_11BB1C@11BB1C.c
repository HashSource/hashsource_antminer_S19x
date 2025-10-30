int __fastcall sub_11BB1C(int a1)
{
  int v1; // r3
  int (__fastcall *v2)(_DWORD); // r3

  if ( *(_DWORD *)(a1 + 24) )
  {
    v1 = *(_DWORD *)(a1 + 20);
    if ( v1 )
    {
      v2 = *(int (__fastcall **)(_DWORD))(v1 + 4);
      if ( v2 )
        return v2(*(_DWORD *)(a1 + 24));
    }
  }
  sub_D0048(34, 142, 148, (int)"crypto/x509v3/v3_conf.c", 385);
  return 0;
}

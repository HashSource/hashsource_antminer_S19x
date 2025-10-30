int __fastcall sub_DB204(_DWORD *a1)
{
  int v1; // r4
  int (__fastcall *v2)(_DWORD); // r3
  int v4; // r3

  v1 = a1[2];
  if ( v1 )
  {
    v2 = *(int (__fastcall **)(_DWORD))(*a1 + 124);
    if ( v2 )
      return v2(a1[2]);
    v4 = *(_DWORD *)(v1 + 12);
    if ( v4 && (v2 = *(int (__fastcall **)(_DWORD))(v4 + 124)) != 0 )
    {
      return v2(a1[2]);
    }
    else
    {
      sub_D0048(6, 189, 150, (int)"crypto/evp/pmeth_gn.c", 234);
      return -2;
    }
  }
  else
  {
    sub_D0048(6, 189, 154, (int)"crypto/evp/pmeth_gn.c", 223);
    return 0;
  }
}

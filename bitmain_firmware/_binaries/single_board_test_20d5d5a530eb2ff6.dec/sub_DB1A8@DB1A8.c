int __fastcall sub_DB1A8(_DWORD *a1)
{
  int v1; // r4
  int (__fastcall *v2)(_DWORD); // r3
  int v4; // r3

  v1 = a1[2];
  if ( v1 )
  {
    v2 = *(int (__fastcall **)(_DWORD))(*a1 + 120);
    if ( v2 )
      return v2(a1[2]);
    v4 = *(_DWORD *)(v1 + 12);
    if ( v4 && (v2 = *(int (__fastcall **)(_DWORD))(v4 + 120)) != 0 )
    {
      return v2(a1[2]);
    }
    else
    {
      sub_D0048(6, 190, 150, (int)"crypto/evp/pmeth_gn.c", 211);
      return -2;
    }
  }
  else
  {
    sub_D0048(6, 190, 154, (int)"crypto/evp/pmeth_gn.c", 200);
    return 0;
  }
}

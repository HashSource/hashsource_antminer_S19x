int __fastcall sub_DA044(_DWORD *a1)
{
  bool v1; // zf

  v1 = *a1 == 6;
  if ( *a1 != 6 )
    v1 = *a1 == 912;
  if ( v1 )
    return a1[6];
  sub_D0048(6, 121, 127, (int)"crypto/evp/p_lib.c", 474);
  return 0;
}

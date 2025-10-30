int __fastcall sub_DA134(_DWORD *a1)
{
  bool v1; // zf

  v1 = *a1 == 28;
  if ( *a1 != 28 )
    v1 = *a1 == 920;
  if ( v1 )
    return a1[6];
  sub_D0048(6, 119, 128, (int)"crypto/evp/p_lib.c", 559);
  return 0;
}

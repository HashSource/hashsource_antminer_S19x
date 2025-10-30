int __fastcall sub_16BE5C(_DWORD *a1)
{
  int (__fastcall *v1)(_DWORD); // r3

  if ( a1[7] )
  {
    sub_D0048(44, 131, 117, (int)"crypto/store/store_lib.c", 154);
  }
  else
  {
    v1 = *(int (__fastcall **)(_DWORD))(*a1 + 20);
    if ( v1 )
      return v1(a1[1]);
    sub_D0048(44, 131, 118, (int)"crypto/store/store_lib.c", 159);
  }
  return 0;
}

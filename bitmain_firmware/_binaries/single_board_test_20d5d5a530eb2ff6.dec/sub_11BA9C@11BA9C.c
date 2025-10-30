int __fastcall sub_11BA9C(int a1, _DWORD *a2, int a3, int a4)
{
  int result; // r0
  int v6; // r4
  void **v7; // [sp+4h] [bp-8h] BYREF

  v7 = 0;
  if ( !a4 )
    return sub_11B9BC(a1, a2, a3, 0);
  result = sub_11B9BC(a1, a2, a3, &v7);
  if ( result )
  {
    v6 = sub_16EA28(a4, v7);
    sub_10BFDC((int)v7, (void (__fastcall *)(int))X509_EXTENSION_free);
    return v6;
  }
  return result;
}

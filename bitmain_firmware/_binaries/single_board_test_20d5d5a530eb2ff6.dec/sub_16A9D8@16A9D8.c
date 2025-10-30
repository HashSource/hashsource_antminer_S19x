int __fastcall sub_16A9D8(const char *a1, int a2, void *a3, int a4, int a5, _DWORD *a6)
{
  int v7; // r0
  void *v9; // [sp+4h] [bp-8h] BYREF

  v9 = a3;
  if ( a1 )
  {
    if ( strcmp(a1, "PUBLIC KEY") )
      return 0;
    *a6 = 1;
  }
  v7 = d2i_PUBKEY(0, &v9, a4);
  if ( v7 )
  {
    *a6 = 1;
    return sub_16BF9C(v7);
  }
  return 0;
}

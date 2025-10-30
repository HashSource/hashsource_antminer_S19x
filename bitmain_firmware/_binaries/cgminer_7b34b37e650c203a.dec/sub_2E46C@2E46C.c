int __fastcall sub_2E46C(int a1, void *s2, size_t n, const void *a4, int a5, size_t na)
{
  int v6; // r5
  int v7; // r4

  v6 = a1;
  if ( a1 )
  {
    v7 = *(_DWORD *)(a1 + 352);
    while ( memcmp((const void *)(v6 + 128), s2, n) || memcmp((const void *)(v6 + a5), a4, na) )
    {
      v6 = v7;
      if ( !v7 )
        return v7;
      v7 = *(_DWORD *)(v7 + 352);
    }
  }
  return v6;
}

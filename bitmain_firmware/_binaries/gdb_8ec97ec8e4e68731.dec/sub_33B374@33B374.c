unsigned int __fastcall sub_33B374(int a1, unsigned int a2, const char *a3)
{
  unsigned int v3; // r3

  v3 = *(_DWORD *)(a1 + 4);
  if ( a2 > v3 )
    sub_33D20C("%s: __pos (which is %zu) > this->size() (which is %zu)", a3, a2, v3);
  return a2;
}

unsigned int __fastcall sub_344524(_DWORD *a1, unsigned int a2, const char *a3)
{
  unsigned int v3; // r3

  v3 = *(_DWORD *)(*a1 - 12);
  if ( v3 < a2 )
    sub_33D20C("%s: __pos (which is %zu) > this->size() (which is %zu)", a3, a2, v3);
  return a2;
}

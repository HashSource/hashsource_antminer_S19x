int __fastcall sub_344CFC(int *a1, unsigned int a2, unsigned int a3, void *s2, size_t n)
{
  int v5; // r6
  unsigned int v6; // r4
  unsigned int v7; // r4
  size_t v8; // r2
  int result; // r0

  v5 = *a1;
  v6 = *(_DWORD *)(*a1 - 12);
  if ( a2 > v6 )
    sub_33D20C(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::compare",
      a2,
      *(_DWORD *)(v5 - 12));
  v7 = v6 - a2;
  if ( v7 >= a3 )
    v7 = a3;
  v8 = v7;
  if ( v7 >= n )
    v8 = n;
  if ( !v8 )
    return v7 - n;
  result = memcmp((const void *)(a2 + v5), s2, v8);
  if ( !result )
    return v7 - n;
  return result;
}

_DWORD *__fastcall sub_3455E0(_DWORD *a1, int *a2, unsigned int a3, size_t a4)
{
  int v4; // r5
  unsigned int v5; // r4
  size_t v7; // r2
  _BYTE *v8; // r1

  v4 = *a2;
  v5 = *(_DWORD *)(*a2 - 12);
  if ( a3 > v5 )
    sub_33D20C(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::assign",
      a3,
      *(_DWORD *)(*a2 - 12));
  v7 = v5 - a3;
  v8 = (_BYTE *)(a3 + v4);
  if ( v7 >= a4 )
    v7 = a4;
  return sub_345508(a1, v8, v7);
}

_DWORD *__fastcall sub_345414(_DWORD *a1, size_t a2, unsigned int a3, unsigned __int8 a4)
{
  if ( a2 > *(_DWORD *)(*a1 - 12) )
    sub_33D20C(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::insert",
      a2,
      *(_DWORD *)(*a1 - 12));
  return sub_34538C(a1, a2, 0, a3, a4);
}

_DWORD *__fastcall sub_33BB98(_DWORD *a1, size_t a2, size_t n, unsigned __int8 c)
{
  if ( a2 > a1[1] )
    sub_33D20C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::insert", a2, a1[1]);
  return sub_33BA6C(a1, a2, 0, n, c);
}

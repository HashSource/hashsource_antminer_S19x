_DWORD *__fastcall sub_34530C(_DWORD *a1, size_t a2, unsigned int a3)
{
  size_t v3; // r3

  v3 = *(_DWORD *)(*a1 - 12);
  if ( a2 > v3 )
    sub_33D20C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase", a2, v3);
  if ( a3 >= v3 - a2 )
    a3 = v3 - a2;
  sub_34504C(a1, a2, a3, 0);
  return a1;
}

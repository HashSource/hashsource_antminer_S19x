unsigned int *__fastcall sub_33C260(unsigned int *a1, size_t a2, __int64 *a3, unsigned int a4, size_t a5)
{
  __int64 v5; // kr00_8
  size_t v6; // r4

  v5 = *a3;
  if ( a4 > *((_DWORD *)a3 + 1) )
    sub_33D20C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::insert", a4, HIDWORD(v5));
  v6 = HIDWORD(v5) - a4;
  if ( HIDWORD(v5) - a4 >= a5 )
    v6 = a5;
  if ( a2 > a1[1] )
    sub_33D20C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, a1[1]);
  return sub_33BC54(a1, a2, 0, (char *)(v5 + a4), v6);
}

unsigned int *__fastcall sub_33BEA4(unsigned int *a1, size_t a2, unsigned int a3, char *a4, size_t a5)
{
  size_t v5; // r4
  unsigned int v6; // r4

  v5 = a1[1];
  if ( a2 > v5 )
    sub_33D20C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, a1[1]);
  v6 = v5 - a2;
  if ( a3 >= v6 )
    a3 = v6;
  return sub_33BC54(a1, a2, a3, a4, a5);
}

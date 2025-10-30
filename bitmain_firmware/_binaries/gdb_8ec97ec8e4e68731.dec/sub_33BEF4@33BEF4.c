unsigned int *__fastcall sub_33BEF4(unsigned int *a1, size_t a2, char *src, size_t a4)
{
  if ( a2 > a1[1] )
    sub_33D20C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, a1[1]);
  return sub_33BC54(a1, a2, 0, src, a4);
}

void *__fastcall sub_33B2BC(int a1, size_t *a2, size_t a3, int a4)
{
  size_t v4; // r0
  int v5; // r2

  v4 = *a2;
  if ( (*a2 & 0x80000000) != 0 )
    sub_33D184("basic_string::_M_create");
  if ( v4 <= a3 )
    return sub_349248(v4 + 1);
  v5 = 2 * a3;
  if ( v4 >= v5 )
    return sub_349248(v4 + 1);
  if ( v5 >= 0 )
    *a2 = v5;
  else
    a4 = 0x7FFFFFFF;
  if ( v5 >= 0 )
    v4 = v5 + 1;
  else
    *a2 = a4;
  if ( v5 < 0 )
    v4 = 0x80000000;
  return sub_349248(v4);
}

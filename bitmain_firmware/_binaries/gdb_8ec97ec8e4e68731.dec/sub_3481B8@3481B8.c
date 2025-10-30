char *__fastcall sub_3481B8(int *a1)
{
  int v1; // r3
  unsigned int v2; // r3

  v1 = *a1;
  if ( (*a1 & 0x40000000) != 0 )
    v2 = v1 | 0x80000000;
  else
    v2 = v1 & 0x7FFFFFFF;
  return (char *)a1 + v2;
}

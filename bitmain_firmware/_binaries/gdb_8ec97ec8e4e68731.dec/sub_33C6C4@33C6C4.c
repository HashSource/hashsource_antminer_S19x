int __fastcall sub_33C6C4(int *a1, int a2, unsigned int a3)
{
  unsigned int v3; // r4
  int v4; // r5
  void *v5; // r0

  v3 = a1[1];
  if ( a3 < v3 && (v4 = *a1, (v5 = memchr((const void *)(*a1 + a3), a2, v3 - a3)) != 0) )
    return (int)v5 - v4;
  else
    return -1;
}

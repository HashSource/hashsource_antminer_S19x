int __fastcall sub_344880(int *a1, int a2, unsigned int a3)
{
  int v3; // r4
  unsigned int v4; // r3
  void *v5; // r0

  v3 = *a1;
  v4 = *(_DWORD *)(*a1 - 12);
  if ( a3 < v4 && (v5 = memchr((const void *)(a3 + v3), a2, v4 - a3)) != 0 )
    return (int)v5 - v3;
  else
    return -1;
}

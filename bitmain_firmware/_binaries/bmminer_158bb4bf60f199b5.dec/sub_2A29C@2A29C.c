void *__fastcall sub_2A29C(_DWORD *a1, const void *a2, size_t a3)
{
  void *result; // r0
  _DWORD *v5; // r3
  _DWORD *v6; // r4
  unsigned int v7; // t1

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  result = memcpy(a1, a2, a3);
  v5 = a1 - 1;
  v6 = a1 + 2;
  do
  {
    v7 = v5[1];
    *++v5 = bswap32(v7);
  }
  while ( v5 != v6 );
  return result;
}

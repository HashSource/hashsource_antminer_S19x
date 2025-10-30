bool __fastcall sub_74434(int *a1, _DWORD *a2)
{
  int v2; // r2
  int v3; // r3

  v2 = (int)a2;
  if ( a2 )
    v2 = 1;
  if ( !a1 )
    v2 = 0;
  if ( !v2 )
    sub_6ECC0((int)"./../lib/isc/netaddr.c", 38, 0, "a != ((void *)0) && b != ((void *)0)");
  v3 = *a1;
  if ( *a1 != *a2 || a1[5] != a2[5] )
    return 0;
  if ( v3 != 2 )
  {
    if ( v3 == 10 )
      return memcmp(a1 + 1, a2 + 1, 0x10u) == 0;
    return 0;
  }
  return a1[1] == a2[1];
}

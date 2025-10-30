bool __fastcall sub_75468(int *a1, _DWORD *a2)
{
  bool v2; // zf
  int v3; // r2
  int v4; // r3

  v2 = a1 == 0;
  if ( a1 )
    v2 = a2 == 0;
  v3 = !v2;
  if ( v2 )
    sub_6FC54((int)"./../lib/isc/netaddr.c", 38, v3, "a != ((void *)0) && b != ((void *)0)");
  v4 = *a1;
  if ( *a1 != *a2 || a1[5] != a2[5] )
    return 0;
  if ( v4 != 2 )
  {
    if ( v4 == 10 )
      return memcmp(a1 + 1, a2 + 1, 0x10u) == 0;
    return 0;
  }
  return a1[1] == a2[1];
}

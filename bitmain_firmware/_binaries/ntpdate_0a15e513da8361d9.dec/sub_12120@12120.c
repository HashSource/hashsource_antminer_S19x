bool __fastcall sub_12120(int *a1, _DWORD *a2)
{
  bool v2; // zf
  int v3; // r3

  v2 = a1 == 0;
  if ( a1 )
    v2 = a2 == 0;
  if ( v2 )
    sub_10C38();
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

int __fastcall sub_D200C(_DWORD *a1, int a2)
{
  int v2; // r3
  _DWORD *v3; // r4
  const char *v5; // r1
  const char *v6; // r0
  int v7; // r3
  const char *v8; // r1
  const char *v9; // r2

  v2 = a1[3];
  v3 = a1;
  if ( v2 == 1 )
  {
    v7 = a1[5];
    if ( v7 )
      LOWORD(v8) = -29208;
    else
      LOWORD(v8) = 2436;
    if ( v7 )
      HIWORD(v8) = 53;
    else
      HIWORD(v8) = 56;
    sub_2594B0(a2, v8);
  }
  else
  {
    if ( v2 != 2 )
      a1 = (_DWORD *)sub_94700((int)"breakpoint.c", 12662, "unhandled breakpoint type %d", v2);
    if ( a1[5] )
      LOWORD(v5) = 2452;
    else
      LOWORD(v5) = 2444;
    HIWORD(v5) = 56;
    sub_2594B0(a2, v5);
  }
  v6 = (const char *)((int (__fastcall *)(_DWORD))loc_19D228)(v3[19]);
  sub_2594B0(a2, " %s", v6);
  if ( v3[7] )
    return sub_D1C8C((int)v3, a2);
  v9 = (const char *)v3[26];
  if ( !v9 )
    return sub_D1C8C((int)v3, a2);
  sub_2594B0(a2, " %s", v9);
  return sub_D1C8C((int)v3, a2);
}

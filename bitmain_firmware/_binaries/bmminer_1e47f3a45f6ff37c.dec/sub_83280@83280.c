int __fastcall sub_83280(_DWORD *a1, int a2)
{
  int v2; // r3

  if ( a1[1] <= a2 )
    v2 = 0;
  else
    v2 = *(_DWORD *)(*a1 + 4 * a2);
  if ( !v2 )
  {
    sub_8CD10(
      2,
      "src/level_list.c",
      119,
      "l[%d] not in (0,254), or has no level defined,see configure file define, set to UNKOWN",
      a2);
    if ( (int)a1[1] <= 254 )
      return 0;
    else
      return *(_DWORD *)(*a1 + 1016);
  }
  return v2;
}

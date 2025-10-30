int __fastcall sub_11A30C(int a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int result; // r0
  _DWORD *v9; // r4

  v5 = *(_DWORD **)a2;
  if ( !*(_DWORD *)a2 )
    goto LABEL_7;
  sub_B550C(a3, "%*s%s:\n", a4, &byte_1A4198, "Autonomous System Numbers");
  if ( !*v5 )
  {
    sub_B550C(a3, "%*sinherit\n", a4 + 2, &byte_1A4198);
    v9 = *(_DWORD **)(a2 + 4);
    if ( v9 )
      goto LABEL_8;
    return 1;
  }
  if ( *v5 != 1 )
    return 0;
  result = sub_11A218(a3, (int)v5, a4);
  if ( result )
  {
LABEL_7:
    v9 = *(_DWORD **)(a2 + 4);
    if ( v9 )
    {
LABEL_8:
      sub_B550C(a3, "%*s%s:\n", a4, &byte_1A4198, "Routing Domain Identifiers");
      if ( !*v9 )
      {
        sub_B550C(a3, "%*sinherit\n", a4 + 2, &byte_1A4198);
        return 1;
      }
      if ( *v9 == 1 )
        return sub_11A218(a3, (int)v9, a4) != 0;
      return 0;
    }
    return 1;
  }
  return result;
}

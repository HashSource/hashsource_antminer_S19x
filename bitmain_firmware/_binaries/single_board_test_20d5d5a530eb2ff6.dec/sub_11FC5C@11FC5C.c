int __fastcall sub_11FC5C(int a1, const char *a2, _DWORD *a3, int a4, int a5)
{
  int v9; // r7
  signed int i; // r6
  const char *v11; // r2
  int v12; // r5
  int v13; // r0
  int v14; // r0

  v9 = a5;
  if ( sub_10C010((int)a3) > 0 )
  {
    if ( a2 )
    {
      v9 = a5 + 4;
      sub_B550C(a1, "%*s%s:\n", a5, &byte_1A4198, a2);
    }
    for ( i = 0; i < sub_10C010((int)a3); ++i )
    {
      v12 = sub_10C01C(a3, i);
      if ( v9 && sub_B550C(a1, (unsigned __int8 *)"%*s", v9, &byte_1A4198) <= 0 )
        return 0;
      v13 = sub_110544(v12);
      sub_127D14(a1, v13);
      v11 = sub_110554(v12) ? "critical" : &byte_1A4198;
      if ( sub_B550C(a1, (unsigned __int8 *)": %s\n", v11) <= 0 )
        return 0;
      if ( !sub_11FAA0(a1, v12, a4, v9 + 4) )
      {
        sub_B550C(a1, (unsigned __int8 *)"%*s", v9 + 4, &byte_1A4198);
        v14 = sub_11054C(v12);
        sub_128190(a1, v14);
      }
      if ( sub_B69CC(a1, (int)"\n", 1) <= 0 )
        return 0;
    }
  }
  return 1;
}

int __fastcall sub_70E2C(int a1, int a2)
{
  const char *v2; // r2

  v2 = "token";
  if ( a2 > 68 )
    v2 = "nterm";
  sub_1C4D40(a1, "%s %s (", v2, *(_DWORD *)&byte_360204[4 * a2 - 1244]);
  return sub_1C4D40(a1, ")");
}

int __fastcall sub_85344(int a1, int a2)
{
  const char *v2; // r2

  v2 = "nterm";
  if ( a2 <= 67 )
    v2 = "token";
  sub_1C4D40(a1, "%s %s (", v2, (&off_3692EC)[a2]);
  return sub_1C4D40(a1, ")");
}

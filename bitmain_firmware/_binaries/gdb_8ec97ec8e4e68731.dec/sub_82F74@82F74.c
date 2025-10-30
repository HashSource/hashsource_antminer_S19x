int __fastcall sub_82F74(int a1, int a2)
{
  const char *v2; // r2

  v2 = "nterm";
  if ( a2 <= 56 )
    v2 = "token";
  sub_1C4D40(a1, "%s %s (", v2, (&off_368408)[a2]);
  return sub_1C4D40(a1, ")");
}

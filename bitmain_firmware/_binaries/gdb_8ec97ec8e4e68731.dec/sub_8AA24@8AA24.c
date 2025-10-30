int __fastcall sub_8AA24(int a1, int a2)
{
  const char *v2; // r2

  v2 = "token";
  if ( a2 > 52 )
    v2 = "nterm";
  sub_1C4D40(a1, "%s %s (", v2, (&off_36B740)[a2 + 47]);
  return sub_1C4D40(a1, ")");
}

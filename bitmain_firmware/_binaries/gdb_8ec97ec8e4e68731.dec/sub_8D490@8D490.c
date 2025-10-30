int __fastcall sub_8D490(int a1, int a2)
{
  const char *v2; // r2

  v2 = "token";
  if ( a2 > 57 )
    v2 = "nterm";
  sub_1C4D40(a1, "%s %s (", v2, *(_DWORD *)&aUint32TLexHexI[4 * a2 + 120]);
  return sub_1C4D40(a1, ")");
}

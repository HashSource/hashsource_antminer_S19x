bool __fastcall sub_265E3C(wint_t a1)
{
  bool v2; // zf

  if ( iswprint(a1) || a1 - 7 <= 1 || ((a1 - 10) & 0xFFFFFFFD) == 0 )
    return 1;
  v2 = a1 == 13;
  if ( a1 != 13 )
    return (a1 & 0xFFFFFFFD) == 9;
  return v2;
}

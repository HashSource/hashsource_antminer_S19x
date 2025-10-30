int __fastcall sub_1D6644(int a1, unsigned __int64 a2, int a3, int a4)
{
  signed int v5; // r4
  unsigned __int64 v6; // r6

  v5 = abs32(a3);
  if ( !a3 )
    sub_946E0("Bad record instruction-history-size.");
  if ( a3 < 0 )
  {
    v6 = a2;
    if ( v5 > a2 )
      a2 = 0;
    else
      a2 = a2 + 1 - v5;
  }
  else
  {
    v6 = a2 - 1 + v5;
    if ( a2 > v6 )
      v6 = -1;
  }
  return sub_1D64F0(a1, a4, a2, SHIDWORD(a2), v6, SHIDWORD(v6), a4);
}

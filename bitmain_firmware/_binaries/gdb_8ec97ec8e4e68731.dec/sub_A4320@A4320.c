int __fastcall sub_A4320(int a1)
{
  int result; // r0

  if ( !*(_BYTE *)(a1 + 60) )
  {
    sub_A3C94(a1 + 32, a1);
    *(_BYTE *)(a1 + 60) = 1;
  }
  result = 672048;
  if ( (*(_BYTE *)(a1 + 56) & 2) == 0 )
    return 671860;
  return result;
}

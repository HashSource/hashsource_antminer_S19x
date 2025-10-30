int __fastcall sub_30D428(int a1, int a2)
{
  int result; // r0
  char s[36]; // [sp+4h] [bp-24h] BYREF

  result = sprintf(s, "T%d", a2);
  if ( s[0] )
    return sub_30D3E4(a1, s);
  return result;
}

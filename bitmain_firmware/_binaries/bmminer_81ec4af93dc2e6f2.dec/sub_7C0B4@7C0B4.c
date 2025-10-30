bool __fastcall sub_7C0B4(int a1, int a2)
{
  int v2; // r3

  if ( !a1 )
    return 0;
  LOBYTE(v2) = a2 & 7;
  if ( a2 <= 0 )
    v2 = -(-a2 & 7);
  return (((int)*(unsigned __int8 *)(a1 + a2 / 8 + 1032) >> (7 - v2)) & 1) != 0;
}

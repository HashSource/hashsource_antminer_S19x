int __fastcall sub_749A0(int a1, int a2, int a3, char a4, char a5, char a6)
{
  unsigned __int8 v6; // r12

  if ( a6 )
    v6 = (16 * (a4 & 3)) & 0x3B | ((a5 & 3) << 6);
  else
    v6 = (16 * (a4 & 3)) & 0x3A | ((a5 & 3) << 6) | 4;
  if ( a6 )
    v6 |= 1u;
  return sub_748C4(a1, a2, a3, 60, v6 | 0x80008000);
}

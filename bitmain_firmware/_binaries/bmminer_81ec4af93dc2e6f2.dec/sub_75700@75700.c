int __fastcall sub_75700(int a1, int a2, int a3, char a4, char a5, char a6)
{
  unsigned __int8 v6; // r12

  if ( a6 )
    v6 = (8 * (a4 & 7)) & 0x3F | ((a5 & 3) << 6) | 1;
  else
    v6 = (8 * (a4 & 7)) & 0x3E | ((a5 & 3) << 6);
  return sub_751F0(a1, a2, a3, 60, v6 | 0x80008000);
}

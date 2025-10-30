int __fastcall sub_75CA0(int a1, int a2, int a3, unsigned __int16 a4)
{
  int v4; // r12

  if ( a3 )
    v4 = 0x80000000;
  else
    v4 = 0;
  if ( !a3 )
    v4 = v4 & 0x7FFFFFFF | ((unsigned __int8)v4 << 31);
  return sub_751F0(a1, 0, a2, 12, v4 & 0xFFFF0000 | a4);
}

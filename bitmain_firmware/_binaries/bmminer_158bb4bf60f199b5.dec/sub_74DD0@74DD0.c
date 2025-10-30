int __fastcall sub_74DD0(int a1, int a2, unsigned __int16 a3)
{
  int v3; // r3

  if ( a2 )
    v3 = 0x80000000;
  else
    v3 = 0;
  if ( !a2 )
    v3 = v3 & 0x7FFFFFFF | ((unsigned __int8)v3 << 31);
  return sub_748C4(a1, 1, 0, 12, v3 & 0xFFFF0000 | a3);
}

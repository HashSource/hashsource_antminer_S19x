int __fastcall sub_790E0(int a1, int a2, unsigned __int16 a3)
{
  unsigned int v3; // r3

  if ( a2 )
    v3 = 0x80000000;
  else
    v3 = 0;
  return sub_7864C(a1, 1, 0, 12, v3 & 0xFFFF0000 | a3);
}

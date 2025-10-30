int __fastcall sub_79118(int a1, int a2, int a3, unsigned __int16 a4)
{
  unsigned int v4; // r12

  if ( a3 )
    v4 = 0x80000000;
  else
    v4 = 0;
  return sub_7864C(a1, 0, a2, 12, v4 & 0xFFFF0000 | a4);
}

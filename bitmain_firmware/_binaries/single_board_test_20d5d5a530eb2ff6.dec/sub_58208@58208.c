int __fastcall sub_58208(unsigned __int8 *a1, unsigned int a2)
{
  int v3; // r3
  int v4; // r2
  int v5; // r0

  if ( !a1 )
    return -15;
  if ( a2 <= 4 )
    return -12;
  v3 = *a1 + (a1[2] << 16) + (a1[1] << 8) + (a1[3] << 24);
  if ( (v3 & 0xFFFFFFF0) == 0x184D2A50 )
    return 8;
  if ( v3 != 407708164 )
    return -13;
  if ( (a1[4] & 8) != 0 )
    v4 = 15;
  else
    v4 = 7;
  if ( (a1[4] & 1) != 0 )
    v5 = 4;
  else
    v5 = 0;
  return v5 + v4;
}

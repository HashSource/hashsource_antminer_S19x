unsigned int __fastcall sub_96104(int a1, int *a2)
{
  __int16 v2; // r3
  unsigned int result; // r0
  int v4; // r2

  v2 = a1;
  result = a1 & 0xFFFF3E00;
  if ( result )
    return -1;
  v4 = v2 & 0x8000;
  if ( (v2 & 0x4000) != 0 )
    v4 |= 0x4000u;
  if ( (v2 & 0x2000) != 0 )
    v4 |= 0x2000u;
  if ( (v2 & 0x100) != 0 )
    v4 |= 0x100u;
  if ( (v2 & 0x80) != 0 )
    v4 |= 0x80u;
  if ( (v2 & 0x40) != 0 )
    v4 |= 0x40u;
  if ( (v2 & 0x20) != 0 )
    v4 |= 0x20u;
  if ( (v2 & 0x10) != 0 )
    v4 |= 0x10u;
  if ( (v2 & 8) != 0 )
    v4 |= 8u;
  if ( (v2 & 4) != 0 )
    v4 |= 4u;
  if ( (v2 & 2) != 0 )
    v4 |= 2u;
  if ( (v2 & 1) != 0 )
    v4 |= 1u;
  *a2 = v4;
  return result;
}

int __fastcall sub_1F5F0C(__int16 a1, int a2)
{
  int v2; // r3

  if ( a2 )
  {
    v2 = 0;
  }
  else
  {
    v2 = a1 & 0x8000;
    if ( (a1 & 0x4000) != 0 )
      v2 |= 0x4000u;
    if ( (a1 & 0x2000) != 0 )
      v2 |= 0x2000u;
  }
  if ( (a1 & 0x100) != 0 )
    v2 |= 0x100u;
  if ( (a1 & 0x80) != 0 )
    v2 |= 0x80u;
  if ( (a1 & 0x40) != 0 )
    v2 |= 0x40u;
  if ( (a1 & 0x20) != 0 )
    v2 |= 0x20u;
  if ( (a1 & 0x10) != 0 )
    v2 |= 0x10u;
  if ( (a1 & 8) != 0 )
    v2 |= 8u;
  if ( (a1 & 4) != 0 )
    v2 |= 4u;
  if ( (a1 & 2) != 0 )
    v2 |= 2u;
  if ( (a1 & 1) != 0 )
    return v2 | 1;
  return v2;
}

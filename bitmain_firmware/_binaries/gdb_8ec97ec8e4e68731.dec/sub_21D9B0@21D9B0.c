bool __fastcall sub_21D9B0(int a1, int a2, int a3)
{
  unsigned int v3; // r3
  unsigned int v4; // r0
  bool v5; // cc
  bool v6; // zf

  v3 = a1 - 4;
  v4 = a1 & 0xFFFFFFFD;
  v5 = v4 > 0xC;
  if ( v4 != 12 )
    v5 = v3 > 1;
  if ( v5 )
    return a3 == a2;
  v6 = a3 == 2;
  if ( (unsigned int)(a3 - 1) <= 1 )
    v6 = a2 == 2;
  return v6 || a3 == a2;
}

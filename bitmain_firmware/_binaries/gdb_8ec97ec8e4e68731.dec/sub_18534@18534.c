bool __fastcall sub_18534(__int16 a1)
{
  int v1; // r3
  bool v2; // zf

  v1 = a1 & 0xFF00;
  if ( v1 == 48384 || (a1 & 0xF000) == 0xD000 )
    return 1;
  v2 = v1 == 18176;
  if ( v1 != 18176 )
    v2 = (a1 & 0xF800) == 57344;
  return v2 || (a1 & 0xFF87) == 0x4687 || (a1 & 0xF500) == 45312;
}

int __fastcall sub_7ABE8(int a1, char a2, char a3, _BYTE *a4)
{
  _BYTE *v5; // r3
  bool v6; // zf
  int v7; // r5

  if ( !a4 )
    return -1;
  v5 = a4 + 3;
  v6 = a1 == 0;
  v7 = 0;
  if ( a1 )
    LOBYTE(a1) = 18;
  *v5 = 0;
  if ( v6 )
    LOBYTE(a1) = 2;
  a4[4] = 0;
  a4[2] = a2;
  *a4 = a1 & 0x1F | 0x40;
  a4[3] = a3;
  a4[1] = 5;
  a4[4] = a4[4] & 0xE0 | sub_7AD24(a4, 32) & 0x1F;
  return v7;
}

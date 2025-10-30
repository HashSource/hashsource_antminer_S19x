int __fastcall sub_7AAEC(int a1, char a2, char a3, int a4, _BYTE *a5)
{
  bool v5; // zf
  int v6; // r5

  if ( !a5 )
    return -1;
  v5 = a1 == 0;
  v6 = 0;
  a5[3] = 0;
  if ( a1 )
    LOBYTE(a1) = 17;
  a5[4] = 0;
  if ( v5 )
    LOBYTE(a1) = 1;
  a5[5] = 0;
  a5[6] = 0;
  a5[7] = 0;
  a5[8] = 0;
  *a5 = a1 & 0x1F | 0x40;
  a5[2] = a2;
  a5[7] = a4;
  a5[3] = a3;
  a5[1] = 9;
  a5[4] = HIBYTE(a4);
  a5[5] = BYTE2(a4);
  a5[6] = BYTE1(a4);
  a5[8] = a5[8] & 0xE0 | sub_7AD24(a5, 64) & 0x1F;
  return v6;
}

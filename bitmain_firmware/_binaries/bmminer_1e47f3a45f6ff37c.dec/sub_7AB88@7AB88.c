int __fastcall sub_7AB88(char a1, _BYTE *a2)
{
  int v2; // r5

  if ( !a2 )
    return -1;
  v2 = 0;
  a2[3] = 0;
  a2[4] = 0;
  a2[2] = a1;
  a2[1] = 5;
  *a2 = 64;
  a2[4] = a2[4] & 0xE0 | sub_7AD24(a2, 32) & 0x1F;
  return v2;
}

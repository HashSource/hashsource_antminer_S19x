int __fastcall sub_7AC58(_BYTE *a1)
{
  int v1; // r5

  if ( !a1 )
    return -1;
  v1 = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  *a1 = 83;
  a1[1] = 5;
  a1[4] = a1[4] & 0xE0 | sub_7AD24(a1, 32) & 0x1F;
  return v1;
}

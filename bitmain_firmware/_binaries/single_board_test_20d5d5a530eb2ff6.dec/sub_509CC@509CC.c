int __fastcall sub_509CC(int a1, _BYTE *a2, unsigned int a3)
{
  int v3; // r3

  if ( a3 > 0x7E000000 )
    v3 = 0;
  else
    v3 = (int)a3 / 255;
  if ( a3 <= 0x7E000000 )
    v3 += a3 + 16;
  return sub_4B688(a1, a2, a3, v3, 1);
}

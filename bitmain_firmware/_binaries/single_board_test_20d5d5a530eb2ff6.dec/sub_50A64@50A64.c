int __fastcall sub_50A64(int a1, char *a2, _BYTE *a3, unsigned int a4)
{
  int v4; // r4

  if ( a4 > 0x7E000000 )
    v4 = 0;
  else
    v4 = (int)a4 / 255;
  if ( a4 <= 0x7E000000 )
    v4 += a4 + 16;
  return sub_4C25C(a1, a2, a3, a4, v4, 1);
}

int __fastcall sub_6B7A4(int a1)
{
  int v4; // [sp+Ch] [bp-8h]

  v4 = sub_6B128();
  switch ( a1 )
  {
    case 0:
      return sub_6B5F0(v4 & 0x3F);
    case 1:
      return sub_6B5F0(BYTE1(v4) & 0x3F);
    case 2:
      return sub_6B5F0(BYTE2(v4) & 0x3F);
    case 3:
      return sub_6B5F0(HIBYTE(v4) & 0x3F);
  }
  return -1;
}

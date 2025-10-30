int __fastcall sub_5D0D4(int a1)
{
  int v4; // [sp+Ch] [bp-8h]

  v4 = sub_5C960();
  switch ( a1 )
  {
    case 0:
      return sub_5CF30(v4 & 0x3F);
    case 1:
      return sub_5CF30(BYTE1(v4) & 0x3F);
    case 2:
      return sub_5CF30(BYTE2(v4) & 0x3F);
    case 3:
      return sub_5CF30(HIBYTE(v4) & 0x3F);
  }
  return -1;
}

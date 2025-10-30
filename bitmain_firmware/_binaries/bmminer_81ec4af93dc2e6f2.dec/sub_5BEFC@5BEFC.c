int __fastcall sub_5BEFC(int a1, int a2, int a3)
{
  _DWORD v6[3]; // [sp+14h] [bp-10h] BYREF

  v6[0] = 0;
  v6[1] = 0;
  v6[2] = sub_5BE50(a3, (int)v6, 8);
  if ( a2 == 4 )
  {
    sub_52EA0(46, a1);
    sub_52EA0(58, (1 << SLOBYTE(v6[0])) | a1);
    sub_52EA0(59, (1 << SBYTE1(v6[0])) | a1);
    return sub_52EA0(60, (1 << SLOBYTE(v6[0])) | a1 | (1 << SBYTE1(v6[0])));
  }
  else if ( a2 == 8 )
  {
    sub_52EA0(46, a1);
    sub_52EA0(58, (1 << SLOBYTE(v6[0])) | a1);
    sub_52EA0(59, (1 << SBYTE1(v6[0])) | a1);
    sub_52EA0(60, (1 << SBYTE2(v6[0])) | a1);
    sub_52EA0(61, (1 << SLOBYTE(v6[0])) | a1 | (1 << SBYTE1(v6[0])));
    sub_52EA0(62, (1 << SLOBYTE(v6[0])) | a1 | (1 << SBYTE2(v6[0])));
    sub_52EA0(63, (1 << SBYTE1(v6[0])) | a1 | (1 << SBYTE2(v6[0])));
    return sub_52EA0(64, (1 << SLOBYTE(v6[0])) | a1 | (1 << SBYTE1(v6[0])) | (1 << SBYTE2(v6[0])));
  }
  else
  {
    return sub_52EA0(46, a1);
  }
}

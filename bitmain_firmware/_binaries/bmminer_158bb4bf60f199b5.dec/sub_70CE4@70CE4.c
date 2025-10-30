int __fastcall sub_70CE4(int a1, int a2)
{
  char v3; // r5
  unsigned int v4; // r1
  unsigned int v6; // [sp+4h] [bp-8h] BYREF

  v3 = sub_6F570(a2);
  v6 = 0;
  sub_6688C(15, &v6);
  v4 = v6;
  if ( a1 )
  {
    switch ( a1 )
    {
      case 1:
        v4 = v6 & 0xFFFFC0FF | ((v3 & 0x3F) << 8);
        break;
      case 2:
        v4 = v6 & 0xFFC0FFFF | ((v3 & 0x3F) << 16);
        break;
      case 3:
        v4 = v6 & 0xC0FFFFFF | ((v3 & 0x3F) << 24);
        break;
    }
  }
  else
  {
    v4 = v6 & 0xFFFFFFC0 | v3 & 0x3F;
  }
  sub_66908(15, v4);
  return 0;
}

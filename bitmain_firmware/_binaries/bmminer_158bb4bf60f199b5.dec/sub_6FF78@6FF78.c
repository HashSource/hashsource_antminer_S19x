int __fastcall sub_6FF78(int a1, int a2)
{
  int v4; // [sp+4h] [bp-4h] BYREF

  switch ( a2 )
  {
    case 4:
      sub_66908(45, a1);
      sub_6688C(45, &v4);
      sub_66908(57, a1 | 0x4000);
      sub_66908(58, a1 | 0x8000);
      return sub_66908(59, a1 | 0xC000);
    case 8:
      sub_66908(45, a1);
      sub_6688C(45, &v4);
      sub_66908(57, a1 | 0x4000);
      sub_66908(58, a1 | 0x8000);
      sub_66908(59, a1 | 0xC000);
      sub_66908(60, a1 | 0x2000);
      sub_66908(61, a1 | 0x6000);
      sub_66908(62, a1 | 0xA000);
      return sub_66908(63, a1 | 0xE000);
    case 2:
      sub_66908(45, a1);
      sub_6688C(45, &v4);
      return sub_66908(57, a1 | 0x4000);
    default:
      sub_66908(45, a1);
      return sub_6688C(45, &v4);
  }
}

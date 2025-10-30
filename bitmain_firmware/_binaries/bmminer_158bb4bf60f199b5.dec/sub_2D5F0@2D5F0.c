int __fastcall sub_2D5F0(int result, int a2)
{
  char v2[2052]; // [sp+0h] [bp-804h] BYREF

  switch ( result )
  {
    case 8:
      return sub_2C844(a2);
    case 9:
      return sub_2CA8C(a2);
    case 10:
      return sub_2CBD4(a2);
    case 11:
      return sub_2CD1C(a2);
    case 12:
      return sub_2CE10(a2);
    case 13:
      return sub_2CF58(a2);
    case 14:
      return sub_2D0E0(a2);
    case 15:
      return sub_2D2E8(a2);
  }
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v2, 0x800u, "Unknown reg: %d\n", result);
    return sub_47AB4(3, v2, 0);
  }
  return result;
}

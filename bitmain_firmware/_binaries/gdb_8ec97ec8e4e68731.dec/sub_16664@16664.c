int __fastcall sub_16664(int a1)
{
  int result; // r0

  switch ( a1 )
  {
    case 0:
      sub_2A6BBC("elf32-arm.c", 3847);
      result = 0;
      break;
    case 3:
    case 5:
    case 6:
    case 11:
    case 12:
    case 14:
    case 17:
    case 22:
    case 23:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

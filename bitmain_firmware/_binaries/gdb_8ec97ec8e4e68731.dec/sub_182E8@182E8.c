bool __fastcall sub_182E8(int a1, int a2)
{
  _BOOL4 result; // r0

  if ( (unsigned int)(a1 - 14) <= 1 )
    return 1;
  switch ( a1 )
  {
    case 0:
      return ((unsigned int)a2 >> 30) & 1;
    case 1:
      return ((a2 ^ 0x40000000u) >> 30) & 1;
    case 2:
      return ((unsigned int)a2 >> 29) & 1;
    case 3:
      return ((a2 ^ 0x20000000u) >> 29) & 1;
    case 4:
      return (unsigned int)a2 >> 31;
    case 5:
      return a2 >= 0;
    case 6:
      return ((unsigned int)a2 >> 28) & 1;
    case 7:
      return ((a2 ^ 0x10000000u) >> 28) & 1;
    case 8:
      return (a2 & 0x60000000) == 0x20000000;
    case 9:
      return (a2 & 0x60000000) != 0x20000000;
    case 10:
      goto LABEL_8;
    case 11:
      goto LABEL_5;
    case 12:
      if ( (a2 & 0x40000000) != 0 )
        result = 0;
      else
LABEL_8:
        result = (((a2 ^ 0x10000000u) >> 28) & 1) == a2 >= 0;
      break;
    case 13:
      if ( (a2 & 0x40000000) != 0 )
        return 1;
LABEL_5:
      result = ((a2 ^ 0x10000000u) >> 28) & 1;
      if ( a2 >= 0 )
        result = ((a2 ^ 0x10000000) & 0x10000000) == 0;
      break;
    default:
      return 1;
  }
  return result;
}

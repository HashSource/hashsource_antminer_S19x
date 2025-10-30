int __fastcall sub_2F18A4(char a1, int a2)
{
  int result; // r0

  result = a1 & 7;
  switch ( result )
  {
    case 0:
      result = a2;
      break;
    case 2:
      return result;
    case 3:
      result = 4;
      break;
    case 4:
      result = 8;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

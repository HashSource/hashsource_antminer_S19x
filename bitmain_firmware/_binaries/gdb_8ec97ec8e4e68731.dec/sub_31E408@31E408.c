int __fastcall sub_31E408(_DWORD *a1, int a2, int a3, int a4)
{
  if ( !a1 )
    return 0;
  switch ( a2 )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 11:
    case 33:
    case 41:
    case 42:
    case 43:
    case 46:
    case 47:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
      break;
    case 9:
    case 10:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 22:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 40:
    case 51:
    case 52:
      if ( a4 )
        return 0;
      break;
    default:
      return 0;
  }
  *a1 = a2;
  a1[2] = a3;
  a1[3] = a4;
  a1[1] = 0;
  return 1;
}

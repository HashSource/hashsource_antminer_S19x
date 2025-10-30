time_t __fastcall sub_24DC4(_DWORD *a1, int a2)
{
  time_t result; // r0

  result = time(0);
  a1[62] = a2;
  a1[61] = result;
  switch ( a2 )
  {
    case 0:
      ++a1[63];
      break;
    case 1:
      ++a1[64];
      break;
    case 2:
      ++a1[65];
      break;
    case 3:
      ++a1[66];
      break;
    case 4:
      ++a1[67];
      break;
    case 5:
      ++a1[68];
      break;
    case 6:
      ++a1[69];
      break;
    case 7:
      ++a1[70];
      break;
    case 8:
      ++a1[71];
      break;
    case 9:
      ++a1[72];
      break;
    default:
      return result;
  }
  return result;
}

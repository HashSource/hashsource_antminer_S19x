int __fastcall sub_334B0(int a1, int a2)
{
  int result; // r0

  switch ( a2 )
  {
    case 0:
      result = 0;
      break;
    case 1:
      result = 1;
      break;
    case 2:
      result = 2;
      break;
    case 3:
      result = 3;
      break;
    case 4:
      result = 4;
      break;
    case 5:
      result = 5;
      break;
    case 6:
      result = 6;
      break;
    case 7:
      result = 10;
      break;
    case 8:
      result = 8;
      break;
    case 9:
      result = 9;
      break;
    case 10:
      result = 30;
      break;
    case 11:
      result = 11;
      break;
    case 12:
      result = 31;
      break;
    case 13:
      result = 13;
      break;
    case 14:
      result = 14;
      break;
    case 15:
      result = 15;
      break;
    case 17:
      result = 20;
      break;
    case 18:
      result = 19;
      break;
    case 19:
      result = 17;
      break;
    case 20:
      result = 18;
      break;
    case 21:
      result = 21;
      break;
    case 22:
      result = 22;
      break;
    case 23:
      result = 16;
      break;
    case 24:
      result = 24;
      break;
    case 25:
      result = 25;
      break;
    case 26:
      result = 26;
      break;
    case 27:
      result = 27;
      break;
    case 28:
      result = 28;
      break;
    case 29:
      result = 23;
      break;
    case 30:
      result = 32;
      break;
    case 31:
      result = 12;
      break;
    case 32:
      result = 77;
      break;
    case 64:
      result = 78;
      break;
    default:
      if ( (unsigned int)(a2 - 33) > 0x1E )
        result = 143;
      else
        result = a2 + 14;
      break;
  }
  return result;
}

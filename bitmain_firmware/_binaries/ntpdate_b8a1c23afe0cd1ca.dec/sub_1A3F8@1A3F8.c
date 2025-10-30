int __fastcall sub_1A3F8(int a1, const char *a2, int a3)
{
  int result; // r0
  char v7[128]; // [sp+Ch] [bp-84h] BYREF

  switch ( a1 )
  {
    case 1:
    case 13:
      result = 6;
      break;
    case 2:
      result = 38;
      break;
    case 5:
      result = 26;
      break;
    case 9:
    case 20:
    case 22:
    case 36:
    case 40:
      result = 30;
      break;
    case 12:
      result = 1;
      break;
    case 17:
      result = 39;
      break;
    case 23:
    case 24:
      result = 50;
      break;
    case 32:
    case 103:
    case 104:
      result = 54;
      break;
    case 97:
      result = 48;
      break;
    case 98:
      result = 5;
      break;
    case 99:
      result = 4;
      break;
    case 100:
      result = 10;
      break;
    case 101:
      result = 8;
      break;
    case 105:
      result = 13;
      break;
    case 107:
      result = 40;
      break;
    case 110:
      result = 2;
      break;
    case 111:
      result = 12;
      break;
    case 112:
      result = 11;
      break;
    case 113:
      result = 9;
      break;
    default:
      sub_129C0(a1, (int)v7, 0x80u);
      sub_15008(a2, a3, "unable to convert errno to isc_result: %d: %s", a1, v7);
      result = 34;
      break;
  }
  return result;
}

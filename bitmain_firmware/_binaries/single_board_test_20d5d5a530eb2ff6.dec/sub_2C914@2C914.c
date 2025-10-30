int __fastcall sub_2C914(int a1)
{
  int result; // r0

  switch ( a1 )
  {
    case 0:
      result = 1;
      break;
    case 1:
      sub_2146C("Init fail", "No PT2 data", 0);
      result = 0;
      break;
    case 2:
      sub_2146C("Init fail", "Eeprom err", 0);
      result = 0;
      break;
    case 4:
    case 5:
      sub_2146C("Init fail", "Hal err", 0);
      result = 0;
      break;
    case 14:
      sub_43C84();
      result = 0;
      break;
    default:
      sub_2146C("Init fail", "Stop test", 0);
      result = 0;
      break;
  }
  return result;
}

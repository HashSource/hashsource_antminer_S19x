int __fastcall sub_997F8(int a1, _DWORD *a2)
{
  int result; // r0

  *a2 = 1;
  switch ( a1 )
  {
    case 0:
      return 0;
    case 1:
      return 1;
    case 2:
      return 2;
    case 3:
      return 3;
    case 4:
      return 4;
    case 5:
      return 5;
    case 6:
      return 6;
    case 8:
      return 8;
    case 9:
      return 9;
    case 10:
      return 7;
    case 11:
      return 11;
    case 12:
      return 31;
    case 13:
      return 13;
    case 14:
      return 14;
    case 15:
      return 15;
    case 16:
      return 23;
    case 17:
      return 19;
    case 18:
      return 20;
    case 19:
      return 18;
    case 20:
      return 17;
    case 21:
      return 21;
    case 22:
      return 22;
    case 23:
    case 33:
      return 29;
    case 24:
      return 24;
    case 25:
      return 25;
    case 26:
      return 26;
    case 27:
      return 27;
    case 28:
      return 28;
    case 30:
      return 10;
    case 31:
      return 12;
    case 32:
      return 30;
    default:
      if ( (unsigned int)(a1 - 45) <= 0x1E )
      {
        result = a1 - 12;
        goto LABEL_38;
      }
      if ( a1 != 77 )
      {
        if ( (unsigned int)(a1 - 78) > 0x3F )
        {
LABEL_39:
          *a2 = 0;
          return 0;
        }
        result = a1 - 14;
LABEL_38:
        if ( (unsigned int)(result - 32) <= 0x20 )
          return result;
        goto LABEL_39;
      }
      return 32;
  }
}

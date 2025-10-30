bool __fastcall sub_1841C(unsigned int a1)
{
  int v1; // r2
  _BOOL4 result; // r0

  if ( a1 >> 28 == 15 )
  {
    switch ( HIBYTE(a1) & 0xF )
    {
      case 0xA:
      case 0xB:
LABEL_3:
        result = 1;
        break;
      case 0xC:
      case 0xD:
      case 0xE:
        if ( (unsigned __int16)a1 >> 12 == 15 )
          sub_946E0("Invalid update to pc in instruction");
        goto LABEL_7;
      default:
LABEL_7:
        result = 0;
        break;
    }
  }
  else
  {
    v1 = (a1 >> 25) & 7;
    switch ( v1 )
    {
      case 1:
        return (unsigned __int16)a1 >> 12 == 15;
      case 2:
      case 3:
        if ( v1 == 3 && (a1 & 0x10) != 0 || (a1 & 0x100000) == 0 )
          goto LABEL_7;
        return (unsigned __int16)a1 >> 12 == 15;
      case 4:
        return (a1 & 0x108000) == 1081344;
      case 5:
        goto LABEL_3;
      case 6:
      case 7:
        goto LABEL_7;
      default:
        if ( ((a1 >> 23) & 3) != 2 || (a1 & 0x100000) != 0 )
          return (unsigned __int16)a1 >> 12 == 15;
        if ( (a1 & 0x90) == 0x90 )
          goto LABEL_7;
        result = ((a1 >> 4) & 0xFFFFFF) - 1245169 <= 2;
        break;
    }
  }
  return result;
}

int sub_75864()
{
  double v0; // d0
  double *v1; // r2
  int i; // r3
  double v3; // d7
  int v4; // r1
  double v5; // d5
  int result; // r0
  int v7; // r0
  int v8; // r2
  int v9; // r3
  double v10; // d0
  int v11; // r3

  if ( byte_65E46C && byte_65E5D0 )
  {
    if ( dword_65E484 <= 1 )
    {
      return -1;
    }
    else
    {
      v1 = &dbl_65E528;
      for ( i = 1; ; ++i )
      {
        v3 = *v1++;
        v4 = i;
        if ( v0 > v3 - 0.001 )
        {
          v5 = *v1;
          if ( v0 < *v1 + 0.001 )
            break;
        }
        if ( v0 < v3 + 0.001 )
        {
          v5 = *((double *)&stru_65E448 + i + 28);
          if ( v0 > v5 - 0.001 )
            break;
        }
        if ( dword_65E484 - 1 <= v4 )
          return -1;
      }
      v8 = *((unsigned __int8 *)&stru_65E448 + i + 63);
      v9 = *((unsigned __int8 *)&stru_65E448 + i + 64) - v8;
      v10 = (double)v8 + (double)v9 / (v5 - v3) * (v0 - v3);
      round(&stru_65E448, v4, v8, v9);
      v11 = (int)v10;
      if ( (unsigned int)(int)v10 >= 0x100 )
        return -1;
      return v11;
    }
  }
  else
  {
    switch ( dword_65E468 )
    {
      case 34:
        return (int)(1215.89444 - v0 * 59.931507);
      case 65:
      case 66:
        result = (int)(765.411764 - v0 * 35.833333);
        break;
      case 67:
        return (int)(933.240365 - v0 * 59.806034);
      case 97:
        return (int)(1144.50226 - v0 * 52.243589);
      case 98:
      case 100:
      case 101:
      case 102:
        return (int)(0.0 - v0);
      case 113:
      case 114:
      case 117:
      case 119:
        result = (int)(1190.93534 - v0 * 78.742588);
        break;
      case 115:
      case 120:
        return (int)(1280.57782 - v0 * 73.979365);
      case 116:
      case 118:
        return (int)(1156.10758 - v0 * 76.090494);
      case 193:
        v7 = sub_744D8(dword_65E460);
        if ( v7 == -2147482880 || (unsigned __int8)v7 <= 3u )
          return (int)(1275.0 - v0 * 85.0);
        else
          return (int)(1083.75 - v0 * 70.8333333);
      default:
        return -1;
    }
  }
  return result;
}

int sub_674F0()
{
  double v0; // d0
  int v2; // [sp+8h] [bp-Ch]
  int v3; // [sp+Ch] [bp-8h]

  switch ( dword_536350 )
  {
    case 34:
      v3 = (int)(1215.89444 - v0 * 59.931507);
      break;
    case 65:
      v3 = (int)(765.411764 - v0 * 35.833333);
      break;
    case 66:
      v3 = (int)(765.411764 - v0 * 35.833333);
      break;
    case 67:
      v3 = (int)(933.240365 - v0 * 59.806034);
      break;
    case 97:
      v3 = (int)(1144.50226 - v0 * 52.243589);
      break;
    case 98:
    case 100:
    case 101:
    case 102:
      v3 = (int)(0.0 - v0);
      break;
    case 113:
    case 117:
      v3 = (int)(1190.93534 - v0 * 78.742588);
      break;
    case 114:
    case 119:
      v3 = (int)(1190.93534 - v0 * 78.742588);
      break;
    case 115:
    case 120:
      v3 = (int)(1280.57782 - v0 * 73.979365);
      break;
    case 116:
    case 118:
      v3 = (int)(1156.10758 - v0 * 76.090494);
      break;
    case 193:
      v2 = sub_632F4(dword_536348);
      if ( v2 == -2147482880 || (unsigned __int8)v2 <= 3u )
        v3 = (int)(1275.0 - v0 * 85.0);
      else
        v3 = (int)(1083.75 - v0 * 70.8333333);
      break;
    default:
      v3 = -1;
      break;
  }
  return v3;
}

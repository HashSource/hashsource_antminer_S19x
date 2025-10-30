int __fastcall sub_29F34(int result, char a2)
{
  unsigned int v2; // r1
  unsigned int v3; // r1
  int v4; // r1
  unsigned int v5; // r1
  unsigned int v6; // r1

  switch ( result )
  {
    case 1:
      return result;
    case 2:
      if ( (a2 & 0x80) != 0x80 )
        result = 1;
      break;
    case 4:
      v4 = a2 & 0xC0;
      if ( v4 == 128 )
        goto LABEL_29;
      if ( v4 != 192 )
      {
        if ( v4 == 64 )
          result = 2;
        else
          result = 1;
      }
      break;
    case 8:
      v5 = a2 & 0xE0;
      if ( v5 == 128 )
        goto LABEL_50;
      if ( v5 <= 0x80 )
      {
        if ( v5 == 64 )
          goto LABEL_29;
        if ( v5 == 96 )
          goto LABEL_49;
        if ( v5 != 32 )
          goto LABEL_9;
        goto LABEL_25;
      }
      if ( v5 == 192 )
        goto LABEL_48;
      if ( v5 != 224 )
      {
        if ( v5 != 160 )
          goto LABEL_9;
        goto LABEL_39;
      }
      break;
    case 16:
      v2 = a2 & 0xF0;
      if ( v2 == 128 )
      {
        result = 9;
      }
      else if ( v2 > 0x80 )
      {
        if ( v2 == 192 )
        {
          result = 13;
        }
        else if ( v2 <= 0xC0 )
        {
          switch ( v2 )
          {
            case 0xA0u:
              result = 11;
              break;
            case 0xB0u:
              result = 12;
              break;
            case 0x90u:
              result = 10;
              break;
            default:
              goto LABEL_9;
          }
        }
        else if ( v2 == 224 )
        {
          result = 15;
        }
        else if ( v2 != 240 )
        {
          if ( v2 != 208 )
            goto LABEL_9;
          result = 14;
        }
      }
      else if ( v2 == 64 )
      {
LABEL_50:
        result = 5;
      }
      else if ( v2 > 0x40 )
      {
        switch ( v2 )
        {
          case '`':
LABEL_48:
            result = 7;
            break;
          case 'p':
            result = 8;
            break;
          case 'P':
LABEL_39:
            result = 6;
            break;
          default:
            goto LABEL_9;
        }
      }
      else
      {
        switch ( v2 )
        {
          case 0x20u:
LABEL_29:
            result = 3;
            break;
          case 0x30u:
LABEL_49:
            result = 4;
            break;
          case 0x10u:
LABEL_25:
            result = 2;
            break;
          default:
            goto LABEL_9;
        }
      }
      break;
    case 32:
      v6 = (unsigned __int8)((a2 & 0xF8) - 8);
      if ( v6 > 0xF0 )
        goto LABEL_9;
      result = *((char *)&dword_4C8CC[501] + v6);
      break;
    case 64:
      v3 = (unsigned __int8)((a2 & 0xFC) - 4);
      if ( v3 > 0xF8 )
LABEL_9:
        result = 1;
      else
        result = *((char *)&dword_4C8CC[562] + v3);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

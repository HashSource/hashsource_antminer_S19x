int __fastcall sub_2C2B0(int a1, char a2)
{
  int v2; // r3
  int v3; // r3
  int v4; // r3
  int v5; // r3

  switch ( a1 )
  {
    case 1:
      return 1;
    case 2:
      if ( (a2 & 0x80) == 0x80 )
        return 2;
      else
        return 1;
    case 4:
      v3 = a2 & 0xC0;
      switch ( v3 )
      {
        case 128:
          return 3;
        case 192:
          return 4;
        case 64:
          return 2;
      }
      return 1;
    case 8:
      v4 = a2 & 0xE0;
      if ( v4 == 128 )
        return 5;
      if ( (a2 & 0xE0u) > 0x80 )
      {
        switch ( v4 )
        {
          case 192:
            return 7;
          case 224:
            return 8;
          case 160:
            return 6;
        }
      }
      else
      {
        switch ( v4 )
        {
          case '@':
            return 3;
          case '`':
            return 4;
          case ' ':
            return 2;
        }
      }
      return 1;
    case 16:
      v5 = a2 & 0xF0;
      if ( v5 == 128 )
        return 9;
      if ( (a2 & 0xF0u) > 0x80 )
      {
        if ( v5 == 192 )
          return 13;
        if ( (a2 & 0xF0u) > 0xC0 )
        {
          switch ( v5 )
          {
            case 224:
              return 15;
            case 240:
              return 16;
            case 208:
              return 14;
          }
        }
        else
        {
          switch ( v5 )
          {
            case 160:
              return 11;
            case 176:
              return 12;
            case 144:
              return 10;
          }
        }
      }
      else
      {
        if ( v5 == 64 )
          return 5;
        if ( (a2 & 0xF0u) > 0x40 )
        {
          switch ( v5 )
          {
            case '`':
              return 7;
            case 'p':
              return 8;
            case 'P':
              return 6;
          }
        }
        else
        {
          switch ( v5 )
          {
            case 32:
              return 3;
            case 48:
              return 4;
            case 16:
              return 2;
          }
        }
      }
      return 1;
    case 32:
      switch ( a2 & 0xF8 )
      {
        case 8:
          v2 = 2;
          break;
        case 0x10:
          v2 = 3;
          break;
        case 0x18:
          v2 = 4;
          break;
        case 0x20:
          v2 = 5;
          break;
        case 0x28:
          v2 = 6;
          break;
        case 0x30:
          v2 = 7;
          break;
        case 0x38:
          v2 = 8;
          break;
        case 0x40:
          v2 = 9;
          break;
        case 0x48:
          v2 = 10;
          break;
        case 0x50:
          v2 = 11;
          break;
        case 0x58:
          v2 = 12;
          break;
        case 0x60:
          v2 = 13;
          break;
        case 0x68:
          v2 = 14;
          break;
        case 0x70:
          v2 = 15;
          break;
        case 0x78:
          v2 = 16;
          break;
        case 0x80:
          v2 = 17;
          break;
        case 0x88:
          v2 = 18;
          break;
        case 0x90:
          v2 = 19;
          break;
        case 0x98:
          v2 = 20;
          break;
        case 0xA0:
          v2 = 21;
          break;
        case 0xA8:
          v2 = 22;
          break;
        case 0xB0:
          v2 = 23;
          break;
        case 0xB8:
          v2 = 24;
          break;
        case 0xC0:
          v2 = 25;
          break;
        case 0xC8:
          v2 = 26;
          break;
        case 0xD0:
          v2 = 27;
          break;
        case 0xD8:
          v2 = 28;
          break;
        case 0xE0:
          v2 = 29;
          break;
        case 0xE8:
          v2 = 30;
          break;
        case 0xF0:
          v2 = 31;
          break;
        case 0xF8:
          v2 = 32;
          break;
        default:
          v2 = 1;
          break;
      }
      return v2;
    case 64:
      switch ( a2 & 0xFC )
      {
        case 4:
          v2 = 2;
          break;
        case 8:
          v2 = 3;
          break;
        case 0xC:
          v2 = 4;
          break;
        case 0x10:
          v2 = 5;
          break;
        case 0x14:
          v2 = 6;
          break;
        case 0x18:
          v2 = 7;
          break;
        case 0x1C:
          v2 = 8;
          break;
        case 0x20:
          v2 = 9;
          break;
        case 0x24:
          v2 = 10;
          break;
        case 0x28:
          v2 = 11;
          break;
        case 0x2C:
          v2 = 12;
          break;
        case 0x30:
          v2 = 13;
          break;
        case 0x34:
          v2 = 14;
          break;
        case 0x38:
          v2 = 15;
          break;
        case 0x3C:
          v2 = 16;
          break;
        case 0x40:
          v2 = 17;
          break;
        case 0x44:
          v2 = 18;
          break;
        case 0x48:
          v2 = 19;
          break;
        case 0x4C:
          v2 = 20;
          break;
        case 0x50:
          v2 = 21;
          break;
        case 0x54:
          v2 = 22;
          break;
        case 0x58:
          v2 = 23;
          break;
        case 0x5C:
          v2 = 24;
          break;
        case 0x60:
          v2 = 25;
          break;
        case 0x64:
          v2 = 26;
          break;
        case 0x68:
          v2 = 27;
          break;
        case 0x6C:
          v2 = 28;
          break;
        case 0x70:
          v2 = 29;
          break;
        case 0x74:
          v2 = 30;
          break;
        case 0x78:
          v2 = 31;
          break;
        case 0x7C:
          v2 = 32;
          break;
        case 0x80:
          v2 = 33;
          break;
        case 0x84:
          v2 = 34;
          break;
        case 0x88:
          v2 = 35;
          break;
        case 0x8C:
          v2 = 36;
          break;
        case 0x90:
          v2 = 37;
          break;
        case 0x94:
          v2 = 38;
          break;
        case 0x98:
          v2 = 39;
          break;
        case 0x9C:
          v2 = 40;
          break;
        case 0xA0:
          v2 = 41;
          break;
        case 0xA4:
          v2 = 42;
          break;
        case 0xA8:
          v2 = 43;
          break;
        case 0xAC:
          v2 = 44;
          break;
        case 0xB0:
          v2 = 45;
          break;
        case 0xB4:
          v2 = 46;
          break;
        case 0xB8:
          v2 = 47;
          break;
        case 0xBC:
          v2 = 48;
          break;
        case 0xC0:
          v2 = 49;
          break;
        case 0xC4:
          v2 = 50;
          break;
        case 0xC8:
          v2 = 51;
          break;
        case 0xCC:
          v2 = 52;
          break;
        case 0xD0:
          v2 = 53;
          break;
        case 0xD4:
          v2 = 54;
          break;
        case 0xD8:
          v2 = 55;
          break;
        case 0xDC:
          v2 = 56;
          break;
        case 0xE0:
          v2 = 57;
          break;
        case 0xE4:
          v2 = 58;
          break;
        case 0xE8:
          v2 = 59;
          break;
        case 0xEC:
          v2 = 60;
          break;
        case 0xF0:
          v2 = 61;
          break;
        case 0xF4:
          v2 = 62;
          break;
        case 0xF8:
          v2 = 63;
          break;
        case 0xFC:
          v2 = 64;
          break;
        default:
          v2 = 1;
          break;
      }
      return v2;
    default:
      return 0;
  }
}

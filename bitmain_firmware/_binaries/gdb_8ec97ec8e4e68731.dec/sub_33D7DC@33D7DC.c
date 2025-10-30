int __fastcall sub_33D7DC(int result, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // r5
  _DWORD *v5; // r4
  _DWORD *v6; // r2

  if ( a3 )
  {
    v3 = (_DWORD *)result;
    v5 = a3;
    while ( 2 )
    {
      switch ( *v5 )
      {
        case 1:
        case 2:
        case 3:
        case 9:
        case 0xA:
        case 0xB:
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x19:
        case 0x1A:
        case 0x1B:
        case 0x1C:
        case 0x1D:
        case 0x1E:
        case 0x1F:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x25:
        case 0x26:
        case 0x28:
        case 0x29:
        case 0x2A:
        case 0x2B:
        case 0x2D:
        case 0x2E:
        case 0x2F:
        case 0x30:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3A:
        case 0x3B:
        case 0x3C:
        case 0x3D:
        case 0x3E:
        case 0x3F:
        case 0x42:
        case 0x48:
        case 0x49:
        case 0x4A:
        case 0x4B:
        case 0x4C:
        case 0x4D:
        case 0x4E:
        case 0x4F:
          goto LABEL_10;
        case 4:
          ++*v3;
          v6 = (_DWORD *)v5[2];
          goto LABEL_11;
        case 7:
        case 8:
        case 0x32:
          v5 = (_DWORD *)v5[3];
          if ( v5 )
            continue;
          return result;
        case 0x23:
        case 0x24:
          v6 = (_DWORD *)v5[2];
          if ( *v6 == 5 )
          {
            ++*a2;
LABEL_10:
            v6 = (_DWORD *)v5[2];
          }
LABEL_11:
          result = sub_33D7DC(v3, a2, v6);
          v5 = (_DWORD *)v5[3];
          if ( !v5 )
            return result;
          continue;
        case 0x2C:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
          v5 = (_DWORD *)v5[2];
          if ( v5 )
            continue;
          return result;
        default:
          return result;
      }
    }
  }
  return result;
}

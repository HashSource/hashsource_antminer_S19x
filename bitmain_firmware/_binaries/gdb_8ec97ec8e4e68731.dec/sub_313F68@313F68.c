_DWORD *__fastcall sub_313F68(int a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  _DWORD *result; // r0

  v2 = a2;
  if ( a2 )
  {
    while ( 2 )
    {
      switch ( *v2 )
      {
        case 0:
        case 6:
        case 0x18:
        case 0x27:
        case 0x2C:
        case 0x31:
        case 0x40:
        case 0x41:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x4A:
        case 0x4B:
          return 0;
        case 5:
          result = sub_313F30(a1, v2 + 2);
          if ( !result || *result != 47 )
            return 0;
          return result;
        case 7:
        case 8:
        case 0x32:
          goto LABEL_6;
        default:
          result = (_DWORD *)sub_313F68(a1, v2[2]);
          if ( result )
            return result;
LABEL_6:
          v2 = (_DWORD *)v2[3];
          if ( !v2 )
            return 0;
          continue;
      }
    }
  }
  return 0;
}

int __fastcall ossl_statem_client_max_message_size(_DWORD *a1)
{
  int result; // r0
  _DWORD *v2; // r3
  _BOOL4 v3; // r1

  switch ( a1[16] )
  {
    case 2:
      result = 258;
      break;
    case 3:
    case 0x26:
      result = 20000;
      break;
    case 4:
    case 7:
      result = a1[319];
      break;
    case 5:
    case 0x27:
      result = 0x4000;
      break;
    case 6:
      result = 102400;
      break;
    case 9:
      v2 = (_DWORD *)a1[1];
      if ( (*(_DWORD *)(v2[25] + 48) & 8) != 0 )
      {
        result = 65541;
      }
      else
      {
        result = (int)&byte_10005;
        v3 = *v2 >= 772;
        if ( *v2 == 0x10000 )
          v3 = 0;
        if ( v3 )
          result = (int)&loc_2010A;
      }
      break;
    case 0xA:
      if ( *a1 == 256 )
        result = 3;
      else
        result = 1;
      break;
    case 0xB:
      result = 64;
      break;
    case 0x2D:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

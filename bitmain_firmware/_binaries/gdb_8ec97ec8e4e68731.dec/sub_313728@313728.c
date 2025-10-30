int __fastcall sub_313728(_DWORD *a1, int a2, __int64 a3)
{
  int v4; // lr
  int result; // r0
  bool v6; // zf

  switch ( a2 )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 11:
    case 33:
    case 43:
    case 45:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 60:
    case 61:
    case 63:
    case 75:
    case 77:
      v6 = HIDWORD(a3) == 0;
      if ( HIDWORD(a3) )
        v6 = (_DWORD)a3 == 0;
      if ( v6 )
        goto LABEL_6;
      goto LABEL_3;
    case 9:
    case 10:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 40:
    case 51:
    case 52:
    case 53:
    case 59:
    case 62:
    case 66:
    case 67:
    case 68:
    case 72:
    case 73:
    case 74:
      if ( !(_DWORD)a3 )
        goto LABEL_6;
      goto LABEL_3;
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 41:
    case 46:
    case 47:
    case 76:
    case 78:
    case 79:
      goto LABEL_3;
    case 42:
    case 48:
      if ( !HIDWORD(a3) )
        goto LABEL_6;
LABEL_3:
      v4 = a1[5];
      if ( v4 >= a1[6] )
      {
        result = 0;
      }
      else
      {
        result = a1[4] + 16 * v4;
        *(_DWORD *)(result + 4) = 0;
        a1[5] = v4 + 1;
        *(_DWORD *)result = a2;
        *(_QWORD *)(result + 8) = a3;
      }
      break;
    default:
LABEL_6:
      result = 0;
      break;
  }
  return result;
}

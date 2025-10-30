size_t __fastcall sub_5D024(int a1, const char *a2)
{
  char v3[8]; // [sp+Ch] [bp-808h] BYREF
  size_t v4; // [sp+80Ch] [bp-8h]

  v4 = 0;
  switch ( a1 )
  {
    case 0:
    case 1:
    case 2:
      v4 = strlen(a2) + 1;
      break;
    case 3:
      v4 = 4;
      break;
    case 4:
      v4 = 4;
      break;
    case 5:
      v4 = 4;
      break;
    case 6:
      v4 = 4;
      break;
    case 7:
      v4 = 4;
      break;
    case 8:
      v4 = 4;
      break;
    case 9:
      v4 = 4;
      break;
    case 10:
      v4 = 8;
      break;
    case 11:
      v4 = 8;
      break;
    case 12:
    case 13:
    case 17:
    case 18:
    case 20:
    case 21:
    case 23:
    case 24:
    case 25:
      v4 = 8;
      break;
    case 14:
      v4 = 1;
      break;
    case 15:
      v4 = 8;
      break;
    case 16:
      v4 = 4;
      break;
    case 19:
    case 22:
    case 26:
      v4 = 4;
      break;
    default:
      if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
      {
        snprintf(v3, 0x800u, "Should not happy for unknown data type %d", a1);
        sub_1E4EC(3, v3, 0);
      }
      break;
  }
  return v4;
}

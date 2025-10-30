size_t __fastcall sub_384EC(int *a1)
{
  int v1; // r3
  size_t result; // r0
  int v3; // r3
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  v1 = *a1;
  switch ( *a1 )
  {
    case 0:
    case 1:
    case 2:
      result = strlen((const char *)a1[2]) + 1;
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 16:
    case 19:
    case 22:
    case 26:
      result = 4;
      break;
    case 10:
    case 11:
    case 12:
    case 13:
    case 15:
    case 17:
    case 18:
    case 20:
    case 21:
    case 23:
    case 24:
    case 25:
      result = 8;
      break;
    case 14:
      result = 1;
      break;
    default:
      if ( byte_5C0EFC || (result = (unsigned __int8)byte_4B9A21, byte_4B9A21) || dword_B3094 > 2 )
      {
        snprintf(v4, 0x800u, "Should not happen for unknown data type %d", v1);
        sub_3B6AC(3, v4, 0, v3);
        result = 0;
      }
      break;
  }
  return result;
}

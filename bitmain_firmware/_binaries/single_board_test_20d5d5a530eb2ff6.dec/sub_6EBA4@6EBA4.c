int __fastcall sub_6EBA4(int a1)
{
  int result; // r0
  int v2; // [sp+Ch] [bp-808h] BYREF
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v2 = 0;
  switch ( a1 )
  {
    case 0:
      sub_6E060(89, &v2);
      result = HIWORD(v2) & 0x3FF;
      break;
    case 1:
      sub_6E060(89, &v2);
      result = v2 & 0x3FF;
      break;
    case 2:
      sub_6E060(90, &v2);
      result = HIWORD(v2) & 0x3FF;
      break;
    case 3:
      sub_6E060(90, &v2);
      result = v2 & 0x3FF;
      break;
    case 4:
      sub_6E060(91, &v2);
      result = HIWORD(v2) & 0x3FF;
      break;
    case 5:
      sub_6E060(91, &v2);
      result = v2 & 0x3FF;
      break;
    case 6:
      sub_6E060(92, &v2);
      result = HIWORD(v2) & 0x3FF;
      break;
    case 7:
      sub_6E060(92, &v2);
      result = v2 & 0x3FF;
      break;
    case 8:
      sub_6E060(93, &v2);
      result = HIWORD(v2) & 0x3FF;
      break;
    case 9:
      sub_6E060(93, &v2);
      result = v2 & 0x3FF;
      break;
    case 10:
      sub_6E060(94, &v2);
      result = HIWORD(v2) & 0x3FF;
      break;
    case 11:
      sub_6E060(94, &v2);
      result = v2 & 0x3FF;
      break;
    case 12:
      sub_6E060(95, &v2);
      result = HIWORD(v2) & 0x3FF;
      break;
    case 13:
      sub_6E060(95, &v2);
      result = v2 & 0x3FF;
      break;
    default:
      snprintf(s, 0x800u, "%s: The uart%d is not supported!!!\n", "check_how_many_uart_data_in_fpga", a1);
      nullsub_8();
      result = 0;
      break;
  }
  return result;
}

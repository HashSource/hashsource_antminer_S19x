int __fastcall sub_54AF8(unsigned __int8 a1)
{
  int v1; // r3
  char v3[8]; // [sp+14h] [bp-808h] BYREF
  int v4; // [sp+814h] [bp-8h] BYREF

  v4 = 0;
  switch ( a1 )
  {
    case 0u:
      sub_52E24(89, &v4);
      v1 = HIWORD(v4) & 0x3FF;
      break;
    case 1u:
      sub_52E24(89, &v4);
      v1 = v4 & 0x3FF;
      break;
    case 2u:
      sub_52E24(90, &v4);
      v1 = HIWORD(v4) & 0x3FF;
      break;
    case 3u:
      sub_52E24(90, &v4);
      v1 = v4 & 0x3FF;
      break;
    case 4u:
      sub_52E24(91, &v4);
      v1 = HIWORD(v4) & 0x3FF;
      break;
    case 5u:
      sub_52E24(91, &v4);
      v1 = v4 & 0x3FF;
      break;
    case 6u:
      sub_52E24(92, &v4);
      v1 = HIWORD(v4) & 0x3FF;
      break;
    case 7u:
      sub_52E24(92, &v4);
      v1 = v4 & 0x3FF;
      break;
    case 8u:
      sub_52E24(93, &v4);
      v1 = HIWORD(v4) & 0x3FF;
      break;
    case 9u:
      sub_52E24(93, &v4);
      v1 = v4 & 0x3FF;
      break;
    case 0xAu:
      sub_52E24(94, &v4);
      v1 = HIWORD(v4) & 0x3FF;
      break;
    case 0xBu:
      sub_52E24(94, &v4);
      v1 = v4 & 0x3FF;
      break;
    case 0xCu:
      sub_52E24(95, &v4);
      v1 = HIWORD(v4) & 0x3FF;
      break;
    case 0xDu:
      sub_52E24(95, &v4);
      v1 = v4 & 0x3FF;
      break;
    default:
      snprintf(v3, 0x800u, "%s: The uart%d is not supported!!!\n", "check_how_many_uart_data_in_fpga", a1);
      sub_3AF5C(0, v3, 0, (int)v3);
      v1 = 0;
      break;
  }
  return v1;
}

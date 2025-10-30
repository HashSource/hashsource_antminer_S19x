int __fastcall sub_548A4(int a1, _DWORD *a2, _DWORD *a3)
{
  char v4[8]; // [sp+1Ch] [bp-808h] BYREF
  int v5; // [sp+81Ch] [bp-8h]

  v5 = 0;
  switch ( a1 )
  {
    case 0:
      *a2 = 96;
      *a3 = 97;
      break;
    case 1:
      *a2 = 98;
      *a3 = 99;
      break;
    case 2:
      *a2 = 100;
      *a3 = 101;
      break;
    case 3:
      *a2 = 102;
      *a3 = 103;
      break;
    case 4:
      *a2 = 104;
      *a3 = 105;
      break;
    case 5:
      *a2 = 106;
      *a3 = 107;
      break;
    case 6:
      *a2 = 108;
      *a3 = 109;
      break;
    case 7:
      *a2 = 110;
      *a3 = 111;
      break;
    case 8:
      *a2 = 112;
      *a3 = 113;
      break;
    case 9:
      *a2 = 114;
      *a3 = 115;
      break;
    case 10:
      *a2 = 124;
      *a3 = 125;
      break;
    case 11:
      *a2 = 126;
      *a3 = 127;
      break;
    case 12:
      *a2 = 128;
      *a3 = 129;
      break;
    case 13:
      *a2 = 130;
      *a3 = 131;
      break;
    default:
      snprintf(v4, 0x800u, "%s: The uart%d is not supported!!!\n", "get_read_address_info", a1);
      sub_3AF5C(0, v4, 0, (int)v4);
      v5 = -1;
      break;
  }
  return v5;
}

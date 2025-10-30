int __fastcall sub_544FC(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  char v6[8]; // [sp+1Ch] [bp-808h] BYREF
  int v7; // [sp+81Ch] [bp-8h]

  v7 = 0;
  switch ( a1 )
  {
    case 0:
      *a2 = 24;
      *a3 = 65;
      *a4 = 69;
      *a5 = 70;
      break;
    case 1:
      *a2 = 16;
      *a3 = 65;
      *a4 = 71;
      *a5 = 72;
      break;
    case 2:
      *a2 = 8;
      *a3 = 65;
      *a4 = 73;
      *a5 = 74;
      break;
    case 3:
      *a2 = 0;
      *a3 = 65;
      *a4 = 75;
      *a5 = 76;
      break;
    case 4:
      *a2 = 24;
      *a3 = 66;
      *a4 = 77;
      *a5 = 78;
      break;
    case 5:
      *a2 = 16;
      *a3 = 66;
      *a4 = 79;
      *a5 = 80;
      break;
    case 6:
      *a2 = 8;
      *a3 = 66;
      *a4 = 81;
      *a5 = 82;
      break;
    case 7:
      *a2 = 0;
      *a3 = 66;
      *a4 = 83;
      *a5 = 84;
      break;
    case 8:
      *a2 = 24;
      *a3 = 67;
      *a4 = 85;
      *a5 = 86;
      break;
    case 9:
      *a2 = 16;
      *a3 = 67;
      *a4 = 87;
      *a5 = 88;
      break;
    case 10:
      *a2 = 8;
      *a3 = 67;
      *a4 = 116;
      *a5 = 117;
      break;
    case 11:
      *a2 = 0;
      *a3 = 67;
      *a4 = 118;
      *a5 = 119;
      break;
    case 12:
      *a2 = 24;
      *a3 = 68;
      *a4 = 120;
      *a5 = 121;
      break;
    case 13:
      *a2 = 16;
      *a3 = 68;
      *a4 = 122;
      *a5 = 123;
      break;
    default:
      snprintf(v6, 0x800u, "%s: The uart %d is not supported!!!\n", "get_send_address_info", a1);
      sub_3AF5C(0, v6, 0, (int)v6);
      v7 = -1;
      break;
  }
  return v7;
}

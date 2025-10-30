int __fastcall sub_67718(int a1, _DWORD *a2, int *a3, int *a4, int *a5)
{
  int v5; // r0
  int v6; // r12
  int v7; // r1
  int result; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  switch ( a1 )
  {
    case 0:
      v5 = 64;
      *a2 = 24;
      v6 = 68;
      v7 = 69;
      goto LABEL_3;
    case 1:
      v5 = 64;
      *a2 = 16;
      v6 = 70;
      v7 = 71;
      goto LABEL_3;
    case 2:
      v5 = 64;
      *a2 = 8;
      v6 = 72;
      v7 = 73;
      goto LABEL_3;
    case 3:
      result = 0;
      *a2 = 0;
      *a3 = 64;
      *a4 = 74;
      *a5 = 75;
      return result;
    case 4:
      v5 = 65;
      *a2 = 24;
      v6 = 76;
      v7 = 77;
      goto LABEL_3;
    case 5:
      v5 = 65;
      *a2 = 16;
      v6 = 78;
      v7 = 79;
      goto LABEL_3;
    case 6:
      v5 = 65;
      *a2 = 8;
      v6 = 80;
      v7 = 81;
      goto LABEL_3;
    case 7:
      result = 0;
      *a2 = 0;
      *a3 = 65;
      *a4 = 82;
      *a5 = 83;
      return result;
    case 8:
      v5 = 66;
      *a2 = 24;
      v6 = 84;
      v7 = 85;
      goto LABEL_3;
    case 9:
      v5 = 66;
      *a2 = 16;
      v6 = 86;
      v7 = 87;
      goto LABEL_3;
    case 10:
      v5 = 66;
      *a2 = 8;
      v6 = 115;
      v7 = 116;
      goto LABEL_3;
    case 11:
      result = 0;
      *a2 = 0;
      *a3 = 66;
      *a4 = 117;
      *a5 = 118;
      return result;
    case 12:
      v5 = 67;
      *a2 = 24;
      v6 = 119;
      v7 = 120;
      goto LABEL_3;
    case 13:
      v5 = 67;
      *a2 = 16;
      v6 = 121;
      v7 = 122;
LABEL_3:
      *a3 = v5;
      result = 0;
      *a4 = v6;
      *a5 = v7;
      break;
    default:
      snprintf(s, 0x800u, "%s: The uart %d is not supported!!!\n", "get_send_address_info", a1);
      sub_47AB4(0, s, 0);
      result = -1;
      break;
  }
  return result;
}

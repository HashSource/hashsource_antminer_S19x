int __fastcall sub_6EAAC(int a1, int *a2, int *a3, int *a4, int *a5)
{
  int v5; // r0
  int v6; // r6
  int v7; // r5
  int v8; // r4
  int result; // r0
  int v10; // r6
  int v11; // r5
  int v12; // r4
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  switch ( a1 )
  {
    case 0:
      v5 = 24;
      v6 = 65;
      v7 = 69;
      v8 = 70;
      goto LABEL_3;
    case 1:
      v5 = 16;
      v6 = 65;
      v7 = 71;
      v8 = 72;
      goto LABEL_3;
    case 2:
      v5 = 8;
      v6 = 65;
      v7 = 73;
      v8 = 74;
      goto LABEL_3;
    case 3:
      result = 0;
      v10 = 65;
      v11 = 75;
      v12 = 76;
      goto LABEL_9;
    case 4:
      v5 = 24;
      v6 = 66;
      v7 = 77;
      v8 = 78;
      goto LABEL_3;
    case 5:
      v5 = 16;
      v6 = 66;
      v7 = 79;
      v8 = 80;
      goto LABEL_3;
    case 6:
      v5 = 8;
      v6 = 66;
      v7 = 81;
      v8 = 82;
      goto LABEL_3;
    case 7:
      result = 0;
      v10 = 66;
      v11 = 83;
      v12 = 84;
      goto LABEL_9;
    case 8:
      v5 = 24;
      v6 = 67;
      v7 = 85;
      v8 = 86;
      goto LABEL_3;
    case 9:
      v5 = 16;
      v6 = 67;
      v7 = 87;
      v8 = 88;
      goto LABEL_3;
    case 10:
      v5 = 8;
      v6 = 67;
      v7 = 116;
      v8 = 117;
      goto LABEL_3;
    case 11:
      result = 0;
      v10 = 67;
      v11 = 118;
      v12 = 119;
LABEL_9:
      *a2 = 0;
      *a3 = v10;
      *a4 = v11;
      *a5 = v12;
      return result;
    case 12:
      v5 = 24;
      v6 = 68;
      v7 = 120;
      v8 = 121;
      goto LABEL_3;
    case 13:
      v5 = 16;
      v6 = 68;
      v7 = 122;
      v8 = 123;
LABEL_3:
      *a2 = v5;
      result = 0;
      *a3 = v6;
      *a4 = v7;
      *a5 = v8;
      break;
    default:
      snprintf(s, 0x800u, "%s: The uart %d is not supported!!!\n", "get_send_address_info", a1);
      nullsub_8();
      result = -1;
      break;
  }
  return result;
}

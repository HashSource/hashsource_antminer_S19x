int __fastcall sub_31794(int a1, int a2)
{
  int result; // r0
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  switch ( a1 )
  {
    case 0:
      snprintf((char *)dword_1AEA24, 0x40u, "J%d:1", a2);
      break;
    case 1:
      snprintf((char *)dword_1AEA24, 0x40u, "J%d:2", a2);
      break;
    case 2:
      snprintf((char *)dword_1AEA24, 0x40u, "J%d:8", a2);
      break;
    case 3:
      snprintf((char *)dword_1AEA24, 0x40u, "J%d:4", a2);
      break;
    case 4:
      snprintf((char *)dword_1AEA24, 0x40u, "J%d:5", a2);
      break;
    case 5:
      dword_1AEA24[0] = 3226194;
      break;
    case 6:
      dword_1AEA24[0] = 3291730;
      break;
    case 7:
      snprintf((char *)dword_1AEA24, 0x40u, "T:%d", a2);
      break;
    case 8:
      dword_1AEA24[0] = 3226192;
      break;
    case 9:
      dword_1AEA24[0] = 3291728;
      break;
    case 10:
      dword_1AEA24[0] = 3226182;
      break;
    case 11:
      snprintf((char *)dword_1AEA24, 0x40u, "J%d:6", a2);
      break;
    case 12:
      dword_1AEA24[0] = 3226198;
      break;
    case 13:
      dword_1AEA24[0] = 3226189;
      break;
    case 14:
      dword_1AEA24[0] = 3226190;
      break;
    case 15:
      dword_1AEA24[0] = 3422800;
      break;
    case 17:
      dword_1AEA24[0] = 3357266;
      break;
    case 18:
      dword_1AEA24[0] = 3226179;
      break;
    case 19:
      dword_1AEA24[0] = 3291726;
      break;
    case 20:
      dword_1AEA24[0] = 3160659;
      break;
    case 21:
      dword_1AEA24[0] = 3357262;
      break;
    case 22:
      dword_1AEA24[0] = 3488336;
      break;
    default:
      strcpy((char *)dword_1AEA24, "unknown");
      break;
  }
  result = sub_36C44(1);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v3, 0x800u, "Sweep error string = %s.\n", (const char *)dword_1AEA24);
    return sub_47AB4(3, v3, 0);
  }
  return result;
}

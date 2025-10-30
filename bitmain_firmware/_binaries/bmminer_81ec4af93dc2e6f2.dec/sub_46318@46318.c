int __fastcall sub_46318(int a1, int a2)
{
  int result; // r0
  int v3; // r3
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  switch ( a1 )
  {
    case 0:
      snprintf((char *)dword_530EB4, 0x40u, "J%d:1", a2);
      break;
    case 1:
      snprintf((char *)dword_530EB4, 0x40u, "J%d:2", a2);
      break;
    case 2:
      snprintf((char *)dword_530EB4, 0x40u, "J%d:8", a2);
      break;
    case 3:
      snprintf((char *)dword_530EB4, 0x40u, "J%d:4", a2);
      break;
    case 4:
      snprintf((char *)dword_530EB4, 0x40u, "J%d:5", a2);
      break;
    case 5:
      dword_530EB4[0] = (int)&unk_313A52;
      break;
    case 6:
      dword_530EB4[0] = (int)&unk_323A52;
      break;
    case 7:
      snprintf((char *)dword_530EB4, 0x40u, "T:%d", a2);
      break;
    case 8:
      dword_530EB4[0] = (int)&unk_313A50;
      break;
    case 9:
      dword_530EB4[0] = (int)&unk_323A50;
      break;
    case 10:
      dword_530EB4[0] = (int)&unk_313A46;
      break;
    case 11:
      snprintf((char *)dword_530EB4, 0x40u, "J%d:6", a2);
      break;
    case 12:
      dword_530EB4[0] = (int)&unk_313A56;
      break;
    case 13:
      dword_530EB4[0] = (int)&unk_313A4D;
      break;
    case 14:
      dword_530EB4[0] = (int)&unk_313A4E;
      break;
    case 15:
      dword_530EB4[0] = (int)&unk_343A50;
      break;
    case 17:
      dword_530EB4[0] = (int)&unk_333A52;
      break;
    case 18:
      dword_530EB4[0] = (int)&unk_313A43;
      break;
    case 19:
      dword_530EB4[0] = (int)&unk_323A4E;
      break;
    case 20:
      dword_530EB4[0] = (int)&unk_303A53;
      break;
    case 21:
      dword_530EB4[0] = (int)&unk_333A4E;
      break;
    case 22:
      dword_530EB4[0] = (int)&unk_353A50;
      break;
    case 23:
      snprintf((char *)dword_530EB4, 0x40u, "L%d:1", a2);
      break;
    case 24:
      snprintf((char *)dword_530EB4, 0x40u, "L%d:2", a2);
      break;
    case 25:
      dword_530EB4[0] = (int)&unk_323A56;
      break;
    case 26:
      snprintf((char *)dword_530EB4, 0x40u, "X%d:1", a2);
      break;
    default:
      strcpy((char *)dword_530EB4, "unknown");
      break;
  }
  result = sub_471B0(1);
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(v4, 0x800u, "Sweep error string = %s.\n", (const char *)dword_530EB4);
    return sub_3AF5C(3, v4, 0, v3);
  }
  return result;
}

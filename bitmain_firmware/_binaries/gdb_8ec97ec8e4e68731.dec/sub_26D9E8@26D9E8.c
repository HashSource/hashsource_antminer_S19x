void *__fastcall sub_26D9E8(_BYTE *a1, _DWORD *a2, unsigned int a3, int a4)
{
  int v8; // r0
  int v9; // r7
  int v10; // r0
  int v11; // r3
  void *result; // r0

  v8 = sub_170040((int)a2);
  v9 = ((int (__fastcall *)(int))loc_165BB8)(v8);
  v10 = sub_171258(a2);
  switch ( **(_BYTE **)(v10 + 24) )
  {
    case 1:
    case 0x12:
    case 0x13:
      result = sub_15AF04((int)a1, v10);
      break;
    case 5:
    case 6:
    case 8:
    case 0xC:
    case 0x11:
    case 0x14:
    case 0x15:
      result = sub_15C2E8(a1, *(_DWORD *)(v10 + 20), v9, v11, a3, a4);
      break;
    case 9:
    case 0x19:
      result = (void *)sub_2528D8((int)a1, v10, a3, a4);
      break;
    default:
      sub_946E0("Unexpected type (%d) encountered for integer constant.", **(char **)(v10 + 24));
  }
  return result;
}

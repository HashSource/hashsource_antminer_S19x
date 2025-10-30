unsigned int __fastcall sub_26D134(_DWORD *a1, unsigned __int8 *a2)
{
  int v4; // r0
  int v5; // r0
  _BYTE *v6; // r1
  char v8; // r3
  int v9; // r1

  while ( 1 )
  {
    v4 = sub_170040((int)a1);
    v5 = ((int (__fastcall *)(int))loc_165BB8)(v4);
    v6 = (_BYTE *)a1[6];
    switch ( *v6 )
    {
      case 1:
      case 0x12:
      case 0x13:
        return sub_15AEA8((int)a2, (int)a1);
      case 5:
      case 6:
      case 8:
      case 0xC:
      case 0x11:
      case 0x14:
      case 0x15:
        v8 = v6[1];
        v9 = a1[5];
        if ( (v8 & 1) != 0 )
          return sub_15C250(a2, v9, v5);
        else
          return sub_15C190(a2, v9, v5);
      case 9:
      case 0x19:
        return sub_2528A8((int)a2, (int)a1);
      case 0x17:
        a1 = (_DWORD *)sub_171258(a1);
        break;
      default:
        sub_946E0("Value can't be converted to integer.");
    }
  }
}

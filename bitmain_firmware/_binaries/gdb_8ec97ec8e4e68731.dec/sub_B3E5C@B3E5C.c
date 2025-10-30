int __fastcall sub_B3E5C(int a1, __int64 a2, int a3)
{
  __int64 v4; // r4
  int v5; // r0
  const char *v6; // r1
  int result; // r0
  int v8; // lr
  int v9; // r12
  int v10; // r3
  int v11; // r1
  int v12; // r0

  v4 = a2;
  if ( !a1 )
    return sub_266EA4(a3, 100, 0, HIDWORD(a2), v4, HIDWORD(v4));
  while ( 2 )
  {
    v5 = sub_A0870(a1);
    LODWORD(a2) = *(_DWORD *)(v5 + 24);
    HIDWORD(a2) = *(char *)a2;
    switch ( *(_BYTE *)a2 )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 7:
      case 9:
      case 0xA:
      case 0xB:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
      case 0x11:
      case 0x12:
        sub_946B0("internal error: unhandled type in ada_print_scalar");
        return sub_25680C(a3);
      case 5:
        v8 = *(__int16 *)(a2 + 4);
        if ( !*(_WORD *)(a2 + 4) )
          goto LABEL_14;
        v9 = *(_DWORD *)(a2 + 24);
        if ( v4 == *(_QWORD *)v9 )
          goto LABEL_22;
        HIDWORD(a2) = *(_DWORD *)(a2 + 24);
        LODWORD(a2) = 0;
        break;
      case 8:
        v10 = *(unsigned __int8 *)(a2 + 1);
        if ( (v10 & 1) != 0 )
          v11 = 117;
        else
          v11 = 100;
        sub_266EA4(a3, v11, 0, v10, v4, HIDWORD(v4));
        return sub_25680C(a3);
      case 0xC:
        a1 = *(_DWORD *)(a2 + 20);
        if ( !a1 )
          return sub_266EA4(a3, 100, 0, HIDWORD(a2), v4, HIDWORD(v4));
        continue;
      case 0x14:
        (*((void (__fastcall **)(_DWORD, int, int))off_46D5A4[0] + 12))(v4, v5, a3);
        return result;
      case 0x15:
        v6 = "false";
        if ( v4 )
          v6 = "true";
        sub_25A418(a3, v6, (unsigned int)v4 | HIDWORD(v4));
        return sub_25680C(a3);
      default:
        sub_946E0("Invalid type code in symbol table.");
    }
    break;
  }
  do
  {
    LODWORD(a2) = a2 + 1;
    if ( v8 == (_DWORD)a2 )
    {
LABEL_14:
      sub_266EA4(a3, 100, 0, HIDWORD(a2), v4, HIDWORD(v4));
      return sub_25680C(a3);
    }
    HIDWORD(a2) += 24;
    v9 = HIDWORD(a2);
  }
  while ( v4 != *(_QWORD *)HIDWORD(a2) );
LABEL_22:
  v12 = sub_A2F0C(*(const char **)(v9 + 16));
  sub_25A6BC(v12, a3);
  return sub_25680C(a3);
}

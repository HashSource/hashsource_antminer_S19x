int __fastcall sub_255F50(_DWORD *a1, __int64 a2, int a3)
{
  int v5; // r0
  char *v6; // r2
  _QWORD *v7; // r3
  const char *v8; // r1
  int v10; // r3
  int v11; // r1
  int v12; // lr
  _QWORD *v13; // r12
  int v14; // r2

  while ( 2 )
  {
    v5 = sub_171258(a1);
    v6 = *(char **)(v5 + 24);
    v7 = (_QWORD *)*v6;
    switch ( *v6 )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 7:
      case 9:
      case 10:
      case 11:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 24:
        sub_946E0("internal error: unhandled type in print_type_scalar");
      case 5:
        v12 = *((__int16 *)v6 + 2);
        if ( !*((_WORD *)v6 + 2) )
          goto LABEL_17;
        v13 = (_QWORD *)*((_DWORD *)v6 + 6);
        if ( a2 == *v13 )
          goto LABEL_18;
        v7 = (_QWORD *)*((_DWORD *)v6 + 6);
        v14 = 0;
        break;
      case 8:
        v10 = (unsigned __int8)v6[1];
        if ( (v10 & 1) != 0 )
          v11 = 117;
        else
          v11 = 100;
        sub_266EA4(a3, v11, 0, v10, a2, HIDWORD(a2));
        return sub_25680C(a3);
      case 12:
        a1 = (_DWORD *)*((_DWORD *)v6 + 5);
        continue;
      case 20:
        (*((void (__fastcall **)(_DWORD, int, int))off_46D5A4[0] + 12))((unsigned __int8)a2, v5, a3);
        return sub_25680C(a3);
      case 21:
        v8 = "FALSE";
        if ( a2 )
          v8 = "TRUE";
        sub_25A418(a3, v8, (unsigned int)a2 | HIDWORD(a2));
        return sub_25680C(a3);
      default:
        sub_946E0("Invalid type code in symbol table.");
    }
    break;
  }
  do
  {
    if ( v12 == ++v14 )
    {
LABEL_17:
      sub_266EA4(a3, 100, 0, v7, a2, HIDWORD(a2));
      return sub_25680C(a3);
    }
    v7 += 3;
    v13 = v7;
  }
  while ( *v7 != a2 );
LABEL_18:
  sub_25A6BC(*((_DWORD *)v13 + 4), a3);
  return sub_25680C(a3);
}

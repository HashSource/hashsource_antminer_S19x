_DWORD *__fastcall sub_25CFFC(int a1, int a2, int a3, int a4, int a5)
{
  int v8; // r8
  _DWORD *v9; // r0
  int *v10; // r4
  int v11; // r0
  int v12; // r0
  int v14; // r0
  _DWORD *v15; // r2
  _DWORD *v16; // r0
  int v17; // r4
  __int64 v18; // r0
  int v19; // r4
  int v20; // [sp+8h] [bp-54h] BYREF
  _DWORD v21[6]; // [sp+Ch] [bp-50h] BYREF
  int v22; // [sp+24h] [bp-38h] BYREF
  int v23; // [sp+2Ch] [bp-30h] BYREF
  char v24[20]; // [sp+30h] [bp-2Ch] BYREF

  v22 = sub_26EA24(a1);
  v8 = sub_26EA24(a2);
  v9 = (_DWORD *)sub_26BC70(v22);
  if ( **(_BYTE **)(sub_171258(v9) + 24) != 3 )
LABEL_51:
    sub_946E0("Can't do that binary op on that type");
  v10 = &v20;
  v21[0] = sub_2616BC(v22);
  v21[1] = v8;
  v21[2] = 0;
  strcpy(v24, "operator__");
  switch ( a3 )
  {
    case 1:
      strcpy(&v24[8], "+");
      break;
    case 2:
      strcpy(&v24[8], "-");
      break;
    case 3:
      strcpy(&v24[8], "*");
      break;
    case 4:
      strcpy(&v24[8], "/");
      break;
    case 5:
      strcpy(&v24[8], "%");
      break;
    case 7:
      strcpy(&v24[8], "<<");
      break;
    case 8:
      strcpy(&v24[8], ">>");
      break;
    case 9:
      strcpy(&v24[8], "&&");
      break;
    case 10:
      strcpy(&v24[8], "||");
      break;
    case 11:
      strcpy(&v24[8], "&");
      break;
    case 12:
      strcpy(&v24[8], "|");
      break;
    case 13:
      strcpy(&v24[8], "^");
      break;
    case 14:
      strcpy(&v24[8], "==");
      break;
    case 15:
      strcpy(&v24[8], "!=");
      break;
    case 16:
      strcpy(&v24[8], "<");
      break;
    case 17:
      strcpy(&v24[8], ">");
      break;
    case 18:
      strcpy(&v24[8], "<=");
      break;
    case 19:
      strcpy(&v24[8], ">=");
      break;
    case 21:
      strcpy(&v24[8], "=");
      break;
    case 23:
      strcpy(&v24[8], "[]");
      break;
    case 25:
      strcpy(&v24[8], "<?");
      break;
    case 26:
      strcpy(&v24[8], ">?");
      break;
    case 31:
      switch ( a4 )
      {
        case 1:
          strcpy(&v24[8], "+=");
          goto LABEL_5;
        case 2:
          strcpy(&v24[8], "-=");
          goto LABEL_5;
        case 3:
          strcpy(&v24[8], "*=");
          goto LABEL_5;
        case 4:
          strcpy(&v24[8], "/=");
          goto LABEL_5;
        case 5:
          strcpy(&v24[8], "%=");
          goto LABEL_5;
        case 11:
          strcpy(&v24[8], "&=");
          goto LABEL_5;
        case 12:
          strcpy(&v24[8], "|=");
          goto LABEL_5;
        case 13:
          strcpy(&v24[8], "^=");
          goto LABEL_5;
        default:
          goto LABEL_42;
      }
    default:
LABEL_42:
      sub_946E0("Invalid binary operation specified.");
  }
LABEL_5:
  if ( off_46D5A4[0][2] == (char *)4 )
    v11 = sub_25C6A0(v21, 2, v24, (int)&v23, a5);
  else
    v11 = sub_2624C8(&v22, v21, v24, &v23, "structure");
  v20 = v11;
  if ( !v11 )
  {
    sub_92F64(2, "member function %s not found", v24);
    goto LABEL_51;
  }
  if ( v23 )
  {
    v21[0] = v11;
    v10 = v21;
  }
  if ( **(_BYTE **)(sub_26BC70(v11) + 24) == 28 )
  {
    if ( v23 )
    {
      v18 = sub_94700(
              (int)"valarith.c",
              484,
              "%s: Assertion `%s' failed.",
              "value* value_x_binop(value*, value*, exp_opcode, exp_opcode, noside)",
              "static_memfuncp == 0");
    }
    else
    {
      v15 = v10 + 1;
      v14 = *v10;
      if ( a5 != 2 )
        return (_DWORD *)((int (__fastcall *)(int, int, _DWORD *))loc_26D0B4)(v14, 2, v15);
      v19 = ((int (__fastcall *)(int, int, _DWORD *))loc_26D034)(v14, 2, v15);
      if ( v19 )
      {
        nullsub_31(v22);
        return (_DWORD *)sub_260DBC(v19);
      }
    }
    sub_946E0("Xmethod is missing return type.", HIDWORD(v18));
  }
  v12 = *v10;
  if ( a5 != 2 )
    return sub_17E6EC(v12, 0, 2 - v23, (char *)v10 + 4);
  v16 = (_DWORD *)sub_26BC70(v12);
  v17 = *(_DWORD *)(*(_DWORD *)(sub_171258(v16) + 24) + 20);
  nullsub_31(v22);
  return (_DWORD *)sub_260DBC(v17);
}

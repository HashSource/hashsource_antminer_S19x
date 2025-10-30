int __fastcall sub_E8ED0(int result, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r4
  _BOOL4 v7; // r12
  int v11; // r3
  const char *v12; // r1
  int v13; // r0
  int v14; // r0
  int v15; // r2
  int v16; // r1
  int v17; // r3
  bool v18; // zf
  int v19; // r7
  const char *v20; // r1
  char *v21; // r0
  __int64 v22; // [sp+8h] [bp-14h] BYREF
  __int64 v23; // [sp+10h] [bp-Ch] BYREF

  v6 = result;
  if ( result )
  {
    v7 = a3 <= 0;
    if ( !*(_DWORD *)(*(_DWORD *)(result + 24) + 8) )
      v7 = 0;
    if ( !v7 )
    {
      result = sub_258BD4(result);
      v11 = *(_DWORD *)(v6 + 24);
      switch ( *(_BYTE *)v11 )
      {
        case 0:
        case 3:
        case 4:
        case 5:
        case 6:
        case 8:
        case 9:
        case 0xA:
        case 0xB:
        case 0xC:
        case 0xD:
        case 0xE:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x18:
        case 0x19:
          return result;
        case 1:
        case 0x12:
        case 0x13:
          return sub_E8ED0(*(_DWORD *)(v11 + 20), a2, a3, 1, 0, a6);
        case 2:
          v18 = a4 == 0;
          v19 = *(_BYTE *)(v11 + 2) & 1;
          if ( !v18 )
            sub_25A418(a2, ")");
          v20 = " __attribute__ ((vector_size(";
          if ( !v19 )
            v20 = "[";
          sub_25A418(a2, v20);
          if ( (unsigned int)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v6 + 24) + 24) + 12)
                                                                + 24)
                                                    + 24)
                                        + 16)
                            - 3) <= 1 )
          {
            sub_25A418(a2, "variable length");
          }
          else if ( sub_171B30(v6, &v22, &v23) )
          {
            v21 = sub_988AC(v23 - v22 + 1);
            sub_25A418(a2, "%s", v21);
          }
          v12 = ")))";
          v13 = a2;
          if ( !v19 )
            v12 = (const char *)&word_419FC8;
          goto LABEL_7;
        case 7:
        case 0xF:
          if ( a4 )
            sub_25A418(a2, ")");
          if ( !a5 )
            sub_E93D0(v6, a2, 0, off_46D5A4[0][2], a6);
          v14 = *(_DWORD *)(v6 + 24);
          v17 = a4;
          v15 = a3;
          v16 = a2;
          goto LABEL_8;
        case 0x10:
          v12 = ")";
          v13 = a2;
LABEL_7:
          sub_25A418(v13, v12);
          v14 = *(_DWORD *)(v6 + 24);
          v15 = a3;
          v16 = a2;
          v17 = 0;
LABEL_8:
          result = sub_E8ED0(*(_DWORD *)(v14 + 20), v16, v15, v17, 0, a6);
          break;
        case 0x11:
          result = sub_E8ED0(*(_DWORD *)(v11 + 20), a2, a3, 0, 0, a6);
          break;
        case 0x17:
          result = sub_E8ED0(*(_DWORD *)(v11 + 20), a2, a3, a4, 0, a6);
          break;
        default:
          sub_946E0("type not handled in c_type_print_varspec_suffix()");
      }
    }
  }
  return result;
}

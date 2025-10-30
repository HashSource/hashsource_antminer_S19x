int __fastcall sub_EB904(int result, int a2, int a3, int a4, int a5, char *a6, int a7)
{
  int v7; // r4
  _BOOL4 v11; // r6
  int v14; // r2
  int v16; // r0
  char *v17; // r0
  int v18; // r0

  v7 = result;
  if ( result )
  {
    v11 = a3 <= 0;
    if ( !*(_DWORD *)(*(_DWORD *)(result + 24) + 8) || a3 > 0 )
    {
      while ( 2 )
      {
        result = sub_258BD4(result);
        v14 = *(_DWORD *)(v7 + 24);
        switch ( *(_BYTE *)v14 )
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
            sub_EB904(*(_DWORD *)(v14 + 20), a2, a3, 1, 1, a6, a7);
            sub_25A418(a2, "*");
            return sub_E8A60(v7, a2, 1, a5);
          case 2:
          case 7:
          case 0xF:
            result = sub_EB904(*(_DWORD *)(v14 + 20), a2, a3, 0, 0, a6, a7);
            if ( a4 )
              return sub_25A418(a2, "(");
            return result;
          case 0x10:
            sub_EB904(*(_DWORD *)(v14 + 20), a2, a3, 0, 0, a6, a7);
            sub_25A418(a2, "(");
            goto LABEL_17;
          case 0x11:
            sub_EB904(*(_DWORD *)(v14 + 20), a2, a3, 0, 0, a6, a7);
LABEL_17:
            v16 = ((int (__fastcall *)(int))loc_1708E0)(v7);
            v17 = (char *)sub_170CC4(v16);
            if ( v17 )
            {
              sub_E8C40(v17, a6, a2);
            }
            else
            {
              v18 = ((int (__fastcall *)(int))loc_1708E0)(v7);
              ((void (__fastcall *)(int, int, int, int, char *, int))loc_E958C)(v18, a2, -1, a4, a6, a7);
            }
            return sub_25A418(a2, "::*");
          case 0x12:
          case 0x13:
            sub_EB904(*(_DWORD *)(v14 + 20), a2, a3, 1, 0, a6, a7);
            if ( **(_BYTE **)(v7 + 24) == 18 )
              sub_25A418(a2, "&", "&", &dword_364FBC);
            else
              sub_25A418(a2, (const char *)&dword_364FBC, "&", &dword_364FBC);
            return sub_E8A60(v7, a2, 1, a5);
          case 0x17:
            v7 = *(_DWORD *)(v14 + 20);
            if ( !v7 )
              return result;
            a5 = 0;
            if ( *(_DWORD *)(*(_DWORD *)(v7 + 24) + 8) && v11 )
              return result;
            continue;
          default:
            sub_946E0("type not handled in c_type_print_varspec_prefix()");
        }
      }
    }
  }
  return result;
}

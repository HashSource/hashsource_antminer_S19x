int __fastcall sub_1C1190(int result, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r4
  _BOOL4 v9; // r3
  int v11; // r2
  int v12; // r3
  int v13; // r11
  int i; // r10

  v6 = result;
  if ( result )
  {
    v9 = a3 <= 0;
    if ( !*(_DWORD *)(*(_DWORD *)(result + 24) + 8) )
      v9 = 0;
    if ( !v9 )
    {
      while ( 2 )
      {
        result = sub_258BD4(result);
        v11 = *(_DWORD *)(v6 + 24);
        switch ( *(_BYTE *)v11 )
        {
          case 0:
          case 3:
          case 4:
          case 5:
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
          case 0x17:
            return result;
          case 1:
          case 0x12:
            v6 = *(_DWORD *)(v11 + 20);
            if ( !v6 )
              return result;
            a5 = 0;
            a4 = 1;
            if ( *(_DWORD *)(*(_DWORD *)(v6 + 24) + 8) )
              return result;
            continue;
          case 2:
            if ( a4 )
              return sub_25A418(a2, ")");
            return result;
          case 7:
            if ( a4 )
              sub_25A418(a2, ")");
            if ( !a5 )
            {
              v12 = *(_DWORD *)(v6 + 24);
              v13 = *(__int16 *)(v12 + 4);
              if ( *(_WORD *)(v12 + 4) )
              {
                sub_25A418(a2, "(");
                if ( v13 > 0 )
                {
                  for ( i = 0; ; i += 24 )
                  {
                    ++a5;
                    sub_1C13F0(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v6 + 24) + 24) + i + 12), "", a2, -1, 0, a6);
                    if ( v13 == a5 )
                      break;
                    sub_25A6BC(", ", a2);
                    sub_259B58("    ");
                  }
                }
                sub_25A418(a2, ")");
              }
            }
            goto LABEL_26;
          case 0xF:
            if ( a4 )
              sub_25A418(a2, ")");
            sub_1BFEF8("", (int)"", a2);
LABEL_26:
            JUMPOUT(0x1C10CC);
          default:
            sub_946E0("type not handled in pascal_type_print_varspec_suffix()");
        }
      }
    }
  }
  return result;
}

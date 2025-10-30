int __fastcall sub_1C0DD8(int result, int a2, int a3, int a4, int a5)
{
  int v5; // r4
  _BOOL4 v7; // r2
  int v9; // r3
  int v10; // r1
  int v11; // r3
  int v12; // r3
  char *v13; // r6
  char *v14; // r0
  int v15; // r3
  int v16; // r3
  int v17; // r0

  v5 = result;
  if ( result )
  {
    v7 = a3 <= 0;
    if ( !*(_DWORD *)(*(_DWORD *)(result + 24) + 8) )
      v7 = 0;
    if ( !v7 )
    {
      while ( 2 )
      {
        result = sub_258BD4(result);
        v9 = *(_DWORD *)(v5 + 24);
        v10 = v9;
        switch ( *(_BYTE *)v9 )
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
            result = sub_25A418(a2, "^");
            v5 = *(_DWORD *)(*(_DWORD *)(v5 + 24) + 20);
            if ( !v5 )
              return result;
            a4 = 1;
            if ( *(_DWORD *)(*(_DWORD *)(v5 + 24) + 8) )
              return result;
            continue;
          case 2:
            if ( a4 )
              sub_25A418(a2, "(");
            sub_25A418(a2, "array ");
            v11 = *(_DWORD *)(v5 + 24);
            if ( *(_DWORD *)(*(_DWORD *)(v11 + 20) + 20) )
            {
              v12 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v11 + 24) + 12) + 24) + 24);
              if ( *(_DWORD *)(v12 + 16) )
              {
                v13 = sub_988AC(*(_QWORD *)(v12 + 8));
                v14 = sub_988AC(*(_QWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 24) + 24)
                                                                              + 12)
                                                                  + 24)
                                                      + 24)
                                          + 24));
                sub_25A418(a2, "[%s..%s] ", v13, v14);
              }
            }
            return sub_25A418(a2, "of ");
          case 7:
            if ( a4 )
            {
              sub_25A418(a2, "(");
              v9 = *(_DWORD *)(v5 + 24);
            }
            v15 = *(_DWORD *)(v9 + 20);
            if ( !v15 || **(_BYTE **)(v15 + 24) == 10 )
              return sub_25A418(a2, "procedure ");
            else
              return sub_25A418(a2, "function  ");
          case 0xF:
            if ( a4 )
            {
              sub_25A418(a2, "(");
              v10 = *(_DWORD *)(v5 + 24);
            }
            v16 = *(_DWORD *)(v10 + 20);
            if ( !v16 || **(_BYTE **)(v16 + 24) == 10 )
              result = sub_25A418(a2, "procedure ");
            else
              result = sub_25A418(a2, "function  ");
            if ( a4 )
            {
              sub_25A418(a2, (const char *)&word_3E1F84);
              v17 = ((int (__fastcall *)(int))loc_1708E0)(v5);
              sub_1C0044(v17, a2, 0, a4, a5);
              return sub_25A418(a2, "::");
            }
            return result;
          case 0x12:
            sub_1C0DD8(*(_DWORD *)(v9 + 20), a2, 0, 1, a5);
            return sub_25A418(a2, "&");
          default:
            sub_946E0("type not handled in pascal_type_print_varspec_prefix()", v9);
        }
      }
    }
  }
  return result;
}

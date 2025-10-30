int __fastcall sub_158E9C(char *a1, int a2, int a3, int a4)
{
  char *v4; // r7
  int v8; // r7
  int v9; // r1
  char *v10; // r2
  int v11; // r1
  int v12; // r0
  int result; // r0
  int v14; // r0
  const char *v15; // r2
  int v16; // r2
  int v17; // r3
  int v18; // r9
  int v19; // r6
  int v20; // r0
  _BOOL4 v21; // r3
  int v22; // r1
  const char *v23; // r0
  int v24; // r2
  int v25; // [sp+4h] [bp-8h]

  v4 = a1;
  while ( 1 )
  {
    sub_258BD4(a1);
    sub_259B58("    ");
    if ( !v4 )
    {
      v23 = "<type unknown>";
      v22 = a2;
      return sub_25A6BC(v23, v22);
    }
    a1 = (char *)*((_DWORD *)v4 + 6);
    if ( a3 <= 0 )
    {
      if ( *((_DWORD *)a1 + 2) )
        break;
    }
    if ( *a1 != 23 )
    {
      v8 = sub_171258(v4);
      a1 = *(char **)(v8 + 24);
      v9 = *a1;
      switch ( *a1 )
      {
        case 0:
          return sub_25A7C0(a4, a2, "struct <unknown>");
        case 1:
          v14 = a4;
          v15 = "PTR TO -> ( ";
          goto LABEL_14;
        case 2:
          v4 = (char *)*((_DWORD *)a1 + 5);
          continue;
        case 3:
        case 4:
          if ( v9 == 4 )
            LOWORD(v16) = -32104;
          else
            LOWORD(v16) = -32072;
          HIWORD(v16) = 58;
          sub_25A7C0(a4, a2, v16);
          result = sub_25A6BC(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 12), a2);
          if ( a3 <= 0 )
            return result;
          sub_25A6BC(&word_356638, a2);
          v17 = *(_DWORD *)(v8 + 24);
          if ( *(__int16 *)(v17 + 4) > 0 )
          {
            v25 = a4;
            v18 = 0;
            v19 = a4 + 4;
            do
            {
              sub_158E9C(*(_DWORD *)(*(_DWORD *)(v17 + 24) + 24 * v18 + 12), a2, a3 - 1, v19);
              sub_25A6BC(" :: ", a2);
              sub_25A6BC(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + 24 * v18 + 16), a2);
              v20 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + 24 * v18 + 12);
              if ( v20 )
              {
                v21 = a3 == 1;
                if ( !*(_DWORD *)(*(_DWORD *)(v20 + 24) + 8) )
                  v21 = 0;
                if ( !v21 )
                  ((void (__fastcall *)(int, int, _DWORD))loc_158BAC)(v20, a2, 0);
              }
              sub_25A6BC(&word_356638, a2);
              v17 = *(_DWORD *)(v8 + 24);
              ++v18;
            }
            while ( *(__int16 *)(v17 + 4) > v18 );
            a4 = v25;
          }
          sub_25A7C0(a4, a2, "End Type ");
          v22 = a2;
          v23 = *(const char **)(*(_DWORD *)(v8 + 24) + 12);
          return sub_25A6BC(v23, v22);
        case 7:
          v4 = (char *)*((_DWORD *)a1 + 5);
          if ( v4 )
            continue;
          return sub_255F30(a2);
        case 8:
        case 20:
          if ( strcmp(*((const char **)a1 + 2), "char") )
            goto LABEL_39;
          return sub_25A7C0(a4, a2, "character");
        case 10:
          return sub_25A7C0(a4, a2, "VOID");
        case 12:
          return sub_25A7C0(a4, a2, "<range type>");
        case 13:
          if ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)a1 + 6) + 12) + 24) + 24) + 16) )
            return sub_25A7C0(a4, a2, "character*(*)");
          v24 = sub_159A18(v8);
          return sub_25A418(a2, "character*%d", v24);
        case 14:
          LOWORD(v10) = -5292;
          v11 = a2;
          v12 = a4;
          goto LABEL_37;
        case 18:
          v14 = a4;
          v15 = "REF TO -> ( ";
LABEL_14:
          a4 = 0;
          a1 = (char *)sub_25A7C0(v14, a2, v15);
          v4 = *(char **)(*(_DWORD *)(v8 + 24) + 20);
          continue;
        case 23:
          break;
        case 26:
          v10 = "module %s";
          v11 = a2;
          v12 = a4;
          return sub_25A7C0(v12, v11, v10);
        default:
          if ( !*((_DWORD *)a1 + 2) )
            sub_946E0("Invalid type code (%d) in symbol table.", v9);
LABEL_39:
          LOWORD(v10) = -5292;
          goto LABEL_40;
      }
    }
    v4 = (char *)*((_DWORD *)a1 + 5);
    a3 = 0;
  }
  LOWORD(v10) = (unsigned __int16)"%s";
LABEL_40:
  v11 = a2;
  v12 = a4;
LABEL_37:
  HIWORD(v10) = (unsigned int)"%s" >> 16;
  return sub_25A7C0(v12, v11, v10);
}

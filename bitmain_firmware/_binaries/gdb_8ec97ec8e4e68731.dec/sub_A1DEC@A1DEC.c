bool __fastcall sub_A1DEC(int a1, int a2, int a3)
{
  int v5; // r5
  int v6; // r0
  char *v7; // r3
  int v8; // r4
  int v9; // r1
  int v10; // r0
  _BOOL4 result; // r0
  int v12; // r3
  int v13; // r3
  int v14; // r2

  while ( 2 )
  {
    v5 = sub_A0870(a1);
    v6 = sub_A0870(a2);
    v7 = *(char **)(v5 + 24);
    v8 = v6;
    v9 = *(_DWORD *)(v6 + 24);
    v10 = *v7;
    if ( v10 == 18 )
    {
      v5 = *((_DWORD *)v7 + 5);
      v7 = *(char **)(v5 + 24);
      v10 = *v7;
    }
    if ( *(_BYTE *)v9 == 18 )
      v8 = *(_DWORD *)(v9 + 20);
    switch ( v10 )
    {
      case 1:
        v14 = *(_DWORD *)(v8 + 24);
        if ( *(_BYTE *)v14 == 1 )
        {
          a1 = *((_DWORD *)v7 + 5);
          a3 = 0;
          a2 = *(_DWORD *)(v14 + 20);
          continue;
        }
        if ( a3 )
          return sub_A1DEC(*((_DWORD *)v7 + 5), v8, 0) != 0;
        return a3;
      case 2:
        if ( **(_BYTE **)(v8 + 24) != 2 )
          goto LABEL_9;
        goto LABEL_17;
      case 3:
        result = sub_A0C94(v5);
        v12 = **(char **)(v8 + 24);
        if ( result )
        {
          if ( v12 == 2 )
LABEL_17:
            result = 1;
          else
LABEL_9:
            result = sub_A0C94(v8);
        }
        else if ( v12 == 3 )
        {
          result = !sub_A0C94(v8);
        }
        break;
      case 5:
      case 8:
      case 12:
        v13 = **(char **)(v8 + 24);
        if ( v13 == 8 || v13 == 12 || v13 == 5 )
          goto LABEL_17;
        result = 0;
        break;
      default:
        return **(char **)(v8 + 24) == v10;
    }
    return result;
  }
}

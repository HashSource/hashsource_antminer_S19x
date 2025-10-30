bool __fastcall sub_A2650(_DWORD *a1, int a2, int a3)
{
  int v5; // r0
  char *v6; // lr
  int *v7; // r3
  int v8; // r3
  _BOOL4 v9; // r2
  int v10; // r3
  int v11; // r6
  int v12; // r0
  int i; // r5
  char **v14; // r3
  int v15; // r3

  v5 = sub_116928(a2);
  v6 = (char *)v5;
  if ( a3 )
    return v5 == a3;
  v7 = (int *)a1[1];
  if ( (*(_DWORD *)(v7[25] + 48) & 8) != 0 )
    goto LABEL_17;
  v8 = *v7;
  v9 = v8 >= 772;
  if ( v8 == 0x10000 )
    v9 = 0;
  if ( v9 && (v10 = a1[31], *(_DWORD *)(v10 + 620)) )
  {
    v11 = *(_DWORD *)(v10 + 628);
    v12 = 1;
  }
  else
  {
LABEL_17:
    v11 = a1[995];
    v12 = 0;
  }
  if ( v11 )
  {
    for ( i = 0; i != v11; ++i )
    {
      if ( v12 )
      {
        v14 = &off_202A94;
        while ( *((unsigned __int16 *)v14 + 2) != *(unsigned __int16 *)(*(_DWORD *)(a1[31] + 620) + 2 * i) )
        {
          v14 += 8;
          if ( v14 == &off_202DD4 )
            goto LABEL_15;
        }
        if ( v6 == v14[6] )
          return 1;
      }
      else
      {
        v15 = *(_DWORD *)(a1[994] + 4 * i);
        if ( v15 && v6 == *(char **)(v15 + 24) )
          return 1;
      }
LABEL_15:
      ;
    }
  }
  return 0;
}

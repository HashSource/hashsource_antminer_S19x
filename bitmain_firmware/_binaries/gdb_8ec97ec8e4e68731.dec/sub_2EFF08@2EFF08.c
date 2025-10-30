bool __fastcall sub_2EFF08(int a1, int a2)
{
  _BOOL4 v4; // r7
  int v5; // r9
  _DWORD *v6; // r5
  _DWORD *v7; // r4
  bool v8; // zf
  unsigned int v9; // r6
  unsigned int v10; // r3
  int v11; // r0
  bool v12; // zf
  const char *v14; // r0
  const char *v15; // r1
  bool v16; // zf

  v4 = 1;
  v5 = *(_DWORD *)(a2 + 160);
  v6 = *(_DWORD **)(*(_DWORD *)(a1 + 160) + 2300);
  v7 = *(_DWORD **)(v5 + 2300);
LABEL_2:
  v8 = v7 == 0;
  if ( !v7 )
    v8 = v6 == 0;
  if ( !v8 )
  {
    while ( 1 )
    {
      if ( v7 )
      {
        v9 = v7[1];
        if ( !v6 )
          goto LABEL_18;
        v10 = v6[1];
        if ( v10 > v9 )
          goto LABEL_18;
        if ( v10 >= v9 )
          break;
      }
      v6 = (_DWORD *)*v6;
      v11 = a1;
LABEL_10:
      if ( !v4 )
        goto LABEL_2;
      v4 = (*(int (**)(void))(*(_DWORD *)(*(_DWORD *)(v11 + 4) + 444) + 428))() != 0;
      v12 = v7 == 0;
      if ( !v7 )
        v12 = v6 == 0;
      if ( v12 )
        return v4;
    }
    if ( v6[3] == v7[3] )
    {
      v14 = (const char *)v6[4];
      v15 = (const char *)v7[4];
      if ( (v14 == 0) == (v15 == 0) )
      {
        v16 = v14 == 0;
        if ( v14 )
          v16 = v15 == 0;
        if ( v16 || !strcmp(v14, v15) )
        {
          v7 = (_DWORD *)*v7;
          v11 = a2;
          v6 = (_DWORD *)*v6;
          goto LABEL_10;
        }
      }
    }
LABEL_18:
    v7 = (_DWORD *)*v7;
    v11 = a2;
    *(_DWORD *)(v5 + 2300) = v7;
    goto LABEL_10;
  }
  return v4;
}

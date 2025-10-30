int __fastcall sub_1BFC3C(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  int v6; // r4
  int v7; // r0
  int v10; // r3
  int v13; // r8
  const char *v14; // r0
  const char *v15; // r0
  int v16; // r3
  int v17; // r2
  int v18; // r8
  const char *v19; // r0
  int v20; // r9

  v6 = a1;
  if ( a1 )
  {
    v7 = *(_DWORD *)(a1 + 24);
    if ( *(_BYTE *)v7 != 3 )
      return 0;
    v10 = *(__int16 *)(v7 + 4);
    if ( v10 == 2 )
    {
      v18 = *(_DWORD *)(v7 + 24);
      v19 = *(const char **)(v18 + 16);
      if ( !v19 )
        return 0;
      v6 = strcmp(v19, "length");
      if ( v6 )
        return 0;
      v20 = *(_DWORD *)(v18 + 40);
      if ( v20 && !strcmp(*(const char **)(v18 + 40), "st") )
      {
        if ( a2 )
          *a2 = *(_QWORD *)v18 / 8LL;
        if ( a3 )
          *a3 = *(_DWORD *)(*(_DWORD *)(v18 + 12) + 20);
        if ( a4 )
          *a4 = *(_QWORD *)(v18 + 24) / 8LL;
        if ( a5 )
          *a5 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v18 + 36) + 24) + 20);
        if ( a6 )
          *a6 = v20;
        return 2;
      }
    }
    else
    {
      if ( v10 != 3 )
        return 0;
      v13 = *(_DWORD *)(v7 + 24);
      v14 = *(const char **)(v13 + 16);
      if ( !v14 )
        return 0;
      v6 = strcmp(v14, "Capacity");
      if ( v6 )
        return 0;
      v15 = *(const char **)(v13 + 40);
      if ( v15 && !strcmp(v15, "length") )
      {
        if ( a2 )
          *a2 = *(_QWORD *)(v13 + 24) / 8LL;
        if ( a3 )
          *a3 = *(_DWORD *)(*(_DWORD *)(v13 + 36) + 20);
        if ( a4 )
          *a4 = *(_QWORD *)(v13 + 48) / 8LL;
        if ( a5 )
        {
          v16 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v13 + 60) + 24) + 20);
          v17 = *(_DWORD *)(v16 + 24);
          *a5 = v16;
          if ( *(_BYTE *)v17 == 2 )
            *a5 = *(_DWORD *)(v17 + 20);
        }
        v6 = 3;
        if ( a6 )
          *a6 = *(_DWORD *)(v13 + 64);
      }
    }
  }
  return v6;
}

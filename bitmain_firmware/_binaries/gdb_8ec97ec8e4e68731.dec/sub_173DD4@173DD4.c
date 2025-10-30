int __fastcall sub_173DD4(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r5
  char *v4; // r6
  int v5; // r3
  char *v6; // r7
  int v7; // r8
  bool v8; // zf
  int v9; // r0
  int v10; // r0
  const char *v12; // r0
  const char *v13; // r1
  int v14; // r3
  int v15; // r6
  int v16; // r7
  int v17; // r0
  int v18; // r3

  if ( a1 == a2 )
    return 1;
  v2 = a1;
  v3 = a2;
  while ( 1 )
  {
    if ( *(_BYTE *)v2[6] == 23 )
    {
      v9 = sub_171258(v2);
      v4 = (char *)v3[6];
      v2 = (_DWORD *)v9;
      v5 = *v4;
      if ( v5 != 23 )
      {
LABEL_4:
        v6 = (char *)v2[6];
        v7 = *v6;
        if ( v7 != v5 )
          return 0;
        goto LABEL_5;
      }
    }
    else
    {
      v4 = (char *)v3[6];
      v5 = *v4;
      if ( v5 != 23 )
        goto LABEL_4;
    }
    v10 = sub_171258(v3);
    v6 = (char *)v2[6];
    v3 = (_DWORD *)v10;
    v4 = *(char **)(v10 + 24);
    v7 = *v6;
    v5 = *v4;
    if ( v7 != v5 )
      return 0;
LABEL_5:
    v8 = v5 == 1;
    if ( v5 != 1 )
      v8 = v5 == 18;
    if ( !v8 )
      break;
    v2 = (_DWORD *)*((_DWORD *)v6 + 5);
    v3 = (_DWORD *)*((_DWORD *)v4 + 5);
    if ( v2 == v3 )
      return 1;
  }
  v12 = (const char *)*((_DWORD *)v6 + 2);
  if ( (!v12 || (v13 = (const char *)*((_DWORD *)v4 + 2)) == 0 || strcmp(v12, v13)) && v2 != v3 )
  {
    if ( v7 != 7
      || *((__int16 *)v6 + 2) != *((__int16 *)v4 + 2)
      || !sub_173DD4(*((_DWORD *)v6 + 5), *((_DWORD *)v4 + 5)) )
    {
      return 0;
    }
    v14 = v2[6];
    if ( *(__int16 *)(v14 + 4) > 0 )
    {
      v15 = 0;
      v16 = 0;
      while ( 1 )
      {
        ++v16;
        v17 = *(_DWORD *)(*(_DWORD *)(v14 + 24) + v15 + 12);
        v18 = *(_DWORD *)(v3[6] + 24) + v15;
        v15 += 24;
        if ( !sub_173DD4(v17, *(_DWORD *)(v18 + 12)) )
          break;
        v14 = v2[6];
        if ( *(__int16 *)(v14 + 4) <= v16 )
          return 1;
      }
      return 0;
    }
  }
  return 1;
}

int __fastcall sub_2F9CC4(_DWORD *a1, _DWORD ***a2)
{
  _DWORD **v2; // r3
  _DWORD *v3; // r9
  _DWORD *v5; // r5
  const char *v6; // r11
  int v7; // r7
  int v8; // r4
  _DWORD *v9; // r6
  int v10; // t1
  int v11; // r10
  int v13; // r0
  _DWORD *v14; // [sp+4h] [bp-8h]

  v2 = *a2;
  v14 = *a2;
  if ( !*a2 )
    return 0;
  v3 = *v2;
  if ( !*v2 )
    return 0;
  while ( 1 )
  {
    v5 = (_DWORD *)v3[17];
    if ( v5 )
      break;
    if ( v3[16] || (v13 = sub_2F783C((int)v3, v14), (v3[16] = v13) != 0) )
      sub_2F8C04((int)v3);
    v5 = (_DWORD *)v3[17];
    if ( v5 )
      break;
LABEL_18:
    v3 = (_DWORD *)*v3;
    if ( !v3 )
      return 0;
  }
  while ( 1 )
  {
    v6 = (const char *)v5[8];
    if ( v6 )
    {
      v7 = v5[10];
      if ( v7 )
      {
        v8 = *a1;
        if ( *a1 )
          break;
      }
    }
LABEL_5:
    v5 = (_DWORD *)*v5;
    if ( !v5 )
      goto LABEL_18;
  }
  v9 = a1;
  while ( 1 )
  {
    if ( (*(_DWORD *)(v8 + 12) & 8) != 0 )
    {
      v11 = *(_DWORD *)(v8 + 16);
      if ( v11 )
      {
        if ( !strcmp(*(const char **)(v8 + 4), v6) )
          return v7 - (*(_DWORD *)(v8 + 8) + *(_DWORD *)(v11 + 28));
      }
    }
    v10 = v9[1];
    ++v9;
    v8 = v10;
    if ( !v10 )
      goto LABEL_5;
  }
}

int __fastcall sub_2E3320(_DWORD *a1, int a2)
{
  int v2; // r3
  int v4; // r2
  int v5; // r7
  int v8; // r4
  int v9; // r12
  _DWORD *v10; // r10
  int v11; // r11

  if ( (a1[10] & 0x800) != 0 )
    return 1;
  v2 = *(_DWORD *)(a2 + 28);
  if ( *(_DWORD *)(v2 + 40) != 1 )
    return 1;
  v4 = a1[1];
  v5 = *(_DWORD *)(v4 + 444);
  if ( !*(_DWORD *)(v5 + 120) )
    return 1;
  if ( (*(_BYTE *)(a1[40] + 2340) & 0x3F) != *(_DWORD *)(v2 + 44) )
    return 1;
  if ( !(*(int (__fastcall **)(int, _DWORD))(v5 + 116))(v4, *(_DWORD *)(*(_DWORD *)(a2 + 48) + 4)) )
    return 1;
  v8 = a1[25];
  if ( !v8 )
    return 1;
  while ( 1 )
  {
    v9 = *(_DWORD *)(v8 + 20);
    if ( (v9 & 0x8004) == 4
      && *(_DWORD *)(v8 + 76)
      && ((*(_BYTE *)(a2 + 1) & 0x20) == 0 || (v9 & 0x2000) == 0)
      && *(char ***)(v8 + 60) != &off_470950 )
    {
      v10 = sub_2E2758((int)a1, v8, 0, 0, (*(unsigned __int8 *)(a2 + 3) >> 2) & 1);
      if ( !v10 )
        break;
      v11 = (*(int (__fastcall **)(_DWORD *, int, int, _DWORD *))(v5 + 120))(a1, a2, v8, v10);
      if ( *(_DWORD **)(*(_DWORD *)(v8 + 140) + 104) != v10 )
        free(v10);
      if ( !v11 )
        break;
    }
    v8 = *(_DWORD *)(v8 + 12);
    if ( !v8 )
      return 1;
  }
  return 0;
}

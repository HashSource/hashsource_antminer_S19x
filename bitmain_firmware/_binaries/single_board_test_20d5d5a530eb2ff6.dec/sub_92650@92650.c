int __fastcall sub_92650(int *a1, _DWORD *a2)
{
  int v2; // r3
  int v6; // r3
  unsigned int v7; // r1
  int v8; // r0
  int v9; // r9
  unsigned int v10; // r4
  int v11; // r10
  int v12; // r9
  int v13; // r0
  int v14; // r3
  bool v15; // zf

  v2 = a2[1];
  if ( !v2 )
    return 1;
  v6 = sub_E9E68(*a2, 36 * v2, "ssl/statem/extensions_cust.c", 279);
  *a1 = v6;
  if ( !v6 )
    return 0;
  a1[1] = a2[1];
  v7 = a2[1];
  if ( !v7 )
    return 1;
  v8 = 0;
  v9 = v6;
  v10 = 0;
  while ( 1 )
  {
    v11 = *a2 + 36 * v10;
    if ( *(int (__fastcall **)(int, int, int, int, int, int, int, int, int))(v11 + 16) != sub_922A8 )
      goto LABEL_6;
    v12 = v9 + 36 * v10;
    if ( v8 )
      break;
    *(_DWORD *)(v12 + 24) = sub_E9E68(*(_DWORD *)(v11 + 24), 12, "ssl/statem/extensions_cust.c", 303);
    v13 = sub_E9E68(*(_DWORD *)(v11 + 32), 8, "ssl/statem/extensions_cust.c", 305);
    v14 = *(_DWORD *)(v12 + 24);
    v7 = a2[1];
    *(_DWORD *)(v12 + 32) = v13;
    v15 = v13 == 0;
    if ( v13 )
      v15 = v14 == 0;
    v8 = v15;
LABEL_6:
    if ( ++v10 >= v7 )
      goto LABEL_11;
LABEL_7:
    v9 = *a1;
  }
  ++v10;
  *(_DWORD *)(v12 + 24) = 0;
  v8 = 1;
  *(_DWORD *)(v12 + 32) = 0;
  if ( v10 < v7 )
    goto LABEL_7;
LABEL_11:
  if ( !v8 )
    return 1;
  sub_925E4(a1);
  return 0;
}

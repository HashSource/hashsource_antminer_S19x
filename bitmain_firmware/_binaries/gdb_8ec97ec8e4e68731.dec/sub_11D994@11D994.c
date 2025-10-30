void __fastcall sub_11D994(int a1, _DWORD *a2)
{
  int v2; // r2
  int v3; // r4
  int v6; // r6
  int v7; // r1
  _DWORD *v8; // r2
  int i; // r4
  int v10; // r6
  void *v11; // r0
  int v12; // r0
  int v13; // r3
  int v14; // r3
  _DWORD *v15; // r3
  void *v16; // r0

  v2 = a2[88];
  v3 = 0;
  for ( dword_4872D8 = 0; v2 > v3; *(_DWORD *)(v6 + 28) = 0 )
  {
    v6 = *(_DWORD *)(a2[87] + 4 * v3++);
    if ( *(_DWORD *)(v6 + 28) )
    {
      free(*(void **)(v6 + 28));
      v2 = a2[88];
    }
  }
  v7 = a2[89];
  v8 = (_DWORD *)a2[91];
  if ( v7 > 0 )
  {
    for ( i = 0; i < v7; ++i )
    {
      v10 = v8[i];
      if ( *(_DWORD *)(v10 + 28) )
      {
        free(*(void **)(v10 + 28));
        v8 = (_DWORD *)a2[91];
        v7 = a2[89];
      }
      *(_DWORD *)(v10 + 28) = 0;
    }
  }
  if ( v8 )
    free(v8);
  v11 = (void *)a2[85];
  if ( v11 )
    free(v11);
  v12 = a2[100];
  a2[85] = 0;
  if ( v12 )
    sub_324138(v12, sub_1220F8, a1);
  v13 = a2[102];
  if ( v13 )
    ((void (__fastcall *)(_DWORD))loc_1625A8)(*(_DWORD *)(v13 + 8));
  v14 = a2[103];
  if ( v14 && *(_DWORD *)(v14 + 140) )
    ((void (*)(void))loc_1625A8)();
  v15 = (_DWORD *)a2[105];
  if ( v15 )
  {
    v16 = (void *)v15[1];
    *v15 = &off_39EA04;
    if ( v16 )
      sub_349260(v16);
  }
}

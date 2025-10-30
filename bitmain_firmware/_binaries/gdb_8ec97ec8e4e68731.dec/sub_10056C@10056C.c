int __fastcall sub_10056C(const char *a1, char *a2, int a3, int a4)
{
  _DWORD *v6; // r0
  _DWORD *v7; // r8
  size_t v8; // r6
  size_t v9; // r9
  const char *v10; // r0
  const char *v11; // r1
  _DWORD *i; // r4
  int v13; // r3
  _DWORD *j; // r4
  int v15; // r0
  int v16; // r0
  _DWORD *v17; // r6
  _DWORD *v18; // r9
  _DWORD *k; // r4
  _DWORD *m; // r9
  _DWORD *n; // r4
  _DWORD *v22; // r1
  int v24; // [sp+0h] [bp-24h] BYREF

  v24 = a4;
  dword_46D41C = 100;
  dword_47B1A4 = 0;
  v6 = sub_93028(0x194u);
  *v6 = 0;
  dword_47B1A8 = (int)v6;
  v7 = sub_9253C((int)sub_FE4AC, (int)v6);
  sub_FF13C(a1, a2);
  if ( *a2 )
  {
    v8 = strlen(a2);
    v9 = strlen(a1);
    v10 = (const char *)memcpy(&v24, a2, v8);
    v11 = a1;
    a1 = v10;
    *(_WORD *)&v10[v8] = *(_WORD *)"::";
    memcpy((void *)&v10[v8 + 2], v11, v9 + 1);
  }
  for ( i = *(_DWORD **)(dword_487D2C + 36); i; i = (_DWORD *)*i )
  {
    v13 = i[33];
    if ( v13 )
      (*(void (__fastcall **)(_DWORD *, const char *))(*(_DWORD *)(v13 + 40) + 32))(i, a1);
  }
  for ( j = (_DWORD *)sub_20F388(0); j; j = (_DWORD *)j[3] )
    sub_FED48(a1, j);
  v15 = sub_20F388(0);
  v16 = sub_C2668(v15);
  v17 = (_DWORD *)v16;
  v18 = *(_DWORD **)(dword_487D2C + 36);
  if ( v18 )
  {
    do
    {
      for ( k = (_DWORD *)v18[5]; k; k = (_DWORD *)*k )
      {
        sub_258BD4(v16);
        sub_FED48(a1, *(_DWORD **)(k[8] + 8));
      }
      v18 = (_DWORD *)*v18;
    }
    while ( v18 );
    for ( m = *(_DWORD **)(dword_487D2C + 36); m; m = (_DWORD *)*m )
    {
      for ( n = (_DWORD *)m[5]; n; n = (_DWORD *)*n )
      {
        sub_258BD4(v16);
        v16 = (int)a1;
        v22 = *(_DWORD **)(n[8] + 12);
        if ( v17 != v22 )
          sub_FED48(a1, v22);
      }
    }
  }
  sub_92640(v7);
  return dword_47B1A8;
}

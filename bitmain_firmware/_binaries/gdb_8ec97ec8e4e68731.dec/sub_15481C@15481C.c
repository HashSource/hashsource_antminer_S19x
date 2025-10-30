int __fastcall sub_15481C(int a1)
{
  unsigned int v2; // r4
  void *v3; // r8
  int v4; // r0
  void *v5; // r6
  int v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r6
  _DWORD *v9; // r0
  int *v10; // r0
  int v11; // r2
  FILE *v12; // r0
  int v13; // r0
  int v14; // r0
  bool v15; // zf
  int v17; // r0

  v2 = dword_487668;
  if ( !dword_487A4C )
  {
    v3 = sub_9836C(0x10u);
    v4 = sub_256868((int)v3, *(FILE **)(v2 + 52));
    *(_DWORD *)sub_242F8C(v4) = v3;
  }
  v5 = sub_9836C(0x10u);
  v6 = sub_25695C((int)v5, *(FILE **)(v2 + 56));
  v7 = (_DWORD *)sub_242FB4(v6);
  *v7 = v5;
  v8 = (_DWORD *)sub_242FB4(v7);
  v9 = (_DWORD *)sub_242FC8(v8);
  *v9 = *v8;
  v10 = (int *)sub_242FB4(v9);
  dword_487A6C = *v10;
  v11 = *(_DWORD *)sub_242FB4(v10);
  v12 = *(FILE **)(v2 + 48);
  dword_487A38 = v11;
  v13 = fileno(v12);
  v14 = isatty(v13);
  v15 = v14 == 0;
  if ( v14 )
    v15 = a1 == 0;
  if ( v15 || dword_48768C != v2 )
  {
    *(_DWORD *)(v2 + 28) = 0;
    *(_DWORD *)(v2 + 20) = sub_1536A4;
  }
  else
  {
    v17 = *(_DWORD *)(v2 + 48);
    *(_DWORD *)(v2 + 20) = sub_1535BC;
    dword_48AAAC = v17;
    *(_DWORD *)(v2 + 28) = 1;
  }
  return sub_152D58(*(_DWORD *)(v2 + 60), (unsigned int)sub_153A4C, v2);
}

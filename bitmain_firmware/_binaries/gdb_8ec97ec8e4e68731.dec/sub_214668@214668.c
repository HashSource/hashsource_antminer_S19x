bool __fastcall sub_214668(unsigned int a1, int *a2)
{
  bool v2; // zf
  int *v7; // r1
  int v8; // r2
  int v9; // r7
  int v10; // r1
  int v11; // r6
  int v12; // r2
  int v13; // r6
  int v14; // r1
  int v15; // r4

  v2 = dword_489690 == 0;
  if ( dword_489690 )
    v2 = a2 == 0;
  if ( v2 )
    return 0;
  if ( !sub_2117A4(a2) )
    return 0;
  v8 = v7[1];
  v9 = *(_DWORD *)(v8 + 144);
  v10 = *v7;
  v11 = *(_DWORD *)(v10 + 28);
  if ( v11 + *(_DWORD *)(v9 + 4 * sub_162FDC(*(_DWORD *)(v8 + 36), v10)) > a1 )
    return 0;
  v12 = a2[1];
  v13 = *(_DWORD *)(v12 + 144);
  v14 = *a2;
  v15 = *(_DWORD *)(*a2 + 28) + *(_DWORD *)(*a2 + 36);
  return a1 < v15 + *(_DWORD *)(v13 + 4 * sub_162FDC(*(_DWORD *)(v12 + 36), v14));
}

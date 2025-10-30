size_t __fastcall sub_1E1110(int a1, int a2, int a3, int a4)
{
  int v4; // r8
  int v6; // r9
  int i; // r4
  size_t v8; // r4
  int v9; // r10
  size_t **v10; // r9
  size_t **v12; // r7
  size_t *v13; // t1
  int v15; // [sp+0h] [bp-24h] BYREF

  v15 = a4;
  v4 = a2;
  v6 = a2;
  for ( i = 0; i < ((int (__fastcall *)(int))loc_166E9C)(a1); ++i )
  {
    if ( ((int (__fastcall *)(int, int))loc_1DD420)(a1, i) )
      *(_QWORD *)(v6 + 8) = ((int (__fastcall *)(int, int))loc_169750)(a1, i);
    else
      *(_QWORD *)(v6 + 8) = -1;
    *(_DWORD *)(v6 + 4) = i;
    v6 += 24;
  }
  ((void (__fastcall *)(int, int))loc_166E9C)(a1, i);
  v8 = 0;
  v9 = 0;
  v10 = (size_t **)&v15;
  while ( v9++ < ((int (__fastcall *)(int))loc_166E9C)(a1) )
  {
    if ( *(_QWORD *)(v4 + 8) != -1 )
      *(&v15 + v8++) = v4;
    v4 += 24;
  }
  qsort(&v15, v8, 4u, (__compar_fn_t)sub_1E0D84);
  if ( v8 )
  {
    v12 = (size_t **)(&v15 + v8);
    v8 = 0;
    do
    {
      v13 = *v10++;
      *v13 = v8;
      v13[4] = 1;
      v8 += ((int (__fastcall *)(int, size_t))loc_1DD420)(a1, v13[1]);
    }
    while ( v10 != v12 );
  }
  return v8;
}

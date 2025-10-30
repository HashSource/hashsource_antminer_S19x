void __fastcall sub_1AE5B8(int a1, int a2, int a3, _DWORD *a4)
{
  int v5; // r12
  int v9; // r0
  int v10; // r3
  int v11; // r0
  int v12; // r2
  char v13; // r1
  int v14; // r4
  int v15; // r6
  int v16; // r2
  int v17; // r12
  bool v18; // zf
  int v19; // r2
  unsigned int v20; // r4
  int v21; // r1
  unsigned int i; // r9

  v5 = *(_DWORD *)(a2 + 36);
  dword_487AA4 = (int)a4;
  dword_487AA8 = a3;
  dword_487AAC = v5;
  v9 = sub_20C158();
  sub_E6A20(v9);
  sub_105640();
  sub_105678();
  if ( !a4[38] )
  {
    v10 = a4[18];
    v11 = *(_DWORD *)(a2 + 64);
    v12 = *(_DWORD *)(a2 + 60);
    v13 = v11 - v12;
    v14 = 72 * v10;
    if ( 72 * v10 > (unsigned int)(v11 - v12) )
    {
      obstack_newchunk((struct obstack *)(a2 + 48), 72 * v10);
      v12 = *(_DWORD *)(a2 + 60);
      v11 = *(_DWORD *)(a2 + 64);
      v10 = a4[18];
    }
    v15 = *(_DWORD *)(a2 + 56);
    v16 = v12 + v14;
    v17 = *(_DWORD *)(a2 + 72);
    *(_DWORD *)(a2 + 60) = v16;
    v18 = v16 == v15;
    if ( v16 == v15 )
      v13 = *(_BYTE *)(a2 + 88);
    v19 = (v16 + v17) & ~v17;
    *(_DWORD *)(a2 + 60) = v19;
    if ( v18 )
      *(_BYTE *)(a2 + 88) = v13 | 2;
    v20 = a4[32];
    v21 = *(_DWORD *)(a3 + 28);
    if ( v19 - *(_DWORD *)(a2 + 52) > (unsigned int)(v11 - *(_DWORD *)(a2 + 52)) )
    {
      v19 = v11;
      *(_DWORD *)(a2 + 60) = v11;
    }
    *(_DWORD *)(a2 + 56) = v19;
    a4[38] = v15;
    for ( i = v20 + v21 * v10; i > v20; v20 += *(_DWORD *)(a3 + 28) )
    {
      (*(void (__fastcall **)(_DWORD, unsigned int, int))(a3 + 60))(*(_DWORD *)(a2 + 36), v20, v15);
      v15 += 72;
    }
  }
  sub_1A8108(a1, a2);
}

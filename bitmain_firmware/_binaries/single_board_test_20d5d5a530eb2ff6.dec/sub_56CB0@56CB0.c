char *__fastcall sub_56CB0(int a1, unsigned int a2, _BYTE *a3, signed int *a4, int a5, int a6)
{
  int *v6; // r9
  int v8; // r2
  int v12; // r1
  unsigned int v13; // r2
  unsigned int v14; // r3
  int v15; // r5
  int v16; // r0
  unsigned int v17; // r2
  unsigned int v18; // r1
  unsigned int v19; // r3
  _BOOL4 v20; // r6
  int v21; // r2

  v6 = (int *)(a1 + 262148);
  v8 = *(_DWORD *)(a1 + 262148);
  if ( !v8 )
  {
    sub_50B68((_DWORD *)a1, a2);
    v8 = *v6;
  }
  v12 = *(_DWORD *)(a1 + 0x40000);
  v13 = v12 - v8;
  v14 = *(_DWORD *)(a1 + 262156) + v13;
  if ( v14 > 0x80000000 )
  {
    if ( v13 >= 0x10000 )
      v13 = 0x10000;
    sub_56BFC(a1, v12 - v13, v13, v14);
    v12 = *(_DWORD *)(a1 + 0x40000);
  }
  if ( a2 != v12 )
    sub_50AC8((_DWORD *)a1, a2);
  v15 = *(_DWORD *)(a1 + 262156);
  v16 = *(_DWORD *)(a1 + 262160);
  v17 = *(_DWORD *)(a1 + 262152);
  v18 = *a4 + a2;
  v19 = v15 - v16 + v17;
  v20 = v18 > v17;
  if ( a2 >= v19 )
    v20 = 0;
  if ( v20 )
  {
    if ( v18 >= v19 )
      v18 = v15 - v16 + v17;
    *(_DWORD *)(a1 + 262152) = v18;
    v21 = v18 - v17 + v16;
    *(_DWORD *)(a1 + 262160) = v21;
    if ( (unsigned int)(v15 - v21) <= 3 )
    {
      *(_DWORD *)(a1 + 262160) = v15;
      *(_DWORD *)(a1 + 262152) = *v6;
    }
  }
  return sub_548C0((unsigned int *)a1, a2, a3, a4, a5, *(__int16 *)(a1 + 262168), a6);
}

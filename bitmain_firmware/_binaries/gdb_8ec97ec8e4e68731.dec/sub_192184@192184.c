_DWORD *__fastcall sub_192184(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r6
  _DWORD *v12; // r0
  _DWORD *v13; // r2
  _DWORD *v14; // r4
  int v15; // r0
  unsigned int v16; // r3
  unsigned int v17; // r0
  _DWORD *v18; // r3
  unsigned int v19; // r1

  v9 = a9;
  v12 = sub_93094(1u, 0x18u);
  v13 = *(_DWORD **)a2;
  v14 = v12;
  v12[3] = a5;
  v12[4] = a7;
  *v12 = v13;
  if ( a9 )
  {
    v15 = sub_327254(a9);
    v13 = *(_DWORD **)a2;
    v9 = v15;
  }
  v14[5] = v9;
  v14[1] = a3;
  if ( v13 && (v16 = v13[3], v17 = v14[3], v16 >= v17) && (v16 != v17 || v13[4] <= v14[4]) )
  {
    while ( 1 )
    {
      v18 = (_DWORD *)*v13;
      if ( !*v13 )
        break;
      v19 = v18[3];
      if ( v17 > v19 || v17 == v19 && v18[4] > v14[4] )
        break;
      v13 = (_DWORD *)*v13;
    }
    *v14 = v18;
    *v13 = v14;
  }
  else
  {
    *(_DWORD *)a2 = v14;
  }
  ++*(_DWORD *)(a2 + 4);
  return v14;
}

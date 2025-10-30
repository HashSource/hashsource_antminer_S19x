int __fastcall sub_25704C(_DWORD *a1, int a2, int a3, _DWORD *a4)
{
  void *v4; // r4
  int v9; // r5
  _DWORD *v10; // r0
  _BYTE *v11; // r3
  _DWORD *v12; // r4
  int v13; // r2
  _DWORD *v14; // r12
  _DWORD *v15; // r10
  _DWORD *v16; // r4
  _DWORD *v17; // r11
  _DWORD *v18; // r5
  _DWORD *v19; // t1
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  void *v22; // r0
  _DWORD *v23; // r0
  int v25; // r0

  if ( a1[5] )
  {
    sub_94700((int)"ui-out.c", 355, "tables cannot be nested; table_begin found before previous table_end.");
    sub_33AC04(v4);
    sub_338FFC(v25);
  }
  v9 = (a1[3] - a1[2]) >> 2;
  v10 = sub_9836C(0x34u);
  v11 = (_BYTE *)*a4;
  v12 = v10;
  v13 = a4[1];
  v14 = v10 + 5;
  v10 += 3;
  *(v10 - 2) = v9 + 1;
  *v12 = 0;
  v12[2] = a2;
  v12[3] = v14;
  sub_256A84(v10, v11, (int)&v11[v13]);
  v15 = (_DWORD *)a1[5];
  a1[5] = v12;
  v12[9] = 0;
  v12[10] = 0;
  v12[11] = 0;
  v12[12] = 0;
  if ( v15 )
  {
    v16 = (_DWORD *)v15[9];
    v17 = (_DWORD *)v15[10];
    while ( v17 != v16 )
    {
      v19 = (_DWORD *)*v16++;
      v18 = v19;
      if ( v19 )
      {
        v20 = (_DWORD *)v18[9];
        if ( v20 != v18 + 11 )
          sub_339E64(v20);
        v21 = (_DWORD *)v18[3];
        if ( v21 != v18 + 5 )
          sub_339E64(v21);
        sub_33AC04(v18);
      }
    }
    v22 = (void *)v15[9];
    if ( v22 )
      sub_339E64(v22);
    v23 = (_DWORD *)v15[3];
    if ( v23 != v15 + 5 )
      sub_339E64(v23);
    sub_33AC04(v15);
  }
  return (*(int (__fastcall **)(_DWORD *, int, int, _DWORD))(*a1 + 8))(a1, a2, a3, *a4);
}

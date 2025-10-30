_DWORD *__fastcall sub_174DF4(int *a1, int a2, int a3, int a4)
{
  int v6; // r10
  _DWORD *v9; // r7
  int *v10; // r0
  int *v11; // r3
  int *v12; // r2
  int *v13; // r6
  int *v14; // r5
  int *v15; // r4
  int v16; // r8
  int v17; // t1
  int v18; // t1
  int v19; // r0
  int v20; // r3
  _WORD *v21; // r8
  _WORD *v22; // r3
  int *v24; // r0
  size_t v25; // [sp+4h] [bp-8h]

  v6 = a4 + 1;
  v9 = sub_93028(8u);
  v25 = 4 * v6;
  if ( a2 < a4 )
  {
    *v9 = v6;
    v6 = a2 + 1;
    v24 = (int *)sub_93028(v25);
    v12 = (int *)"d";
    v11 = v24;
    v9[1] = v24;
  }
  else
  {
    *v9 = v6;
    v10 = (int *)sub_93028(4 * v6);
    v11 = v10;
    if ( a2 == a4 )
    {
      v12 = &dword_3B4ED4;
    }
    else
    {
      v12 = (int *)"d";
      a2 = a4;
    }
    v9[1] = v10;
  }
  *v11 = *v12;
  if ( a2 > 0 )
  {
    v13 = &a1[a2];
    v14 = (int *)(a3 - 4);
    v15 = a1;
    do
    {
      v17 = *v15++;
      v16 = v17;
      v18 = v14[1];
      ++v14;
      v19 = sub_26BC70(v18);
      *(_DWORD *)(v9[1] + (char *)v15 - (char *)a1) = sub_174598(v16, v19, *v14);
    }
    while ( v15 != v13 );
  }
  if ( a4 >= v6 )
  {
    v20 = v9[1];
    v21 = (_WORD *)(v20 + v25);
    v22 = (_WORD *)(v20 + 4 * v6);
    do
    {
      *v22 = 100;
      v22 += 2;
      *(v22 - 1) = 0;
    }
    while ( v22 != v21 );
  }
  return v9;
}

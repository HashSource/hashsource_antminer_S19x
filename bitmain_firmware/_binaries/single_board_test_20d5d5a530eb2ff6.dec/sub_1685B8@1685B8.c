int __fastcall sub_1685B8(int a1, int a2, int a3, int *a4)
{
  int v7; // r9
  _DWORD *v8; // r5
  int v9; // r7
  int v10; // r0
  bool v11; // zf
  int v12; // r6
  int v13; // r4
  int v15; // r3
  int v16; // r9
  int v17; // r3
  int v18; // r9
  unsigned int v19; // r0
  int v20; // r5
  int v21; // r6
  int v22; // r4
  int v23; // r4
  int v24; // r0

  v7 = sub_C59B8(a1);
  v8 = (_DWORD *)sub_B822C();
  v9 = sub_B822C();
  v10 = sub_B822C();
  v11 = v9 == 0;
  if ( v9 )
    v11 = v8 == 0;
  v12 = v10;
  v13 = v11;
  if ( !v10 )
    v13 |= 1u;
  if ( v13 || !sub_C6348(v7) )
  {
    sub_B895C((int)v8);
    sub_B895C(v9);
    sub_B895C(v12);
    sub_D8C78(a2);
    return 0;
  }
  v15 = sub_B85BC(v8);
  v16 = v15 + 14;
  v17 = v15 + 7;
  if ( v17 >= 0 )
    v16 = v17;
  sub_B895C((int)v8);
  v18 = v16 >> 3;
  sub_B895C(v9);
  sub_B895C(v12);
  v19 = sub_D8C78(a2);
  v20 = v19 >> 31;
  v21 = v19;
  if ( !v18 )
    v20 = 1;
  if ( v20 )
    return 0;
  v22 = sub_AE038(0, v18 + 1, 2);
  v23 = sub_AE038(0, v21, 4) + 2 * v22;
  v24 = sub_AE038(0, a3, 4);
  *a4 = sub_AE038(1, v23 + v24, 16);
  return 1;
}

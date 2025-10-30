bool __fastcall sub_31CA8(unsigned int a1, int a2)
{
  _DWORD *v4; // r4
  int v6; // r4
  int v7; // r7
  int v8; // r8
  unsigned int v9; // r4

  v4 = (_DWORD *)sub_31060();
  *v4 = 0;
  sub_31684(v4);
  if ( !*v4 )
    return 0;
  v6 = sub_31BC0(v4);
  if ( !v6 )
    return 0;
  v7 = sub_93094(1, 0x428u);
  v8 = sub_9253C(197960, v7);
  v9 = sub_313A0(v6);
  *(_DWORD *)(v7 + 4) = v9;
  sub_9253C(&loc_30548, v9);
  if ( v9 )
    v9 = *(_DWORD *)(v9 + 28);
  sub_92620(v8);
  return v9 >= a1 && a1 + a2 > v9;
}

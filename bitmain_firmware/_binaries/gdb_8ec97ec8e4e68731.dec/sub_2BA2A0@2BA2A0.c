int __fastcall sub_2BA2A0(_DWORD *a1, int a2, int *a3, _DWORD *a4)
{
  int v4; // r8
  int v5; // r12
  _DWORD *v6; // r5
  bool v8; // zf
  int v10; // r1
  int v13; // r0
  int v14; // r9
  int v15; // r6
  unsigned int v16; // r6
  int v17; // r2
  int v18; // r3

  v5 = a1[1];
  v6 = *(_DWORD **)(v5 + 28);
  if ( v6[11] != 4 )
    return 0;
  v8 = a2 == 0;
  if ( a2 )
  {
    v10 = v6[64];
    v4 = 0;
  }
  else
  {
    v10 = v6[57];
  }
  if ( v8 )
    v4 = v6[103];
  a1[2] = v10;
  v13 = sub_2D4B7C(*(_DWORD *)(v5 + 48), *(_DWORD *)(v10 + 60));
  v14 = v6[106];
  v15 = *a3;
  a1[3] = v13;
  v16 = v15 & 0xFFFFFFFE;
  if ( v14 )
  {
    if ( !sub_2B9E90((int)a1, 0, v16) )
      return 0;
    v17 = v16 + 4;
    return sub_2B9E90((int)a1, 2, v17);
  }
  if ( v6[105] )
  {
    if ( !sub_2B9E90((int)a1, 0, v16) || !sub_2B9E90((int)a1, 2, v16 + 8) || !sub_2B9E90((int)a1, 0, v16 + 12) )
      return 0;
    v17 = v16 + 20;
    return sub_2B9E90((int)a1, 2, v17);
  }
  if ( v6[107] )
    return sub_2B9E90((int)a1, 0, v16);
  if ( sub_2B640C(v6 + 311) )
    return sub_2B9E90((int)a1, 1, v16);
  v18 = *(_DWORD *)(a1[1] + 28);
  if ( *(_DWORD *)(v18 + 44) != 4 )
    v18 = 0;
  if ( *a4 || !*(_DWORD *)(v18 + 388) && a4[1] )
  {
    if ( sub_2B9E90((int)a1, 1, v16 - 4) )
      return sub_2B9E90((int)a1, 0, v16);
    return 0;
  }
  if ( v16 == v4 )
    return sub_2B9E90((int)a1, 0, v16);
  return 1;
}

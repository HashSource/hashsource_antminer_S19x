int __fastcall sub_2B6944(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v5; // r0
  _DWORD *v8; // r4
  int v10; // r5
  int v11; // r7
  int v12; // r2
  int v13; // r1
  int result; // r0
  int v15; // r1
  int v16; // r3
  int v17; // r2
  int v18; // r3
  int v19; // r3
  bool v20; // zf
  int v21; // r3

  v5 = *(_DWORD **)(a1 + 28);
  if ( v5[11] == 4 )
    v8 = v5;
  else
    v8 = 0;
  if ( a2 )
  {
    v10 = v8[64];
    v11 = v8[63];
    if ( v8[107] && !*(_DWORD *)(v10 + 36) )
      *(_DWORD *)(v10 + 36) = v8[103];
    sub_2B627C(v5, v8[65], 1);
    v12 = *(_DWORD *)(v10 + 36);
  }
  else
  {
    v10 = v8[57];
    v11 = v8[55];
    sub_2B68BC((int)v5, v8[58], 1);
    v12 = *(_DWORD *)(v10 + 36);
    v20 = v12 == 0;
    if ( !v12 )
      v12 = v8[103];
    v21 = v8[111] + 1;
    if ( v20 )
      *(_DWORD *)(v10 + 36) = v12;
    v8[111] = v21;
  }
  v13 = *(_DWORD *)(a1 + 28);
  result = *(_DWORD *)(v13 + 44);
  if ( result != 4 )
    v13 = 0;
  if ( *a4 || !*(_DWORD *)(v13 + 388) && a4[1] )
    v12 += 4;
  v15 = v8[106];
  v16 = v8[104];
  *a3 = v12;
  v17 = v16 + v12;
  *(_DWORD *)(v10 + 36) = v17;
  if ( !v15 )
  {
    v18 = *(_DWORD *)(v11 + 36);
    if ( a2 )
      a4[3] = v18;
    else
      v17 = v8[112];
    if ( !a2 )
      v17 = v18 - 8 * v17;
    v19 = v18 + 4;
    if ( !a2 )
      a4[3] = v17;
    *(_DWORD *)(v11 + 36) = v19;
  }
  return result;
}

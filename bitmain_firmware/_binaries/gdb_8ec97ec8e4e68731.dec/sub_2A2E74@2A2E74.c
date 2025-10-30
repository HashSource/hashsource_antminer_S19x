int __fastcall sub_2A2E74(int a1)
{
  int v2; // r6
  _DWORD *v3; // r0
  unsigned int v4; // r5
  int v6; // r0
  int v7; // r8
  int v8; // r0
  int v9; // r7
  unsigned int v10; // r0
  unsigned int v11; // r9
  unsigned int v12; // r0
  unsigned int v13; // r11
  int v14; // r0
  int v15; // r8
  int v16; // r5
  unsigned int v17; // r9
  int v18; // r7
  int v19; // r0
  int v20; // r2
  unsigned int v21; // r3
  int v22; // r0
  int v23; // r0
  unsigned int v24; // r3
  __int64 v25; // r0

  v2 = *(_DWORD *)(a1 + 160);
  v3 = (_DWORD *)(*(int (**)(void))(*(_DWORD *)(a1 + 4) + 236))();
  if ( !v3 )
    return 0;
  v4 = v3[1];
  free(v3);
  if ( v4 <= 3 )
    return 0;
  v6 = sub_2AD09C(a1, v4);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = sub_2A87D8(v6, v4, a1);
  v9 = v8;
  if ( v8 != v4 )
  {
    if ( sub_2A6910(v8) != 1 )
      ((void (__fastcall *)(int))loc_2A6C48)(10);
    goto LABEL_8;
  }
  v10 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 76))(v7);
  v11 = v10 & 0xFFFFFFF8;
  v12 = v10 >> 3;
  *(_DWORD *)(v2 + 20) = v12;
  if ( v11 > v9 - 4 )
  {
    ((void (__fastcall *)(int))loc_2A6C48)(3);
LABEL_8:
    sub_2AD1F0(a1, v7);
    return 0;
  }
  v13 = 0;
  *(_DWORD *)(v2 + 8) = 0;
  v14 = sub_2ACBF4(a1, 16 * v12);
  *(_DWORD *)(v2 + 16) = v14;
  if ( !v14 )
    return 0;
  if ( *(_DWORD *)(v2 + 20) )
  {
    v15 = v7 + 4;
    v16 = v14 + 16;
    v17 = v11 + 4;
    v18 = v15;
    do
    {
      ++v13;
      v19 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 76))(v18);
      v20 = *(_DWORD *)(a1 + 4);
      v21 = v15 + v17 + v19;
      v22 = v18 + 4;
      *(_DWORD *)(v16 - 16) = v21;
      v18 += 8;
      v23 = (*(int (__fastcall **)(int))(v20 + 76))(v22);
      v24 = *(_DWORD *)(v2 + 20);
      *(_DWORD *)(v16 - 8) = v23;
      *(_DWORD *)(v16 - 4) = 0;
      v16 += 16;
    }
    while ( v24 > v13 );
  }
  v25 = sub_2A890C(a1);
  *(_QWORD *)v2 = v25 % 2 + v25;
  *(_BYTE *)(a1 + 43) |= 0x80u;
  return 1;
}

int __fastcall sub_2A450C(int a1)
{
  int v3; // r1
  int v4; // r0
  _DWORD *v5; // r6
  int v6; // r5
  int v7; // r7
  int v8; // r0
  int v9; // r3
  int v10; // r0
  int v11; // r0
  int v12; // r2
  int v13; // r5
  unsigned int v14; // lr
  unsigned __int8 *v15; // r3
  int v16; // r2
  unsigned __int8 *v17; // r1
  unsigned __int8 *v18; // r0
  __int64 *v19; // r5
  __int64 v20; // r0
  _QWORD *v21; // r12
  int v22; // r3
  char s1[20]; // [sp+Ch] [bp-14h] BYREF

  if ( sub_2A8A04(a1, 0, **(_DWORD **)(a1 + 160), *(_DWORD *)(*(_DWORD *)(a1 + 160) + 4), 0) )
    return 0;
  if ( sub_2A87D8(s1, 16, a1) != 16 )
    return 1;
  if ( sub_2A8A04(a1, v3, -16, -1, 1) )
    return 0;
  if ( strncmp(s1, "ARFILENAMES/    ", 0x10u) && strncmp(s1, "//              ", 0x10u) )
  {
    v22 = *(_DWORD *)(a1 + 160);
    *(_DWORD *)(v22 + 24) = 0;
    *(_DWORD *)(v22 + 28) = 0;
    return 1;
  }
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 236))(a1);
  v5 = (_DWORD *)v4;
  if ( !v4 )
    return 0;
  v6 = *(_DWORD *)(v4 + 4);
  if ( v6 == -1
    || (v7 = *(_DWORD *)(a1 + 160),
        *(_DWORD *)(v7 + 28) = v6,
        v8 = sub_2AD09C(a1, v6 + 1),
        v9 = *(_DWORD *)(a1 + 160),
        *(_DWORD *)(v7 + 24) = v8,
        (v10 = *(_DWORD *)(v9 + 24)) == 0) )
  {
LABEL_14:
    free(v5);
    v12 = *(_DWORD *)(a1 + 160);
    *(_DWORD *)(v12 + 24) = 0;
    *(_DWORD *)(v12 + 28) = 0;
    return 0;
  }
  v11 = sub_2A87D8(v10, v6, a1);
  if ( v11 != v6 )
  {
    if ( sub_2A6910(v11) != 1 )
      ((void (__fastcall *)(int))loc_2A6C48)(10);
    sub_2AD1F0(a1, *(_DWORD *)(*(_DWORD *)(a1 + 160) + 24));
    *(_DWORD *)(*(_DWORD *)(a1 + 160) + 24) = 0;
    goto LABEL_14;
  }
  v13 = v5[1];
  v14 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 24);
  if ( v14 < v14 + v13 )
  {
    v15 = *(unsigned __int8 **)(*(_DWORD *)(a1 + 160) + 24);
    do
    {
      v16 = *v15;
      v17 = v15 + 1;
      v18 = v15++;
      if ( v16 == 10 )
      {
        if ( v14 < (unsigned int)v18 && *(v17 - 2) == 47 )
          --v18;
        *v18 = 0;
        v16 = *(v17 - 1);
      }
      if ( v16 == 92 )
        *(v17 - 1) = 47;
    }
    while ( (unsigned __int8 *)(v14 + v13) != v15 );
  }
  *(_BYTE *)(v14 + v13) = 0;
  v19 = *(__int64 **)(a1 + 160);
  v20 = sub_2A890C(a1);
  v21 = *(_QWORD **)(a1 + 160);
  *v19 = v20;
  *v21 += *v21 % 2LL;
  free(v5);
  return 1;
}

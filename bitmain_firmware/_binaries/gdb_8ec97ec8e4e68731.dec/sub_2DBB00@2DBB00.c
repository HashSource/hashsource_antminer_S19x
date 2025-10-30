int __fastcall sub_2DBB00(_DWORD *a1, int a2, int a3)
{
  int v4; // r5
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r7
  int v11; // r1
  int v12; // r3
  int v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r6

  v4 = *(_DWORD *)(a3 + 160);
  v7 = *(_DWORD *)(v4 + 536);
  v8 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 444);
  v9 = (*(unsigned __int8 *)(v4 + 2341) >> 6) & 1;
  a1[4] = a3;
  a1[7] = v7;
  v10 = *(_DWORD *)(v8 + 392);
  a1[9] = v9;
  if ( v9 )
  {
    a1[5] = sub_347418(*(_DWORD *)(v4 + 96), *(unsigned __int8 *)(v10 + 5));
    a1[6] = 0;
  }
  else
  {
    v14 = *(_DWORD *)(v4 + 104);
    a1[5] = v14;
    a1[6] = v14;
  }
  v11 = *(_DWORD *)(v4 + 120);
  if ( *(_BYTE *)(v10 + 10) == 32 )
    v12 = 8;
  else
    v12 = 32;
  a1[8] = v12;
  a1[3] = v11;
  if ( v11 )
    return 1;
  v15 = a1[5];
  if ( !v15 )
    return 1;
  v16 = sub_2CDA08(a3, v4 + 72, v15, 0, 0, 0, 0);
  a1[3] = v16;
  if ( !v16 )
  {
    (*(void (**)(const char *, ...))(*(_DWORD *)(a2 + 24) + 44))("%P%X: can not read symbols: %E\n");
    return 0;
  }
  if ( (*(_BYTE *)(a2 + 3) & 4) == 0 )
    return 1;
  *(_DWORD *)(v4 + 120) = v16;
  return 1;
}

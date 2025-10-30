int __fastcall sub_110A84(int a1, signed int a2)
{
  int *v3; // r7
  int v5; // r0
  signed int v6; // r9
  unsigned int v7; // r4
  int v8; // r6
  int v9; // r0
  int v10; // r3
  _BOOL4 v12; // r3
  int v13; // r3
  int v14; // r2
  int v15; // r0
  int v16; // r0
  int (__fastcall *v17)(int, int); // r4
  int v18; // r0
  _DWORD *v19; // r9
  int v20; // r11
  bool v21; // cc
  unsigned int v22; // r1
  int v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r1
  int v27; // r2
  int v28; // [sp+4h] [bp-8h]

  v3 = *(int **)(a1 + 128);
  v5 = sub_10C010(*(_DWORD *)(a1 + 80));
  v6 = v5;
  if ( v3 && (v3[5] & 5) != 0 )
  {
    v12 = a2 > 0;
    if ( a2 >= v5 )
      v12 = 0;
    if ( v12 )
    {
      v13 = *(_DWORD *)(a1 + 128);
      if ( v13 )
      {
        if ( (*(_DWORD *)(v13 + 20) & 5) != 0 )
        {
          v14 = sub_10C01C(*(_DWORD **)(a1 + 80), a2);
          if ( v14 )
          {
            v15 = sub_110700(*(_DWORD *)(a1 + 76), *(int **)(a1 + 128), v14, a2);
            if ( v15 < 0 )
              return 2;
            if ( v15 )
            {
              *(_DWORD *)(a1 + 76) = a2 - 1;
              return 1;
            }
          }
        }
      }
    }
  }
  if ( a2 < v6 )
  {
    v7 = a2;
    while ( 1 )
    {
      v8 = sub_10C01C(*(_DWORD **)(a1 + 80), v7);
      v9 = sub_16ECAC(v8, *(_DWORD *)(*(_DWORD *)(a1 + 16) + 20), 0);
      if ( v9 == 1 )
        break;
      if ( v9 == 2 )
        goto LABEL_33;
      if ( ++v7 == v6 )
      {
        if ( (*(_DWORD *)(*(_DWORD *)(a1 + 16) + 12) & 0x80000) != 0 )
          break;
        return 3;
      }
    }
LABEL_9:
    if ( !v3 || sub_10C010(v3[1]) <= 0 )
      return 1;
    v10 = v3[6];
    if ( v3[7] < 0 )
      v3[7] = a2;
    if ( v10 >= 0 )
      return 1;
    return 3;
  }
  if ( a2 != v6 )
    return 3;
  if ( (*(_DWORD *)(*(_DWORD *)(a1 + 16) + 12) & 0x80000) == 0 )
    return 3;
  v16 = sub_10C01C(*(_DWORD **)(a1 + 80), 0);
  v17 = *(int (__fastcall **)(int, int))(a1 + 60);
  v8 = v16;
  v18 = sub_10E660(v16);
  v19 = (_DWORD *)v17(a1, v18);
  if ( !v19 )
    return 3;
  v20 = 0;
  do
  {
    v21 = v20 < sub_10C010((int)v19);
    v22 = v20++;
    if ( !v21 )
      goto LABEL_30;
    v28 = sub_10C01C(v19, v22);
    v7 = sub_10E66C(v28, v8);
  }
  while ( v7 );
  if ( !v28 || !sub_10FD18(v28) )
  {
LABEL_30:
    sub_10BFDC((int)v19, (void (__fastcall *)(int))X509_free);
    return 3;
  }
  sub_10BFDC((int)v19, (void (__fastcall *)(int))X509_free);
  if ( sub_16ECAC(v28, *(_DWORD *)(*(_DWORD *)(a1 + 16) + 20), 0) != 2 )
  {
    sub_10C040(*(_DWORD **)(a1 + 80), 0, v28);
    X509_free(v8, v26, v27);
    *(_DWORD *)(a1 + 76) = 0;
    goto LABEL_9;
  }
  X509_free(v28, v24, v25);
LABEL_33:
  *(_DWORD *)(a1 + 92) = v7;
  v23 = v8;
  if ( !v8 )
    v23 = sub_10C01C(*(_DWORD **)(a1 + 80), v7);
  *(_DWORD *)(a1 + 100) = v23;
  *(_DWORD *)(a1 + 96) = 28;
  if ( (*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
    return 3;
  return 2;
}

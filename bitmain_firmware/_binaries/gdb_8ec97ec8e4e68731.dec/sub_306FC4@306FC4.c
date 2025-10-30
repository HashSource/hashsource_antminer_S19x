int __fastcall sub_306FC4(_DWORD *a1, int *a2)
{
  int (__fastcall *v3)(_DWORD, int, int); // r7
  int v6; // r6
  int *v7; // r1
  int *v8; // r2
  _DWORD *v9; // r3
  int v10; // r4
  int v11; // lr
  int v12; // r12
  int v13; // r0
  int v14; // r12
  char *v15; // r0
  char *v16; // r4
  int (__fastcall *v17)(_DWORD, int, int); // r3
  int v18; // r1
  int v19; // r0
  int (__fastcall *v20)(_DWORD, _DWORD, int); // r3
  int v21; // r0
  int (__fastcall *v22)(_DWORD, _DWORD, int); // r3
  int v23; // r0
  int v24; // r1
  int v25; // r7
  void *v26; // r0
  _BOOL4 v27; // r9
  int v28; // r2
  int v29; // r1

  if ( !a2 )
    return -2;
  v3 = (int (__fastcall *)(_DWORD, int, int))a2[8];
  if ( !v3 || !a2[9] )
    return -2;
  if ( sub_305068((int)a2) || a1 == 0 )
    return -2;
  v6 = a2[7];
  v7 = a2;
  v8 = a2 + 12;
  v9 = a1;
  do
  {
    v10 = *v7;
    v7 += 4;
    v11 = *(v7 - 3);
    v9 += 4;
    v12 = *(v7 - 2);
    v13 = *(v7 - 1);
    *(v9 - 4) = v10;
    *(v9 - 3) = v11;
    *(v9 - 2) = v12;
    *(v9 - 1) = v13;
  }
  while ( v7 != v8 );
  v14 = *v7;
  v9[1] = v7[1];
  *v9 = v14;
  v15 = (char *)v3(a1[10], 1, 5828);
  v16 = v15;
  if ( !v15 )
    return -4;
  a1[7] = v15;
  memcpy(v15, (const void *)v6, 0x16C4u);
  v17 = (int (__fastcall *)(_DWORD, int, int))a1[8];
  v18 = *((_DWORD *)v16 + 11);
  *(_DWORD *)v16 = a1;
  v19 = v17(a1[10], v18, 2);
  v20 = (int (__fastcall *)(_DWORD, _DWORD, int))a1[8];
  *((_DWORD *)v16 + 14) = v19;
  v21 = v20(a1[10], *((_DWORD *)v16 + 11), 2);
  v22 = (int (__fastcall *)(_DWORD, _DWORD, int))a1[8];
  *((_DWORD *)v16 + 16) = v21;
  v23 = v22(a1[10], *((_DWORD *)v16 + 19), 2);
  v24 = *((_DWORD *)v16 + 1447);
  *((_DWORD *)v16 + 17) = v23;
  v25 = ((int (__fastcall *)(_DWORD, int, int))a1[8])(a1[10], v24, 4);
  v26 = (void *)*((_DWORD *)v16 + 14);
  *((_DWORD *)v16 + 2) = v25;
  if ( v26 && *((_DWORD *)v16 + 16) && (!*((_DWORD *)v16 + 17) ? (v27 = 1) : (v27 = v25 == 0), !v27) )
  {
    memcpy(v26, *(const void **)(v6 + 56), 2 * *((_DWORD *)v16 + 11));
    memcpy(*((void **)v16 + 16), *(const void **)(v6 + 64), 2 * *((_DWORD *)v16 + 11));
    memcpy(*((void **)v16 + 17), *(const void **)(v6 + 68), 2 * *((_DWORD *)v16 + 19));
    memcpy(*((void **)v16 + 2), *(const void **)(v6 + 8), *((_DWORD *)v16 + 3));
    v28 = *((_DWORD *)v16 + 1447);
    v29 = *((_DWORD *)v16 + 2);
    *((_DWORD *)v16 + 4) = v29 + *(_DWORD *)(v6 + 16) - *(_DWORD *)(v6 + 8);
    *((_DWORD *)v16 + 1446) = v29 + 3 * v28;
    *((_DWORD *)v16 + 1449) = v25 + (v28 & 0xFFFFFFFE);
    *((_DWORD *)v16 + 713) = v16 + 2440;
    *((_DWORD *)v16 + 716) = v16 + 2684;
    *((_DWORD *)v16 + 710) = v16 + 148;
    return 0;
  }
  else
  {
    sub_306BE8(a1);
    return -4;
  }
}

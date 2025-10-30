int __fastcall sub_33128(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // r4
  _DWORD *v7; // r5
  int v8; // r0
  int *v9; // r3
  int v10; // r6
  int v11; // r0
  int v12; // r8
  int v13; // r2
  int v14; // lr
  int v15; // r12
  _DWORD *v16; // r2
  void *v17; // r1
  int v18; // r2
  int v19; // r5
  int v20; // r0
  int v22; // r0
  const char *v23; // r0
  int v24; // [sp+Ch] [bp-4h] BYREF

  if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) != 5 )
    sub_946E0("add-symbol-file-from-memory not supported for this target");
  v6 = sub_2DB374(a1, a2, a3, &v24, sub_33124);
  if ( !v6 )
    sub_946E0("Failed to read a valid object file image from memory.");
  sub_1627C4();
  if ( *(_DWORD *)v6 )
    free(*(void **)v6);
  if ( a4 )
    *(_DWORD *)v6 = a4;
  else
    *(_DWORD *)v6 = sub_327254("shared object read from target memory");
  if ( !sub_2AA86C(v6, 1) )
  {
    v22 = sub_2A6910();
    v23 = (const char *)sub_2A6920(v22);
    sub_946E0("Got object file from memory but can't read symbols: %s.", v23);
  }
  v7 = (_DWORD *)sub_211DBC(*(_DWORD *)(v6 + 108));
  v8 = sub_9253C(209176, v7);
  v9 = *(int **)(v6 + 100);
  v10 = v8;
  if ( v9 )
  {
    v12 = v24;
    v11 = 0;
    do
    {
      if ( (v9[5] & 3) != 0 )
      {
        v13 = 3 * v11;
        v14 = *v9;
        ++v11;
        v15 = v9[2];
        v16 = &v7[v13];
        v16[1] = v9[7] + v12;
        v16[2] = v14;
        v16[3] = v15;
      }
      v9 = (int *)v9[3];
    }
    while ( v9 );
  }
  else
  {
    v11 = 0;
  }
  v17 = *(void **)v6;
  *v7 = v11;
  if ( a5 )
    v18 = 2;
  else
    v18 = 0;
  v19 = sub_213894(v6, v17, v18, v7, 2, 0);
  v20 = ((int (*)(void))loc_949D8)();
  sub_15D778(v20);
  sub_92620(v10);
  ((void (__fastcall *)(int))loc_1625A8)(v6);
  return v19;
}

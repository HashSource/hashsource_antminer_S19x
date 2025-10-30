int __fastcall sub_2F1BF4(int a1, int a2, _DWORD *a3)
{
  _BOOL4 v3; // r5
  int v4; // r3
  unsigned int v5; // lr
  _DWORD *v8; // r5
  int v9; // r0
  char **v10; // r3
  _BOOL4 v11; // r4
  int v12; // r2
  int v13; // r1
  int v14; // r3
  _DWORD *v15; // r3
  void *v16; // r0

  if ( !*(_DWORD *)(a2 + 36) || (*(_WORD *)(a2 + 24) & 0x380) != 0 )
    return 1;
  v3 = *(_DWORD *)(a2 + 60) == (_DWORD)&off_470950;
  if ( !*(_DWORD *)(a2 + 60) )
    v3 = 0;
  if ( v3 )
    return 1;
  v4 = a3[1];
  if ( v4 == a3[2] )
    return 0;
  v5 = *(_DWORD *)(v4 + 4) >> a3[8];
  if ( !v5 )
    return 0;
  v8 = *(_DWORD **)(a1 + 28);
  v9 = sub_2E00A8(a3, v5, 0);
  if ( !v9 )
    return 0;
  v10 = *(char ***)(v9 + 60);
  *(_DWORD *)(*(_DWORD *)(v9 + 140) + 132) = a2;
  v11 = v10 == &off_470950;
  if ( !v10 )
    v11 = 0;
  v12 = *(_DWORD *)(a2 + 140);
  if ( v11 )
    *(_DWORD *)(a2 + 20) |= 0x8000u;
  *(_WORD *)(a2 + 24) = *(_WORD *)(a2 + 24) & 0xFC7F | 0x300;
  v13 = v8[43];
  v14 = v8[45];
  *(_DWORD *)(v12 + 136) = v9;
  if ( v13 == v14 )
  {
    if ( v13 )
    {
      v16 = (void *)v8[46];
      v8[45] = 2 * v13;
      v15 = sub_2AB3FC(v16, 8 * v13);
    }
    else
    {
      v8[45] = 2;
      v8[44] = 1;
      v15 = sub_2AB368(8);
    }
    v8[46] = v15;
    if ( !v15 )
    {
      sub_2A6BBC("elf-eh-frame.c", 515);
      v15 = (_DWORD *)v8[46];
    }
    v13 = v8[43];
  }
  else
  {
    v15 = (_DWORD *)v8[46];
  }
  v8[43] = v13 + 1;
  v15[v13] = a2;
  return 1;
}

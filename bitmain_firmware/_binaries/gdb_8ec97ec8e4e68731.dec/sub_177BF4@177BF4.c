int __fastcall sub_177BF4(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r0
  int v5; // r3
  int v6; // r6
  unsigned int v7; // r4
  char v8; // r1
  char v9; // r2
  int v10; // r5
  int v11; // r1
  int v12; // r3
  char v13; // r2
  void *v14; // r7
  void *v15; // r3
  int v16; // r0
  bool v17; // zf
  int v18; // r3

  v3 = 3 * a3;
  v4 = ((int (__fastcall *)(int, int))loc_177328)(a1, 6);
  v5 = *(_DWORD *)(v4 + 24);
  v6 = v4;
  v7 = 8 * v3;
  v8 = *(_BYTE *)(v5 + 2);
  v9 = *(_BYTE *)(v5 + 1);
  *(_WORD *)(v5 + 4) = 0;
  *(_BYTE *)(v5 + 1) = v9 | 1;
  if ( (v8 & 0x10) != 0 )
  {
    v10 = *(_DWORD *)(v5 + 16);
    v11 = *(_DWORD *)(v10 + 64);
    v12 = *(_DWORD *)(v10 + 60);
    v13 = v11 - v12;
    if ( v11 - v12 < v7 )
    {
      obstack_newchunk((struct obstack *)(v10 + 48), v7);
      v12 = *(_DWORD *)(v10 + 60);
      v11 = *(_DWORD *)(v10 + 64);
    }
    v14 = *(void **)(v10 + 56);
    v15 = (void *)(v12 + v7);
    v16 = *(_DWORD *)(v10 + 72);
    *(_DWORD *)(v10 + 60) = v15;
    v17 = v15 == v14;
    if ( v15 == v14 )
      v13 = *(_BYTE *)(v10 + 88);
    v18 = ((unsigned int)v15 + v16) & ~v16;
    *(_DWORD *)(v10 + 60) = v18;
    if ( v17 )
      *(_BYTE *)(v10 + 88) = v13 | 2;
    if ( v18 - *(_DWORD *)(v10 + 52) > (unsigned int)(v11 - *(_DWORD *)(v10 + 52)) )
    {
      v18 = v11;
      *(_DWORD *)(v10 + 60) = v11;
    }
    *(_DWORD *)(v10 + 56) = v18;
    memset(v14, 0, v7);
  }
  else
  {
    v14 = sub_930CC(v7);
  }
  *(_DWORD *)(*(_DWORD *)(v6 + 24) + 24) = v14;
  return v6;
}

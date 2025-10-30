void *__fastcall sub_11D090(int a1, _DWORD *a2, int a3)
{
  int v3; // r3
  void *v6; // r4
  int v7; // r7
  int v9; // r7
  int v10; // r4
  int v11; // r12
  int v12; // r1
  unsigned int v13; // r7
  size_t v14; // r2
  void *v15; // r3
  void *v16; // r1
  int v17; // lr
  bool v18; // zf
  int v19; // r1
  _DWORD *v20; // r0
  void *v21; // r2
  int v22; // r3
  int v23; // r3
  void *ptr; // [sp+4h] [bp-8h] BYREF

  v3 = a2[4];
  if ( v3 )
  {
    v6 = *(void **)(v3 + 4 * a3);
    v7 = 4 * a3;
    if ( v6 )
      return v6;
  }
  else
  {
    v9 = a2[2];
    v10 = a1;
    v11 = *(_DWORD *)(a1 + 64);
    v12 = *(_DWORD *)(a1 + 60);
    v13 = 4 * v9;
    if ( v13 > v11 - v12 )
    {
      obstack_newchunk((struct obstack *)(a1 + 48), v13);
      v12 = *(_DWORD *)(v10 + 60);
      v11 = *(_DWORD *)(v10 + 64);
      v14 = 4 * a2[2];
    }
    else
    {
      v14 = v13;
    }
    v15 = *(void **)(v10 + 56);
    v16 = (void *)(v12 + v13);
    v17 = *(_DWORD *)(v10 + 72);
    v7 = 4 * a3;
    *(_DWORD *)(v10 + 60) = v16;
    v18 = v16 == v15;
    if ( v16 == v15 )
      LOBYTE(a1) = *(_BYTE *)(v10 + 88);
    v19 = ((unsigned int)v16 + v17) & ~v17;
    *(_DWORD *)(v10 + 60) = v19;
    if ( v18 )
      *(_BYTE *)(v10 + 88) = a1 | 2;
    if ( v19 - *(_DWORD *)(v10 + 52) > (unsigned int)(v11 - *(_DWORD *)(v10 + 52)) )
    {
      v19 = v11;
      *(_DWORD *)(v10 + 60) = v11;
    }
    *(_DWORD *)(v10 + 56) = v19;
    v20 = memset(v15, 0, v14);
    a2[4] = v20;
    v6 = (void *)v20[a3];
    if ( v6 )
      return v6;
  }
  sub_984A4((int *)&ptr, *(_DWORD *)(a2[3] + 4 * a3));
  v21 = ptr;
  v22 = a2[4];
  ptr = v6;
  *(_DWORD *)(v22 + 4 * a3) = v21;
  v23 = v22 + v7;
  if ( ptr )
  {
    free(ptr);
    v23 = a2[4] + v7;
  }
  return *(void **)v23;
}

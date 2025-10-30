int __fastcall sub_1D28E4(int a1, int a2)
{
  const void *v2; // r5
  const void *v3; // r7
  signed int v4; // r6
  unsigned int v5; // r3
  void *v7; // r8
  void *v8; // r0
  bool v9; // zf
  unsigned int v10; // r7

  v2 = *(const void **)a1;
  v3 = *(const void **)(a1 + 4);
  v4 = (signed int)v3 - *(_DWORD *)a1;
  v5 = v4 >> 2;
  if ( v4 >> 2 == (*(_DWORD *)(a1 + 8) - *(_DWORD *)a1) >> 2 )
    return 0;
  if ( v5 )
  {
    if ( v5 > 0x3FFFFFFF )
      sub_33D01C(a1, a2);
    v8 = sub_9836C((size_t)v3 - *(_DWORD *)a1);
    v7 = *(void **)a1;
    v5 = (unsigned int)v8;
  }
  else
  {
    v7 = *(void **)a1;
  }
  v9 = v3 == v2;
  v10 = v5 + v4;
  if ( !v9 )
    v5 = (unsigned int)memmove((void *)v5, v2, v4);
  *(_DWORD *)a1 = v5;
  *(_DWORD *)(a1 + 4) = v10;
  *(_DWORD *)(a1 + 8) = v10;
  if ( v7 )
    sub_339E64(v7);
  return 1;
}

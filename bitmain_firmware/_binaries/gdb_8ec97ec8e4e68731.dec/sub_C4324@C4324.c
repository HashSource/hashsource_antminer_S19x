int __fastcall sub_C4324(int a1)
{
  const void *v1; // r5
  const void *v2; // r7
  signed int v3; // r6
  unsigned int v4; // r3
  void *v6; // r8
  void *v7; // r0
  bool v8; // zf
  unsigned int v9; // r7

  v1 = *(const void **)a1;
  v2 = *(const void **)(a1 + 4);
  v3 = (signed int)v2 - *(_DWORD *)a1;
  v4 = v3 >> 2;
  if ( v3 >> 2 == (*(_DWORD *)(a1 + 8) - *(_DWORD *)a1) >> 2 )
    return 0;
  if ( v4 )
  {
    if ( v4 > 0x3FFFFFFF )
      sub_33D01C();
    v7 = sub_9836C((size_t)v2 - *(_DWORD *)a1);
    v6 = *(void **)a1;
    v4 = (unsigned int)v7;
  }
  else
  {
    v6 = *(void **)a1;
  }
  v8 = v2 == v1;
  v9 = v4 + v3;
  if ( !v8 )
    v4 = (unsigned int)memmove((void *)v4, v1, v3);
  *(_DWORD *)a1 = v4;
  *(_DWORD *)(a1 + 4) = v9;
  *(_DWORD *)(a1 + 8) = v9;
  if ( v6 )
    sub_339E64(v6);
  return 1;
}

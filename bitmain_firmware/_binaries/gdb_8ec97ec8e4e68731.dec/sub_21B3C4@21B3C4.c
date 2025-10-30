int __fastcall sub_21B3C4(int a1)
{
  char *v2; // r0
  int v3; // r4
  char *v4; // r7
  size_t v5; // r6
  void *v6; // r0
  int v7; // r2
  int v8; // r3
  int v9; // r1
  bool v10; // zf
  int v11; // r3
  int *v12; // r4
  char v13; // r1
  unsigned int v15; // r3
  int result; // r0

  v13 = *(_BYTE *)(a1 + 20);
  v15 = v13 & 0x1F;
  if ( v15 < 3 )
    return *(_DWORD *)a1;
  if ( v15 <= 7 )
  {
    if ( (v13 & 0x1F) != 0xE || (*(_BYTE *)(a1 + 20) & 0x20) != 0 )
    {
      result = *(_DWORD *)(a1 + 16);
      if ( result )
        return result;
    }
    return *(_DWORD *)a1;
  }
  if ( v15 != 14 )
    return *(_DWORD *)a1;
  if ( (*(_BYTE *)(a1 + 20) & 0x20) != 0 )
    return *(_DWORD *)(a1 + 16);
  v2 = sub_9EB80(*(const char **)a1);
  v3 = *(_DWORD *)(a1 + 16);
  v4 = v2;
  *(_BYTE *)(a1 + 20) |= 0x20u;
  if ( v3 )
  {
    v5 = strlen(v2);
    v6 = *(void **)(v3 + 12);
    if ( v5 + 1 > *(_DWORD *)(v3 + 16) - (int)v6 )
    {
      obstack_newchunk((struct obstack *)v3, v5 + 1);
      v6 = *(void **)(v3 + 12);
    }
    memcpy(v6, v4, v5);
    v7 = *(_DWORD *)(v3 + 12);
    *(_DWORD *)(v3 + 12) = v7 + v5 + 1;
    *(_BYTE *)(v7 + v5) = 0;
    v8 = *(_DWORD *)(v3 + 12);
    result = *(_DWORD *)(v3 + 8);
    v9 = *(_DWORD *)(v3 + 16);
    v10 = v8 == result;
    if ( v8 == result )
      LOBYTE(v7) = *(_BYTE *)(v3 + 40);
    v11 = (v8 + *(_DWORD *)(v3 + 24)) & ~*(_DWORD *)(v3 + 24);
    *(_DWORD *)(v3 + 12) = v11;
    if ( v10 )
      *(_BYTE *)(v3 + 40) = v7 | 2;
    if ( v11 - *(_DWORD *)(v3 + 4) > (unsigned int)(v9 - *(_DWORD *)(v3 + 4)) )
    {
      v11 = v9;
      *(_DWORD *)(v3 + 12) = v9;
    }
    *(_DWORD *)(v3 + 8) = v11;
    *(_DWORD *)(a1 + 16) = result;
  }
  else
  {
    v12 = (int *)sub_324030(dword_477C9C, v2, 1);
    result = *v12;
    if ( !*v12 )
    {
      result = sub_327254(v4);
      *v12 = result;
    }
    *(_DWORD *)(a1 + 16) = result;
  }
  return result;
}

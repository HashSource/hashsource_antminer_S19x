int __fastcall sub_118368(int *a1, char *dest, char *a3, int a4)
{
  bool v4; // zf
  int v5; // r4
  int v6; // r6
  size_t **v11; // r3
  size_t *v12; // r4
  size_t v13; // r2
  int v14; // r3
  int v15; // r4
  size_t v16; // r2
  size_t v17; // r0
  int v18; // r3
  int v20; // r4
  size_t v21; // r2
  int v22; // r3
  int v23; // r4
  size_t v24; // r2
  size_t v25; // r0
  int v26; // r3

  v4 = a3 == 0;
  if ( a3 )
    v4 = dest == 0;
  v5 = v4;
  if ( !a1 )
    v5 |= 1u;
  if ( v5 )
    return 0;
  v6 = *a1;
  if ( !*a1 )
  {
    v20 = a1[1];
    v21 = *(_DWORD *)v20;
    if ( !((a4 < *(_DWORD *)v20) | (*(_DWORD *)v20 >> 31)) )
    {
      if ( v21 )
      {
        memcpy(dest, *(const void **)(v20 + 8), v21);
        v21 = *(_DWORD *)v20;
        v22 = *(_DWORD *)(v20 + 12) & 7;
        if ( v22 )
        {
          dest[v21 - 1] &= ~(255 >> (8 - v22));
          v21 = *(_DWORD *)v20;
        }
      }
      memset(&dest[v21], 0, a4 - v21);
      v23 = a1[1];
      v24 = *(_DWORD *)v23;
      if ( !((a4 < *(_DWORD *)v23) | (*(_DWORD *)v23 >> 31)) )
      {
        v25 = *(_DWORD *)v23;
        if ( v24 )
        {
          memcpy(a3, *(const void **)(v23 + 8), v24);
          v26 = *(_DWORD *)(v23 + 12) & 7;
          if ( v26 )
            a3[*(_DWORD *)v23 - 1] |= 255 >> (8 - v26);
          v25 = *(_DWORD *)v23;
        }
        v6 = 1;
        memset(&a3[v25], 255, a4 - v25);
        return v6;
      }
    }
    return 0;
  }
  if ( v6 == 1 )
  {
    v11 = (size_t **)a1[1];
    v12 = *v11;
    v13 = **v11;
    if ( !((a4 < (int)v13) | (v13 >> 31)) )
    {
      if ( v13 )
      {
        memcpy(dest, (const void *)v12[2], v13);
        v13 = *v12;
        v14 = v12[3] & 7;
        if ( v14 )
        {
          dest[v13 - 1] &= ~(255 >> (8 - v14));
          v13 = *v12;
        }
      }
      memset(&dest[v13], 0, a4 - v13);
      v15 = *(_DWORD *)(a1[1] + 4);
      v16 = *(_DWORD *)v15;
      if ( !((a4 < *(_DWORD *)v15) | (*(_DWORD *)v15 >> 31)) )
      {
        v17 = *(_DWORD *)v15;
        if ( v16 )
        {
          memcpy(a3, *(const void **)(v15 + 8), v16);
          v18 = *(_DWORD *)(v15 + 12) & 7;
          if ( v18 )
            a3[*(_DWORD *)v15 - 1] |= 255 >> (8 - v18);
          v17 = *(_DWORD *)v15;
        }
        memset(&a3[v17], 255, a4 - v17);
        return v6;
      }
    }
    return 0;
  }
  return 0;
}

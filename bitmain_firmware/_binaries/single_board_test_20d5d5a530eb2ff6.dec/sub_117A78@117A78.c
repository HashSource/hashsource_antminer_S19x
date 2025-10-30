int __fastcall sub_117A78(int **a1, _DWORD **a2)
{
  int *v2; // r4
  _DWORD *v3; // r5
  int v4; // r3
  int v5; // r4
  size_t **v6; // r3
  size_t *v7; // r5
  size_t v8; // r2
  int v9; // r3
  size_t v10; // r0
  int v11; // r5
  size_t **v12; // r3
  size_t *v13; // r4
  size_t v14; // r2
  _BYTE *v15; // r3
  int v16; // r2
  size_t v17; // r0
  int v18; // r7
  size_t v19; // r0
  int result; // r0
  int v21; // r6
  size_t v22; // r2
  _BYTE *v23; // r3
  int v24; // r2
  size_t v25; // r0
  int v26; // r3
  _BYTE v27[16]; // [sp+0h] [bp-24h] BYREF
  _BYTE dest[20]; // [sp+10h] [bp-14h] BYREF

  v2 = *a1;
  v3 = *a2;
  v4 = **a1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v12 = (size_t **)v2[1];
      v13 = *v12;
      v14 = **v12;
      if ( v14 > 4 )
        return -1;
      if ( v14 )
      {
        v15 = memcpy(v27, (const void *)v13[2], v14);
        v16 = v13[3] & 7;
        if ( v16 )
          v15[*v13 - 1] &= ~(255 >> (8 - v16));
        v14 = *v13;
        v17 = *v13;
      }
      else
      {
        v17 = 0;
        v15 = v27;
      }
      v5 = 32;
      memset(&v15[v17], 0, 4 - v14);
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    v21 = v2[1];
    v22 = *(_DWORD *)v21;
    if ( *(_DWORD *)v21 > 4u )
      return -1;
    if ( v22 )
    {
      v23 = memcpy(v27, *(const void **)(v21 + 8), v22);
      v24 = *(_DWORD *)(v21 + 12) & 7;
      if ( v24 )
        v23[*(_DWORD *)v21 - 1] &= ~(255 >> (8 - v24));
      v22 = *(_DWORD *)v21;
      v25 = *(_DWORD *)v21;
    }
    else
    {
      v25 = 0;
      v23 = v27;
    }
    memset(&v23[v25], 0, 4 - v22);
    v5 = 8 * *(_DWORD *)v2[1] - (*(_DWORD *)(v2[1] + 12) & 7);
  }
  if ( !*v3 )
  {
    v18 = v3[1];
    v19 = *(_DWORD *)v18;
    if ( *(_DWORD *)v18 <= 4u )
    {
      if ( v19 )
      {
        memcpy(dest, *(const void **)(v18 + 8), *(_DWORD *)v18);
        v26 = *(_DWORD *)(v18 + 12) & 7;
        if ( v26 )
          dest[*(_DWORD *)v18 - 1] &= ~(255 >> (8 - v26));
        v19 = *(_DWORD *)v18;
      }
      memset(&dest[v19], 0, 4 - v19);
      v11 = 8 * *(_DWORD *)v3[1] - (*(_DWORD *)(v3[1] + 12) & 7);
      goto LABEL_26;
    }
    return -1;
  }
  if ( *v3 == 1 )
  {
    v6 = (size_t **)v3[1];
    v7 = *v6;
    v8 = **v6;
    if ( v8 <= 4 )
    {
      if ( v8 )
      {
        memcpy(dest, (const void *)v7[2], v8);
        v8 = *v7;
        v9 = v7[3] & 7;
        if ( v9 )
        {
          dest[v8 - 1] &= ~(255 >> (8 - v9));
          v8 = *v7;
        }
        v10 = v8;
      }
      else
      {
        v10 = 0;
      }
      v11 = 32;
      memset(&dest[v10], 0, 4 - v8);
      goto LABEL_26;
    }
    return -1;
  }
  v11 = 0;
LABEL_26:
  result = memcmp(v27, dest, 4u);
  if ( !result )
    return v5 - v11;
  return result;
}

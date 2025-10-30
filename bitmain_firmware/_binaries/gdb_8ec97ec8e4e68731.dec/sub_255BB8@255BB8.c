int *__fastcall sub_255BB8(_DWORD *a1, int a2)
{
  int *v2; // r3
  int v5; // r0
  int v6; // r0
  int *result; // r0
  int v8; // r0
  int v9; // r0
  _DWORD *v10; // r8
  int v11; // r6
  int v12; // r1
  int v13; // r3
  char v14; // r2
  _DWORD *v15; // r7
  _DWORD *v16; // r3
  int v17; // r0
  bool v18; // zf
  int v19; // r3
  const char *v20; // r0
  char *v21; // r5
  int v22; // r4
  size_t v23; // r6
  void *v24; // r0
  int v25; // r2
  int v26; // r3
  int v27; // r1
  int v28; // r12
  bool v29; // zf
  int v30; // r3
  int v31; // [sp+4h] [bp-Ch] BYREF
  int v32; // [sp+8h] [bp-8h]

  v2 = (int *)a1[2];
  if ( v2 )
  {
    v5 = *v2;
    v31 = 0;
    v32 = a2;
    v6 = sub_323E3C(v5, &v31);
    if ( v6 )
      return *(int **)v6;
  }
  result = (int *)a1[3];
  if ( result )
  {
    v8 = *result;
    v31 = 0;
    v32 = a2;
    v9 = sub_324030(v8, &v31, 1);
    v10 = (_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      return **(int ***)v9;
    }
    else
    {
      v11 = a1[3];
      v12 = *(_DWORD *)(v11 + 20);
      v13 = *(_DWORD *)(v11 + 16);
      v14 = v12 - v13;
      if ( (unsigned int)(v12 - v13) <= 0xB )
      {
        obstack_newchunk((struct obstack *)(v11 + 4), 12);
        v13 = *(_DWORD *)(v11 + 16);
        v12 = *(_DWORD *)(v11 + 20);
      }
      v15 = *(_DWORD **)(v11 + 12);
      v16 = (_DWORD *)(v13 + 12);
      v17 = *(_DWORD *)(v11 + 28);
      *(_DWORD *)(v11 + 16) = v16;
      v18 = v16 == v15;
      if ( v16 == v15 )
        v14 = *(_BYTE *)(v11 + 44);
      v19 = ((unsigned int)v16 + v17) & ~v17;
      *(_DWORD *)(v11 + 16) = v19;
      if ( v18 )
        *(_BYTE *)(v11 + 44) = v14 | 2;
      if ( v19 - *(_DWORD *)(v11 + 8) > (unsigned int)(v12 - *(_DWORD *)(v11 + 8)) )
      {
        v19 = v12;
        *(_DWORD *)(v11 + 16) = v12;
      }
      *(_DWORD *)(v11 + 12) = v19;
      *v15 = 0;
      v15[1] = a2;
      *v10 = v15;
      v20 = (const char *)((int (__fastcall *)(_DWORD, int))loc_157C3C)(a1[4], a2);
      v21 = (char *)v20;
      if ( v20 )
      {
        v22 = a1[3];
        v23 = strlen(v20);
        v24 = *(void **)(v22 + 16);
        if ( *(_DWORD *)(v22 + 20) - (int)v24 < v23 + 1 )
        {
          obstack_newchunk((struct obstack *)(v22 + 4), v23 + 1);
          v24 = *(void **)(v22 + 16);
        }
        memcpy(v24, v21, v23);
        v25 = *(_DWORD *)(v22 + 16);
        *(_DWORD *)(v22 + 16) = v25 + v23 + 1;
        *(_BYTE *)(v25 + v23) = 0;
        v26 = *(_DWORD *)(v22 + 16);
        v27 = *(_DWORD *)(v22 + 12);
        v28 = *(_DWORD *)(v22 + 20);
        v29 = v27 == v26;
        if ( v27 == v26 )
          LOBYTE(v25) = *(_BYTE *)(v22 + 44);
        v30 = (v26 + *(_DWORD *)(v22 + 28)) & ~*(_DWORD *)(v22 + 28);
        *(_DWORD *)(v22 + 16) = v30;
        if ( v29 )
          *(_BYTE *)(v22 + 44) = v25 | 2;
        if ( v30 - *(_DWORD *)(v22 + 8) > (unsigned int)(v28 - *(_DWORD *)(v22 + 8)) )
        {
          v30 = v28;
          *(_DWORD *)(v22 + 16) = v28;
        }
        *(_DWORD *)(v22 + 12) = v30;
        *v15 = v27;
        free(v21);
      }
      return (int *)*v15;
    }
  }
  return result;
}

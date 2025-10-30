int *__fastcall sub_20DC2C(int *a1, int a2, int *a3, int *a4)
{
  int v8; // r0
  int v9; // r5
  int v10; // r2
  int v11; // r7
  int v12; // r3
  void *v13; // r3
  unsigned int v15; // r0
  int v16; // r7
  int v17; // r1
  int v18; // r3
  int v19; // r0
  int v20; // r0
  void *v21; // r3
  int v22; // r5
  int v23; // r0
  int v24; // r0
  void *v25; // r3
  void *v26; // r0
  int v27; // r0
  void *v28; // r3
  void *v29; // r0
  void *ptr; // [sp+4h] [bp-Ch] BYREF
  int v31; // [sp+8h] [bp-8h] BYREF
  int v32; // [sp+Ch] [bp-4h]

  *a1 = 0;
  *a3 = 0;
  if ( a4 )
    *a4 = 0;
  v8 = sub_C3410(a2);
  v9 = v8;
  if ( !v8 )
  {
    if ( sub_15DEBC(a2, (int *)&ptr) )
    {
      sub_1B240C(&v31, (unsigned int)ptr);
      v22 = v31;
      if ( v31 )
      {
        if ( dword_46D448 )
          v23 = sub_21B3C4(v31);
        else
          v23 = *(_DWORD *)v31;
        v24 = sub_327254(v23);
        v25 = (void *)*a1;
        *a1 = v24;
        if ( v25 )
          free(v25);
        *a3 = *(_BYTE *)(v22 + 20) & 0x1F;
      }
    }
    return a1;
  }
  if ( sub_C23FC(*(_DWORD *)(v8 + 8)) )
  {
    v32 = 0;
    v31 = 0;
LABEL_6:
    v10 = dword_46D448;
    goto LABEL_7;
  }
  v15 = sub_15DE14(a2);
  sub_1B240C(&v31, v15);
  v16 = v31;
  if ( !v31 )
    goto LABEL_6;
  v17 = *(__int16 *)(v31 + 22);
  v18 = *(_DWORD *)(v31 + 8);
  if ( v17 == -1 )
  {
    sub_94700((int)"stack.c", 1081, "Section index is uninitialized", v18);
    v29 = (void *)*a1;
    if ( *a1 )
      free(v29);
    sub_338FFC(v29);
  }
  v10 = dword_46D448;
  if ( (unsigned int)(v18 + *(_DWORD *)(*(_DWORD *)(v32 + 144) + 4 * v17)) <= **(_DWORD **)(v9 + 8) )
  {
LABEL_7:
    if ( v10 )
      v11 = sub_21B3C4(v9);
    else
      v11 = *(_DWORD *)v9;
    v12 = *(_BYTE *)(v9 + 20) & 0x1F;
    *a3 = v12;
    if ( a4 )
      *a4 = v9;
    if ( v12 == 4 )
    {
      sub_100138(&ptr, v11);
      v26 = (void *)*a1;
      v13 = ptr;
      ptr = 0;
      *a1 = (int)v13;
      if ( !v26 )
      {
LABEL_14:
        if ( !v13 )
        {
          v27 = sub_327254(v11);
          v28 = (void *)*a1;
          *a1 = v27;
          if ( v28 )
            free(v28);
        }
        return a1;
      }
      free(v26);
      if ( ptr )
        free(ptr);
    }
    v13 = (void *)*a1;
    goto LABEL_14;
  }
  if ( dword_46D448 )
    v19 = sub_21B3C4(v31);
  else
    v19 = *(_DWORD *)v31;
  v20 = sub_327254(v19);
  v21 = (void *)*a1;
  *a1 = v20;
  if ( v21 )
    free(v21);
  *a3 = *(_BYTE *)(v16 + 20) & 0x1F;
  return a1;
}

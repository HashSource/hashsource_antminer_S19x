int __fastcall sub_34A18(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        const char *a11,
        int a12)
{
  _BOOL4 v12; // r12
  int v17; // r10
  int v18; // r2
  void *v19; // r0
  size_t v20; // r11
  int v21; // r1
  int v22; // r6
  int v23; // r2
  void *v24; // r0
  size_t v25; // r7
  int v26; // r1
  int v27; // r6
  int v28; // r2
  void *v29; // r0
  size_t v30; // r7
  struct obstack *v31; // r4
  size_t v32; // r6
  char *next_free; // r0
  char *v34; // r2
  _BYTE v35[12]; // [sp+0h] [bp-Ch] BYREF

  v12 = a6 == 0;
  if ( !*a11 )
    v12 = 1;
  if ( v12 )
    return 0;
  ++*(_QWORD *)a12;
  sub_26D9E8(v35, *(_DWORD *)(a12 + 16), a1, a2);
  v17 = *(_DWORD *)(a12 + 8);
  v18 = *(_DWORD *)(a12 + 16);
  v19 = *(void **)(v17 + 12);
  v20 = *(_DWORD *)(v18 + 20);
  if ( v20 > *(_DWORD *)(v17 + 16) - (int)v19 )
  {
    obstack_newchunk(*(struct obstack **)(a12 + 8), *(_DWORD *)(v18 + 20));
    v19 = *(void **)(v17 + 12);
  }
  memcpy(v19, v35, v20);
  v21 = *(_DWORD *)(a12 + 16);
  *(_DWORD *)(v17 + 12) += v20;
  sub_26D9E8(v35, v21, a1 + a3, (__PAIR64__(a2, a1) + a3) >> 32);
  v22 = *(_DWORD *)(a12 + 8);
  v23 = *(_DWORD *)(a12 + 16);
  v24 = *(void **)(v22 + 12);
  v25 = *(_DWORD *)(v23 + 20);
  if ( v25 > *(_DWORD *)(v22 + 16) - (int)v24 )
  {
    obstack_newchunk(*(struct obstack **)(a12 + 8), *(_DWORD *)(v23 + 20));
    v24 = *(void **)(v22 + 12);
  }
  memcpy(v24, v35, v25);
  v26 = *(_DWORD *)(a12 + 16);
  *(_DWORD *)(v22 + 12) += v25;
  sub_26D9E8(v35, v26, a4, a5);
  v27 = *(_DWORD *)(a12 + 8);
  v28 = *(_DWORD *)(a12 + 16);
  v29 = *(void **)(v27 + 12);
  v30 = *(_DWORD *)(v28 + 20);
  if ( v30 > *(_DWORD *)(v27 + 16) - (int)v29 )
  {
    obstack_newchunk(*(struct obstack **)(a12 + 8), *(_DWORD *)(v28 + 20));
    v29 = *(void **)(v27 + 12);
  }
  memcpy(v29, v35, v30);
  v31 = *(struct obstack **)(a12 + 12);
  *(_DWORD *)(v27 + 12) += v30;
  v32 = strlen(a11);
  next_free = v31->next_free;
  if ( v31->chunk_limit - next_free < v32 + 1 )
  {
    obstack_newchunk(v31, v32 + 1);
    next_free = v31->next_free;
  }
  memcpy(next_free, a11, v32);
  v34 = v31->next_free;
  v31->next_free = &v34[v32 + 1];
  v34[v32] = 0;
  return 0;
}

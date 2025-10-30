int __fastcall sub_14D388(int a1, int a2, int a3, int a4)
{
  unsigned int v5; // r7
  int v6; // r4
  int v10; // r3
  int v11; // r0
  __int16 v12; // r1
  int v13; // r5
  char v14; // r2
  int v15; // r10
  int v16; // r1
  int v17; // r3
  char v18; // r2
  char *v19; // r4
  char *v20; // r3
  int v21; // r0
  bool v22; // zf
  int v23; // r3
  int *v24; // r3
  char *v25; // r0
  int v26; // t1
  int v28; // r7
  char v29; // r2
  int v30; // r4
  void *v31; // r0

  v5 = 0;
  v6 = a1 + 28;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  memset((void *)(a1 + 28), 0, 0x24u);
  v10 = v6;
  *(_DWORD *)(a1 + 24) = v6;
  *(_DWORD *)(a1 + 12) = a1;
  *(_DWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 20) = 1;
  *(_BYTE *)(a1 + 28) = 15;
  if ( a3 <= 0 )
  {
    v13 = a3 - 1;
    v12 = a3;
    v5 = 24 * a3;
    goto LABEL_5;
  }
  v11 = *(_DWORD *)(a4 + 4 * (a3 + 0x3FFFFFFF));
  if ( !v11 )
  {
    v28 = 3 * (a3 - 1);
    v13 = a3 - 2;
    --a3;
    v5 = 8 * v28;
    *(_BYTE *)(a1 + 29) |= 0x80u;
    v29 = *(_BYTE *)(v6 + 2);
    *(_WORD *)(v6 + 4) = a3;
    if ( (v29 & 0x10) != 0 )
      goto LABEL_6;
    goto LABEL_20;
  }
  if ( **(_BYTE **)(sub_171258(v11) + 24) != 10 )
  {
    v10 = *(_DWORD *)(a1 + 24);
    v12 = a3;
    v13 = a3 - 1;
    v5 = 24 * a3;
    goto LABEL_5;
  }
  if ( a3 == 1 )
  {
    v10 = *(_DWORD *)(a1 + 24);
    v12 = 0;
    a3 = 0;
    v13 = -1;
    *(_BYTE *)(v10 + 1) |= 0x20u;
LABEL_5:
    v14 = *(_BYTE *)(v10 + 2);
    *(_WORD *)(v10 + 4) = v12;
    if ( (v14 & 0x10) != 0 )
    {
LABEL_6:
      v15 = *(_DWORD *)(v10 + 16);
      v16 = *(_DWORD *)(v15 + 64);
      v17 = *(_DWORD *)(v15 + 60);
      v18 = v16 - v17;
      if ( v16 - v17 < v5 )
      {
        obstack_newchunk((struct obstack *)(v15 + 48), v5);
        v17 = *(_DWORD *)(v15 + 60);
        v16 = *(_DWORD *)(v15 + 64);
      }
      v19 = *(char **)(v15 + 56);
      v20 = (char *)(v17 + v5);
      v21 = *(_DWORD *)(v15 + 72);
      *(_DWORD *)(v15 + 60) = v20;
      v22 = v20 == v19;
      if ( v20 == v19 )
        v18 = *(_BYTE *)(v15 + 88);
      v23 = (unsigned int)&v20[v21] & ~v21;
      *(_DWORD *)(v15 + 60) = v23;
      if ( v22 )
        *(_BYTE *)(v15 + 88) = v18 | 2;
      if ( v23 - *(_DWORD *)(v15 + 52) > (unsigned int)(v16 - *(_DWORD *)(v15 + 52)) )
      {
        v23 = v16;
        *(_DWORD *)(v15 + 60) = v16;
      }
      *(_DWORD *)(v15 + 56) = v23;
      memset(v19, 0, v5);
      goto LABEL_15;
    }
LABEL_20:
    v19 = (char *)sub_930CC(v5);
LABEL_15:
    *(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) = v19;
    if ( a3 > 0 )
    {
      v24 = (int *)(a4 + 4 * v13);
      v25 = &v19[24 * v13];
      do
      {
        --v13;
        v26 = *v24--;
        v25 -= 24;
        *((_DWORD *)v25 + 9) = v26;
      }
      while ( v13 + 1 > 0 );
    }
    return a1;
  }
  v30 = sub_94700(
          (int)"eval.c",
          688,
          "%s: Assertion `%s' failed.",
          "fake_method::fake_method(type_instance_flags, int, type**)",
          "num_types == 0");
  v31 = *(void **)(*(_DWORD *)(v30 + 24) + 24);
  if ( v31 )
    free(v31);
  return v30;
}

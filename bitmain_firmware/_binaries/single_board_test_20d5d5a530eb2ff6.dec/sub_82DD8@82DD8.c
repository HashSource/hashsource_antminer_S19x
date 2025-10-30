bool __fastcall sub_82DD8(_DWORD *a1, const void *a2, size_t a3, int a4)
{
  int v5; // r1
  size_t v8; // r6
  int v9; // r3
  size_t v10; // r8
  int v11; // r5
  _BYTE *v12; // r0
  _BOOL4 v13; // r7
  _BYTE *v14; // r10
  char v15; // r3
  char *v16; // r0
  int v17; // r8
  int v18; // r2
  int v19; // lr
  int v20; // lr
  int v21; // r0
  int v22; // r2
  _BYTE *v24; // r0
  char v25; // [sp+8h] [bp-Ch]

  v5 = a1[31];
  v8 = a3;
  v9 = *(_DWORD *)(*(_DWORD *)(v5 + 528) + 16);
  if ( (v9 & 0x1C8) != 0 )
  {
    v10 = *(_DWORD *)(v5 + 604);
    if ( (v9 & 8) == 0 )
    {
      v11 = v10 + 4 + a3;
      v12 = (_BYTE *)CRYPTO_malloc(v11, "ssl/s3_lib.c", 4629);
      v13 = (_BOOL4)v12;
      if ( !v12 )
        goto LABEL_6;
      v14 = v12 + 2;
      v12[1] = v8;
      *v12 = BYTE1(v8);
      v25 = v10;
      memcpy(v12 + 2, a2, v8);
      v15 = BYTE1(v10);
      goto LABEL_5;
    }
    v11 = 2 * v10 + 4;
    v24 = (_BYTE *)CRYPTO_malloc(v11, "ssl/s3_lib.c", 4629);
    v13 = (_BOOL4)v24;
    if ( v24 )
    {
      v14 = v24 + 2;
      v25 = v10;
      v24[1] = v10;
      *v24 = BYTE1(v10);
      v8 = v10;
      memset(v24 + 2, 0, v10);
      v15 = BYTE1(v10);
LABEL_5:
      v14[v8] = v15;
      v16 = &v14[v8 + 2];
      *(v16 - 1) = v25;
      memcpy(v16, *(const void **)(a1[31] + 600), v10);
      sub_E0758(*(_DWORD *)(a1[31] + 600), v10, (size_t)"ssl/s3_lib.c");
      v17 = a1[285];
      v18 = a1[31];
      v19 = *(_DWORD *)(a1[1] + 100);
      *(_DWORD *)(v18 + 600) = 0;
      *(_DWORD *)(v18 + 604) = 0;
      v20 = (*(int (__fastcall **)(_DWORD *, int, _BOOL4, int, int))(v19 + 12))(a1, v17 + 72, v13, v11, v17 + 4);
      v21 = v13;
      v13 = v20 != 0;
      sub_E0758(v21, v11, (size_t)"ssl/s3_lib.c");
      goto LABEL_6;
    }
    v8 = v10;
  }
  else
  {
    v13 = (*(int (__fastcall **)(_DWORD *, int, const void *, size_t, int))(*(_DWORD *)(a1[1] + 100) + 12))(
            a1,
            a1[285] + 72,
            a2,
            a3,
            a1[285] + 4) != 0;
  }
LABEL_6:
  if ( a2 )
  {
    if ( a4 )
      sub_E0758((int)a2, v8, (size_t)"ssl/s3_lib.c");
    else
      sub_E07F8((int)a2, v8);
  }
  if ( !a1[7] )
  {
    v22 = a1[31];
    *(_DWORD *)(v22 + 592) = 0;
    *(_DWORD *)(v22 + 596) = 0;
  }
  return v13;
}

int __fastcall sub_F9200(int a1, _BYTE *a2, void *a3, int a4, int a5)
{
  int v8; // r0
  int v9; // r0
  int v10; // r6
  _DWORD *v11; // r10
  int v12; // r0
  int v13; // r5
  int v14; // r0
  int v15; // r5
  void *v16; // r0
  bool v17; // zf
  void *v18; // r7
  int v19; // r4
  int v21; // r2
  size_t v22; // r0
  int v23; // r0
  int *v25; // [sp+10h] [bp-Ch]

  if ( sub_B85BC(*(_DWORD **)(a4 + 16)) <= 0x4000 )
  {
    if ( sub_B82F8(*(int **)(a4 + 16), *(int **)(a4 + 20)) <= 0 )
    {
      v21 = 516;
      goto LABEL_15;
    }
    v8 = sub_B85BC(*(_DWORD **)(a4 + 16));
    if ( v8 > 3072 )
    {
      v8 = sub_B85BC(*(_DWORD **)(a4 + 20));
      if ( v8 > 64 )
      {
        v21 = 523;
LABEL_15:
        sub_D0048(4, 103, 101, (int)"crypto/rsa/rsa_ossl.c", v21);
        return -1;
      }
    }
    v9 = sub_130B08(v8);
    v10 = v9;
    if ( !v9 )
    {
      v15 = 0;
      v18 = 0;
      v19 = -1;
      goto LABEL_12;
    }
    sub_130BC0(v9);
    v25 = (int *)sub_130CCC(v10);
    v11 = (_DWORD *)sub_130CCC(v10);
    v12 = sub_B85BC(*(_DWORD **)(a4 + 16));
    v13 = v12 + 14;
    v14 = v12 + 7;
    if ( v14 < 0 )
      v14 = v13;
    v15 = v14 >> 3;
    v16 = CRYPTO_malloc((void *)(v14 >> 3));
    v17 = v16 == 0;
    if ( v16 )
      v17 = v11 == 0;
    v18 = v16;
    if ( v17 )
    {
      sub_D0048(4, 103, 65, (int)"crypto/rsa/rsa_ossl.c", 536);
      v19 = -1;
      goto LABEL_12;
    }
    if ( v15 < a1 )
    {
      v19 = -1;
      sub_D0048(4, 103, 108, (int)"crypto/rsa/rsa_ossl.c", 545);
LABEL_12:
      sub_130C74(v10);
      sub_130B5C(v10);
      sub_E0758(v18, v15, (size_t)"crypto/rsa/rsa_ossl.c");
      return v19;
    }
    if ( !sub_B8AEC(a2, a1, v25) )
      goto LABEL_24;
    if ( sub_B82F8(v25, *(int **)(a4 + 16)) >= 0 )
    {
      sub_D0048(4, 103, 132, (int)"crypto/rsa/rsa_ossl.c", 554);
      v19 = -1;
      goto LABEL_12;
    }
    if ( (*(_DWORD *)(a4 + 64) & 2) != 0
      && !sub_B96D8((int **)(a4 + 68), *(_DWORD *)(a4 + 92), *(int ***)(a4 + 16), v10)
      || !(*(int (__fastcall **)(_DWORD *, int *, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)(a4 + 8) + 24))(
            v11,
            v25,
            *(_DWORD *)(a4 + 20),
            *(_DWORD *)(a4 + 16),
            v10,
            *(_DWORD *)(a4 + 68)) )
    {
LABEL_24:
      v19 = -1;
      goto LABEL_12;
    }
    if ( a5 == 5 )
    {
      if ( (*(_DWORD *)sub_1335CC(v11) & 0xF) != 0xC && !BN_sub(v11, *(_DWORD *)(a4 + 16), v11) )
        goto LABEL_24;
      v23 = sub_B8CD4(v11, (int)v18, v15);
      v19 = sub_FBBE4(a3, v15, v18, v23, v15);
    }
    else
    {
      v22 = sub_B8CD4(v11, (int)v18, v15);
      v19 = v22;
      if ( a5 == 1 )
      {
        v19 = sub_F9D64(a3, v15, v18, v22, v15);
      }
      else
      {
        if ( a5 != 3 )
        {
          v19 = -1;
          sub_D0048(4, 103, 118, (int)"crypto/rsa/rsa_ossl.c", 584);
          goto LABEL_12;
        }
        memcpy(a3, v18, v22);
      }
    }
    if ( v19 < 0 )
      sub_D0048(4, 103, 114, (int)"crypto/rsa/rsa_ossl.c", 588);
    goto LABEL_12;
  }
  sub_D0048(4, 103, 105, (int)"crypto/rsa/rsa_ossl.c", 511);
  return -1;
}

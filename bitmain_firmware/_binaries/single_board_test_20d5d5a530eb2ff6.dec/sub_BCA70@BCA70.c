int __fastcall sub_BCA70(int a1, _BYTE **a2)
{
  int v4; // r3
  size_t v5; // r5
  _BYTE *v6; // r0
  _BYTE *v7; // r6
  _DWORD *v8; // r3
  _DWORD *v9; // r2
  int v10; // r7
  int v11; // r0
  int v12; // r1
  int v13; // lr
  int v14; // r0
  int v15; // r1
  _BYTE *v16; // r3
  _BYTE *v17; // r7
  int v18; // r2
  size_t v19; // r2
  _BYTE *v21; // [sp+Ch] [bp-4h] BYREF

  v21 = 0;
  if ( sub_BD35C() )
  {
    v4 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 )
      v5 = *(_DWORD *)(a1 + 8);
    else
      v5 = *(_DWORD *)(a1 + 48) + *(_DWORD *)(a1 + 36) + 47;
    if ( !a2 )
      return v5;
    v6 = *a2;
    if ( *a2 )
    {
      v7 = 0;
      v21 = *a2;
      *a2 = &v6[v5];
    }
    else
    {
      v6 = (_BYTE *)CRYPTO_malloc(v5, "crypto/ct/ct_oct.c", 227);
      v7 = v6;
      v21 = v6;
      if ( !v6 )
      {
        sub_D0048(50, 107, 65, "crypto/ct/ct_oct.c", 229);
        goto LABEL_17;
      }
      v4 = *(_DWORD *)a1;
      *a2 = v6;
    }
    if ( v4 )
    {
      memcpy(v6, *(const void **)(a1 + 4), v5);
      return v5;
    }
    v21 = v6 + 1;
    *v6 = 0;
    v8 = *(_DWORD **)(a1 + 12);
    v9 = v21;
    v10 = v8[1];
    v11 = v8[2];
    v12 = v8[3];
    *(_DWORD *)v21 = *v8;
    v9[1] = v10;
    v9[2] = v11;
    v9[3] = v12;
    v13 = v8[4];
    v14 = v8[6];
    v15 = v8[7];
    v9[5] = v8[5];
    v9[4] = v13;
    v9[6] = v14;
    v9[7] = v15;
    v16 = v21;
    v17 = v21 + 42;
    v21[32] = *(_BYTE *)(a1 + 31);
    v16[33] = *(_WORD *)(a1 + 30);
    v16[34] = BYTE1(*(_DWORD *)(a1 + 28));
    v16[35] = *(_DWORD *)(a1 + 28);
    v16[36] = *(_BYTE *)(a1 + 27);
    v16[37] = *(_WORD *)(a1 + 26);
    v18 = *(_DWORD *)(a1 + 24);
    v21 = v17;
    v16[38] = BYTE1(v18);
    v16[39] = *(_DWORD *)(a1 + 24);
    v16[40] = BYTE1(*(_DWORD *)(a1 + 36));
    v16[41] = *(_DWORD *)(a1 + 36);
    v19 = *(_DWORD *)(a1 + 36);
    if ( v19 )
    {
      memcpy(v17, *(const void **)(a1 + 32), v19);
      v21 = &v17[*(_DWORD *)(a1 + 36)];
    }
    if ( sub_BC9B8(a1, (int *)&v21) > 0 )
      return v5;
  }
  else
  {
    v7 = 0;
    sub_D0048(50, 107, 106, "crypto/ct/ct_oct.c", 206);
  }
LABEL_17:
  CRYPTO_free(v7, "crypto/ct/ct_oct.c", 253);
  return -1;
}

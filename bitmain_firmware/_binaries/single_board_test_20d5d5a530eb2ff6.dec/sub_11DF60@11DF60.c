int __fastcall sub_11DF60(int a1, int a2)
{
  int v3; // r0
  int *v4; // r4
  _DWORD *v5; // r0
  _DWORD *v6; // r6
  int *v7; // r5
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int *v12; // r4
  int v13; // r7
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r1

  v3 = sub_11DEC8(a2);
  if ( v3 )
  {
    v4 = (int *)v3;
    v5 = CRYPTO_malloc((void *)0x38);
    v6 = v5;
    if ( v5 )
    {
      v7 = v5;
      v8 = *v4;
      v9 = v4[1];
      v10 = v4[2];
      v11 = v4[3];
      v12 = v4 + 4;
      *v7 = v8;
      v7[1] = v9;
      v7[2] = v10;
      v7[3] = v11;
      v7 += 4;
      v13 = v9 | 1;
      v14 = *v12;
      v15 = v12[1];
      v16 = v12[2];
      v17 = v12[3];
      v12 += 4;
      *v7 = v14;
      v7[1] = v15;
      v7[2] = v16;
      v7[3] = v17;
      v7 += 4;
      v18 = *v12;
      v19 = v12[1];
      v20 = v12[2];
      v21 = v12[3];
      v12 += 4;
      *v7 = v18;
      v7[1] = v19;
      v7[2] = v20;
      v7[3] = v21;
      v7 += 4;
      v22 = v12[1];
      *v7 = *v12;
      v7[1] = v22;
      *v6 = a1;
      v6[1] = v13;
      return sub_11DE64((int)v6);
    }
    sub_D0048(34, 106, 65, (int)"crypto/x509v3/v3_lib.c", 96);
  }
  else
  {
    sub_D0048(34, 106, 102, (int)"crypto/x509v3/v3_lib.c", 92);
  }
  return 0;
}

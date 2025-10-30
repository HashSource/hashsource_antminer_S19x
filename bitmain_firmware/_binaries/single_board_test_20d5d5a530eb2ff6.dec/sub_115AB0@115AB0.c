int __fastcall sub_115AB0(int **a1, void **a2)
{
  int *v3; // r7
  size_t *v4; // r3
  size_t v5; // r4
  int result; // r0
  int v7; // r4
  size_t *v8; // r0
  int v9; // r8
  void **v10; // r6
  int v11; // r5
  void **v12; // r0
  bool v13; // cc
  unsigned int v14; // r1
  signed int v15; // r6
  size_t *v16; // [sp+8h] [bp-Ch] BYREF
  _BYTE *v17; // [sp+Ch] [bp-8h] BYREF

  v3 = *a1;
  if ( !(*a1)[1] )
    goto LABEL_2;
  v7 = 0;
  v8 = (size_t *)sub_10BFCC();
  v16 = v8;
  if ( !v8 )
  {
LABEL_18:
    sub_10BFDC((int)v8, (void (__fastcall *)(int))sub_11568C);
    sub_D0048(13, 203, 65, (int)"crypto/x509/x_name.c", 276);
    return -1;
  }
  v9 = -1;
  v10 = 0;
  while ( 1 )
  {
    v13 = v7 < sub_10C010(*v3);
    v14 = v7++;
    if ( !v13 )
      break;
    v11 = sub_10C01C((_DWORD *)*v3, v14);
    if ( *(_DWORD *)(v11 + 8) != v9 )
    {
      v12 = sub_10BFCC();
      v10 = v12;
      if ( !v12 )
        goto LABEL_20;
      if ( !sub_10BD3C((int *)v16, (int)v12) )
      {
        sub_10BDB4(v10);
        v8 = v16;
        goto LABEL_18;
      }
      v9 = *(_DWORD *)(v11 + 8);
    }
    if ( !sub_10BD3C((int *)v10, v11) )
      goto LABEL_20;
  }
  v15 = sub_B0D50(&v16, 0, byte_20F580, -1, -1);
  if ( !sub_BAE84((size_t *)v3[2], v15) )
  {
LABEL_20:
    v8 = v16;
    goto LABEL_18;
  }
  v17 = *(_BYTE **)(v3[2] + 4);
  sub_B0D50(&v16, &v17, byte_20F580, -1, -1);
  sub_10BFDC((int)v16, (void (__fastcall *)(int))sub_11568C);
  v3[1] = 0;
  if ( v15 < 0 )
    return v15;
  CRYPTO_free((void *)v3[3]);
  v3[3] = 0;
  if ( !sub_10C010(*v3) )
  {
    v3[4] = 0;
    goto LABEL_2;
  }
  if ( !sub_1157AC(v3) )
    return -1;
LABEL_2:
  v4 = (size_t *)v3[2];
  v5 = *v4;
  result = *v4;
  if ( a2 )
  {
    memcpy(*a2, (const void *)v4[1], *v4);
    result = v5;
    *a2 = (char *)*a2 + v5;
  }
  return result;
}

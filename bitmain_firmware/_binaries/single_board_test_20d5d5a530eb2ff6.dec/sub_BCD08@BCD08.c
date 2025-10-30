int __fastcall sub_BCD08(int a1, int *a2, int a3)
{
  int *v4; // r8
  unsigned int v5; // r7
  int v6; // r1
  int v7; // r10
  _BYTE *v8; // r1
  unsigned int v9; // r7
  int v10; // r4
  _BYTE *v11; // r5
  int v12; // r0
  int v13; // r0
  bool v14; // cc
  int v15; // r1
  int *v17; // r1
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  _BYTE *v22; // [sp+Ch] [bp-4h] BYREF

  v4 = a2;
  v5 = 2;
  v22 = 0;
  if ( a2 )
  {
    v6 = *a2;
    v7 = 0;
    if ( !v6 )
    {
      v20 = sub_BCD08();
      if ( v20 == -1 )
      {
        sub_D0048(50, 108, 105, "crypto/ct/ct_oct.c", 330);
        return -1;
      }
      v7 = 1;
      v21 = CRYPTO_malloc(v20, "crypto/ct/ct_oct.c", 333);
      *v4 = v21;
      v6 = v21;
      if ( !v21 )
      {
        sub_D0048(50, 108, 65, "crypto/ct/ct_oct.c", 334);
        return -1;
      }
    }
    v8 = (_BYTE *)(v6 + 2);
    v22 = v8;
    v9 = 2;
    v10 = 0;
    while ( 1 )
    {
      v14 = v10 < sub_10C010(a1, v8, a3);
      v15 = v10++;
      if ( !v14 )
        break;
      v11 = v22;
      v22 += 2;
      v12 = sub_10C01C(a1, v15);
      v13 = sub_BCA70(v12, &v22);
      a3 = v13 + 2;
      v9 += v13 + 2;
      if ( v13 == -1 )
        goto LABEL_14;
      *v11 = BYTE1(v13);
      v11[1] = v13;
    }
    if ( v9 < 0x10000 )
    {
      v22 = (_BYTE *)*v4;
      *v22 = (unsigned __int16)(v9 - 2) >> 8;
      v22[1] = v9 - 2;
      if ( !v7 )
        *v4 += v9;
      return v9;
    }
LABEL_14:
    if ( !v7 )
      return -1;
    CRYPTO_free(*v4, "crypto/ct/ct_oct.c", 370);
    *v4 = 0;
    return -1;
  }
  else
  {
    while ( 1 )
    {
      v14 = sub_10C010(a1, a2, a3) <= (int)v4;
      v17 = v4;
      v4 = (int *)((char *)v4 + 1);
      if ( v14 )
        break;
      v18 = sub_10C01C(a1, v17);
      v19 = sub_BCA70(v18, 0);
      a3 = v19 + 1;
      v5 += v19 + 2;
      if ( v19 == -1 )
        return -1;
    }
    if ( v5 >= 0x10000 )
      return -1;
    return v5;
  }
}

int __fastcall sub_B612C(int a1, int a2, signed int a3, _DWORD *a4)
{
  signed int *v4; // r4
  int v9; // r0
  int result; // r0
  int v11; // r5
  int v12; // r0
  int v13; // r0
  int v14; // r5
  int v15; // r6
  int v16; // r7
  int v17; // r5
  int v18; // r0
  int v19; // r9
  signed int v20; // r0
  signed int v21; // r5
  int v22; // r2
  signed int v23; // r1
  signed int v24; // r3
  int v25; // r2
  unsigned __int8 *v26; // r3
  unsigned __int8 *v27; // r1
  int v28; // t1
  int v29; // r5
  void *v30; // r0
  char v31[4]; // [sp+Ch] [bp-4h] BYREF

  v4 = *(signed int **)(a1 + 36);
  if ( a2 == 12 )
  {
    if ( sub_B6FB4(a4, 117, *v4, 0) )
      return sub_B6FB4(a4, 117, v4[1], 1) != 0;
    return 0;
  }
  if ( a2 > 12 )
  {
    if ( a2 == 101 )
    {
      if ( *(_DWORD *)(a1 + 40) )
      {
        sub_B66FC(a1, 15);
        v14 = sub_B6ECC(*(_DWORD *)(a1 + 40), a2, a3, a4);
        sub_B724C(a1);
        return v14;
      }
      return 0;
    }
    if ( a2 > 101 )
    {
      if ( a2 != 117 )
      {
        if ( a2 != 122 )
        {
          if ( a2 != 116 )
            goto LABEL_8;
          v22 = v4[3];
          v23 = v4[2];
          if ( v22 > 0 )
          {
            v24 = v4[4];
            result = 0;
            v25 = v22 + v24;
            v26 = (unsigned __int8 *)(v24 + v23);
            v27 = (unsigned __int8 *)(v23 + v25);
            do
            {
              v28 = *v26++;
              if ( v28 == 10 )
                ++result;
            }
            while ( v26 != v27 );
            return result;
          }
          return 0;
        }
        if ( a3 <= *v4 )
        {
          v30 = (void *)v4[2];
          goto LABEL_66;
        }
        v29 = CRYPTO_malloc(a3, "crypto/bio/bf_buff.c", 292);
        if ( v29 )
        {
          CRYPTO_free(v4[2], "crypto/bio/bf_buff.c", 295);
          v30 = (void *)v29;
          v4[2] = v29;
LABEL_66:
          v4[3] = a3;
          v4[4] = 0;
          memcpy(v30, a4, a3);
          return 1;
        }
LABEL_74:
        sub_D0048(32, 114, 65, "crypto/bio/bf_buff.c", 407);
        return 0;
      }
      if ( a4 )
      {
        if ( *a4 )
        {
          v15 = *v4;
          v16 = a3;
        }
        else
        {
          v16 = v4[1];
          v15 = a3;
        }
      }
      else
      {
        v16 = a3;
        v15 = a3;
      }
      v17 = v4[5];
      v18 = v17;
      if ( v15 <= 4096 || v15 == *v4 )
      {
        if ( v16 <= 4096 )
          return 1;
        v19 = v4[2];
        if ( v16 == v4[1] )
        {
LABEL_38:
          if ( v17 != v18 )
          {
            CRYPTO_free(v18, "crypto/bio/bf_buff.c", 341);
            v4[5] = v17;
            v4[1] = v16;
            v4[7] = 0;
            v4[6] = 0;
            return 1;
          }
          return 1;
        }
      }
      else
      {
        v19 = CRYPTO_malloc(a3, "crypto/bio/bf_buff.c", 321);
        if ( !v19 )
          goto LABEL_74;
        if ( v16 <= 4096 || v16 == v4[1] )
          goto LABEL_35;
      }
      v17 = CRYPTO_malloc(a3, "crypto/bio/bf_buff.c", 326);
      if ( !v17 )
      {
        if ( v4[2] != v19 )
          CRYPTO_free(v19, "crypto/bio/bf_buff.c", 329);
        goto LABEL_74;
      }
LABEL_35:
      v20 = v4[2];
      if ( v20 == v19 )
      {
        v18 = v4[5];
      }
      else
      {
        CRYPTO_free(v20, "crypto/bio/bf_buff.c", 334);
        v18 = v4[5];
        v4[2] = v19;
        *v4 = v15;
        v4[4] = 0;
        v4[3] = 0;
      }
      goto LABEL_38;
    }
    if ( a2 != 13 )
    {
      if ( a2 == 29 )
      {
        sub_B6040(a1, v31, 0);
        v21 = v4[3];
        if ( v21 >= a3 )
          v21 = a3;
        memcpy(a4, (const void *)(v4[2] + v4[4]), v21);
        return v21;
      }
LABEL_8:
      v9 = *(_DWORD *)(a1 + 40);
      if ( v9 )
        return sub_B6ECC(v9, a2, a3, a4);
      return 0;
    }
    result = v4[6];
    if ( result )
      return result;
LABEL_50:
    v9 = *(_DWORD *)(a1 + 40);
    if ( v9 )
      return sub_B6ECC(v9, a2, a3, a4);
    return 0;
  }
  if ( a2 == 3 )
    return v4[6];
  if ( a2 <= 3 )
  {
    if ( a2 == 1 )
    {
      v9 = *(_DWORD *)(a1 + 40);
      v4[4] = 0;
      v4[3] = 0;
      v4[7] = 0;
      v4[6] = 0;
      if ( v9 )
        return sub_B6ECC(v9, a2, a3, a4);
      return 0;
    }
    if ( a2 == 2 )
    {
      if ( v4[3] <= 0 )
      {
        v9 = *(_DWORD *)(a1 + 40);
        return sub_B6ECC(v9, a2, a3, a4);
      }
      return 0;
    }
    goto LABEL_8;
  }
  if ( a2 == 10 )
  {
    result = v4[3];
    if ( result )
      return result;
    goto LABEL_50;
  }
  if ( a2 != 11 )
    goto LABEL_8;
  v9 = *(_DWORD *)(a1 + 40);
  if ( !v9 )
    return 0;
  if ( v4[6] <= 0 )
    return sub_B6ECC(v9, a2, a3, a4);
  while ( 1 )
  {
    sub_B66FC(a1, 15);
    if ( v4[6] <= 0 )
    {
      v13 = *(_DWORD *)(a1 + 40);
      v4[6] = 0;
      v4[7] = 0;
      return sub_B6ECC(v13, 11, a3, a4);
    }
    v11 = sub_B69CC(*(_DWORD *)(a1 + 40), v4[5] + v4[7], v4[6]);
    sub_B724C(a1);
    if ( v11 <= 0 )
      break;
    v12 = v4[6] - v11;
    v4[7] += v11;
    v4[6] = v12;
  }
  return v11;
}

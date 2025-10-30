int __fastcall sub_C8A04(int ***a1, unsigned int *a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r5
  int v10; // r7
  int **v11; // r4
  int *v12; // r8
  int *v13; // r0
  int *v14; // r6
  int v15; // r3
  int v16; // r8
  int v17; // r3
  unsigned int v18; // r8
  int v19; // r0
  int v20; // r11
  int v21; // r0
  int v22; // r11
  int **v23; // r0

  v8 = sub_130B08();
  v9 = v8;
  if ( v8 )
  {
    sub_130BC0(v8);
    v10 = sub_130CCC(v9);
    if ( !v10 )
    {
      v11 = 0;
      v14 = 0;
      sub_D0048(16, 257, 65, "crypto/ec/ecdh_ossl.c", 55);
      goto LABEL_20;
    }
    v11 = (int **)sub_C59E4(a4);
    if ( !v11 )
    {
      v10 = 0;
      v14 = 0;
      sub_D0048(16, 257, 125, "crypto/ec/ecdh_ossl.c", 61);
      goto LABEL_20;
    }
    v12 = (int *)sub_C59B8(a4);
    if ( (sub_C5BD4(a4) & 0x1000) != 0 )
    {
      if ( !sub_C6250((int)v12, v10) || !sub_BA0CC((int **)v10, (int **)v10, v11, v9) )
      {
        v11 = 0;
        sub_D0048(16, 257, 65, "crypto/ec/ecdh_ossl.c", 70);
        v10 = 0;
        v14 = 0;
        goto LABEL_20;
      }
      v11 = (int **)v10;
    }
    v13 = sub_C63F4(v12);
    v14 = v13;
    if ( v13 )
    {
      if ( sub_C7330(v12, v13, 0, a3, (int)v11, v9) )
      {
        if ( sub_C6D34(v12, v14, v10, 0, v9) )
        {
          v15 = sub_C638C((int)v12);
          v16 = v15 + 14;
          v17 = v15 + 7;
          if ( v17 < 0 )
            v17 = v16;
          v18 = v17 >> 3;
          v19 = sub_B85BC((_DWORD *)v10);
          v20 = v19 + 14;
          v21 = v19 + 7;
          if ( v21 < 0 )
            v21 = v20;
          v22 = v21 >> 3;
          if ( v18 < v21 >> 3 )
          {
            v11 = 0;
            sub_D0048(16, 257, 68, "crypto/ec/ecdh_ossl.c", 94);
            v10 = 0;
          }
          else
          {
            v23 = (int **)CRYPTO_malloc(v18, "crypto/ec/ecdh_ossl.c", 97);
            v11 = v23;
            if ( v23 )
            {
              memset(v23, 0, v18 - v22);
              if ( v22 == sub_B8648((_DWORD *)v10, (int)v11 + v18 - v22) )
              {
                *a1 = v11;
                v10 = 1;
                *a2 = v18;
                v11 = 0;
              }
              else
              {
                sub_D0048(16, 257, 3, "crypto/ec/ecdh_ossl.c", 104);
                v10 = 0;
              }
            }
            else
            {
              sub_D0048(16, 257, 65, "crypto/ec/ecdh_ossl.c", 98);
              v10 = 0;
            }
          }
        }
        else
        {
          v11 = 0;
          v10 = 0;
          sub_D0048(16, 257, 155, "crypto/ec/ecdh_ossl.c", 87);
        }
      }
      else
      {
        v11 = 0;
        v10 = 0;
        sub_D0048(16, 257, 155, "crypto/ec/ecdh_ossl.c", 82);
      }
    }
    else
    {
      v11 = 0;
      sub_D0048(16, 257, 65, "crypto/ec/ecdh_ossl.c", 77);
      v10 = 0;
    }
  }
  else
  {
    v11 = 0;
    v10 = 0;
    v14 = 0;
  }
LABEL_20:
  sub_C6508((int)v14);
  sub_130C74(v9);
  sub_130B5C(v9);
  CRYPTO_free(v11, "crypto/ec/ecdh_ossl.c", 118);
  return v10;
}

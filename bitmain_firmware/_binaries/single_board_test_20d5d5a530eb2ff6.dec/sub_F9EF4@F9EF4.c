int __fastcall sub_F9EF4(_BYTE *a1, int a2, int a3, int a4, signed int a5)
{
  bool v5; // cc
  unsigned int v6; // r5
  char *v10; // r0
  _BYTE *v11; // lr
  unsigned __int8 *v12; // r10
  signed int v13; // r3
  int v14; // r2
  int v15; // r2
  unsigned __int8 *v16; // r6
  int v17; // r1
  int v18; // lr
  int v19; // r0
  int v20; // r12
  int v21; // t1
  int v22; // r3
  int v23; // r2
  int v24; // r3
  int v25; // r2
  int v26; // r11
  int v27; // r8
  int v28; // r9
  int v29; // r6
  unsigned __int8 *v30; // r5
  unsigned __int8 *v31; // r4
  char v32; // t1
  _BYTE *v33; // r4
  unsigned __int8 *v34; // r6
  int i; // r0
  char v36; // t1
  int v37; // r3
  int v39; // [sp+8h] [bp-3Ch]
  int v40; // [sp+Ch] [bp-38h]

  v5 = a4 <= 0;
  if ( a4 > 0 )
    v5 = a2 <= 0;
  if ( v5 )
    return -1;
  v6 = a4;
  if ( a4 > a5 || a5 <= 10 )
  {
    sub_D0048(4, 113, 159, (int)"crypto/rsa/rsa_pk1.c", 174);
    return -1;
  }
  else
  {
    v10 = (char *)CRYPTO_malloc((void *)a5);
    v11 = (_BYTE *)(a3 + v6);
    v12 = (unsigned __int8 *)&v10[a5];
    v13 = 0;
    if ( v10 )
    {
      do
      {
        ++v13;
        v14 = ~((int)((v6 - 1) & ~v6) >> 31);
        v11 = (_BYTE *)((__PAIR64__((unsigned int)v11, ((int)((v6 - 1) & ~v6) >> 31) & 1) - 1) >> 32);
        v6 = (__PAIR64__(v6, ((int)((v6 - 1) & ~v6) >> 31) & 1) - 1) >> 32;
        v15 = (unsigned __int8)(v14 & *v11);
        *--v12 = v15;
      }
      while ( a5 > v13 );
      v16 = v12 + 1;
      v17 = 0;
      v18 = 0;
      v19 = 2;
      v20 = (((v15 - 1) & ~v15) >> 31) & ((((v12[1] ^ 2) - 1) & ~(v12[1] ^ 2)) >> 31);
      do
      {
        v21 = *++v16;
        v22 = ((v21 - 1) & ~v21) >> 31;
        v23 = v22 & ~v18;
        v18 |= v22;
        v24 = ~v23;
        v25 = v19++ & v23;
        v17 = v25 | v24 & v17;
      }
      while ( a5 > v19 );
      v26 = a5 - 11;
      v27 = a5 - (v17 + 1);
      v40 = (a5 - 11) & (((a2 ^ (a5 - 11) | (a5 - 11 - a2) ^ a2) ^ (a5 - 11)) >> 31)
          | ~(((a2 ^ (a5 - 11) | (a5 - 11 - a2) ^ a2) ^ (a5 - 11)) >> 31) & a2;
      v39 = v20 & ~((((v17 - 10) ^ 0xA | v17 ^ 0xA) ^ v17) >> 31) & ~((((a2 - v27) ^ v27 | a2 ^ v27) ^ a2) >> 31);
      if ( a5 - 11 > 1 )
      {
        v28 = 1;
        do
        {
          if ( a5 - v28 > 11 )
          {
            v30 = &v12[v28 + 10];
            v31 = v12 + 11;
            do
            {
              v32 = *++v30;
              v29 = ~((((v28 & (v26 - v27)) - 1) & ~(v28 & (v26 - v27))) >> 31);
              *v31 = ~(_BYTE)v29 & *v31 | v29 & v32;
              ++v31;
            }
            while ( &v12[a5 - v28] != v31 );
          }
          v28 *= 2;
        }
        while ( v26 > v28 );
        v27 = a5 - (v17 + 1);
      }
      if ( v40 )
      {
        v33 = a1;
        v34 = v12 + 10;
        for ( i = 0; i != v40; ++i )
        {
          v36 = *++v34;
          v37 = ((i - v27) ^ v27 | v27 ^ i) ^ i;
          *v33 = *v33 & ~(v39 & (v37 >> 31)) | v36 & v39 & (v37 >> 31);
          ++v33;
        }
      }
      sub_E0758(v12, a5, (size_t)"crypto/rsa/rsa_pk1.c");
      sub_D0048(4, 113, 159, (int)"crypto/rsa/rsa_pk1.c", 251);
      sub_D1364(v39 & 1);
      return v27 & v39 | ~v39;
    }
    else
    {
      sub_D0048(4, 113, 65, (int)"crypto/rsa/rsa_pk1.c", 180);
      return -1;
    }
  }
}

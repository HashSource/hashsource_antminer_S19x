int __fastcall sub_FB860(_BYTE *a1, int a2, int a3, int a4, signed int a5)
{
  bool v5; // cc
  unsigned int v6; // r5
  char *v10; // r0
  _BYTE *v11; // lr
  unsigned __int8 *v12; // r10
  signed int v13; // r3
  int v14; // r2
  int v15; // r2
  unsigned __int8 *v16; // r8
  int v17; // r0
  int v18; // r3
  int v19; // r5
  int v20; // lr
  int v21; // r9
  char v22; // r11
  int v23; // t1
  int v24; // r2
  int v25; // r6
  int v26; // r12
  int v27; // r8
  int v28; // r9
  int v29; // r3
  int v30; // r11
  int v31; // r3
  int v32; // r9
  int v33; // r6
  unsigned __int8 *v34; // r5
  unsigned __int8 *v35; // r4
  char v36; // t1
  int v37; // r2
  _BYTE *v38; // r4
  unsigned __int8 *v39; // r6
  int i; // r0
  char v41; // t1
  int v42; // r3
  int v44; // [sp+Ch] [bp-60h]
  unsigned __int8 v45; // [sp+10h] [bp-5Ch]
  __int16 v47; // [sp+18h] [bp-54h]
  unsigned __int8 v48; // [sp+48h] [bp-24h]

  v5 = a4 <= 0;
  if ( a4 > 0 )
    v5 = a2 <= 0;
  if ( v5 )
    return -1;
  v6 = a4;
  if ( a4 > a5 || a5 <= 10 )
  {
    sub_D0048(4, 114, 111, (int)"crypto/rsa/rsa_ssl.c", 74);
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
      v19 = 0;
      v20 = 2;
      v21 = (((v15 - 1) & ~v15) >> 31) & ((((v12[1] ^ 2) - 1) & ~(v12[1] ^ 2)) >> 31);
      v22 = ~(_BYTE)v21;
      v45 = ~(_BYTE)v21;
      do
      {
        v23 = *++v16;
        v24 = ((v23 - 1) & ~v23) >> 31;
        v25 = v24 & ~v19;
        v19 |= v24;
        v26 = v20++ & v25;
        v18 = (v18 + !(v19 & 1)) & (v19 | ((((v23 ^ 3) - 1) & ~(v23 ^ 3)) >> 31));
        v17 = v26 | v17 & ~v25;
      }
      while ( a5 > v20 );
      v27 = a5 - (v17 + 1);
      v28 = v21 & ~(((v17 ^ 0xA | (v17 - 10) ^ 0xA) ^ v17) >> 31);
      v29 = v28 & ((v18 ^ (v18 ^ 8 | (v18 - 8) ^ 8)) >> 31);
      v48 = v22 | v28;
      v30 = a5 - 11;
      v44 = v29 & ~(((a2 ^ v27 | (a2 - v27) ^ v27) ^ a2) >> 31);
      v47 = (unsigned __int8)(v44 | ~(_BYTE)v29)
          & ((~v48 & 0x71 | v45 & v48 & 0x6B) & (unsigned __int8)(v29 | ~(_BYTE)v28)
           | ~((unsigned __int8)v29 | (unsigned __int8)~(_BYTE)v28) & 0x73)
          | ~((unsigned __int8)v44 | (unsigned __int8)~(_BYTE)v29) & 0x6D;
      v31 = (a5 - 11) & (((a2 ^ (a5 - 11) | (a5 - 11 - a2) ^ a2) ^ (a5 - 11)) >> 31)
          | a2 & ~(((a2 ^ (a5 - 11) | (a5 - 11 - a2) ^ a2) ^ (a5 - 11)) >> 31);
      if ( a5 - 11 > 1 )
      {
        v32 = 1;
        do
        {
          if ( a5 - v32 > 11 )
          {
            v34 = &v12[v32 + 10];
            v35 = v12 + 11;
            do
            {
              v36 = *++v34;
              v33 = ~((((v32 & (v30 - v27)) - 1) & ~(v32 & (v30 - v27))) >> 31);
              *v35 = ~(_BYTE)v33 & *v35 | v33 & v36;
              ++v35;
            }
            while ( &v12[a5 - v32] != v35 );
          }
          v32 *= 2;
        }
        while ( v30 > v32 );
        v27 = a5 - (v17 + 1);
      }
      if ( v31 )
      {
        v37 = v31;
        v38 = a1;
        v39 = v12 + 10;
        for ( i = 0; i != v37; ++i )
        {
          v41 = *++v39;
          v42 = ((i - v27) ^ v27 | v27 ^ i) ^ i;
          *v38 = *v38 & ~(v44 & (v42 >> 31)) | v41 & v44 & (v42 >> 31);
          ++v38;
        }
      }
      sub_E0758(v12, a5, (size_t)"crypto/rsa/rsa_ssl.c");
      sub_D0048(4, 114, v47, (int)"crypto/rsa/rsa_ssl.c", 172);
      sub_D1364(v44 & 1);
      return v27 & v44 | ~v44;
    }
    else
    {
      sub_D0048(4, 114, 65, (int)"crypto/rsa/rsa_ssl.c", 80);
      return -1;
    }
  }
}

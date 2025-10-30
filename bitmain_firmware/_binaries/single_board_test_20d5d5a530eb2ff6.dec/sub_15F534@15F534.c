int __fastcall sub_15F534(
        const char *a1,
        size_t a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        _DWORD *a9,
        int a10)
{
  int v10; // r4
  char v13; // r8
  unsigned __int64 v14; // r0
  unsigned __int64 v15; // r6
  bool v16; // cf
  __int64 v17; // r2
  unsigned __int64 v18; // r8
  bool v19; // cf
  int result; // r0
  _DWORD *v21; // r0
  int v22; // r10
  unsigned __int64 v23; // r8
  int v24; // r11
  _DWORD *v25; // r0
  int *v26; // r4
  __int64 v27; // r2
  int v28; // r1
  bool v29; // zf
  int v30; // r1
  int v31; // r1
  unsigned __int64 v32; // r4
  int v33; // r5
  int v34; // r2
  int *v35; // r2
  int v36; // r1
  int *v37; // r4
  _DWORD *v38; // r3
  __int64 v39; // r6
  int v40; // r0
  int v41; // r4
  int v42; // r3
  int v43; // r4
  int v44; // t1
  __int64 v45; // r2
  int v46; // r1
  _DWORD *v47; // r3
  int v48; // t1
  _DWORD *v49; // r0
  int v50; // r4
  int v51; // r2
  unsigned __int64 v52; // r0
  int v53; // r2
  unsigned __int64 v54; // [sp+18h] [bp-74h]
  int v55; // [sp+28h] [bp-64h]
  int v56; // [sp+30h] [bp-5Ch]
  _DWORD *v57; // [sp+34h] [bp-58h]
  unsigned __int64 v58; // [sp+40h] [bp-4Ch]
  _DWORD *v59; // [sp+48h] [bp-44h]
  unsigned __int64 v62; // [sp+70h] [bp-1Ch]
  _DWORD *v63; // [sp+7Ch] [bp-10h]
  size_t v64; // [sp+80h] [bp-Ch]

  v10 = a5 < 2;
  if ( !a7 )
    v10 = 1;
  if ( !a6 )
    v10 |= 1u;
  if ( v10 )
    return 0;
  if ( (a5 & (a5 - 1)) != 0 )
    return 0;
  if ( sub_189928(0x3FFFFFFF, 0, a6, HIDWORD(a6)) < a7 )
  {
    v51 = 174;
LABEL_54:
    sub_D0048(6, 181, 172, (int)"crypto/evp/pbe_scrypt.c", v51);
    return 0;
  }
  v13 = 16 * a6;
  if ( 16 * a6 < 0x40 )
  {
    LODWORD(v14) = 1 << v13;
    HIDWORD(v14) = (1 << (v13 - 32)) | (1u >> (32 - v13));
    if ( a5 >= v14 )
    {
      v51 = 185;
      goto LABEL_54;
    }
  }
  v15 = a6 * (a7 << 7);
  v16 = 1;
  if ( is_mul_ok(a6, (_DWORD)a7 << 7) )
    v16 = (unsigned int)v15 >= 0x80000000;
  if ( v16 )
  {
    v53 = 203;
    goto LABEL_58;
  }
  if ( sub_189928(-1, 0x1FFFFFF, a6, HIDWORD(a6)) < a5 + 2 )
  {
    v53 = 213;
LABEL_58:
    sub_D0048(6, 181, 172, (int)"crypto/evp/pbe_scrypt.c", v53);
    return 0;
  }
  v17 = a6 * ((a5 + 2) << 7);
  if ( ~v17 < v15 )
  {
    v53 = 220;
    goto LABEL_58;
  }
  if ( a8 )
  {
    v18 = a8;
    v19 = HIDWORD(a8) == 0;
    if ( !HIDWORD(a8) )
      v19 = 1;
    if ( !v19 )
      v18 = 0xFFFFFFFFLL;
  }
  else
  {
    v18 = 0x2000000;
  }
  if ( v18 < v15 + v17 )
  {
    v53 = 232;
    goto LABEL_58;
  }
  result = 1;
  if ( a9 )
  {
    v64 = v15 + v17;
    v63 = CRYPTO_malloc((void *)(v15 + v17));
    if ( v63 )
    {
      v21 = sub_D93F0();
      if ( !sub_15E8C8(a1, a2, a3, a4, 1, v21, v15, v63) )
        goto LABEL_52;
      v22 = (int)v63 + v15;
      v23 = 32 * a6;
      v24 = (int)&v63[32 * (_DWORD)a6] + v15;
      v55 = (_DWORD)a6 << 7;
      v56 = ((_DWORD)a6 << 7) + v24;
      v57 = (_DWORD *)((char *)&v63[32 * (_DWORD)a6 - 16] + v15);
      v59 = v63 + 1;
      LODWORD(v62) = 32 * a6 - 9;
      HIDWORD(v15) = a6;
      v58 = 0;
      do
      {
        v25 = v59;
        if ( v23 )
        {
          v26 = (int *)(((_DWORD)a6 << 7) + v24);
          v27 = 0;
          do
          {
            v28 = *((unsigned __int8 *)v25 - 4);
            ++v27;
            ++v25;
            v29 = HIDWORD(v27) == HIDWORD(v23);
            *v26 = v28;
            if ( HIDWORD(v27) == HIDWORD(v23) )
              v29 = (_DWORD)v27 == (_DWORD)v23;
            v30 = v28 | (*((unsigned __int8 *)v25 - 7) << 8);
            *v26 = v30;
            v31 = v30 | (*((unsigned __int8 *)v25 - 6) << 16);
            *v26 = v31;
            *v26++ = v31 | (*((unsigned __int8 *)v25 - 5) << 24);
          }
          while ( !v29 );
          LODWORD(v15) = v56 + ((_DWORD)a6 << 7);
        }
        else
        {
          LODWORD(v15) = ((_DWORD)a6 << 7) + v24;
        }
        v32 = 1;
        do
        {
          ++v32;
          sub_15F0E0(v15, v15 - ((_DWORD)a6 << 7), __SPAIR64__(HIDWORD(a6), HIDWORD(v15)));
          LODWORD(v15) = v15 + v55;
        }
        while ( v32 < a5 );
        v33 = HIDWORD(v15);
        sub_15F0E0(v22, v56 + (((_DWORD)a5 - 1) << 7) * a6, __SPAIR64__(HIDWORD(a6), HIDWORD(v15)));
        v54 = 0;
        HIDWORD(v62) = ((unsigned int)(32 * a6) >= 9) + (unsigned int)(a6 >> 27) - 1;
        do
        {
          sub_189928(*v57, 0, a5, HIDWORD(a5));
          v35 = (int *)(v56 + v34 * v55);
          if ( v23 )
          {
            if ( v23 >= 9 )
            {
              v36 = v24;
              v37 = v35 + 8;
              v38 = (_DWORD *)(v22 + 76);
              v39 = 0;
              do
              {
                v40 = *(v37 - 8);
                v35 = v37;
                __pld(v37 + 11);
                v41 = *(v38 - 19);
                v39 += 8;
                __pld(v38);
                v38 += 8;
                v36 += 32;
                *(_DWORD *)(v36 - 32) = v40 ^ v41;
                *(_DWORD *)(v36 - 28) = *(v35 - 7) ^ *(v38 - 26);
                *(_DWORD *)(v36 - 24) = *(v38 - 25) ^ *(v35 - 6);
                *(_DWORD *)(v36 - 20) = *(v38 - 24) ^ *(v35 - 5);
                *(_DWORD *)(v36 - 16) = *(v35 - 4) ^ *(v38 - 23);
                *(_DWORD *)(v36 - 12) = *(v35 - 3) ^ *(v38 - 22);
                v37 = v35 + 8;
                *(_DWORD *)(v36 - 8) = *(v35 - 2) ^ *(v38 - 21);
                *(_DWORD *)(v36 - 4) = *(v38 - 20) ^ *(v35 - 1);
              }
              while ( v39 != 8 * ((v62 >> 3) + 1) );
              v52 = 8 * ((v62 >> 3) + 1);
            }
            else
            {
              v52 = 0;
            }
            do
            {
              v42 = *(_DWORD *)(v22 + 4 * v52);
              v43 = v52;
              v44 = *v35++;
              ++v52;
              *(_DWORD *)(v24 + 4 * v43) = v42 ^ v44;
            }
            while ( v52 < v23 );
          }
          LODWORD(v45) = v33;
          HIDWORD(v45) = ++v54;
          sub_15F0E0(v22, v24, v45);
        }
        while ( v54 < a5 );
        HIDWORD(v15) = v33;
        if ( v23 )
        {
          v46 = v22 - 4;
          v47 = v59;
          do
          {
            v48 = *(_DWORD *)(v46 + 4);
            v46 += 4;
            *(++v47 - 2) = v48;
          }
          while ( &v59[32 * (_DWORD)a6] != v47 );
        }
        ++v58;
        v59 = (_DWORD *)((char *)v59 + v55);
      }
      while ( v58 < a7 );
      v49 = sub_D93F0();
      v50 = 1;
      if ( !sub_15E8C8(a1, a2, (int)v63, a6 * ((_DWORD)a7 << 7), 1, v49, a10, a9) )
      {
LABEL_52:
        v50 = 0;
        sub_D0048(6, 181, 181, (int)"crypto/evp/pbe_scrypt.c", 261);
      }
      sub_E0758(v63, v64, (size_t)"crypto/evp/pbe_scrypt.c");
      return v50;
    }
    else
    {
      sub_D0048(6, 181, 65, (int)"crypto/evp/pbe_scrypt.c", 242);
      return 0;
    }
  }
  return result;
}

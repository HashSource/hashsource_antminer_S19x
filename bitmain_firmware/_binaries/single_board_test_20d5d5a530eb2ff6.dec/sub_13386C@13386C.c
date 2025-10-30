int __fastcall sub_13386C(_DWORD **a1, _DWORD *a2, _DWORD *a3, _DWORD **a4)
{
  unsigned int v5; // r11
  _DWORD *v7; // r2
  _DWORD *v8; // r8
  _DWORD *v9; // r9
  int v10; // r2
  int v11; // r4
  int v12; // r3
  int v13; // r6
  int v14; // r0
  int v15; // r5
  int v16; // r1
  int v17; // r7
  int v18; // r3
  int v19; // r10
  int v20; // r12
  int v21; // r0
  int v22; // r11
  _DWORD *v23; // r7
  int v24; // r2
  int v25; // r0
  int v26; // r1
  int v27; // r2
  bool v28; // cf
  unsigned int v29; // r2
  unsigned int v30; // r1
  int v31; // r8
  unsigned int v32; // r0
  unsigned int v33; // r4
  int v34; // r6
  _DWORD *v35; // r2
  _DWORD *v36; // r3
  int v37; // r12
  int v38; // r1
  bool v39; // cc
  _DWORD *v40; // r8
  int *v41; // r1
  int v42; // r3
  int *v43; // r6
  int result; // r0
  int v45; // [sp+4h] [bp-60h]
  _DWORD *v46; // [sp+8h] [bp-5Ch]
  unsigned int v49; // [sp+1Ch] [bp-48h]
  _BYTE v50[68]; // [sp+20h] [bp-44h] BYREF

  v5 = (unsigned int)a4[1];
  if ( !sub_B89D8((int)a1, v5) )
    return 0;
  if ( v5 > 0x10 )
  {
    v46 = CRYPTO_malloc((void *)(4 * v5));
    if ( v46 )
    {
      v7 = v46;
      goto LABEL_4;
    }
    return 0;
  }
  v7 = v50;
  v46 = v50;
LABEL_4:
  v8 = (_DWORD *)*a2;
  v9 = (_DWORD *)*a3;
  if ( !*a2 )
    v8 = v7;
  if ( !v9 )
    v9 = v7;
  if ( v5 )
  {
    v10 = a2[1];
    v11 = 0;
    v12 = a2[2];
    v13 = 0;
    v14 = a3[2];
    v15 = 0;
    v16 = a3[1];
    v17 = v10 + 1 - v12;
    v18 = -v10;
    v19 = v10 + 1 - v14;
    v20 = v10 - v16;
    v21 = v5 - v10;
    v49 = v5;
    v22 = v17;
    v23 = v46 - 1;
    v45 = v21;
    do
    {
      v24 = v8[v15];
      v25 = v20 + v18;
      v26 = v9[v13];
      v15 += (unsigned int)(v22 + v18) >> 31;
      v13 += (unsigned int)(v19 + v18) >> 31;
      v27 = v24 & (v18++ >> 31);
      v28 = __CFADD__(v27, v11);
      v29 = v27 + v11;
      v30 = (v26 & (v25 >> 31)) + v29;
      v11 = v28;
      v23[1] = v30;
      ++v23;
      if ( v29 > v30 )
        ++v11;
    }
    while ( v18 != v45 );
    v5 = v49;
    v31 = (int)*a1;
    v32 = v11 - bn_sub_words(*a1, v46, *a4, v49);
    if ( v49 > 8 )
    {
      v34 = 0;
      v35 = v46 + 16;
      v36 = (_DWORD *)(v31 + 64);
      do
      {
        v37 = *(v36 - 16);
        v38 = *(v35 - 16);
        v39 = v49 - 7 > v34 + 9;
        __pld(v35);
        v33 = v34 + 8;
        __pld(v36);
        v34 += 8;
        v36 += 8;
        v35 += 8;
        *(v36 - 24) = (v37 ^ v38) & v32 ^ v37;
        *(v35 - 24) = 0;
        *(v36 - 23) ^= (*(v36 - 23) ^ *(v35 - 23)) & v32;
        *(v35 - 23) = 0;
        *(v36 - 22) ^= (*(v36 - 22) ^ *(v35 - 22)) & v32;
        *(v35 - 22) = 0;
        *(v36 - 21) ^= (*(v36 - 21) ^ *(v35 - 21)) & v32;
        *(v35 - 21) = 0;
        *(v36 - 20) ^= (*(v36 - 20) ^ *(v35 - 20)) & v32;
        *(v35 - 20) = 0;
        *(v36 - 19) ^= (*(v36 - 19) ^ *(v35 - 19)) & v32;
        *(v35 - 19) = 0;
        *(v36 - 18) ^= (*(v36 - 18) ^ *(v35 - 18)) & v32;
        *(v35 - 18) = 0;
        *(v36 - 17) ^= (*(v36 - 17) ^ *(v35 - 17)) & v32;
        *(v35 - 17) = 0;
      }
      while ( v39 );
    }
    else
    {
      v33 = 0;
    }
    v40 = (_DWORD *)(v31 + 4 * v33);
    v41 = &v46[v33];
    do
    {
      ++v33;
      v42 = *v41;
      v43 = v41++;
      *v40 ^= (v42 ^ *v40) & v32;
      ++v40;
      *v43 = 0;
    }
    while ( v49 > v33 );
  }
  else
  {
    bn_sub_words(*a1, v7, *a4, 0);
  }
  result = (int)v46;
  a1[1] = (_DWORD *)v5;
  if ( v46 == (_DWORD *)v50 )
    result = 1;
  a1[3] = 0;
  if ( v46 != (_DWORD *)v50 )
  {
    CRYPTO_free((void *)result);
    return 1;
  }
  return result;
}

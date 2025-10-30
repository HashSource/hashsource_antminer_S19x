int __fastcall sub_167E88(__int64 a1, size_t a2)
{
  int v2; // r4
  int v3; // r5
  int v4; // r7
  int v5; // r3
  signed __int64 v6; // r4
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r8
  __int64 v9; // r6
  int v10; // r12
  int v11; // lr
  int v12; // r2
  unsigned __int64 v13; // r4
  unsigned __int64 v14; // r6
  unsigned int v15; // r3
  unsigned int v16; // r0
  unsigned __int64 v17; // r4
  unsigned __int64 v18; // r2
  __int64 v19; // r4
  int v20; // r12
  _DWORD *v21; // r2
  unsigned int v22; // r3
  int v23; // r2
  unsigned __int64 v24; // r4
  unsigned __int64 v25; // r6
  unsigned int v26; // r3
  unsigned int v27; // lr
  unsigned __int64 v28; // r4
  __int64 v29; // r2
  __int64 v31; // [sp+0h] [bp-78h]
  unsigned __int64 v32; // [sp+8h] [bp-70h]
  __int64 v33; // [sp+10h] [bp-68h]
  int v34; // [sp+24h] [bp-54h]
  __int64 v35; // [sp+28h] [bp-50h]
  int v36; // [sp+28h] [bp-50h]
  unsigned __int64 v37; // [sp+30h] [bp-48h]
  __int64 v38; // [sp+30h] [bp-48h]
  __int64 v39; // [sp+38h] [bp-40h]
  _DWORD *v40; // [sp+38h] [bp-40h]
  void *src; // [sp+40h] [bp-38h]
  unsigned int v42; // [sp+4Ch] [bp-2Ch]
  __int64 v43; // [sp+50h] [bp-28h]
  _DWORD *v44; // [sp+58h] [bp-20h]
  size_t n; // [sp+5Ch] [bp-1Ch]
  size_t v46; // [sp+60h] [bp-18h]
  int v47; // [sp+64h] [bp-14h]

  *(_BYTE *)(*(_DWORD *)(v2 + 100) + 9) = BYTE4(a1);
  *(_DWORD *)(v3 + 68) = v4;
  v5 = *(_DWORD *)(a1 + 40);
  n = a1;
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 += a2;
  v44 = (_DWORD *)HIDWORD(a1);
  v7 = *(_QWORD *)(a1 + 8);
  v46 = a2;
  v43 = v6;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    v47 = 8 - v5;
    if ( a2 < 8 - v5 )
    {
      LODWORD(a1) = memcpy((void *)(v5 + 56 + a1), (const void *)HIDWORD(a1), a2);
      *(_DWORD *)(n + 40) += v46;
      return a1;
    }
    v46 = a2 - (8 - v5);
    memcpy((void *)(v5 + 56 + a1), (const void *)HIDWORD(a1), 8 - v5);
    v10 = *(_DWORD *)(n + 48);
    a1 = *(_QWORD *)(n + 56) ^ v9;
    v44 = (_DWORD *)((char *)v44 + v47);
    v9 = a1;
    if ( v10 > 0 )
    {
      v11 = 0;
      do
      {
        HIDWORD(v35) = v6 >> 19;
        HIDWORD(v39) = v9 >> 16;
        v12 = ((_DWORD)v6 << 13) | (HIDWORD(v6) >> 19);
        v13 = v6 + v7;
        LODWORD(v35) = v12;
        LODWORD(v39) = ((_DWORD)v9 << 16) | HIWORD(HIDWORD(v9));
        v14 = v9 + v8;
        ++v11;
        v37 = __PAIR64__(v13, HIDWORD(v13));
        v15 = HIDWORD(v35) ^ HIDWORD(v13);
        v42 = (__int64)(v35 ^ v13) >> 15;
        v16 = (v12 ^ (unsigned int)v13) << 17;
        v17 = (v35 ^ v13) + v14;
        LODWORD(a1) = v16 | (v15 >> 15);
        v8 = __PAIR64__(v17, HIDWORD(v17));
        v7 = v37 + (v39 ^ v14);
        v18 = __PAIR64__(v42, a1) ^ v17;
        v6 = __PAIR64__(v42, a1) ^ v17;
        v9 = (((v39 ^ v14) << 21) | ((unsigned int)(HIDWORD(v39) ^ HIDWORD(v14)) >> 11)) ^ (unsigned int)v7;
        HIDWORD(v9) ^= HIDWORD(v7);
      }
      while ( v11 != v10 );
      v43 = v18;
    }
    v7 ^= *(_QWORD *)(n + 56);
  }
  src = (void *)(v46 & 7);
  v40 = (_DWORD *)((char *)v44 + v46 - (_DWORD)src);
  if ( v44 != v40 )
  {
    v19 = v43;
    v20 = *(_DWORD *)(n + 48);
    do
    {
      v21 = v44;
      v22 = *v44;
      __pld(v44 + 16);
      LODWORD(v38) = v22;
      HIDWORD(v38) = v21[1];
      v9 ^= __PAIR64__(HIDWORD(v38), v22);
      if ( v20 > 0 )
      {
        v36 = 0;
        do
        {
          HIDWORD(v31) = v19 >> 19;
          HIDWORD(v33) = v9 >> 16;
          v23 = ((_DWORD)v19 << 13) | (HIDWORD(v19) >> 19);
          v24 = v19 + v7;
          LODWORD(v31) = v23;
          LODWORD(v33) = ((_DWORD)v9 << 16) | HIWORD(HIDWORD(v9));
          v25 = v9 + v8;
          v26 = HIDWORD(v31) ^ HIDWORD(v24);
          v27 = (v23 ^ (unsigned int)v24) << 17;
          v32 = __PAIR64__(v24, HIDWORD(v24));
          v34 = (__int64)(v31 ^ v24) >> 15;
          LODWORD(a1) = ((unsigned int)v33 ^ (unsigned int)v25) << 21;
          v28 = (v31 ^ v24) + v25;
          v8 = __PAIR64__(v28, HIDWORD(v28));
          ++v36;
          v7 = v32 + (v33 ^ v25);
          v9 = (((v33 ^ v25) << 21) | ((unsigned int)(HIDWORD(v33) ^ HIDWORD(v25)) >> 11)) ^ (unsigned int)v7;
          HIDWORD(v9) ^= HIDWORD(v7);
          LODWORD(v29) = (v27 | (v26 >> 15)) ^ v28;
          HIDWORD(v29) = v34 ^ HIDWORD(v28);
          v19 = v29;
        }
        while ( v36 != v20 );
      }
      v7 ^= v38;
      v44 += 2;
    }
    while ( v40 != v44 );
    v43 = v19;
  }
  if ( (v46 & 7) != 0 )
    LODWORD(a1) = memcpy((void *)(n + 56), v40, (size_t)src);
  *(_QWORD *)(n + 8) = v7;
  *(_DWORD *)(n + 40) = src;
  *(_QWORD *)(n + 16) = v43;
  *(_QWORD *)(n + 24) = v8;
  *(_QWORD *)(n + 32) = v9;
  return a1;
}

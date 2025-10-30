int __fastcall sub_174D98(int a1, int *a2, int *a3)
{
  int result; // r0
  int v6; // r6
  int v7; // r4
  int *v8; // r1
  _DWORD *v9; // r3
  int *v10; // r2
  int v11; // r0
  int v12; // r5
  int *v13; // r4
  int *v14; // r3
  int v15; // t1
  int v16; // r2
  int v17; // r12
  int v18; // r9
  int v19; // r9
  int v20; // r10
  unsigned int v21; // r7
  int v22; // r3
  _DWORD *v23; // lr
  int v24; // r3
  int v25; // r5
  int v26; // r4
  bool v27; // cf
  int v28; // r3
  int v29; // r3
  int v30; // t1
  unsigned int v31; // r3
  bool v32; // nf
  int v33; // r0
  int v34; // r2
  int *v35; // r9
  unsigned int v36; // r7
  int v37; // r5
  unsigned int v38; // r3
  _DWORD *v39; // r4
  int v40; // r3
  int v41; // lr
  int v42; // r0
  int v43; // r3
  int v44; // r3
  unsigned int v45; // lr
  int v46; // t1

  if ( !*a3 )
  {
    sub_B8930((int **)a1, 0);
    return 1;
  }
  if ( (int *)a1 == a2 )
  {
    v16 = *a3;
    v8 = *(int **)a1;
    v6 = *(_DWORD *)(a1 + 4);
  }
  else
  {
    result = sub_B89D8(a1, a2[1]);
    if ( !result )
      return result;
    v6 = a2[1];
    if ( v6 <= 0 )
    {
      v8 = *(int **)a1;
    }
    else
    {
      v7 = *a2;
      v8 = *(int **)a1;
      if ( v6 <= 8 )
      {
        v11 = 0;
      }
      else
      {
        v9 = (_DWORD *)(v7 + 100);
        v10 = *(int **)a1;
        v11 = 0;
        do
        {
          v12 = *(v9 - 25);
          v11 += 8;
          __pld(v9);
          v9 += 8;
          v10 += 8;
          *(v10 - 8) = v12;
          *(v10 - 7) = *(v9 - 32);
          *(v10 - 6) = *(v9 - 31);
          *(v10 - 5) = *(v9 - 30);
          *(v10 - 4) = *(v9 - 29);
          *(v10 - 3) = *(v9 - 28);
          *(v10 - 2) = *(v9 - 27);
          *(v10 - 1) = *(v9 - 26);
        }
        while ( v11 != ((v6 - 9) & 0xFFFFFFF8) + 8 );
      }
      v13 = (int *)(v7 + 4 * v11);
      v14 = &v8[v11];
      do
      {
        v15 = *v13++;
        ++v11;
        *v14++ = v15;
      }
      while ( v6 > v11 );
    }
    *(_DWORD *)(a1 + 4) = v6;
    v16 = *a3;
  }
  v17 = v6 - 1;
  v18 = (v16 + 63) & (v16 >> 31);
  if ( v16 >= 0 )
    v18 = v16;
  v19 = v18 >> 6;
  if ( v19 < v17 )
  {
    v20 = v16 & 0x3F;
    if ( v16 <= 0 )
      v20 = -(-v16 & 0x3F);
    do
    {
      while ( 1 )
      {
        v21 = v8[v17];
        if ( v21 )
          break;
        --v17;
LABEL_18:
        if ( v19 >= v17 )
          goto LABEL_30;
      }
      v22 = a3[1];
      v8[v17] = 0;
      v23 = a3 + 1;
      if ( v22 )
      {
        do
        {
          v24 = v16 - v22;
          v25 = v24 + 63;
          v26 = v24 & 0x3F;
          if ( v24 <= 0 )
            v26 = -(-v24 & 0x3F);
          v27 = v24 < 0;
          v28 = v24 & ~(v24 >> 31);
          if ( v27 )
            v28 = v25;
          v29 = v17 - (v28 >> 6);
          v8[v29] ^= v21 >> v26;
          if ( v26 )
            v8[v29 - 1] ^= v21 << (64 - v26);
          v30 = v23[1];
          ++v23;
          v22 = v30;
        }
        while ( v30 );
      }
      v8[v17 - v19] ^= v21 >> v20;
      if ( !v20 )
        goto LABEL_18;
      v8[v17 - v19 - 1] ^= v21 << (64 - v20);
    }
    while ( v19 < v17 );
  }
LABEL_30:
  if ( v19 == v17 )
  {
    v31 = v8[v19];
    v32 = -v16 < 0;
    v33 = -v16 & 0x3F;
    v34 = v16 & 0x3F;
    if ( !v32 )
      v34 = -v33;
    v35 = &v8[v19];
    v36 = v31 >> v34;
    if ( v31 >> v34 )
    {
      v37 = a3[1];
      do
      {
        if ( v34 )
          v38 = v31 << (64 - v34) >> (64 - v34);
        else
          v38 = 0;
        *v35 = v38;
        *v8 ^= v36;
        if ( v37 )
        {
          v39 = a3 + 1;
          v40 = v37;
          do
          {
            v41 = v40 + 63;
            v42 = v40 & 0x3F;
            if ( v40 <= 0 )
              v42 = -(-v40 & 0x3F);
            v27 = v40 < 0;
            v43 = v40 & ~(v40 >> 31);
            if ( v27 )
              v43 = v41;
            v44 = v43 >> 6;
            v8[v44] ^= v36 << v42;
            if ( v42 )
            {
              v45 = v36 >> (64 - v42);
              if ( v45 )
                v8[v44 + 1] ^= v45;
            }
            v46 = v39[1];
            ++v39;
            v40 = v46;
          }
          while ( v46 );
        }
        v31 = *v35;
        v36 = (unsigned int)*v35 >> v34;
      }
      while ( v36 );
    }
  }
  sub_B8ACC((_DWORD *)a1);
  return 1;
}

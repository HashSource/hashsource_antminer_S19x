int __fastcall sub_174BC8(int *a1, int *a2, int *a3)
{
  int *v3; // r4
  int v4; // r3
  int *v5; // r8
  int v7; // r1
  int result; // r0
  int v9; // r3
  int v10; // r9
  int v11; // r10
  int v12; // r12
  _DWORD *v13; // r1
  _DWORD *v14; // r2
  int v15; // r0
  int v16; // r4
  int v17; // r7
  int v18; // r5
  int *v19; // r12
  int *v20; // r9
  int *v21; // r10
  int v22; // r1
  int v23; // t1
  int v24; // t1
  int v25; // r5
  int v26; // r2
  int v27; // r12
  _BOOL4 v28; // r4
  int v29; // r7
  int v30; // r2
  int v31; // r1
  _DWORD *v32; // r2
  _DWORD *v33; // r1
  int v34; // r0
  bool v35; // cc
  int v36; // r3
  int *v37; // r0
  _DWORD *v38; // r12
  int v39; // t1

  v3 = a2;
  v4 = a2[1];
  v5 = a3;
  v7 = a3[1];
  if ( v4 >= v7 )
  {
    v7 = v4;
    v5 = v3;
    v3 = a3;
  }
  result = sub_B89D8((int)a1, v7);
  if ( result )
  {
    v9 = v3[1];
    if ( v9 <= 0 )
    {
      v9 = 0;
    }
    else
    {
      v10 = *v3;
      v11 = *a1;
      v12 = *v5;
      if ( v9 <= 8 )
      {
        v16 = 0;
      }
      else
      {
        v13 = (_DWORD *)(v12 + 76);
        v14 = (_DWORD *)(v10 + 76);
        v15 = *a1;
        v16 = 0;
        do
        {
          v17 = *(v13 - 19);
          v16 += 8;
          v18 = *(v14 - 19);
          __pld(v13);
          v15 += 32;
          __pld(v14);
          v13 += 8;
          v14 += 8;
          *(_DWORD *)(v15 - 32) = v18 ^ v17;
          *(_DWORD *)(v15 - 28) = *(v14 - 26) ^ *(v13 - 26);
          *(_DWORD *)(v15 - 24) = *(v14 - 25) ^ *(v13 - 25);
          *(_DWORD *)(v15 - 20) = *(v14 - 24) ^ *(v13 - 24);
          *(_DWORD *)(v15 - 16) = *(v14 - 23) ^ *(v13 - 23);
          *(_DWORD *)(v15 - 12) = *(v14 - 22) ^ *(v13 - 22);
          *(_DWORD *)(v15 - 8) = *(v14 - 21) ^ *(v13 - 21);
          *(_DWORD *)(v15 - 4) = *(v14 - 20) ^ *(v13 - 20);
        }
        while ( v16 != ((v9 - 9) & 0xFFFFFFF8) + 8 );
      }
      v19 = (int *)(v12 + 4 * v16);
      v20 = (int *)(v10 + 4 * v16);
      v21 = (int *)(v11 + 4 * v16);
      do
      {
        v23 = *v19++;
        v22 = v23;
        ++v16;
        v24 = *v20++;
        *v21++ = v24 ^ v22;
      }
      while ( v9 > v16 );
    }
    v25 = v5[1];
    if ( v9 < v25 )
    {
      v26 = v9 + 1;
      v27 = *v5;
      v28 = v9 + 1 < v25 - 7;
      v29 = *a1;
      if ( v25 < -2147483641 )
        v28 = 0;
      if ( v28 )
      {
        v30 = 4 * (v9 + 25);
        v31 = v30 - 100;
        v32 = (_DWORD *)(v30 + v27);
        v33 = (_DWORD *)(v31 + v29);
        do
        {
          v34 = *(v32 - 25);
          __pld(v32);
          v35 = v25 - 7 <= v9 + 9;
          v9 += 8;
          *v33 = v34;
          v32 += 8;
          v33 += 8;
          *(v33 - 7) = *(v32 - 32);
          *(v33 - 6) = *(v32 - 31);
          *(v33 - 5) = *(v32 - 30);
          *(v33 - 4) = *(v32 - 29);
          *(v33 - 3) = *(v32 - 28);
          *(v33 - 2) = *(v32 - 27);
          *(v33 - 1) = *(v32 - 26);
        }
        while ( !v35 );
        v26 = v9 + 1;
      }
      v36 = 4 * v9;
      v37 = (int *)(v27 + v36);
      v38 = (_DWORD *)(v29 + v36);
      do
      {
        v39 = *v37++;
        v35 = v26++ < v25;
        *v38++ = v39;
      }
      while ( v35 );
    }
    a1[1] = v25;
    sub_B8ACC(a1);
    return 1;
  }
  return result;
}

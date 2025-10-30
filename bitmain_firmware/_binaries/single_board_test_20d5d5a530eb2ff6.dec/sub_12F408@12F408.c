int __fastcall sub_12F408(int *a1, int *a2, int *a3)
{
  int *v3; // r10
  int v4; // r4
  int *v5; // r6
  int v7; // r3
  bool v8; // cc
  int v9; // r5
  int v10; // r8
  int v11; // r2
  int v12; // r6
  int v13; // r9
  int v14; // r0
  int *v15; // r12
  int *v16; // r1
  int *v17; // r2
  _DWORD *v18; // r4
  int v19; // r5
  int v20; // r3
  _DWORD *v21; // r6
  int v22; // r3
  int v23; // r3
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r3
  int v29; // r3
  int v30; // r0
  int v31; // r0
  int v32; // r3
  int v33; // r3
  int v34; // r0
  int v35; // t1
  int v36; // r3
  int v37; // r3

  v3 = a3;
  v4 = a2[1];
  v5 = a2;
  v7 = a3[1];
  v8 = v4 < v7;
  if ( v4 >= v7 )
  {
    v9 = a3[1];
  }
  else
  {
    v9 = a2[1];
    v4 = a3[1];
    a3 = a2;
  }
  if ( v8 )
    v5 = v3;
  v10 = v4 - v9;
  if ( v8 )
    v3 = a3;
  v11 = sub_B89D8((int)a1, v4 + 1);
  if ( v11 )
  {
    v12 = *v5;
    v13 = *a1;
    a1[1] = v4;
    v14 = bn_add_words(v13, v12, *v3, v9);
    v15 = (int *)(v13 + 4 * v9);
    v16 = (int *)(4 * v9 + v12);
    if ( v10 )
    {
      if ( v10 <= 8 )
      {
        v21 = (_DWORD *)(v13 + 4 * v9);
        v19 = v4 - v9;
      }
      else
      {
        v17 = v16 + 8;
        v18 = v15 + 8;
        v19 = v10;
        do
        {
          v20 = *(v17 - 8);
          v19 -= 8;
          __pld(v17 + 12);
          v16 = v17;
          v21 = v18;
          v17 += 8;
          v22 = v20 + v14;
          v18 += 8;
          *(v18 - 16) = v22;
          if ( v22 )
            v23 = 0;
          else
            v23 = v14 & 1;
          v24 = v23 + *(v17 - 15);
          *(v18 - 15) = v24;
          if ( v24 )
            v23 = 0;
          v25 = v23 + *(v17 - 14);
          *(v18 - 14) = v25;
          if ( v25 )
            v23 = 0;
          v26 = *(v17 - 13) + v23;
          *(v18 - 13) = v26;
          if ( v26 )
            v27 = 0;
          else
            v27 = v23;
          v28 = *(v17 - 12) + v27;
          *(v18 - 12) = v28;
          if ( v28 )
            v29 = 0;
          else
            v29 = v27;
          v30 = *(v17 - 11) + v29;
          *(v18 - 11) = v30;
          if ( v30 )
            v31 = 0;
          else
            v31 = v29;
          v32 = *(v17 - 10) + v31;
          *(v18 - 10) = v32;
          if ( v32 )
            v33 = 0;
          else
            v33 = v31;
          v34 = *(v17 - 9) + v33;
          *(v18 - 9) = v34;
          if ( v34 )
            v14 = 0;
          else
            v14 = v33;
        }
        while ( v19 != v10 - 8 - ((v10 - 9) & 0xFFFFFFF8) );
      }
      do
      {
        v35 = *v16++;
        v36 = v35 + v14;
        if ( v35 + v14 )
          v14 = 0;
        else
          v14 &= 1u;
        --v19;
        *v21++ = v36;
      }
      while ( v19 );
      v15 += v10;
    }
    v37 = a1[1];
    v11 = 1;
    *v15 = v14;
    a1[3] = 0;
    a1[1] = v37 + v14;
  }
  return v11;
}

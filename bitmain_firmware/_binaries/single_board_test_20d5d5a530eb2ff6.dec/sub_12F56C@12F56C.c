int __fastcall sub_12F56C(_DWORD *a1, int *a2, _DWORD *a3)
{
  int v3; // r4
  int v4; // r7
  int v5; // r5
  int result; // r0
  int v10; // r10
  int v11; // r8
  int v12; // r9
  int *v13; // r1
  int v14; // lr
  int *v15; // r3
  int v16; // r7
  _DWORD *v17; // r2
  int v18; // r0
  _DWORD *v19; // r12
  int v20; // r10
  int v21; // r0
  int v22; // r9
  int v23; // r10
  int v24; // r9
  int v25; // r10
  int v26; // r9
  int v27; // r10
  int v28; // r9
  int v29; // r10
  int v30; // r9
  int v31; // r10
  int v32; // r9
  int v33; // r10
  int v34; // r9
  int v35; // r10
  int v36; // t1
  int v37; // r2
  int v38; // r3
  int v39; // lr
  int v40; // t1

  v3 = a2[1];
  v4 = a3[1];
  v5 = v3 - v4;
  if ( v3 - v4 < 0 )
  {
    sub_D0048(3, 115, 100, (int)"crypto/bn/bn_add.c", 139);
    return 0;
  }
  else
  {
    result = sub_B89D8((int)a1, a2[1]);
    if ( result )
    {
      v10 = *a2;
      v11 = *a1;
      v12 = bn_sub_words(*a1, v10, *a3, v4);
      v13 = (int *)(v10 + 4 * v4);
      v14 = 4 * v4 + v11;
      if ( v5 )
      {
        if ( v5 <= 8 )
        {
          v19 = (_DWORD *)(4 * v4 + v11);
          v16 = v3 - v4;
        }
        else
        {
          v15 = v13 + 8;
          v16 = v3 - v4;
          v17 = (_DWORD *)(v14 + 32);
          do
          {
            v18 = *(v15 - 8);
            v16 -= 8;
            __pld(v15 + 12);
            v13 = v15;
            v19 = v17;
            v15 += 8;
            v20 = v18 - v12;
            if ( v18 )
              v21 = 0;
            else
              v21 = v12 & 1;
            *(v17 - 8) = v20;
            v17 += 8;
            v22 = *(v15 - 15);
            v23 = v22 - v21;
            if ( v22 )
              v21 = 0;
            *(v17 - 15) = v23;
            v24 = *(v15 - 14);
            v25 = v24 - v21;
            if ( v24 )
              v21 = 0;
            *(v17 - 14) = v25;
            v26 = *(v15 - 13);
            v27 = v26 - v21;
            if ( v26 )
              v21 = 0;
            *(v17 - 13) = v27;
            v28 = *(v15 - 12);
            v29 = v28 - v21;
            if ( v28 )
              v21 = 0;
            *(v17 - 12) = v29;
            v30 = *(v15 - 11);
            v31 = v30 - v21;
            if ( v30 )
              v21 = 0;
            *(v17 - 11) = v31;
            v32 = *(v15 - 10);
            v33 = v32 - v21;
            if ( v32 )
              v21 = 0;
            *(v17 - 10) = v33;
            v34 = *(v15 - 9);
            v35 = v34 - v21;
            if ( v34 )
              v12 = 0;
            else
              v12 = v21;
            *(v17 - 9) = v35;
          }
          while ( v16 != v5 - 8 - ((v5 - 9) & 0xFFFFFFF8) );
        }
        do
        {
          v36 = *v13++;
          v37 = v36 - v12;
          if ( v36 )
            v12 = 0;
          else
            v12 &= 1u;
          --v16;
          *v19++ = v37;
        }
        while ( v16 );
        v14 += 4 * v5;
      }
      if ( v3 )
      {
        v38 = *(_DWORD *)(v14 - 4);
        v39 = v14 - 4;
        if ( !v38 )
        {
          do
          {
            if ( !--v3 )
              break;
            v40 = *(_DWORD *)(v39 - 4);
            v39 -= 4;
          }
          while ( !v40 );
        }
      }
      result = 1;
      a1[1] = v3;
      a1[3] = 0;
    }
  }
  return result;
}

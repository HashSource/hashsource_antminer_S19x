char *__fastcall sub_1AFFA4(int a1, int a2, int *a3)
{
  int *v3; // r9
  int *v5; // r4
  char *v6; // r6
  int v7; // r5
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int *v14; // r12
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int *v21; // r12
  int v22; // r8
  int v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int *v27; // r9
  _DWORD *v28; // r12
  int v29; // r0
  int v30; // r1
  int v31; // r2
  int v32; // r3
  int v33; // r3
  int v34; // r1
  int v35; // r9
  int v36; // r0
  int v37; // r1
  int v38; // r2
  int v39; // r3
  int *v40; // lr
  int v41; // r0
  int v42; // r1
  int v43; // r2
  int v44; // r3
  int v45; // r1
  int v47; // [sp+8h] [bp-2Ch]
  int v48; // [sp+Ch] [bp-28h]
  int v49; // [sp+10h] [bp-24h]
  int v50; // [sp+14h] [bp-20h]
  int v51; // [sp+18h] [bp-1Ch]
  int v52; // [sp+1Ch] [bp-18h]
  int v53; // [sp+20h] [bp-14h]
  int v54; // [sp+24h] [bp-10h]
  int v55; // [sp+28h] [bp-Ch]
  int v56; // [sp+2Ch] [bp-8h]

  v5 = *(int **)(a1 + 4);
  v6 = *(char **)a1;
  v7 = a2 - *(_DWORD *)a1;
  if ( v5 == *(int **)(a1 + 8) )
  {
    sub_1AFDD0((char **)a1, (char *)a2, a3);
    return (char *)(*(_DWORD *)a1 + v7);
  }
  else if ( v5 == (int *)a2 )
  {
    if ( v5 )
    {
      v10 = *a3;
      v11 = a3[1];
      v12 = a3[2];
      v13 = a3[3];
      v14 = a3 + 4;
      *v5 = v10;
      v5[1] = v11;
      v5[2] = v12;
      v5[3] = v13;
      v15 = *v14;
      v16 = v14[1];
      v17 = v14[2];
      v18 = v14[3];
      v14 += 4;
      v5[4] = v15;
      v5[5] = v16;
      v5[6] = v17;
      v5[7] = v18;
      v19 = v14[1];
      v5[8] = *v14;
      v5[9] = v19;
    }
    *(_DWORD *)(a1 + 4) = v5 + 10;
    return &v6[v7];
  }
  else
  {
    v47 = *a3;
    v48 = a3[1];
    v49 = a3[2];
    v50 = a3[3];
    v21 = a3 + 8;
    v51 = a3[4];
    v52 = a3[5];
    v53 = a3[6];
    v54 = a3[7];
    if ( v5 )
      v21 = *(int **)(a1 + 4);
    v55 = a3[8];
    v56 = a3[9];
    if ( v5 )
    {
      v22 = (int)(v5 - 10);
      v3 = v5 - 10;
    }
    else
    {
      v22 = -40;
    }
    if ( v5 )
    {
      v23 = *v3;
      v24 = v3[1];
      v25 = v3[2];
      v26 = v3[3];
      v27 = v3 + 4;
      *v21 = v23;
      v21[1] = v24;
      v21[2] = v25;
      v21[3] = v26;
      v28 = v21 + 4;
      v29 = *v27;
      v30 = v27[1];
      v31 = v27[2];
      v32 = v27[3];
      v3 = v27 + 4;
      *v28 = v29;
      v28[1] = v30;
      v28[2] = v31;
      v28[3] = v32;
      v21 = v28 + 4;
    }
    v33 = v22 - a2;
    if ( v5 )
    {
      v34 = v3[1];
      *v21 = *v3;
      v21[1] = v34;
    }
    *(_DWORD *)(a1 + 4) = v5 + 10;
    v35 = -858993459 * (v33 >> 3);
    if ( v33 > 0 )
    {
      do
      {
        v36 = *(_DWORD *)(v22 - 40);
        v37 = *(_DWORD *)(v22 - 36);
        v38 = *(_DWORD *)(v22 - 32);
        v39 = *(_DWORD *)(v22 - 28);
        v40 = (int *)(v22 - 24);
        v5 -= 10;
        --v35;
        v22 -= 40;
        *v5 = v36;
        v5[1] = v37;
        v5[2] = v38;
        v5[3] = v39;
        v41 = *v40;
        v42 = v40[1];
        v43 = v40[2];
        v44 = v40[3];
        v40 += 4;
        v5[4] = v41;
        v5[5] = v42;
        v5[6] = v43;
        v5[7] = v44;
        v45 = v40[1];
        v5[8] = *v40;
        v5[9] = v45;
      }
      while ( v35 );
    }
    *(_DWORD *)a2 = v47;
    *(_DWORD *)(a2 + 4) = v48;
    *(_DWORD *)(a2 + 8) = v49;
    *(_DWORD *)(a2 + 12) = v50;
    *(_DWORD *)(a2 + 16) = v51;
    *(_DWORD *)(a2 + 20) = v52;
    *(_DWORD *)(a2 + 24) = v53;
    *(_DWORD *)(a2 + 28) = v54;
    *(_DWORD *)(a2 + 32) = v55;
    *(_DWORD *)(a2 + 36) = v56;
    return &v6[v7];
  }
}

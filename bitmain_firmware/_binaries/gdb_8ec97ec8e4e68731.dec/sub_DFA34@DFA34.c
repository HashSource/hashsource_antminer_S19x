void __fastcall sub_DFA34(unsigned int *a1, int a2, int a3)
{
  int v3; // r9
  char *v4; // r5
  unsigned int v6; // r11
  char *v8; // r8
  int v9; // r3
  unsigned int v10; // r7
  int v11; // r4
  char *v12; // r7
  char *v13; // r12
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int *v18; // lr
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int v24; // r9
  int v25; // r4
  char *v26; // r5
  char *v27; // r12
  int v28; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int *v32; // lr
  int v33; // r0
  int v34; // r1
  int v35; // r2
  int v36; // r3
  int v37; // r1
  int v38; // r9
  char *v39; // r4
  int v40; // r1
  int v41; // r2
  int v42; // r3
  int v43; // r1
  int v44; // r2
  int v45; // r3
  int v46; // r1
  void *v48; // r0
  int v49; // r4
  _DWORD *v50; // r7
  _DWORD *v51; // r8
  int v52; // r1
  int v53; // r2
  int v54; // r3
  int v55; // r1
  int v56; // r2
  int v57; // r3
  int v58; // r1
  unsigned int v59; // r9

  v3 = a3 - a2;
  v4 = (char *)*a1;
  v6 = -858993459 * ((a3 - a2) >> 3);
  if ( -858993459 * ((int)(a1[2] - *a1) >> 3) < v6 )
  {
    if ( v6 )
    {
      if ( v6 > 0x6666666 )
        sub_33D01C();
      v48 = sub_9836C(a3 - a2);
      v4 = (char *)*a1;
      v6 = (unsigned int)v48;
    }
    if ( a2 != a3 )
    {
      v49 = a2 + 40;
      v50 = (_DWORD *)v6;
      v51 = (_DWORD *)(v6 + 40 * (((214748365 * ((unsigned int)(a3 - v49) >> 3)) & 0x1FFFFFFF) + 1));
      do
      {
        if ( v50 )
        {
          v52 = *(_DWORD *)(v49 - 36);
          v53 = *(_DWORD *)(v49 - 32);
          v54 = *(_DWORD *)(v49 - 28);
          *v50 = *(_DWORD *)(v49 - 40);
          v50[1] = v52;
          v50[2] = v53;
          v50[3] = v54;
          v55 = *(_DWORD *)(v49 - 20);
          v56 = *(_DWORD *)(v49 - 16);
          v57 = *(_DWORD *)(v49 - 12);
          v50[4] = *(_DWORD *)(v49 - 24);
          v50[5] = v55;
          v50[6] = v56;
          v50[7] = v57;
          v58 = *(_DWORD *)(v49 - 4);
          v50[8] = *(_DWORD *)(v49 - 8);
          v50[9] = v58;
        }
        v50 += 10;
        v49 += 40;
      }
      while ( v51 != v50 );
    }
    if ( v4 )
      sub_339E64(v4);
    v59 = v6 + v3;
    *a1 = v6;
    a1[1] = v59;
    a1[2] = v59;
  }
  else
  {
    v8 = (char *)a1[1];
    v9 = v8 - v4;
    v10 = -858993459 * ((v8 - v4) >> 3);
    if ( v6 > v10 )
    {
      v24 = a2 + v9;
      if ( v9 > 0 )
      {
        v25 = a2 + 40;
        v26 = v4 + 40;
        do
        {
          v27 = v26 - 40;
          v28 = *(_DWORD *)(v25 - 40);
          v29 = *(_DWORD *)(v25 - 36);
          v30 = *(_DWORD *)(v25 - 32);
          v31 = *(_DWORD *)(v25 - 28);
          v32 = (int *)(v25 - 24);
          --v10;
          v25 += 40;
          v26 += 40;
          *(_DWORD *)v27 = v28;
          *((_DWORD *)v27 + 1) = v29;
          *((_DWORD *)v27 + 2) = v30;
          *((_DWORD *)v27 + 3) = v31;
          v27 += 16;
          v33 = *v32;
          v34 = v32[1];
          v35 = v32[2];
          v36 = v32[3];
          v32 += 4;
          *(_DWORD *)v27 = v33;
          *((_DWORD *)v27 + 1) = v34;
          *((_DWORD *)v27 + 2) = v35;
          *((_DWORD *)v27 + 3) = v36;
          v27 += 16;
          v37 = v32[1];
          *(_DWORD *)v27 = *v32;
          *((_DWORD *)v27 + 1) = v37;
        }
        while ( v10 );
      }
      if ( a3 != v24 )
      {
        v38 = v24 + 40;
        v39 = &v8[40 * ((214748365 * ((unsigned int)(a3 - v38) >> 3)) & 0x1FFFFFFF) + 40];
        do
        {
          if ( v8 )
          {
            v40 = *(_DWORD *)(v38 - 36);
            v41 = *(_DWORD *)(v38 - 32);
            v42 = *(_DWORD *)(v38 - 28);
            *(_DWORD *)v8 = *(_DWORD *)(v38 - 40);
            *((_DWORD *)v8 + 1) = v40;
            *((_DWORD *)v8 + 2) = v41;
            *((_DWORD *)v8 + 3) = v42;
            v43 = *(_DWORD *)(v38 - 20);
            v44 = *(_DWORD *)(v38 - 16);
            v45 = *(_DWORD *)(v38 - 12);
            *((_DWORD *)v8 + 4) = *(_DWORD *)(v38 - 24);
            *((_DWORD *)v8 + 5) = v43;
            *((_DWORD *)v8 + 6) = v44;
            *((_DWORD *)v8 + 7) = v45;
            v46 = *(_DWORD *)(v38 - 4);
            *((_DWORD *)v8 + 8) = *(_DWORD *)(v38 - 8);
            *((_DWORD *)v8 + 9) = v46;
          }
          v8 += 40;
          v38 += 40;
        }
        while ( v8 != v39 );
      }
      a1[1] = (unsigned int)v8;
    }
    else
    {
      if ( v3 > 0 )
      {
        v11 = a2 + 40;
        v12 = v4 + 40;
        do
        {
          v13 = v12 - 40;
          v14 = *(_DWORD *)(v11 - 40);
          v15 = *(_DWORD *)(v11 - 36);
          v16 = *(_DWORD *)(v11 - 32);
          v17 = *(_DWORD *)(v11 - 28);
          v18 = (int *)(v11 - 24);
          --v6;
          v4 = v12;
          v11 += 40;
          v12 += 40;
          *(_DWORD *)v13 = v14;
          *((_DWORD *)v13 + 1) = v15;
          *((_DWORD *)v13 + 2) = v16;
          *((_DWORD *)v13 + 3) = v17;
          v13 += 16;
          v19 = *v18;
          v20 = v18[1];
          v21 = v18[2];
          v22 = v18[3];
          v18 += 4;
          *(_DWORD *)v13 = v19;
          *((_DWORD *)v13 + 1) = v20;
          *((_DWORD *)v13 + 2) = v21;
          *((_DWORD *)v13 + 3) = v22;
          v13 += 16;
          v23 = v18[1];
          *(_DWORD *)v13 = *v18;
          *((_DWORD *)v13 + 1) = v23;
        }
        while ( v6 );
      }
      a1[1] = (unsigned int)v4;
    }
  }
}

char **__fastcall sub_1AFB9C(char **a1, char **a2)
{
  char *v3; // r3
  char *v4; // r9
  char *v5; // r6
  int v6; // r10
  unsigned int v7; // r5
  char *v8; // r8
  char *v9; // r7
  int v10; // r2
  unsigned int v11; // r11
  char *v12; // r8
  char *v13; // r6
  char *v14; // r12
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int *v19; // lr
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  _DWORD *v26; // r8
  _DWORD *v27; // r0
  char *v28; // r5
  _DWORD *v29; // r7
  _DWORD *v30; // r9
  int v31; // r1
  int v32; // r2
  int v33; // r3
  int v34; // r1
  int v35; // r2
  int v36; // r3
  int v37; // r1
  char *v38; // r10
  char *v39; // r5
  char *v40; // r6
  char *v41; // r12
  int v42; // r0
  int v43; // r1
  int v44; // r2
  int v45; // r3
  int *v46; // lr
  int v47; // r0
  int v48; // r1
  int v49; // r2
  int v50; // r3
  int v51; // r1
  char *v52; // r10
  char *v53; // r5
  int v54; // r1
  int v55; // r2
  int v56; // r3
  int v57; // r1
  int v58; // r2
  int v59; // r3
  int v60; // r1
  char *v61; // [sp+4h] [bp-8h]

  if ( a2 != a1 )
  {
    v3 = *a2;
    v4 = a2[1];
    v5 = *a1;
    v6 = v4 - *a2;
    v7 = -858993459 * (v6 >> 3);
    if ( -858993459 * ((a1[2] - *a1) >> 3) < v7 )
    {
      if ( v7 )
      {
        if ( v7 > 0x6666666 )
          sub_33D01C(a1, a2);
        v61 = *a2;
        v27 = sub_9836C(v4 - *a2);
        v5 = *a1;
        v26 = v27;
        v3 = v61;
      }
      else
      {
        v26 = 0;
      }
      if ( v3 != v4 )
      {
        v28 = v3 + 40;
        v29 = v26;
        v30 = &v26[10 * ((214748365 * ((unsigned int)(v4 - (v3 + 40)) >> 3)) & 0x1FFFFFFF) + 10];
        do
        {
          if ( v29 )
          {
            v31 = *((_DWORD *)v28 - 9);
            v32 = *((_DWORD *)v28 - 8);
            v33 = *((_DWORD *)v28 - 7);
            *v29 = *((_DWORD *)v28 - 10);
            v29[1] = v31;
            v29[2] = v32;
            v29[3] = v33;
            v34 = *((_DWORD *)v28 - 5);
            v35 = *((_DWORD *)v28 - 4);
            v36 = *((_DWORD *)v28 - 3);
            v29[4] = *((_DWORD *)v28 - 6);
            v29[5] = v34;
            v29[6] = v35;
            v29[7] = v36;
            v37 = *((_DWORD *)v28 - 1);
            v29[8] = *((_DWORD *)v28 - 2);
            v29[9] = v37;
          }
          v29 += 10;
          v28 += 40;
        }
        while ( v29 != v30 );
      }
      if ( v5 )
        sub_339E64(v5);
      *a1 = (char *)v26;
      a1[2] = (char *)v26 + v6;
      a1[1] = (char *)v26 + v6;
    }
    else
    {
      v8 = a1[1];
      v9 = &v5[v6];
      v10 = v8 - v5;
      v11 = -858993459 * ((v8 - v5) >> 3);
      if ( v7 <= v11 )
      {
        if ( v6 > 0 )
        {
          v12 = v3 + 40;
          v13 = v5 + 40;
          do
          {
            v14 = v13 - 40;
            v15 = *((_DWORD *)v12 - 10);
            v16 = *((_DWORD *)v12 - 9);
            v17 = *((_DWORD *)v12 - 8);
            v18 = *((_DWORD *)v12 - 7);
            v19 = (int *)(v12 - 24);
            --v7;
            v12 += 40;
            v13 += 40;
            *(_DWORD *)v14 = v15;
            *((_DWORD *)v14 + 1) = v16;
            *((_DWORD *)v14 + 2) = v17;
            *((_DWORD *)v14 + 3) = v18;
            v14 += 16;
            v20 = *v19;
            v21 = v19[1];
            v22 = v19[2];
            v23 = v19[3];
            v19 += 4;
            *(_DWORD *)v14 = v20;
            *((_DWORD *)v14 + 1) = v21;
            *((_DWORD *)v14 + 2) = v22;
            *((_DWORD *)v14 + 3) = v23;
            v14 += 16;
            v24 = v19[1];
            *(_DWORD *)v14 = *v19;
            *((_DWORD *)v14 + 1) = v24;
          }
          while ( v7 );
        }
LABEL_7:
        a1[1] = v9;
        return a1;
      }
      v38 = &v3[v10];
      if ( v10 > 0 )
      {
        v39 = v3 + 40;
        v40 = v5 + 40;
        do
        {
          v41 = v40 - 40;
          v42 = *((_DWORD *)v39 - 10);
          v43 = *((_DWORD *)v39 - 9);
          v44 = *((_DWORD *)v39 - 8);
          v45 = *((_DWORD *)v39 - 7);
          v46 = (int *)(v39 - 24);
          --v11;
          v39 += 40;
          v40 += 40;
          *(_DWORD *)v41 = v42;
          *((_DWORD *)v41 + 1) = v43;
          *((_DWORD *)v41 + 2) = v44;
          *((_DWORD *)v41 + 3) = v45;
          v41 += 16;
          v47 = *v46;
          v48 = v46[1];
          v49 = v46[2];
          v50 = v46[3];
          v46 += 4;
          *(_DWORD *)v41 = v47;
          *((_DWORD *)v41 + 1) = v48;
          *((_DWORD *)v41 + 2) = v49;
          *((_DWORD *)v41 + 3) = v50;
          v41 += 16;
          v51 = v46[1];
          *(_DWORD *)v41 = *v46;
          *((_DWORD *)v41 + 1) = v51;
        }
        while ( v11 );
      }
      if ( v38 == v4 )
        goto LABEL_7;
      v52 = v38 + 40;
      v53 = &v8[40 * ((214748365 * ((unsigned int)(v4 - v52) >> 3)) & 0x1FFFFFFF) + 40];
      do
      {
        if ( v8 )
        {
          v54 = *((_DWORD *)v52 - 9);
          v55 = *((_DWORD *)v52 - 8);
          v56 = *((_DWORD *)v52 - 7);
          *(_DWORD *)v8 = *((_DWORD *)v52 - 10);
          *((_DWORD *)v8 + 1) = v54;
          *((_DWORD *)v8 + 2) = v55;
          *((_DWORD *)v8 + 3) = v56;
          v57 = *((_DWORD *)v52 - 5);
          v58 = *((_DWORD *)v52 - 4);
          v59 = *((_DWORD *)v52 - 3);
          *((_DWORD *)v8 + 4) = *((_DWORD *)v52 - 6);
          *((_DWORD *)v8 + 5) = v57;
          *((_DWORD *)v8 + 6) = v58;
          *((_DWORD *)v8 + 7) = v59;
          v60 = *((_DWORD *)v52 - 1);
          *((_DWORD *)v8 + 8) = *((_DWORD *)v52 - 2);
          *((_DWORD *)v8 + 9) = v60;
        }
        v8 += 40;
        v52 += 40;
      }
      while ( v8 != v53 );
      a1[1] = v9;
    }
  }
  return a1;
}

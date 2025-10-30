void __fastcall sub_23B664(void **a1, char *a2, char **a3, int *a4, int *a5, int *a6)
{
  char *v7; // lr
  _BYTE *v8; // r12
  char *v11; // r8
  char *v12; // r5
  unsigned int v13; // r10
  size_t v14; // r0
  char *v15; // r7
  char *v16; // r11
  char *v17; // r8
  int v18; // r2
  _BYTE *v19; // r3
  void *v20; // r2
  _BYTE *v21; // r1
  int v22; // r11
  char *v23; // r1
  int v24; // r3
  _DWORD *v25; // r2
  char *v26; // r8
  char *v27; // r12
  int *v28; // r0
  int v29; // r7
  int v30; // r7
  int v31; // r9
  int v32; // r0
  char *v33; // r3
  char *v34; // r8
  char *v35; // r4
  unsigned int v36; // r0
  _DWORD *v37; // r3
  char *v38; // r2
  int v39; // r5
  int v40; // r1
  char *v41; // r12
  char *v42; // r0
  int v43; // r9
  int v44; // r11
  int v45; // r9
  int v46; // r12
  int v47; // r0
  int v48; // r3
  char *v49; // r9
  _DWORD *v50; // r4
  _DWORD *v51; // r0
  int v52; // r11
  int v53; // r7
  int v54; // r11
  int v55; // r9
  int v56; // r12
  int v58; // [sp+0h] [bp-24h]
  int v59; // [sp+0h] [bp-24h]
  int v60; // [sp+4h] [bp-20h]
  void *ptr[2]; // [sp+8h] [bp-1Ch] BYREF
  _BYTE v62[20]; // [sp+10h] [bp-14h] BYREF

  v7 = (char *)*a1;
  v8 = a1[1];
  v11 = (char *)(a2 - (_BYTE *)*a1);
  v12 = a2;
  if ( !(954437177 * ((v8 - (_BYTE *)*a1) >> 2)) )
  {
    v13 = 1;
    goto LABEL_39;
  }
  v13 = 1908874354 * ((v8 - v7) >> 2);
  if ( 954437177 * ((v8 - v7) >> 2) > v13 )
  {
    v13 = 119304647;
    v14 = -4;
LABEL_4:
    v15 = (char *)sub_9836C(v14);
    goto LABEL_5;
  }
  if ( v13 > 0x71C71C7 )
  {
    v13 = 119304647;
    v14 = -4;
    goto LABEL_4;
  }
  if ( v13 )
  {
LABEL_39:
    v14 = 36 * v13;
    goto LABEL_4;
  }
  v15 = 0;
LABEL_5:
  v16 = *a3;
  v17 = &v11[(_DWORD)v15];
  ptr[0] = v62;
  if ( v16 )
    v18 = (int)&v16[strlen(v16)];
  else
    v18 = -1;
  sub_2350F8(ptr, v16, v18);
  v19 = ptr[0];
  if ( v17 )
  {
    v20 = ptr[1];
    v21 = ptr[0];
    *(_DWORD *)v17 = v17 + 8;
    v22 = *a5;
    v58 = *a4;
    v60 = *a6;
    sub_2350F8(v17, v21, (int)v20 + (_DWORD)v19);
    v19 = ptr[0];
    *((_DWORD *)v17 + 7) = v22;
    *((_DWORD *)v17 + 6) = v58;
    *((_DWORD *)v17 + 8) = v60;
  }
  if ( v19 != v62 )
    sub_339E64(v19);
  if ( *a1 == a2 )
  {
    v23 = v15;
  }
  else
  {
    v24 = (int)*a1 + 36;
    v25 = v15 + 8;
    v23 = v15;
    v26 = v15;
    v27 = &v15[36 * ((954437177 * ((unsigned int)&a2[-v24] >> 2)) & 0x3FFFFFFF) + 36];
    do
    {
      if ( v23 )
      {
        *(v25 - 2) = v25;
        v28 = (int *)(v24 - 28);
        v29 = *(_DWORD *)(v24 - 36);
        if ( v29 == v24 - 28 )
        {
          v52 = *v28;
          v59 = *(_DWORD *)(v24 - 20);
          v53 = *(_DWORD *)(v24 - 16);
          v25[1] = *(_DWORD *)(v24 - 24);
          *v25 = v52;
          v25[3] = v53;
          v25[2] = v59;
        }
        else
        {
          *(v25 - 2) = v29;
          *v25 = *(_DWORD *)(v24 - 28);
        }
        v30 = *(_DWORD *)(v24 - 12);
        *(v25 - 1) = *(_DWORD *)(v24 - 32);
        v31 = *(_DWORD *)(v24 - 8);
        *(_DWORD *)(v24 - 36) = v28;
        *(_DWORD *)(v24 - 32) = 0;
        *(_BYTE *)(v24 - 28) = 0;
        v25[5] = v31;
        v32 = *(_DWORD *)(v24 - 4);
        v25[4] = v30;
        v25[6] = v32;
      }
      v23 += 36;
      v24 += 36;
      v25 += 9;
    }
    while ( v23 != v27 );
    v15 = v26;
  }
  v33 = (char *)a1[1];
  v34 = v23 + 36;
  if ( v33 != a2 )
  {
    v35 = a2 + 36;
    v36 = (unsigned int)(v33 - v35) >> 2;
    v37 = v23 + 44;
    v38 = v23 + 36;
    v39 = (954437177 * v36) & 0x3FFFFFFF;
    v40 = (int)&v23[36 * v39 + 72];
    do
    {
      if ( v38 )
      {
        v41 = (char *)*((_DWORD *)v35 - 9);
        v42 = v35 - 28;
        *(v37 - 2) = v37;
        if ( v41 == v35 - 28 )
        {
          v54 = *((_DWORD *)v35 - 6);
          v55 = *((_DWORD *)v35 - 5);
          *v37 = *(_DWORD *)v42;
          v56 = *((_DWORD *)v35 - 4);
          v37[1] = v54;
          v37[2] = v55;
          v37[3] = v56;
        }
        else
        {
          v43 = *((_DWORD *)v35 - 7);
          *(v37 - 2) = v41;
          *v37 = v43;
        }
        v44 = *((_DWORD *)v35 - 8);
        v45 = *((_DWORD *)v35 - 3);
        v46 = *((_DWORD *)v35 - 2);
        *((_DWORD *)v35 - 9) = v42;
        v47 = *((_DWORD *)v35 - 1);
        *(v35 - 28) = 0;
        *(v37 - 1) = v44;
        *((_DWORD *)v35 - 8) = 0;
        v37[4] = v45;
        v37[5] = v46;
        v37[6] = v47;
      }
      v38 += 36;
      v35 += 36;
      v37 += 9;
    }
    while ( v38 != (char *)v40 );
    v48 = v39 + 1;
    v12 = (char *)a1[1];
    v34 += 36 * v48;
  }
  v49 = (char *)*a1;
  if ( *a1 != v12 )
  {
    v50 = v49 + 8;
    do
    {
      v51 = (_DWORD *)*(v50 - 2);
      if ( v51 != v50 )
        sub_339E64(v51);
      v49 += 36;
      v50 += 9;
    }
    while ( v49 != v12 );
    v12 = (char *)*a1;
  }
  if ( v12 )
    sub_339E64(v12);
  *a1 = v15;
  a1[1] = v34;
  a1[2] = &v15[36 * v13];
}

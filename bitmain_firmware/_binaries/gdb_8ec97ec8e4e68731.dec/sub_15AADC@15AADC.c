void __fastcall sub_15AADC(__int64 a1, char *a2, char *a3)
{
  unsigned int v3; // r8
  char *v4; // r5
  char **v6; // r7
  size_t v8; // r2
  unsigned int v9; // r2
  char *v10; // r3
  unsigned int v11; // r3
  int v12; // r12
  char v13; // r0
  char v14; // t1
  bool v15; // zf
  size_t v16; // r2
  char *v17; // r1
  char *v18; // r0
  unsigned int v19; // r9
  int v20; // r3
  bool v21; // cf
  char *v22; // r9
  size_t v23; // r11
  char *v24; // r10
  char *v25; // lr
  int v26; // r3
  char *v27; // r2
  char v28; // r12
  char v29; // t1
  char *v30; // r8
  char *v31; // r3
  char *v32; // r12
  char v33; // r2
  char v34; // t1
  char *v35; // r4
  char *v36; // r3
  char *v37; // r2
  char v38; // r12
  char v39; // t1
  char *v40; // r3
  char *v41; // r4
  char *v42; // r12
  char *v43; // r4
  char v44; // lr
  char v45; // t1
  char *v46; // r3
  char *v47; // r1
  char *v48; // r12
  char v49; // r0
  char v50; // t1

  if ( a2 == a3 )
    return;
  v3 = a3 - a2;
  v4 = (char *)HIDWORD(a1);
  v6 = (char **)a1;
  HIDWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) - HIDWORD(a1) < (unsigned int)(a3 - a2) )
  {
    LODWORD(a1) = *(_DWORD *)a1;
    v19 = HIDWORD(a1) - a1;
    if ( v3 > ~(HIDWORD(a1) - (int)a1) )
      sub_33D184("vector::_M_range_insert");
    if ( v3 < v19 )
      v20 = HIDWORD(a1) - a1;
    else
      v20 = a3 - a2;
    v21 = __CFADD__(v19, v20);
    v22 = (char *)(v19 + v20);
    v23 = (size_t)v22;
    if ( v21 )
    {
      v23 = -1;
    }
    else if ( !v22 )
    {
      v24 = 0;
LABEL_24:
      if ( v4 == (char *)a1 )
      {
        v25 = v24;
      }
      else
      {
        v26 = a1 - 1;
        v27 = v24;
        do
        {
          v29 = *(_BYTE *)++v26;
          v28 = v29;
          v15 = v27++ == 0;
          if ( !v15 )
            *(v27 - 1) = v28;
        }
        while ( v27 != &v4[(_DWORD)v24 - a1] );
        v25 = &v4[(_DWORD)v24 - a1];
      }
      v30 = &v25[v3];
      v31 = a2 - 1;
      v32 = v25;
      do
      {
        v34 = *++v31;
        v33 = v34;
        v15 = v32++ == 0;
        if ( !v15 )
          *(v32 - 1) = v33;
      }
      while ( v32 != v30 );
      v35 = &v25[a3 - a2];
      if ( v4 != (char *)HIDWORD(a1) )
      {
        v36 = v4 - 1;
        v37 = v35;
        do
        {
          v39 = *++v36;
          v38 = v39;
          v15 = v37++ == 0;
          if ( !v15 )
            *(v37 - 1) = v38;
        }
        while ( v37 != &v35[HIDWORD(a1) - (_DWORD)v4] );
        v35 += HIDWORD(a1) - (_DWORD)v4;
      }
      if ( (_DWORD)a1 )
        sub_339E64((void *)a1);
      *v6 = v24;
      v6[1] = v35;
      v6[2] = v22;
      return;
    }
    v24 = (char *)sub_9836C(v23);
    v22 = &v24[v23];
    a1 = *(_QWORD *)v6;
    goto LABEL_24;
  }
  v8 = HIDWORD(a1) - (_DWORD)v4;
  if ( v3 >= HIDWORD(a1) - (int)v4 )
  {
    LODWORD(a1) = &a2[v8];
    if ( a3 == &a2[v8] )
    {
      v40 = (char *)HIDWORD(a1);
    }
    else
    {
      v41 = &a3[-a1];
      v42 = (char *)HIDWORD(a1);
      LODWORD(a1) = a1 - 1;
      v43 = &v41[HIDWORD(a1)];
      do
      {
        v45 = *(_BYTE *)(a1 + 1);
        LODWORD(a1) = a1 + 1;
        v44 = v45;
        v15 = v42++ == 0;
        if ( !v15 )
          *(v42 - 1) = v44;
      }
      while ( v42 != v43 );
      v40 = v6[1];
    }
    v46 = &v40[v3 - v8];
    v6[1] = v46;
    if ( (char *)HIDWORD(a1) != v4 )
    {
      v47 = v4 - 1;
      v48 = &v46[v8];
      do
      {
        v50 = *++v47;
        v49 = v50;
        v15 = v46++ == 0;
        if ( !v15 )
          *(v46 - 1) = v49;
      }
      while ( v46 != v48 );
      v46 = v6[1];
    }
    v6[1] = &v46[v8];
    if ( v8 )
    {
      v17 = a2;
      v18 = v4;
      goto LABEL_15;
    }
  }
  else
  {
    v9 = HIDWORD(a1) - v3;
    if ( HIDWORD(a1) == HIDWORD(a1) - v3 )
    {
      v10 = *(char **)(a1 + 4);
    }
    else
    {
      v11 = v9 - 1;
      v12 = *(_DWORD *)(a1 + 4);
      do
      {
        v14 = *(_BYTE *)++v11;
        v13 = v14;
        v15 = v12++ == 0;
        if ( !v15 )
          *(_BYTE *)(v12 - 1) = v13;
      }
      while ( v12 != 2 * HIDWORD(a1) - v9 );
      v10 = v6[1];
    }
    v16 = v9 - (_DWORD)v4;
    v6[1] = &v10[v3];
    if ( v16 )
      memmove((void *)(HIDWORD(a1) - v16), v4, v16);
    if ( v3 )
    {
      v8 = v3;
      v17 = a2;
      v18 = v4;
LABEL_15:
      memmove(v18, v17, v8);
    }
  }
}

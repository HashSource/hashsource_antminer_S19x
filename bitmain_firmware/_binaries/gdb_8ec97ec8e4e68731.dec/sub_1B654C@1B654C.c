int __fastcall sub_1B654C(int a1, int a2)
{
  int v2; // r5
  int v3; // r2
  int *v4; // r6
  int v5; // r12
  int v6; // r7
  int v7; // lr
  int v8; // r8
  int v9; // t1
  int v10; // t1
  int *v11; // r10
  _DWORD *v13; // r6
  _DWORD *i; // lr
  int *v15; // r1
  int v16; // r3
  int v17; // r12
  int v18; // r0
  int v19; // r3
  __int64 v20; // r8
  int v21; // r0
  _DWORD *v22; // r0
  int v23; // r7
  int v24; // r6
  int v25; // r12
  __int64 v26; // r2
  int j; // r0
  _DWORD *v28; // t1
  int k; // r6
  int v30; // r0
  int v31; // r3
  int v32; // r0
  int v33; // r3
  char *v34; // r1
  int v35; // r2
  int v36; // t1
  int v37; // r0
  unsigned int v38; // r4
  unsigned int v39; // r3
  unsigned int v40; // r4
  int v41; // r0
  unsigned int v42; // r7
  int v43; // r2
  int v44; // r1
  int v45; // r9
  int v46; // r10
  int v47; // r0
  int v48; // r6
  int v49; // r0
  __int64 v51; // r0
  int v52; // r12
  int v53; // lr
  _DWORD *v54; // r2
  int m; // r3
  _DWORD *v56; // [sp-8h] [bp-4Ch] BYREF
  int v57; // [sp-4h] [bp-48h] BYREF
  int v58; // [sp+0h] [bp-44h] BYREF
  int v59; // [sp+4h] [bp-40h]
  char *s1; // [sp+8h] [bp-3Ch]
  int v61; // [sp+Ch] [bp-38h]
  _BYTE v62[16]; // [sp+14h] [bp-30h] BYREF
  _DWORD savedregs[9]; // [sp+24h] [bp-20h] BYREF

  v2 = *(_DWORD *)(a1 + 148);
  if ( v2 <= 0 )
    goto LABEL_47;
  v3 = 0;
  v4 = &v57;
  v5 = 0;
  v6 = a2 - 4;
  v7 = *(_DWORD *)(a1 + 144) - 4;
  s1 = (char *)(a2 - 4);
  do
  {
    v9 = *(_DWORD *)(v7 + 4);
    v7 += 4;
    v8 = v9;
    ++v5;
    v10 = *(_DWORD *)(v6 + 4);
    v6 += 4;
    v4[1] = v10 - v8;
    ++v4;
    if ( v10 != v8 )
      v3 = 1;
  }
  while ( v2 != v5 );
  v61 = v3;
  if ( !v3 )
  {
LABEL_47:
    v61 = 0;
    return 0;
  }
  v11 = *(int **)(a1 + 20);
  v59 = a2;
  if ( v11 )
  {
    v13 = v11;
    do
    {
      for ( i = (_DWORD *)v13[3]; i; i = (_DWORD *)*i )
      {
        v15 = (int *)i[2];
        if ( v15 && *v15 > 0 )
        {
          v16 = v13[9];
          if ( v16 == -1 )
          {
            sub_94700((int)"objfiles.c", 816, "Section index is uninitialized");
            goto LABEL_49;
          }
          v17 = *(&v58 + v16);
          v18 = *v15 + 1;
          v19 = 1;
          do
            v15[2 * v19++] += v17;
          while ( v18 != v19 );
        }
      }
      v13 = (_DWORD *)*v13;
    }
    while ( v13 );
    while ( 1 )
    {
      v20 = *((_QWORD *)v11 + 4);
      v21 = *(_DWORD *)(v20 + 4);
      if ( v21 )
        break;
      if ( *(int *)v20 > 0 )
      {
        v22 = *(_DWORD **)(v20 + 8);
        if ( HIDWORD(v20) == -1 )
        {
          sub_94700((int)"objfiles.c", 836, "Section index is uninitialized");
          goto LABEL_47;
        }
LABEL_22:
        v23 = v20 + 8;
        v24 = 0;
        while ( 1 )
        {
          v25 = *(&v58 + HIDWORD(v20));
          LODWORD(v26) = *v22 + v25;
          HIDWORD(v26) = v22[1] + v25;
          *(_QWORD *)v22 = v26;
          for ( j = sub_10B510(v22[4]); j; j = sub_10B51C((int)v62) )
            sub_1B64FC(j, a1, (int)&v58);
          if ( *(_DWORD *)v20 <= ++v24 )
            break;
          v28 = *(_DWORD **)(v23 + 4);
          v23 += 4;
          v22 = v28;
        }
      }
LABEL_27:
      v11 = (int *)*v11;
      if ( !v11 )
        goto LABEL_28;
    }
    if ( HIDWORD(v20) == -1 )
      goto LABEL_50;
    sub_B7208(v21);
    if ( *(int *)v20 <= 0 )
      goto LABEL_27;
    v22 = *(_DWORD **)(v20 + 8);
    goto LABEL_22;
  }
LABEL_28:
  for ( k = *(_DWORD *)(a1 + 208); k; k = *(_DWORD *)(k + 40) )
    sub_1B64FC(k, a1, (int)&v58);
  v30 = *(_DWORD *)(a1 + 28);
  if ( !v30 )
    goto LABEL_33;
  if ( *(_DWORD *)(a1 + 152) != -1 )
  {
    sub_B7208(v30);
LABEL_33:
    v31 = *(_DWORD *)(a1 + 132);
    if ( v31 )
      (*(void (__fastcall **)(int, int, int *))(*(_DWORD *)(v31 + 40) + 28))(a1, v59, &v58);
    v32 = *(_DWORD *)(a1 + 148);
    if ( v32 > 0 )
    {
      v33 = 0;
      v34 = s1;
      v35 = *(_DWORD *)(a1 + 144) - 4;
      do
      {
        ++v33;
        v36 = *((_DWORD *)v34 + 1);
        v34 += 4;
        *(_DWORD *)(v35 + 4) = v36;
        v35 += 4;
      }
      while ( v33 != v32 );
    }
    v37 = sub_1B64AC(*(_DWORD *)(a1 + 16));
    v38 = *(_DWORD *)(a1 + 168);
    v39 = *(_DWORD *)(a1 + 172);
    *(_DWORD *)(v37 + 12) = 1;
    if ( v38 < v39 )
    {
      v40 = v38 + 12;
      do
      {
        v41 = *(_DWORD *)(v40 - 12);
        v42 = v40;
        if ( v41 )
        {
          v43 = *(_DWORD *)(v40 - 8);
          v44 = *(_DWORD *)(v40 - 12);
          v45 = *(_DWORD *)(v41 + 28);
          v46 = *(_DWORD *)(v43 + 144);
          v47 = *(_DWORD *)(v43 + 36);
          v48 = -1431655765 * ((int)(v40 - 12 - *(_DWORD *)(a1 + 168)) >> 2);
          s1 = **(char ***)(a1 + 36);
          v49 = sub_162FDC(v47, v44);
          sub_95AF0(s1, v48, v45 + *(_DWORD *)(v46 + 4 * v49));
          v39 = *(_DWORD *)(a1 + 172);
        }
        v40 += 12;
      }
      while ( v39 > v42 );
    }
    return v61;
  }
LABEL_49:
  sub_94700((int)"objfiles.c", 859, "sect_index_text not initialized");
LABEL_50:
  v51 = sub_94700((int)"objfiles.c", 827, "Section index is uninitialized");
  v52 = *(_DWORD *)(v51 + 148);
  v56 = &savedregs[8];
  v57 = v53;
  if ( v52 > 0 )
  {
    v54 = &v56 - 1;
    for ( m = 0; m != v52; ++m )
    {
      v54[1] = HIDWORD(v51);
      ++v54;
    }
  }
  return sub_1B654C(v51, &v56);
}

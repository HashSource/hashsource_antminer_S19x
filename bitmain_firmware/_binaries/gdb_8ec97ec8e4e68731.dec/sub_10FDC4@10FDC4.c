int __fastcall sub_10FDC4(int a1)
{
  int v1; // r1
  char v2; // r2
  int v3; // r3
  struct obstack *v5; // r11
  _DWORD *v6; // r5
  _DWORD *v7; // r3
  int v8; // r0
  bool v9; // zf
  int v10; // r3
  int v11; // r0
  int v12; // r1
  int v13; // r1
  int v14; // r3
  char v15; // r2
  int *v16; // r6
  int *v17; // r3
  int v18; // r0
  bool v19; // zf
  int v20; // r3
  size_t v21; // r1
  int v23; // r2
  int v24; // r8
  int v25; // r3
  int v26; // t1
  signed int v27; // r5
  _DWORD *v28; // r3
  signed int v29; // r12
  int v30; // r0
  int v31; // r7
  int v32; // r1
  _BOOL4 v33; // lr
  _DWORD *v34; // r1
  int v35; // r0
  bool v36; // zf
  int v37; // r3
  void *v38; // r0
  _DWORD *v39; // r1
  int v40; // r8
  _DWORD *v41; // r3
  unsigned int v42; // r0
  int v43; // r0
  int v44; // r3
  bool v45; // zf
  int v46; // r0
  int v47; // r0
  struct obstack *v48; // r0
  _DWORD *v49; // r1
  _DWORD *v50; // r3
  unsigned int v51; // r0
  struct obstack *v52; // [sp+Ch] [bp-18h]
  unsigned int v53; // [sp+10h] [bp-14h] BYREF
  void *ptr; // [sp+14h] [bp-10h]
  size_t nmemb; // [sp+18h] [bp-Ch] BYREF
  void *base; // [sp+1Ch] [bp-8h]

  v1 = *(_DWORD *)(a1 + 64);
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 60);
  v5 = (struct obstack *)(a1 + 48);
  v53 = 0;
  ptr = 0;
  nmemb = 0;
  base = 0;
  if ( (unsigned int)(v1 - v3) <= 0x1B )
  {
    obstack_newchunk(v5, 28);
    v3 = *(_DWORD *)(a1 + 60);
    v1 = *(_DWORD *)(a1 + 64);
  }
  v6 = *(_DWORD **)(a1 + 56);
  v7 = (_DWORD *)(v3 + 28);
  v8 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 60) = v7;
  v9 = v7 == v6;
  if ( v7 == v6 )
    v2 = *(_BYTE *)(a1 + 88);
  v10 = ((unsigned int)v7 + v8) & ~v8;
  *(_DWORD *)(a1 + 60) = v10;
  if ( v9 )
    *(_BYTE *)(a1 + 88) = v2 | 2;
  v11 = *(_DWORD *)(a1 + 180);
  if ( v10 - *(_DWORD *)(a1 + 52) > (unsigned int)(v1 - *(_DWORD *)(a1 + 52)) )
  {
    *(_DWORD *)(a1 + 60) = v1;
    v10 = v1;
  }
  v12 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 56) = v10;
  v6[5] = 0;
  *v6 = v12;
  v6[1] = a1;
  v6[6] = 0;
  if ( !v11 )
  {
    ((void (__fastcall *)(int, int, _DWORD *, _DWORD *, _DWORD *))loc_12B0E8)(a1, 1, v6 + 4, v6 + 2, v6 + 3);
    if ( v6[3] )
    {
      v43 = sub_2AD7AC(*v6, ".got");
      v45 = v43 == 0;
      if ( v43 )
        v44 = *(_DWORD *)(v43 + 28);
      v46 = *v6;
      if ( !v45 )
        v6[5] = v44;
      v47 = sub_2AD7AC(v46, ".text");
      if ( v47 )
        v6[6] = *(_DWORD *)(v47 + 28);
      v48 = (struct obstack *)sub_92E28();
      v49 = (_DWORD *)v6[2];
      v52 = v48;
      v50 = v49;
      while ( v49 < (_DWORD *)((char *)v50 + v6[3]) )
      {
        v51 = sub_10DE90(v6, v49, 1, &v53, (int *)&nmemb, 3);
        v50 = (_DWORD *)v6[2];
        v49 = (_DWORD *)v51;
      }
      sub_92E40((int)v52);
      if ( v53 )
      {
        if ( ptr )
          free(ptr);
        v53 = 0;
        ptr = 0;
      }
    }
  }
  ((void (__fastcall *)(int, _DWORD, _DWORD *, _DWORD *, _DWORD *))loc_12B0E8)(a1, 0, v6 + 4, v6 + 2, v6 + 3);
  if ( v6[3] )
  {
    v38 = sub_92E28();
    v39 = (_DWORD *)v6[2];
    v40 = (int)v38;
    v41 = v39;
    while ( v39 < (_DWORD *)((char *)v41 + v6[3]) )
    {
      v42 = sub_10DE90(v6, v39, 0, &v53, (int *)&nmemb, 3);
      v41 = (_DWORD *)v6[2];
      v39 = (_DWORD *)v42;
    }
    sub_92E40(v40);
  }
  if ( v53 )
  {
    if ( ptr )
      free(ptr);
    ptr = 0;
    v53 = 0;
  }
  v13 = *(_DWORD *)(a1 + 64);
  v14 = *(_DWORD *)(a1 + 60);
  v15 = v13 - v14;
  if ( (unsigned int)(v13 - v14) <= 7 )
  {
    obstack_newchunk(v5, 8);
    v14 = *(_DWORD *)(a1 + 60);
    v13 = *(_DWORD *)(a1 + 64);
  }
  v16 = *(int **)(a1 + 56);
  v17 = (int *)(v14 + 8);
  v18 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 60) = v17;
  v19 = v17 == v16;
  if ( v17 == v16 )
    v15 = *(_BYTE *)(a1 + 88);
  v20 = ((unsigned int)v17 + v18) & ~v18;
  *(_DWORD *)(a1 + 60) = v20;
  if ( v19 )
    *(_BYTE *)(a1 + 88) = v15 | 2;
  if ( v20 - *(_DWORD *)(a1 + 52) > (unsigned int)(v13 - *(_DWORD *)(a1 + 52)) )
  {
    v20 = v13;
    *(_DWORD *)(a1 + 60) = v13;
  }
  v21 = nmemb;
  *(_DWORD *)(a1 + 56) = v20;
  if ( !v21 )
  {
    v16[1] = 0;
    *v16 = 0;
    return sub_1B6B1C(a1, dword_4872C8, v16);
  }
  qsort(base, v21, 4u, (__compar_fn_t)sub_10D908);
  if ( (int)nmemb > 0 )
  {
    v23 = (int)base;
    v24 = *(_DWORD *)base;
    v25 = *(_DWORD *)(*(_DWORD *)base + 4);
    if ( v25 )
      goto LABEL_32;
    while ( ++v25 != nmemb )
    {
      v26 = *(_DWORD *)(v23 + 4);
      v23 += 4;
      v24 = v26;
      if ( *(_DWORD *)(v26 + 4) )
        goto LABEL_32;
    }
  }
  v24 = 0;
LABEL_32:
  v27 = 0;
  v28 = *(_DWORD **)(a1 + 60);
  *v16 = 0;
  v29 = nmemb;
  if ( (int)nmemb > 0 )
  {
    v30 = 0;
    do
    {
      while ( 1 )
      {
        v31 = *((_DWORD *)base + v27);
        v23 = (int)base + 4 * v27;
        v32 = *(_DWORD *)(v31 + 4);
        v33 = !v32 && v24 != 0;
        if ( !v33 || *(_DWORD *)(v24 + 4) >= *(_DWORD *)(v31 + 8) )
          break;
        if ( v29 <= ++v27 )
          goto LABEL_46;
      }
      if ( !v30 || v32 != *(_DWORD *)(v30 + 4) )
      {
        if ( (unsigned int)(*(_DWORD *)(a1 + 64) - (_DWORD)v28) <= 3 )
        {
          obstack_newchunk(v5, 4);
          v28 = *(_DWORD **)(a1 + 60);
          v23 = (int)base + 4 * v27;
        }
        v30 = v31;
        *v28 = *(_DWORD *)v23;
        v28 = (_DWORD *)(*(_DWORD *)(a1 + 60) + 4);
        v23 = *v16 + 1;
        *(_DWORD *)(a1 + 60) = v28;
        *v16 = v23;
        v29 = nmemb;
      }
      ++v27;
    }
    while ( v29 > v27 );
  }
LABEL_46:
  v34 = *(_DWORD **)(a1 + 56);
  v35 = *(_DWORD *)(a1 + 64);
  v36 = v34 == v28;
  if ( v34 == v28 )
    LOBYTE(v23) = *(_BYTE *)(a1 + 88);
  v37 = ((unsigned int)v28 + *(_DWORD *)(a1 + 72)) & ~*(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 60) = v37;
  if ( v36 )
    *(_BYTE *)(a1 + 88) = v23 | 2;
  if ( v37 - *(_DWORD *)(a1 + 52) > (unsigned int)(v35 - *(_DWORD *)(a1 + 52)) )
  {
    v37 = v35;
    *(_DWORD *)(a1 + 60) = v35;
  }
  *(_DWORD *)(a1 + 56) = v37;
  v16[1] = (int)v34;
  if ( base )
    free(base);
  return sub_1B6B1C(a1, dword_4872C8, v16);
}

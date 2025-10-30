void __fastcall sub_21AF48(int a1, char **src, size_t n, int a4, int a5)
{
  char v7; // r0
  int v9; // r4
  char **p_s; // r8
  char **v11; // r0
  char *v12; // r3
  char **v13; // r9
  char v14; // r0
  int v15; // r2
  char v16; // r1
  _DWORD *v17; // r3
  int v18; // r0
  size_t v19; // r9
  int v20; // r1
  void *v21; // r8
  void *v22; // r1
  int v23; // r12
  int v24; // r2
  int v25; // r3
  char v26; // r3
  char v27; // r3
  char **v28; // r0
  size_t v29; // r0
  int v30; // r2
  int v31; // r1
  bool v32; // zf
  int v33; // r3
  unsigned int v34; // r12
  size_t v35; // r6
  char ***v36; // r12
  int v37; // r2
  int v38; // r3
  char *v39; // r6
  char *v40; // r0
  int v41; // r3
  int i; // r10
  char **v43; // r0
  char v44; // r2
  unsigned int v45; // r6
  char *v46; // r12
  int v47; // lr
  char *v48; // r2
  int v49; // r3
  char v50; // r3
  char v51; // r2
  char *s; // [sp+8h] [bp-3Ch] BYREF
  int v53; // [sp+Ch] [bp-38h]
  char *v54; // [sp+14h] [bp-30h] BYREF
  char **v55; // [sp+18h] [bp-2Ch] BYREF

  v7 = *(_BYTE *)(a1 + 20);
  v53 = a4;
  v9 = *(_DWORD *)(a5 + 40);
  if ( (v7 & 0x1F) == 0xE )
  {
    if ( a4 )
    {
      v18 = *(_DWORD *)(v9 + 16);
      v19 = n + 1;
      v20 = *(_DWORD *)(v9 + 12);
      if ( n + 1 > v18 - v20 )
      {
        obstack_newchunk(*(struct obstack **)(a5 + 40), n + 1);
        v20 = *(_DWORD *)(v9 + 12);
        v18 = *(_DWORD *)(v9 + 16);
      }
      v21 = *(void **)(v9 + 8);
      v22 = (void *)(v20 + v19);
      v23 = *(_DWORD *)(v9 + 24);
      v24 = *(_DWORD *)(v9 + 4);
      *(_DWORD *)(v9 + 12) = v22;
      if ( v22 == v21 )
        *(_BYTE *)(v9 + 40) |= 2u;
      v25 = ((unsigned int)v22 + v23) & ~v23;
      *(_DWORD *)(v9 + 12) = v25;
      if ( v25 - v24 > (unsigned int)(v18 - v24) )
      {
        v25 = v18;
        *(_DWORD *)(v9 + 12) = v18;
      }
      *(_DWORD *)(v9 + 8) = v25;
      memcpy(v21, src, n);
      *((_BYTE *)v21 + n) = 0;
      v26 = *(_BYTE *)(a1 + 20);
      *(_DWORD *)a1 = v21;
      if ( (v26 & 0x1F) != 0xE )
        goto LABEL_11;
    }
    else
    {
      *(_DWORD *)a1 = src;
    }
    v27 = *(_BYTE *)(a1 + 20);
    *(_DWORD *)(a1 + 16) = v9;
    *(_BYTE *)(a1 + 20) = v27 & 0xDF;
    return;
  }
  if ( !*(_DWORD *)(v9 + 56) )
    *(_DWORD *)(v9 + 56) = sub_323AE0(256, sub_21986C, sub_219850, 0, sub_93094, sub_2197E8);
  if ( *((_BYTE *)src + n) )
  {
    p_s = &s;
    memcpy(&s, src, n);
    *((_BYTE *)&s + n) = 0;
  }
  else
  {
    p_s = src;
  }
  v55 = p_s;
  v11 = (char **)sub_324030(*(_DWORD *)(v9 + 56), &v55, 1);
  v12 = *v11;
  v13 = v11;
  v14 = *(_BYTE *)(a1 + 20);
  if ( v12 )
  {
    v15 = v14 & 0x1F;
    if ( v15 != 6 )
      goto LABEL_9;
    if ( v12[4] )
    {
      *(_DWORD *)a1 = *(_DWORD *)v12;
      if ( !v12[4] )
        goto LABEL_11;
      v17 = v12 + 4;
      goto LABEL_13;
    }
    v54 = (char *)(unsigned __int8)v12[4];
  }
  else
  {
    v54 = 0;
    v41 = v14 & 0x1F;
    if ( (v14 & 0x1F) == 0 )
    {
      v14 = v14 & 0xE0 | 1;
      *(_BYTE *)(a1 + 20) = v14;
      v41 = v14 & 0x1F;
    }
    if ( v41 == 1 )
    {
      for ( i = 0; i != 15; ++i )
      {
        v43 = sub_194438(i);
        v29 = sub_1944D8((int)v43, (int)p_s, &v54);
        v30 = v29;
        if ( v29 )
        {
          v44 = *(_BYTE *)(a1 + 20) & 0xE0 | i & 0x1F;
          s = v54;
          *(_BYTE *)(a1 + 20) = v44;
          goto LABEL_27;
        }
      }
      s = 0;
      goto LABEL_29;
    }
  }
  v28 = sub_194438(v14 & 0x1F);
  sub_1944D8((int)v28, (int)p_s, &v54);
  s = v54;
LABEL_27:
  if ( s )
  {
    v29 = strlen(s);
    v30 = v29;
  }
  else
  {
    v30 = 0;
    v29 = 0;
  }
LABEL_29:
  v31 = *(_DWORD *)(v9 + 16);
  v32 = v53 == 0;
  if ( !v53 )
    v32 = p_s == src;
  v33 = *(_DWORD *)(v9 + 12);
  v34 = v31 - v33;
  if ( v32 )
  {
    v35 = v29 + 5;
    if ( v29 + 5 > v34 )
    {
      obstack_newchunk((struct obstack *)v9, v29 + 5);
      v33 = *(_DWORD *)(v9 + 12);
      v31 = *(_DWORD *)(v9 + 16);
    }
    v36 = *(char ****)(v9 + 8);
    v37 = *(_DWORD *)(v9 + 4);
    *(_DWORD *)(v9 + 12) = v33 + v35;
    if ( (char ***)(v33 + v35) == v36 )
      *(_BYTE *)(v9 + 40) |= 2u;
    v38 = (v33 + v35 + *(_DWORD *)(v9 + 24)) & ~*(_DWORD *)(v9 + 24);
    *(_DWORD *)(v9 + 12) = v38;
    if ( v38 - v37 > (unsigned int)(v31 - v37) )
    {
      v38 = v31;
      *(_DWORD *)(v9 + 12) = v31;
    }
    *(_DWORD *)(v9 + 8) = v38;
    *v13 = (char *)v36;
    *v36 = src;
  }
  else
  {
    v45 = n + 6 + v29;
    if ( v45 > v34 )
    {
      v53 = v30;
      obstack_newchunk((struct obstack *)v9, v45);
      v33 = *(_DWORD *)(v9 + 12);
      v31 = *(_DWORD *)(v9 + 16);
      v30 = v53;
    }
    v46 = *(char **)(v9 + 8);
    v47 = *(_DWORD *)(v9 + 4);
    *(_DWORD *)(v9 + 12) = v33 + v45;
    v48 = &v46[v30 + 5];
    if ( (char *)(v33 + v45) == v46 )
      *(_BYTE *)(v9 + 40) |= 2u;
    v49 = (v33 + v45 + *(_DWORD *)(v9 + 24)) & ~*(_DWORD *)(v9 + 24);
    *(_DWORD *)(v9 + 12) = v49;
    if ( v49 - v47 > (unsigned int)(v31 - v47) )
    {
      v49 = v31;
      *(_DWORD *)(v9 + 12) = v31;
    }
    *(_DWORD *)(v9 + 8) = v49;
    *v13 = v46;
    *(_DWORD *)*v13 = strcpy(v48, (const char *)p_s);
  }
  v39 = s;
  v40 = *v13;
  if ( s )
  {
    strcpy(v40 + 4, s);
    free(v39);
  }
  else
  {
    v40[4] = 0;
  }
  v12 = *v13;
  v15 = *(_BYTE *)(a1 + 20) & 0x1F;
LABEL_9:
  *(_DWORD *)a1 = *(_DWORD *)v12;
  v16 = v12[4];
  if ( v16 )
  {
    v17 = v12 + 4;
    if ( v15 == 14 )
    {
      v51 = *(_BYTE *)(a1 + 20);
      *(_DWORD *)(a1 + 16) = v17;
      *(_BYTE *)(a1 + 20) = v51 | 0x20;
      return;
    }
LABEL_13:
    *(_DWORD *)(a1 + 16) = v17;
    return;
  }
  if ( v15 != 14 )
  {
LABEL_11:
    *(_DWORD *)(a1 + 16) = 0;
    return;
  }
  v50 = *(_BYTE *)(a1 + 20);
  *(_DWORD *)(a1 + 16) = v9;
  *(_BYTE *)(a1 + 20) = v50 & 0xDF | (32 * (v16 & 1));
}

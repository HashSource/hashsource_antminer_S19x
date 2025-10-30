void __fastcall sub_131344(int a1, int *a2)
{
  int v4; // r3
  int v5; // r2
  _DWORD *v6; // r3
  int v7; // r1
  bool v8; // zf
  int v9; // r0
  int v10; // r3
  const char *v11; // r0
  char *v12; // r7
  int v13; // r6
  size_t v14; // r0
  unsigned int v15; // r1
  size_t v16; // r8
  void *v17; // r0
  int v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r0
  bool v22; // zf
  int v23; // r3
  bool v24; // zf
  int v25; // r3
  char *v26; // r0
  const char *v27; // r0
  char *v28; // r7
  char *v29; // r0
  bool v30; // cf
  const char *v31; // r6
  int v32; // r5
  size_t v33; // r8
  void *v34; // r0
  int v35; // r2
  int v36; // r3
  int v37; // r1
  int v38; // r12
  bool v39; // zf
  int v40; // r3
  int v41; // r6
  int v42; // r2

  if ( *(_DWORD *)(a1 + 8) )
  {
    v4 = a2[16];
    goto LABEL_4;
  }
  if ( (*(_BYTE *)(a1 + 6) & 0x10) == 0 )
  {
    v4 = a2[16];
    goto LABEL_9;
  }
  v41 = sub_131198(*(_DWORD *)(a1 + 36), (*(unsigned __int8 *)(a1 + 7) >> 6) & 1, a2);
  if ( (*(_BYTE *)(v41 + 7) & 0x10) == 0 )
    sub_131344();
  v42 = *(_DWORD *)(v41 + 8);
  v4 = a2[16];
  if ( !v42 )
  {
    if ( *(_DWORD *)(a1 + 8) )
    {
LABEL_12:
      if ( v4 != 4 )
        goto LABEL_6;
      goto LABEL_13;
    }
LABEL_9:
    v5 = *(unsigned __int16 *)(a1 + 4);
    if ( v5 != 57 )
    {
      if ( v4 != 4 )
        goto LABEL_42;
      goto LABEL_13;
    }
    *(_DWORD *)(a1 + 8) = "(anonymous namespace)";
    goto LABEL_12;
  }
  *(_DWORD *)(a1 + 8) = v42;
  if ( (*(_BYTE *)(v41 + 6) & 2) != 0 )
    *(_BYTE *)(a1 + 6) = *(_BYTE *)(a1 + 6) & 0xFD | (2 * ((*(_BYTE *)(v41 + 6) & 2) != 0));
LABEL_4:
  if ( v4 == 4 )
  {
LABEL_13:
    v6 = *(_DWORD **)(dword_4872D8 + 340);
    if ( v6 && *v6 && !*(_DWORD *)(a1 + 40) && (*(_BYTE *)(a1 + 6) & 1) != 0 )
    {
      v7 = *(unsigned __int16 *)(a1 + 4);
      v8 = v7 == 2;
      if ( v7 != 2 )
        v8 = (v7 & 0xFFFB) == 19;
      if ( v8 )
      {
        if ( (*(_BYTE *)(a1 + 6) & 0x10) == 0 )
          goto LABEL_26;
        v9 = a1;
        do
          v9 = sub_131198(*(_DWORD *)(v9 + 36), (*(unsigned __int8 *)(v9 + 7) >> 6) & 1, a2);
        while ( (*(_BYTE *)(v9 + 6) & 0x10) != 0 );
        if ( !*(_DWORD *)(v9 + 40) )
        {
LABEL_26:
          v10 = *(_DWORD *)(a1 + 44);
          if ( v10 )
          {
            while ( *(_WORD *)(v10 + 4) != 46 || !*(_DWORD *)(v10 + 12) )
            {
              v10 = *(_DWORD *)(v10 + 48);
              if ( !v10 )
                goto LABEL_5;
            }
            v11 = (const char *)sub_194538(a2[17]);
            v12 = (char *)v11;
            if ( v11 )
            {
              v13 = *(_DWORD *)(*a2 + 40);
              v14 = strlen(v11);
              v15 = v14 + 1;
              v16 = v14;
              v17 = *(void **)(v13 + 12);
              if ( *(_DWORD *)(v13 + 16) - (int)v17 < v15 )
              {
                obstack_newchunk((struct obstack *)v13, v15);
                v17 = *(void **)(v13 + 12);
              }
              memcpy(v17, v12, v16);
              v18 = *(_DWORD *)(v13 + 12);
              *(_DWORD *)(v13 + 12) = v18 + v16 + 1;
              *(_BYTE *)(v18 + v16) = 0;
              v19 = *(_DWORD *)(v13 + 12);
              v20 = *(_DWORD *)(v13 + 8);
              v21 = *(_DWORD *)(v13 + 16);
              v22 = v20 == v19;
              if ( v20 == v19 )
                LOBYTE(v18) = *(_BYTE *)(v13 + 40);
              v23 = (v19 + *(_DWORD *)(v13 + 24)) & ~*(_DWORD *)(v13 + 24);
              *(_DWORD *)(v13 + 12) = v23;
              if ( v22 )
                *(_BYTE *)(v13 + 40) = v18 | 2;
              if ( v23 - *(_DWORD *)(v13 + 4) > (unsigned int)(v21 - *(_DWORD *)(v13 + 4)) )
                *(_DWORD *)(v13 + 12) = v21;
              *(_DWORD *)(v13 + 8) = *(_DWORD *)(v13 + 12);
              *(_DWORD *)(a1 + 8) = v20;
              free(v12);
            }
          }
        }
      }
    }
  }
LABEL_5:
  if ( *(_DWORD *)(a1 + 8) )
    goto LABEL_6;
  v5 = *(unsigned __int16 *)(a1 + 4);
LABEL_42:
  v24 = v5 == 2;
  if ( v5 != 2 )
    v24 = v5 == 56;
  v25 = v24;
  if ( (v5 & 0xFFFB) == 0x13 )
    v25 |= 1u;
  if ( v25 )
  {
    v26 = *(char **)(a1 + 12);
    if ( v26 )
    {
      v27 = (const char *)sub_1008BC(v26);
      v28 = (char *)v27;
      if ( v27 )
      {
        v29 = strrchr(v27, 58);
        v30 = 1;
        if ( v29 )
          v30 = v28 >= v29;
        if ( v30 || *(v29 - 1) != 58 )
          v31 = v28;
        else
          v31 = v29 + 1;
        v32 = *(_DWORD *)(*a2 + 40);
        v33 = strlen(v31);
        v34 = *(void **)(v32 + 12);
        if ( *(_DWORD *)(v32 + 16) - (int)v34 < v33 + 1 )
        {
          obstack_newchunk((struct obstack *)v32, v33 + 1);
          v34 = *(void **)(v32 + 12);
        }
        memcpy(v34, v31, v33);
        v35 = *(_DWORD *)(v32 + 12);
        *(_DWORD *)(v32 + 12) = v35 + v33 + 1;
        *(_BYTE *)(v35 + v33) = 0;
        v36 = *(_DWORD *)(v32 + 12);
        v37 = *(_DWORD *)(v32 + 8);
        v38 = *(_DWORD *)(v32 + 16);
        v39 = v37 == v36;
        if ( v37 == v36 )
          LOBYTE(v35) = *(_BYTE *)(v32 + 40);
        v40 = (v36 + *(_DWORD *)(v32 + 24)) & ~*(_DWORD *)(v32 + 24);
        *(_DWORD *)(v32 + 12) = v40;
        if ( v39 )
          *(_BYTE *)(v32 + 40) = v35 | 2;
        if ( v40 - *(_DWORD *)(v32 + 4) > (unsigned int)(v38 - *(_DWORD *)(v32 + 4)) )
        {
          v40 = v38;
          *(_DWORD *)(v32 + 12) = v38;
        }
        *(_DWORD *)(v32 + 8) = v40;
        *(_DWORD *)(a1 + 8) = v37;
        free(v28);
      }
    }
  }
LABEL_6:
  *(_BYTE *)(a1 + 7) |= 0x10u;
}

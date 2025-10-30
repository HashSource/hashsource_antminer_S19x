void __fastcall sub_54514(int a1, int a2)
{
  int v4; // r5
  int v5; // r12
  int v6; // r0
  unsigned int v7; // r3
  unsigned int v8; // r2
  unsigned int v9; // r1
  unsigned int v10; // r3
  unsigned int v11; // r2
  int v12; // r1
  unsigned int v13; // r5
  int v14; // r6
  int v15; // r3
  int v16; // r1
  __int64 v17; // r2
  int v18; // r5
  int v19; // r2
  _DWORD *v20; // r3
  __int64 v21; // r2
  int v22; // r4
  _DWORD *v23; // r6
  int v24; // r7
  int v25; // r3
  unsigned int v26; // r4
  _DWORD *v27; // r5
  int v28; // r2
  _DWORD *v29; // r11
  int v30; // r4
  char *v31; // r8
  unsigned int v32; // r1
  int v33; // r3
  _DWORD *v34; // r3
  unsigned int v35; // r2
  unsigned int v36; // r1
  bool v37; // cc
  int v38; // r2
  int v39; // r3
  void *v40; // r0
  void **v41; // r7
  void *v42; // r0
  unsigned int i; // [sp+4h] [bp-8h]

  ++*(_DWORD *)(a1 + 360);
  v4 = *(unsigned __int8 *)(a2 + 340);
  v5 = *(unsigned __int8 *)(a2 + 343);
  *(_DWORD *)(a2 + 364) = a2 + 340;
  *(_DWORD *)(a2 + 368) = 4;
  v6 = v4 + 17973517 + (v5 << 24) + (*(unsigned __int8 *)(a2 + 342) << 16) + (*(unsigned __int8 *)(a2 + 341) << 8);
  v7 = (-1622558010 - ((unsigned int)&unk_7F76D ^ v6)) ^ (((unsigned int)&unk_7F76D ^ v6) << 8);
  v8 = (-17973517 - ((unsigned int)&unk_7F76D ^ v6) - v7) ^ (v7 >> 13);
  v9 = (((unsigned int)&unk_7F76D ^ v6) - v7 - v8) ^ (v8 >> 12);
  v10 = (v7 - v8 - v9) ^ (v9 << 16);
  v11 = (v8 - v9 - v10) ^ (v10 >> 5);
  v12 = (v9 - v10 - v11) ^ (v11 >> 3);
  v13 = (v11 - v12 - ((v10 - v11 - v12) ^ (v12 << 10))) ^ (((v10 - v11 - v12) ^ (v12 << 10)) >> 15);
  *(_DWORD *)(a2 + 372) = v13;
  v14 = *(_DWORD *)(a1 + 352);
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 + 344);
    *(_DWORD *)(a2 + 352) = 0;
    v16 = a2 + 344;
    *(_DWORD *)(a2 + 344) = v15;
    *(_DWORD *)(a2 + 348) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 16)
                          - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 20);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 16) + 8) = a2;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 16) = a2 + 344;
  }
  else
  {
    *(_DWORD *)(a2 + 352) = 0;
    *(_DWORD *)(a2 + 348) = 0;
    *(_DWORD *)(a1 + 352) = a2;
    *(_DWORD *)(a2 + 344) = malloc(0x2Cu);
    v40 = *(void **)(*(_DWORD *)(a1 + 352) + 344);
    if ( !v40 )
      goto LABEL_31;
    memset(v40, 0, 0x2Cu);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 16) = *(_DWORD *)(a1 + 352) + 344;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 4) = 32;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 8) = 5;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 20) = 344;
    v41 = *(void ***)(*(_DWORD *)(a1 + 352) + 344);
    *v41 = malloc(0x180u);
    v42 = **(void ***)(*(_DWORD *)(a1 + 352) + 344);
    if ( !v42 )
      goto LABEL_31;
    memset(v42, 0, 0x180u);
    v16 = a2 + 344;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 40) = -1609490463;
  }
  ++*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 12);
  v17 = *(_QWORD *)*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344);
  v18 = 12 * (v13 & (HIDWORD(v17) - 1));
  ++*(_DWORD *)(v17 + v18 + 4);
  HIDWORD(v17) = *(_DWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 352) + 344) + v18);
  *(_DWORD *)(a2 + 356) = 0;
  *(_DWORD *)(a2 + 360) = HIDWORD(v17);
  HIDWORD(v17) = **(_DWORD **)(*(_DWORD *)(a1 + 352) + 344);
  v19 = *(_DWORD *)(HIDWORD(v17) + v18);
  v20 = (_DWORD *)(HIDWORD(v17) + v18);
  if ( v19 )
  {
    *(_DWORD *)(v19 + 12) = v16;
    v20 = (_DWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 352) + 344) + v18);
  }
  *v20 = v16;
  v21 = *(_QWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 352) + 344) + v18 + 4);
  if ( (unsigned int)v21 >= 10 * (HIDWORD(v21) + 1) )
  {
    v22 = *(_DWORD *)(a2 + 344);
    if ( *(_DWORD *)(v22 + 36) != 1 )
    {
      v23 = calloc(24 * *(_DWORD *)(v22 + 4), 1u);
      if ( v23 )
      {
        v24 = 0;
        *(_DWORD *)(v22 + 24) = (((2 * *(_DWORD *)(v22 + 4) - 1) & *(_DWORD *)(v22 + 12)) != 0)
                              + (*(_DWORD *)(v22 + 12) >> (*(_BYTE *)(v22 + 8) + 1));
        *(_DWORD *)(*(_DWORD *)(a2 + 344) + 28) = 0;
        v25 = *(_DWORD *)(a2 + 344);
        v26 = *(_DWORD *)(v25 + 4);
        if ( v26 )
        {
          for ( i = 0; i < v26; ++i )
          {
            v27 = *(_DWORD **)(*(_DWORD *)v25 + v24);
            if ( v27 )
            {
              while ( 1 )
              {
                v28 = v27[7];
                v29 = (_DWORD *)v27[4];
                v30 = 3 * ((2 * v26 - 1) & v28);
                v31 = (char *)&v23[v30];
                v32 = *((_DWORD *)v31 + 1) + 1;
                *((_DWORD *)v31 + 1) = v32;
                if ( v32 > *(_DWORD *)(v25 + 24) )
                {
                  ++*(_DWORD *)(v25 + 28);
                  *((_DWORD *)v31 + 2) = sub_77070(*((_DWORD *)v31 + 1), *(_DWORD *)(*(_DWORD *)(a2 + 344) + 24), v28);
                }
                v27[3] = 0;
                v27[4] = v23[v30];
                v33 = v23[v30];
                if ( v33 )
                  *(_DWORD *)(v33 + 12) = v27;
                v23[v30] = v27;
                v25 = *(_DWORD *)(a2 + 344);
                if ( !v29 )
                  break;
                v26 = *(_DWORD *)(v25 + 4);
                v27 = v29;
              }
              v26 = *(_DWORD *)(v25 + 4);
            }
            v24 += 12;
          }
        }
        free(*(void **)v25);
        *(_DWORD *)(*(_DWORD *)(a2 + 344) + 4) *= 2;
        ++*(_DWORD *)(*(_DWORD *)(a2 + 344) + 8);
        **(_DWORD **)(a2 + 344) = v23;
        v34 = *(_DWORD **)(a2 + 344);
        v35 = v34[7];
        v36 = v34[3];
        v37 = v35 > v36 >> 1;
        if ( v35 <= v36 >> 1 )
          v38 = 0;
        else
          v38 = v34[8];
        if ( v37 )
          ++v38;
        v34[8] = v38;
        v39 = *(_DWORD *)(a2 + 344);
        if ( *(_DWORD *)(v39 + 32) > 1u )
          *(_DWORD *)(v39 + 36) = 1;
        return;
      }
LABEL_31:
      exit(-1);
    }
  }
}

void __fastcall sub_2E034(int a1, int a2)
{
  int v4; // r5
  int v5; // r12
  int v6; // r1
  unsigned int v7; // r3
  unsigned int v8; // r2
  int v9; // r1
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
  _DWORD *v28; // r11
  int v29; // r4
  char *v30; // r8
  unsigned int v31; // r1
  int v32; // r3
  _DWORD *v33; // r3
  unsigned int v34; // r2
  unsigned int v35; // r1
  bool v36; // cc
  int v37; // r2
  int v38; // r3
  void *v39; // r0
  void **v40; // r7
  void *v41; // r0
  unsigned int i; // [sp+4h] [bp-8h]

  ++*(_DWORD *)(a1 + 360);
  v4 = *(unsigned __int8 *)(a2 + 340);
  v5 = *(unsigned __int8 *)(a2 + 343);
  *(_DWORD *)(a2 + 364) = a2 + 340;
  *(_DWORD *)(a2 + 368) = 4;
  v6 = (v4 + 17973517 + (v5 << 24) + (*(unsigned __int8 *)(a2 + 342) << 16) + (*(unsigned __int8 *)(a2 + 341) << 8))
     ^ 0x7F76D;
  v7 = (-1622558010 - v6) ^ (v6 << 8);
  v8 = (-17973517 - v6 - v7) ^ (v7 >> 13);
  v9 = (v6 - v7 - v8) ^ (v8 >> 12);
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
    v39 = *(void **)(*(_DWORD *)(a1 + 352) + 344);
    if ( !v39 )
      goto LABEL_31;
    memset(v39, 0, 0x2Cu);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 16) = *(_DWORD *)(a1 + 352) + 344;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 4) = 32;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 8) = 5;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 20) = 344;
    v40 = *(void ***)(*(_DWORD *)(a1 + 352) + 344);
    *v40 = malloc(0x180u);
    v41 = **(void ***)(*(_DWORD *)(a1 + 352) + 344);
    if ( !v41 )
      goto LABEL_31;
    memset(v41, 0, 0x180u);
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
                v28 = (_DWORD *)v27[4];
                v29 = 3 * ((2 * v26 - 1) & v27[7]);
                v30 = (char *)&v23[v29];
                v31 = *((_DWORD *)v30 + 1) + 1;
                *((_DWORD *)v30 + 1) = v31;
                if ( v31 > *(_DWORD *)(v25 + 24) )
                {
                  ++*(_DWORD *)(v25 + 28);
                  *((_DWORD *)v30 + 2) = sub_498D8(*((_DWORD *)v30 + 1), *(_DWORD *)(*(_DWORD *)(a2 + 344) + 24));
                }
                v27[3] = 0;
                v27[4] = v23[v29];
                v32 = v23[v29];
                if ( v32 )
                  *(_DWORD *)(v32 + 12) = v27;
                v23[v29] = v27;
                v25 = *(_DWORD *)(a2 + 344);
                if ( !v28 )
                  break;
                v26 = *(_DWORD *)(v25 + 4);
                v27 = v28;
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
        v33 = *(_DWORD **)(a2 + 344);
        v34 = v33[7];
        v35 = v33[3];
        v36 = v34 > v35 >> 1;
        if ( v34 <= v35 >> 1 )
          v37 = 0;
        else
          v37 = v33[8];
        if ( v36 )
          ++v37;
        v33[8] = v37;
        v38 = *(_DWORD *)(a2 + 344);
        if ( *(_DWORD *)(v38 + 32) > 1u )
          *(_DWORD *)(v38 + 36) = 1;
        return;
      }
LABEL_31:
      exit(-1);
    }
  }
}

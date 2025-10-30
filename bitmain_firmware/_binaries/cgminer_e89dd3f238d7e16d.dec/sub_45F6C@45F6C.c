void __fastcall sub_45F6C(int a1, int a2)
{
  int v2; // r4
  void **v3; // r4
  int v4; // r3
  int v5; // r3
  char *v8; // [sp+8h] [bp-3Ch]
  _DWORD *v9; // [sp+10h] [bp-34h]
  char *s; // [sp+14h] [bp-30h]
  int v11; // [sp+18h] [bp-2Ch]
  _DWORD *j; // [sp+1Ch] [bp-28h]
  unsigned int i; // [sp+20h] [bp-24h]
  unsigned int v14; // [sp+2Ch] [bp-18h]
  unsigned int v15; // [sp+2Ch] [bp-18h]
  int v16; // [sp+30h] [bp-14h]
  int v17; // [sp+30h] [bp-14h]
  int v18; // [sp+30h] [bp-14h]
  unsigned int v19; // [sp+34h] [bp-10h]
  unsigned int v20; // [sp+34h] [bp-10h]
  unsigned int v21; // [sp+34h] [bp-10h]

  ++*(_DWORD *)(a1 + 360);
  v16 = ((*(unsigned __int8 *)(a2 + 343) << 24)
       + (*(unsigned __int8 *)(a2 + 342) << 16)
       + (*(unsigned __int8 *)(a2 + 341) << 8)
       + *(unsigned __int8 *)(a2 + 340)
       + 17973517)
      ^ 0x7F76D;
  v14 = (v16 << 8) ^ (-1622558010 - v16);
  v19 = (v14 >> 13) ^ (-17973517 - v16 - v14);
  v17 = (v19 >> 12) ^ (v16 - v14 - v19);
  v15 = (v17 << 16) ^ (v14 - v19 - v17);
  v20 = (v15 >> 5) ^ (v19 - v17 - v15);
  v18 = (v20 >> 3) ^ (v17 - v15 - v20);
  v21 = (((v18 << 10) ^ (v15 - v20 - v18)) >> 15) ^ (v20 - v18 - ((v18 << 10) ^ (v15 - v20 - v18)));
  *(_DWORD *)(a2 + 372) = v21;
  *(_DWORD *)(a2 + 364) = a2 + 340;
  *(_DWORD *)(a2 + 368) = 4;
  if ( *(_DWORD *)(a1 + 352) )
  {
    *(_DWORD *)(a2 + 344) = *(_DWORD *)(*(_DWORD *)(a1 + 352) + 344);
    *(_DWORD *)(a2 + 352) = 0;
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
    v2 = *(_DWORD *)(a1 + 352);
    *(_DWORD *)(v2 + 344) = malloc(0x2Cu);
    if ( !*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) )
      exit(-1);
    memset(*(void **)(*(_DWORD *)(a1 + 352) + 344), 0, 0x2Cu);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 16) = *(_DWORD *)(a1 + 352) + 344;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 4) = 32;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 8) = 5;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 20) = 344;
    v3 = *(void ***)(*(_DWORD *)(a1 + 352) + 344);
    *v3 = malloc(0x180u);
    if ( !**(_DWORD **)(*(_DWORD *)(a1 + 352) + 344) )
      exit(-1);
    memset(**(void ***)(*(_DWORD *)(a1 + 352) + 344), 0, 0x180u);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 40) = -1609490463;
  }
  ++*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 12);
  v11 = (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 4) - 1) & v21;
  v4 = **(_DWORD **)(*(_DWORD *)(a1 + 352) + 344) + 12 * v11;
  ++*(_DWORD *)(v4 + 4);
  *(_DWORD *)(a2 + 360) = *(_DWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 352) + 344) + 12 * v11);
  *(_DWORD *)(a2 + 356) = 0;
  if ( *(_DWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 352) + 344) + 12 * v11) )
    *(_DWORD *)(*(_DWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 352) + 344) + 12 * v11) + 12) = a2 + 344;
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 352) + 344) + 12 * v11) = a2 + 344;
  if ( *(_DWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 352) + 344) + 12 * v11 + 4) >= (unsigned int)(10
                                                                                              * (*(_DWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 352) + 344) + 12 * v11 + 8)
                                                                                               + 1))
    && *(_DWORD *)(*(_DWORD *)(a2 + 344) + 36) != 1 )
  {
    s = (char *)malloc(24 * *(_DWORD *)(*(_DWORD *)(a2 + 344) + 4));
    if ( !s )
      exit(-1);
    memset(s, 0, 24 * *(_DWORD *)(*(_DWORD *)(a2 + 344) + 4));
    *(_DWORD *)(*(_DWORD *)(a2 + 344) + 24) = (((2 * *(_DWORD *)(*(_DWORD *)(a2 + 344) + 4) - 1)
                                              & *(_DWORD *)(*(_DWORD *)(a2 + 344) + 12)) != 0)
                                            + (*(_DWORD *)(*(_DWORD *)(a2 + 344) + 12) >> (*(_DWORD *)(*(_DWORD *)(a2 + 344) + 8)
                                                                                         + 1));
    *(_DWORD *)(*(_DWORD *)(a2 + 344) + 28) = 0;
    for ( i = 0; i < *(_DWORD *)(*(_DWORD *)(a2 + 344) + 4); ++i )
    {
      for ( j = *(_DWORD **)(**(_DWORD **)(a2 + 344) + 12 * i); j; j = v9 )
      {
        v9 = (_DWORD *)j[4];
        v8 = &s[12 * ((2 * *(_DWORD *)(*(_DWORD *)(a2 + 344) + 4) - 1) & j[7])];
        if ( ++*((_DWORD *)v8 + 1) > *(_DWORD *)(*(_DWORD *)(a2 + 344) + 24) )
        {
          ++*(_DWORD *)(*(_DWORD *)(a2 + 344) + 28);
          *((_DWORD *)v8 + 2) = sub_679D0(*((_DWORD *)v8 + 1), *(_DWORD *)(*(_DWORD *)(a2 + 344) + 24));
        }
        j[3] = 0;
        j[4] = *(_DWORD *)v8;
        if ( *(_DWORD *)v8 )
          *(_DWORD *)(*(_DWORD *)v8 + 12) = j;
        *(_DWORD *)v8 = j;
      }
    }
    free(**(void ***)(a2 + 344));
    *(_DWORD *)(*(_DWORD *)(a2 + 344) + 4) *= 2;
    ++*(_DWORD *)(*(_DWORD *)(a2 + 344) + 8);
    **(_DWORD **)(a2 + 344) = s;
    if ( *(_DWORD *)(*(_DWORD *)(a2 + 344) + 28) <= *(_DWORD *)(*(_DWORD *)(a2 + 344) + 12) >> 1 )
      v5 = 0;
    else
      v5 = *(_DWORD *)(*(_DWORD *)(a2 + 344) + 32) + 1;
    *(_DWORD *)(*(_DWORD *)(a2 + 344) + 32) = v5;
    if ( *(_DWORD *)(*(_DWORD *)(a2 + 344) + 32) > 1u )
      *(_DWORD *)(*(_DWORD *)(a2 + 344) + 36) = 1;
  }
}

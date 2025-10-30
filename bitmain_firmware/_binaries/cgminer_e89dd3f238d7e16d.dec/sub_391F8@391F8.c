int __fastcall sub_391F8(int a1)
{
  void **v1; // r4
  int v2; // r3
  int v3; // r3
  int v4; // r3
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r3
  int v10; // r3
  char *v13; // [sp+8h] [bp-6Ch]
  _DWORD *v14; // [sp+10h] [bp-64h]
  char *s; // [sp+14h] [bp-60h]
  int v16; // [sp+18h] [bp-5Ch]
  int v17; // [sp+1Ch] [bp-58h]
  int v18; // [sp+20h] [bp-54h]
  int v19; // [sp+24h] [bp-50h]
  int v20; // [sp+28h] [bp-4Ch]
  int v21; // [sp+2Ch] [bp-48h]
  unsigned int v22; // [sp+30h] [bp-44h]
  int v23; // [sp+34h] [bp-40h]
  unsigned int v24; // [sp+38h] [bp-3Ch]
  unsigned int v25; // [sp+3Ch] [bp-38h]
  int v26; // [sp+40h] [bp-34h]
  unsigned int k; // [sp+44h] [bp-30h]
  _DWORD *j; // [sp+48h] [bp-2Ch]
  unsigned int i; // [sp+4Ch] [bp-28h]
  unsigned int v30; // [sp+58h] [bp-1Ch]
  unsigned int v31; // [sp+58h] [bp-1Ch]
  int v32; // [sp+5Ch] [bp-18h]
  int v33; // [sp+5Ch] [bp-18h]
  int v34; // [sp+5Ch] [bp-18h]
  unsigned int v35; // [sp+60h] [bp-14h]
  unsigned int v36; // [sp+60h] [bp-14h]
  unsigned int v37; // [sp+60h] [bp-14h]
  unsigned __int8 v38; // [sp+67h] [bp-Dh]

  v38 = 1;
  sub_2D2FC((pthread_mutex_t *)dword_86E4C, "cgminer.c", "hash_push", 5839);
  if ( sub_3919C(a1) )
    ++dword_86EF0;
  if ( *(_BYTE *)(dword_92F90 + 8) != 1 )
  {
    v32 = ((*(unsigned __int8 *)(a1 + 343) << 24)
         + (*(unsigned __int8 *)(a1 + 342) << 16)
         + (*(unsigned __int8 *)(a1 + 341) << 8)
         + *(unsigned __int8 *)(a1 + 340)
         + 17973517)
        ^ 0x7F76D;
    v30 = (v32 << 8) ^ (-1622558010 - v32);
    v35 = (v30 >> 13) ^ (-17973517 - v32 - v30);
    v33 = (v35 >> 12) ^ (v32 - v30 - v35);
    v31 = (v33 << 16) ^ (v30 - v35 - v33);
    v36 = (v31 >> 5) ^ (v35 - v33 - v31);
    v34 = (v36 >> 3) ^ (v33 - v31 - v36);
    v37 = (((v34 << 10) ^ (v31 - v36 - v34)) >> 15) ^ (v36 - v34 - ((v34 << 10) ^ (v31 - v36 - v34)));
    *(_DWORD *)(a1 + 372) = v37;
    *(_DWORD *)(a1 + 364) = a1 + 340;
    *(_DWORD *)(a1 + 368) = 4;
    if ( dword_86D00 )
    {
      *(_DWORD *)(a1 + 344) = *(_DWORD *)(dword_86D00 + 344);
      *(_DWORD *)(a1 + 352) = 0;
      *(_DWORD *)(a1 + 348) = *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 16)
                            - *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 20);
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 16) + 8) = a1;
      *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 16) = a1 + 344;
    }
    else
    {
      *(_DWORD *)(a1 + 352) = 0;
      *(_DWORD *)(a1 + 348) = 0;
      dword_86D00 = a1;
      *(_DWORD *)(a1 + 344) = malloc(0x2Cu);
      if ( !*(_DWORD *)(dword_86D00 + 344) )
        exit(-1);
      memset(*(void **)(dword_86D00 + 344), 0, 0x2Cu);
      *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 16) = dword_86D00 + 344;
      *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 4) = 32;
      *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 8) = 5;
      *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 20) = 344;
      v1 = *(void ***)(dword_86D00 + 344);
      *v1 = malloc(0x180u);
      if ( !**(_DWORD **)(dword_86D00 + 344) )
        exit(-1);
      memset(**(void ***)(dword_86D00 + 344), 0, 0x180u);
      *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 40) = -1609490463;
    }
    ++*(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 12);
    v16 = (*(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 4) - 1) & v37;
    v2 = **(_DWORD **)(dword_86D00 + 344) + 12 * v16;
    ++*(_DWORD *)(v2 + 4);
    *(_DWORD *)(a1 + 360) = *(_DWORD *)(**(_DWORD **)(dword_86D00 + 344) + 12 * v16);
    *(_DWORD *)(a1 + 356) = 0;
    if ( *(_DWORD *)(**(_DWORD **)(dword_86D00 + 344) + 12 * v16) )
      *(_DWORD *)(*(_DWORD *)(**(_DWORD **)(dword_86D00 + 344) + 12 * v16) + 12) = a1 + 344;
    *(_DWORD *)(**(_DWORD **)(dword_86D00 + 344) + 12 * v16) = a1 + 344;
    if ( *(_DWORD *)(**(_DWORD **)(dword_86D00 + 344) + 12 * v16 + 4) >= (unsigned int)(10
                                                                                      * (*(_DWORD *)(**(_DWORD **)(dword_86D00 + 344) + 12 * v16 + 8)
                                                                                       + 1))
      && *(_DWORD *)(*(_DWORD *)(a1 + 344) + 36) != 1 )
    {
      s = (char *)malloc(24 * *(_DWORD *)(*(_DWORD *)(a1 + 344) + 4));
      if ( !s )
        exit(-1);
      memset(s, 0, 24 * *(_DWORD *)(*(_DWORD *)(a1 + 344) + 4));
      *(_DWORD *)(*(_DWORD *)(a1 + 344) + 24) = (((2 * *(_DWORD *)(*(_DWORD *)(a1 + 344) + 4) - 1)
                                                & *(_DWORD *)(*(_DWORD *)(a1 + 344) + 12)) != 0)
                                              + (*(_DWORD *)(*(_DWORD *)(a1 + 344) + 12) >> (*(_DWORD *)(*(_DWORD *)(a1 + 344) + 8)
                                                                                           + 1));
      *(_DWORD *)(*(_DWORD *)(a1 + 344) + 28) = 0;
      for ( i = 0; i < *(_DWORD *)(*(_DWORD *)(a1 + 344) + 4); ++i )
      {
        for ( j = *(_DWORD **)(**(_DWORD **)(a1 + 344) + 12 * i); j; j = v14 )
        {
          v14 = (_DWORD *)j[4];
          v13 = &s[12 * ((2 * *(_DWORD *)(*(_DWORD *)(a1 + 344) + 4) - 1) & j[7])];
          if ( ++*((_DWORD *)v13 + 1) > *(_DWORD *)(*(_DWORD *)(a1 + 344) + 24) )
          {
            ++*(_DWORD *)(*(_DWORD *)(a1 + 344) + 28);
            *((_DWORD *)v13 + 2) = sub_679D0(*((_DWORD *)v13 + 1), *(_DWORD *)(*(_DWORD *)(a1 + 344) + 24));
          }
          j[3] = 0;
          j[4] = *(_DWORD *)v13;
          if ( *(_DWORD *)v13 )
            *(_DWORD *)(*(_DWORD *)v13 + 12) = j;
          *(_DWORD *)v13 = j;
        }
      }
      free(**(void ***)(a1 + 344));
      *(_DWORD *)(*(_DWORD *)(a1 + 344) + 4) *= 2;
      ++*(_DWORD *)(*(_DWORD *)(a1 + 344) + 8);
      **(_DWORD **)(a1 + 344) = s;
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 344) + 28) <= *(_DWORD *)(*(_DWORD *)(a1 + 344) + 12) >> 1 )
        v3 = 0;
      else
        v3 = *(_DWORD *)(*(_DWORD *)(a1 + 344) + 32) + 1;
      *(_DWORD *)(*(_DWORD *)(a1 + 344) + 32) = v3;
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 344) + 32) > 1u )
        *(_DWORD *)(*(_DWORD *)(a1 + 344) + 36) = 1;
    }
    if ( dword_86D00 )
    {
      v24 = 1;
      v26 = 1;
      v18 = dword_86D00 + 344;
      while ( v26 )
      {
        v21 = v18;
        v18 = 0;
        v17 = 0;
        v25 = 0;
        while ( v21 )
        {
          ++v25;
          v20 = v21;
          v23 = 0;
          for ( k = 0; k < v24; ++k )
          {
            ++v23;
            v4 = *(_DWORD *)(v20 + 8) ? *(_DWORD *)(v20 + 8) + *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 20) : 0;
            v20 = v4;
            if ( !v4 )
              break;
          }
          v22 = v24;
          while ( v23 || v22 && v20 )
          {
            if ( v23 )
            {
              if ( v22 && v20 )
              {
                if ( sub_39164(
                       v21 - *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 20),
                       v20 - *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 20)) > 0 )
                {
                  v19 = v20;
                  if ( *(_DWORD *)(v20 + 8) )
                    v8 = *(_DWORD *)(v20 + 8) + *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 20);
                  else
                    v8 = 0;
                  v20 = v8;
                  --v22;
                }
                else
                {
                  v19 = v21;
                  if ( v21 )
                  {
                    if ( *(_DWORD *)(v21 + 8) )
                      v7 = *(_DWORD *)(v21 + 8) + *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 20);
                    else
                      v7 = 0;
                    v21 = v7;
                  }
                  --v23;
                }
              }
              else
              {
                v19 = v21;
                if ( v21 )
                {
                  if ( *(_DWORD *)(v21 + 8) )
                    v6 = *(_DWORD *)(v21 + 8) + *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 20);
                  else
                    v6 = 0;
                  v21 = v6;
                }
                --v23;
              }
            }
            else
            {
              v19 = v20;
              if ( *(_DWORD *)(v20 + 8) )
                v5 = *(_DWORD *)(v20 + 8) + *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 20);
              else
                v5 = 0;
              v20 = v5;
              --v22;
            }
            if ( v17 )
            {
              if ( v19 )
                v9 = v19 - *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 20);
              else
                v9 = 0;
              *(_DWORD *)(v17 + 8) = v9;
            }
            else
            {
              v18 = v19;
            }
            if ( v19 )
            {
              if ( v17 )
                v10 = v17 - *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 20);
              else
                v10 = 0;
              *(_DWORD *)(v19 + 4) = v10;
            }
            v17 = v19;
          }
          v21 = v20;
        }
        if ( v17 )
          *(_DWORD *)(v17 + 8) = 0;
        if ( v25 <= 1 )
        {
          v26 = 0;
          *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 16) = v17;
          dword_86D00 = v18 - *(_DWORD *)(*(_DWORD *)(dword_86D00 + 344) + 20);
        }
        v24 *= 2;
      }
    }
  }
  else
  {
    v38 = 0;
  }
  pthread_cond_broadcast((pthread_cond_t *)(dword_92F90 + 40));
  sub_2D434((pthread_mutex_t *)dword_86E4C, "cgminer.c", "hash_push", 5857);
  return v38;
}

int __fastcall sub_4CD44(_DWORD *a1)
{
  size_t v1; // r0
  void **v2; // r4
  int v3; // r3
  int v4; // r3
  int v5; // r2
  _DWORD *v6; // r3
  int v7; // r2
  char *v10; // [sp+14h] [bp-58h]
  _DWORD *v11; // [sp+1Ch] [bp-50h]
  char *v12; // [sp+20h] [bp-4Ch]
  int v13; // [sp+24h] [bp-48h]
  int v14; // [sp+28h] [bp-44h]
  _DWORD *m; // [sp+2Ch] [bp-40h]
  unsigned int k; // [sp+30h] [bp-3Ch]
  unsigned __int8 *v17; // [sp+34h] [bp-38h]
  size_t j; // [sp+38h] [bp-34h]
  unsigned int v19; // [sp+3Ch] [bp-30h]
  unsigned int v20; // [sp+3Ch] [bp-30h]
  unsigned int v21; // [sp+3Ch] [bp-30h]
  unsigned int v22; // [sp+3Ch] [bp-30h]
  unsigned int v23; // [sp+3Ch] [bp-30h]
  unsigned int v24; // [sp+3Ch] [bp-30h]
  int v25; // [sp+40h] [bp-2Ch]
  int v26; // [sp+40h] [bp-2Ch]
  int v27; // [sp+40h] [bp-2Ch]
  int v28; // [sp+40h] [bp-2Ch]
  int v29; // [sp+40h] [bp-2Ch]
  int v30; // [sp+40h] [bp-2Ch]
  int v31; // [sp+44h] [bp-28h]
  unsigned int v32; // [sp+44h] [bp-28h]
  unsigned int v33; // [sp+44h] [bp-28h]
  unsigned int v34; // [sp+44h] [bp-28h]
  size_t v35; // [sp+44h] [bp-28h]
  unsigned int v36; // [sp+44h] [bp-28h]
  unsigned int v37; // [sp+44h] [bp-28h]
  unsigned int v38; // [sp+44h] [bp-28h]
  const char *v39; // [sp+48h] [bp-24h]
  size_t i; // [sp+4Ch] [bp-20h]
  unsigned int v41; // [sp+50h] [bp-1Ch]
  unsigned int v42; // [sp+50h] [bp-1Ch]
  unsigned int v43; // [sp+50h] [bp-1Ch]
  unsigned int v44; // [sp+50h] [bp-1Ch]
  unsigned int v45; // [sp+50h] [bp-1Ch]
  unsigned int v46; // [sp+50h] [bp-1Ch]
  int v47; // [sp+54h] [bp-18h]
  int v48; // [sp+54h] [bp-18h]
  int v49; // [sp+54h] [bp-18h]
  int v50; // [sp+54h] [bp-18h]
  int v51; // [sp+54h] [bp-18h]
  int v52; // [sp+54h] [bp-18h]
  int v53; // [sp+58h] [bp-14h]
  unsigned int v54; // [sp+58h] [bp-14h]
  unsigned int v55; // [sp+58h] [bp-14h]
  unsigned int v56; // [sp+58h] [bp-14h]
  size_t v57; // [sp+58h] [bp-14h]
  unsigned int v58; // [sp+58h] [bp-14h]
  unsigned int v59; // [sp+58h] [bp-14h]
  unsigned int v60; // [sp+58h] [bp-14h]
  char *s; // [sp+5Ch] [bp-10h]
  char *sa; // [sp+5Ch] [bp-10h]

  v39 = *(const char **)(a1[1] + 8);
  v53 = -17973521;
  v41 = -1640531527;
  v47 = -1640531527;
  for ( i = strlen(v39); i > 0xB; i -= 12 )
  {
    v42 = v41
        + *((unsigned __int8 *)v39 + 4)
        + (*((unsigned __int8 *)v39 + 5) << 8)
        + (*((unsigned __int8 *)v39 + 6) << 16)
        + (*((unsigned __int8 *)v39 + 7) << 24);
    v54 = v53
        + *((unsigned __int8 *)v39 + 8)
        + (*((unsigned __int8 *)v39 + 9) << 8)
        + (*((unsigned __int8 *)v39 + 10) << 16)
        + (*((unsigned __int8 *)v39 + 11) << 24);
    v48 = (v54 >> 13)
        ^ (v47
         + *(unsigned __int8 *)v39
         + (*((unsigned __int8 *)v39 + 1) << 8)
         + (*((unsigned __int8 *)v39 + 2) << 16)
         + (*((unsigned __int8 *)v39 + 3) << 24)
         - v42
         - v54);
    v43 = (v48 << 8) ^ (v42 - v54 - v48);
    v55 = (v43 >> 13) ^ (v54 - v48 - v43);
    v49 = (v55 >> 12) ^ (v48 - v43 - v55);
    v44 = (v49 << 16) ^ (v43 - v55 - v49);
    v56 = (v44 >> 5) ^ (v55 - v49 - v44);
    v47 = (v56 >> 3) ^ (v49 - v44 - v56);
    v41 = (v47 << 10) ^ (v44 - v56 - v47);
    v53 = (v41 >> 15) ^ (v56 - v47 - v41);
    v39 += 12;
  }
  v57 = v53 + strlen(*(const char **)(a1[1] + 8));
  switch ( i )
  {
    case 1u:
      goto LABEL_15;
    case 2u:
      goto LABEL_14;
    case 3u:
      goto LABEL_13;
    case 4u:
      goto LABEL_12;
    case 5u:
      goto LABEL_11;
    case 6u:
      goto LABEL_10;
    case 7u:
      goto LABEL_9;
    case 8u:
      goto LABEL_8;
    case 9u:
      goto LABEL_7;
    case 0xAu:
      goto LABEL_6;
    case 0xBu:
      v57 += *((unsigned __int8 *)v39 + 10) << 24;
LABEL_6:
      v57 += *((unsigned __int8 *)v39 + 9) << 16;
LABEL_7:
      v57 += *((unsigned __int8 *)v39 + 8) << 8;
LABEL_8:
      v41 += *((unsigned __int8 *)v39 + 7) << 24;
LABEL_9:
      v41 += *((unsigned __int8 *)v39 + 6) << 16;
LABEL_10:
      v41 += *((unsigned __int8 *)v39 + 5) << 8;
LABEL_11:
      v41 += *((unsigned __int8 *)v39 + 4);
LABEL_12:
      v47 += *((unsigned __int8 *)v39 + 3) << 24;
LABEL_13:
      v47 += *((unsigned __int8 *)v39 + 2) << 16;
LABEL_14:
      v47 += *((unsigned __int8 *)v39 + 1) << 8;
LABEL_15:
      v47 += *(unsigned __int8 *)v39;
      break;
    default:
      break;
  }
  v50 = (v57 >> 13) ^ (v47 - v41 - v57);
  v45 = (v50 << 8) ^ (v41 - v57 - v50);
  v58 = (v45 >> 13) ^ (v57 - v50 - v45);
  v51 = (v58 >> 12) ^ (v50 - v45 - v58);
  v46 = (v51 << 16) ^ (v45 - v58 - v51);
  v59 = (v46 >> 5) ^ (v58 - v51 - v46);
  v52 = (v59 >> 3) ^ (v51 - v46 - v59);
  v60 = (((v52 << 10) ^ (v46 - v59 - v52)) >> 15) ^ (v59 - v52 - ((v52 << 10) ^ (v46 - v59 - v52)));
  s = 0;
  if ( dword_89998 )
  {
    v14 = v60 & (*(_DWORD *)(*(_DWORD *)(dword_89998 + 8) + 4) - 1);
    if ( *(_DWORD *)(**(_DWORD **)(dword_89998 + 8) + 12 * v14) )
      s = (char *)(*(_DWORD *)(**(_DWORD **)(dword_89998 + 8) + 12 * v14)
                 - *(_DWORD *)(*(_DWORD *)(dword_89998 + 8) + 20));
    else
      s = 0;
    while ( s )
    {
      if ( *((_DWORD *)s + 9) == v60 && *((_DWORD *)s + 8) == strlen(*(const char **)(a1[1] + 8)) )
      {
        v1 = strlen(*(const char **)(a1[1] + 8));
        if ( !memcmp(*((const void **)s + 7), *(const void **)(a1[1] + 8), v1) )
          break;
      }
      if ( *((_DWORD *)s + 6) )
        s = (char *)(*((_DWORD *)s + 6) - *(_DWORD *)(*(_DWORD *)(dword_89998 + 8) + 20));
      else
        s = 0;
    }
  }
  if ( s )
  {
    a1[2] = ++*((_DWORD *)s + 1);
  }
  else
  {
    sa = (char *)sub_20210(0x28u, "cgminer.c", "add_cgpu", 11375);
    sub_2BEFC(sa, *(const void **)(a1[1] + 8), 4u, "cgminer.c", "add_cgpu", 11376);
    *((_DWORD *)sa + 1) = 0;
    a1[2] = *((_DWORD *)sa + 1);
    v17 = (unsigned __int8 *)sa;
    v31 = -17973521;
    v19 = -1640531527;
    v25 = -1640531527;
    for ( j = strlen(sa); j > 0xB; j -= 12 )
    {
      v20 = v19 + v17[4] + (v17[5] << 8) + (v17[6] << 16) + (v17[7] << 24);
      v32 = v31 + v17[8] + (v17[9] << 8) + (v17[10] << 16) + (v17[11] << 24);
      v26 = (v32 >> 13) ^ (v25 + *v17 + (v17[1] << 8) + (v17[2] << 16) + (v17[3] << 24) - v20 - v32);
      v21 = (v26 << 8) ^ (v20 - v32 - v26);
      v33 = (v21 >> 13) ^ (v32 - v26 - v21);
      v27 = (v33 >> 12) ^ (v26 - v21 - v33);
      v22 = (v27 << 16) ^ (v21 - v33 - v27);
      v34 = (v22 >> 5) ^ (v33 - v27 - v22);
      v25 = (v34 >> 3) ^ (v27 - v22 - v34);
      v19 = (v25 << 10) ^ (v22 - v34 - v25);
      v31 = (v19 >> 15) ^ (v34 - v25 - v19);
      v17 += 12;
    }
    v35 = v31 + strlen(sa);
    switch ( j )
    {
      case 1u:
        goto LABEL_43;
      case 2u:
        goto LABEL_42;
      case 3u:
        goto LABEL_41;
      case 4u:
        goto LABEL_40;
      case 5u:
        goto LABEL_39;
      case 6u:
        goto LABEL_38;
      case 7u:
        goto LABEL_37;
      case 8u:
        goto LABEL_36;
      case 9u:
        goto LABEL_35;
      case 0xAu:
        goto LABEL_34;
      case 0xBu:
        v35 += v17[10] << 24;
LABEL_34:
        v35 += v17[9] << 16;
LABEL_35:
        v35 += v17[8] << 8;
LABEL_36:
        v19 += v17[7] << 24;
LABEL_37:
        v19 += v17[6] << 16;
LABEL_38:
        v19 += v17[5] << 8;
LABEL_39:
        v19 += v17[4];
LABEL_40:
        v25 += v17[3] << 24;
LABEL_41:
        v25 += v17[2] << 16;
LABEL_42:
        v25 += v17[1] << 8;
LABEL_43:
        v25 += *v17;
        break;
      default:
        break;
    }
    v28 = (v35 >> 13) ^ (v25 - v19 - v35);
    v23 = (v28 << 8) ^ (v19 - v35 - v28);
    v36 = (v23 >> 13) ^ (v35 - v28 - v23);
    v29 = (v36 >> 12) ^ (v28 - v23 - v36);
    v24 = (v29 << 16) ^ (v23 - v36 - v29);
    v37 = (v24 >> 5) ^ (v36 - v29 - v24);
    v30 = (v37 >> 3) ^ (v29 - v24 - v37);
    v38 = (((v30 << 10) ^ (v24 - v37 - v30)) >> 15) ^ (v37 - v30 - ((v30 << 10) ^ (v24 - v37 - v30)));
    *((_DWORD *)sa + 9) = v38;
    *((_DWORD *)sa + 7) = sa;
    *((_DWORD *)sa + 8) = strlen(sa);
    if ( dword_89998 )
    {
      *((_DWORD *)sa + 2) = *(_DWORD *)(dword_89998 + 8);
      *((_DWORD *)sa + 4) = 0;
      *((_DWORD *)sa + 3) = *(_DWORD *)(*(_DWORD *)(dword_89998 + 8) + 16)
                          - *(_DWORD *)(*(_DWORD *)(dword_89998 + 8) + 20);
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_89998 + 8) + 16) + 8) = sa;
      *(_DWORD *)(*(_DWORD *)(dword_89998 + 8) + 16) = sa + 8;
    }
    else
    {
      *((_DWORD *)sa + 4) = 0;
      *((_DWORD *)sa + 3) = 0;
      dword_89998 = (int)sa;
      *((_DWORD *)sa + 2) = malloc(0x2Cu);
      if ( !*(_DWORD *)(dword_89998 + 8) )
        exit(-1);
      memset(*(void **)(dword_89998 + 8), 0, 0x2Cu);
      *(_DWORD *)(*(_DWORD *)(dword_89998 + 8) + 16) = dword_89998 + 8;
      *(_DWORD *)(*(_DWORD *)(dword_89998 + 8) + 4) = 32;
      *(_DWORD *)(*(_DWORD *)(dword_89998 + 8) + 8) = 5;
      *(_DWORD *)(*(_DWORD *)(dword_89998 + 8) + 20) = 8;
      v2 = *(void ***)(dword_89998 + 8);
      *v2 = malloc(0x180u);
      if ( !**(_DWORD **)(dword_89998 + 8) )
        exit(-1);
      memset(**(void ***)(dword_89998 + 8), 0, 0x180u);
      *(_DWORD *)(*(_DWORD *)(dword_89998 + 8) + 40) = -1609490463;
    }
    ++*(_DWORD *)(*(_DWORD *)(dword_89998 + 8) + 12);
    v13 = v38 & (*(_DWORD *)(*(_DWORD *)(dword_89998 + 8) + 4) - 1);
    v3 = **(_DWORD **)(dword_89998 + 8) + 12 * v13;
    ++*(_DWORD *)(v3 + 4);
    *((_DWORD *)sa + 6) = *(_DWORD *)(**(_DWORD **)(dword_89998 + 8) + 12 * v13);
    *((_DWORD *)sa + 5) = 0;
    if ( *(_DWORD *)(**(_DWORD **)(dword_89998 + 8) + 12 * v13) )
      *(_DWORD *)(*(_DWORD *)(**(_DWORD **)(dword_89998 + 8) + 12 * v13) + 12) = sa + 8;
    *(_DWORD *)(**(_DWORD **)(dword_89998 + 8) + 12 * v13) = sa + 8;
    if ( *(_DWORD *)(**(_DWORD **)(dword_89998 + 8) + 12 * v13 + 4) >= (unsigned int)(10
                                                                                    * (*(_DWORD *)(**(_DWORD **)(dword_89998 + 8)
                                                                                                 + 12 * v13
                                                                                                 + 8)
                                                                                     + 1))
      && *(_DWORD *)(*((_DWORD *)sa + 2) + 36) != 1 )
    {
      v12 = (char *)malloc(24 * *(_DWORD *)(*((_DWORD *)sa + 2) + 4));
      if ( !v12 )
        exit(-1);
      memset(v12, 0, 24 * *(_DWORD *)(*((_DWORD *)sa + 2) + 4));
      *(_DWORD *)(*((_DWORD *)sa + 2) + 24) = (*(_DWORD *)(*((_DWORD *)sa + 2) + 12) >> (*(_DWORD *)(*((_DWORD *)sa + 2) + 8)
                                                                                       + 1))
                                            + (((2 * *(_DWORD *)(*((_DWORD *)sa + 2) + 4) - 1)
                                              & *(_DWORD *)(*((_DWORD *)sa + 2) + 12)) != 0);
      *(_DWORD *)(*((_DWORD *)sa + 2) + 28) = 0;
      for ( k = 0; *(_DWORD *)(*((_DWORD *)sa + 2) + 4) > k; ++k )
      {
        for ( m = *(_DWORD **)(**((_DWORD **)sa + 2) + 12 * k); m; m = v11 )
        {
          v11 = (_DWORD *)m[4];
          v10 = &v12[12 * ((2 * *(_DWORD *)(*((_DWORD *)sa + 2) + 4) - 1) & m[7])];
          if ( ++*((_DWORD *)v10 + 1) > *(_DWORD *)(*((_DWORD *)sa + 2) + 24) )
          {
            ++*(_DWORD *)(*((_DWORD *)sa + 2) + 28);
            *((_DWORD *)v10 + 2) = sub_68648(*((_DWORD *)v10 + 1), *(_DWORD *)(*((_DWORD *)sa + 2) + 24));
          }
          m[3] = 0;
          m[4] = *(_DWORD *)v10;
          if ( *(_DWORD *)v10 )
            *(_DWORD *)(*(_DWORD *)v10 + 12) = m;
          *(_DWORD *)v10 = m;
        }
      }
      free(**((void ***)sa + 2));
      *(_DWORD *)(*((_DWORD *)sa + 2) + 4) *= 2;
      ++*(_DWORD *)(*((_DWORD *)sa + 2) + 8);
      **((_DWORD **)sa + 2) = v12;
      if ( *(_DWORD *)(*((_DWORD *)sa + 2) + 28) <= *(_DWORD *)(*((_DWORD *)sa + 2) + 12) >> 1 )
        v4 = 0;
      else
        v4 = *(_DWORD *)(*((_DWORD *)sa + 2) + 32) + 1;
      *(_DWORD *)(*((_DWORD *)sa + 2) + 32) = v4;
      if ( *(_DWORD *)(*((_DWORD *)sa + 2) + 32) > 1u )
        *(_DWORD *)(*((_DWORD *)sa + 2) + 36) = 1;
    }
  }
  sub_2E4CC(&stru_94188, "cgminer.c", "add_cgpu", 11381);
  dword_94130 = (int)sub_203A0((void *)dword_94130, 4 * (dword_941A8 + dword_87FDC + 2), "cgminer.c", "add_cgpu", 11382);
  sub_2E74C(&stru_94188, "cgminer.c", "add_cgpu", 11383);
  sub_2E354(&stru_91F5C, "cgminer.c", "add_cgpu", 11385);
  a1[58] = time(0);
  sub_2E484(&stru_91F5C, "cgminer.c", "add_cgpu", 11387);
  if ( byte_941D8 )
  {
    v5 = dword_87FDC++;
    v6 = (_DWORD *)(dword_94130 + 4 * (v5 + dword_941A8));
  }
  else
  {
    v7 = dword_941A8++;
    v6 = (_DWORD *)(dword_94130 + 4 * v7);
  }
  *v6 = a1;
  sub_4CCD8();
  return 1;
}

int __fastcall sub_37894(const char *a1, const void *a2, int a3)
{
  size_t v3; // r0
  int v4; // r2
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r3
  int v10; // r3
  int v11; // r3
  int v12; // r3
  void **v13; // r4
  int v14; // r3
  int v15; // r3
  char v20[24]; // [sp+1Ch] [bp-898h] BYREF
  _DWORD *v21; // [sp+81Ch] [bp-98h]
  int v22; // [sp+820h] [bp-94h]
  _DWORD *v23; // [sp+824h] [bp-90h]
  void *v24; // [sp+828h] [bp-8Ch]
  int v25; // [sp+82Ch] [bp-88h]
  int v26; // [sp+830h] [bp-84h]
  _DWORD *v27; // [sp+834h] [bp-80h]
  void *ptr; // [sp+838h] [bp-7Ch]
  int v29; // [sp+83Ch] [bp-78h]
  _DWORD *n; // [sp+840h] [bp-74h]
  unsigned int m; // [sp+844h] [bp-70h]
  unsigned __int8 *v32; // [sp+848h] [bp-6Ch]
  size_t k; // [sp+84Ch] [bp-68h]
  unsigned int v34; // [sp+850h] [bp-64h]
  int v35; // [sp+854h] [bp-60h]
  unsigned int v36; // [sp+858h] [bp-5Ch]
  int v37; // [sp+85Ch] [bp-58h]
  int v38; // [sp+860h] [bp-54h]
  int v39; // [sp+864h] [bp-50h]
  int v40; // [sp+868h] [bp-4Ch]
  int v41; // [sp+86Ch] [bp-48h]
  unsigned int v42; // [sp+870h] [bp-44h]
  int v43; // [sp+874h] [bp-40h]
  unsigned int v44; // [sp+878h] [bp-3Ch]
  unsigned int v45; // [sp+87Ch] [bp-38h]
  int v46; // [sp+880h] [bp-34h]
  unsigned int j; // [sp+884h] [bp-30h]
  unsigned __int8 *v48; // [sp+888h] [bp-2Ch]
  size_t i; // [sp+88Ch] [bp-28h]
  unsigned int v50; // [sp+890h] [bp-24h]
  int v51; // [sp+894h] [bp-20h]
  unsigned int v52; // [sp+898h] [bp-1Ch]
  unsigned __int8 v53; // [sp+89Fh] [bp-15h]
  char *dest; // [sp+8A0h] [bp-14h]
  int v55; // [sp+8A4h] [bp-10h]

  v55 = 0;
  v53 = 1;
  sub_2E4CC(&stru_87FE8, "cgminer.c", "block_exists", 5638);
  v48 = (unsigned __int8 *)a1;
  v52 = -17973521;
  v50 = -1640531527;
  v51 = -1640531527;
  for ( i = strlen(a1); i > 0xB; i -= 12 )
  {
    v51 += *v48 + (v48[1] << 8) + (v48[2] << 16) + (v48[3] << 24);
    v50 += v48[4] + (v48[5] << 8) + (v48[6] << 16) + (v48[7] << 24);
    v52 += v48[8] + (v48[9] << 8) + (v48[10] << 16) + (v48[11] << 24);
    v51 = (v52 >> 13) ^ (v51 - v50 - v52);
    v50 = (v51 << 8) ^ (v50 - v52 - v51);
    v52 = (v50 >> 13) ^ (v52 - v51 - v50);
    v51 = (v52 >> 12) ^ (v51 - v50 - v52);
    v50 = (v51 << 16) ^ (v50 - v52 - v51);
    v52 = (v50 >> 5) ^ (v52 - v51 - v50);
    v51 = (v52 >> 3) ^ (v51 - v50 - v52);
    v50 = (v51 << 10) ^ (v50 - v52 - v51);
    v52 = (v50 >> 15) ^ (v52 - v51 - v50);
    v48 += 12;
  }
  v52 += strlen(a1);
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
      v52 += v48[10] << 24;
LABEL_6:
      v52 += v48[9] << 16;
LABEL_7:
      v52 += v48[8] << 8;
LABEL_8:
      v50 += v48[7] << 24;
LABEL_9:
      v50 += v48[6] << 16;
LABEL_10:
      v50 += v48[5] << 8;
LABEL_11:
      v50 += v48[4];
LABEL_12:
      v51 += v48[3] << 24;
LABEL_13:
      v51 += v48[2] << 16;
LABEL_14:
      v51 += v48[1] << 8;
LABEL_15:
      v51 += *v48;
      break;
    default:
      break;
  }
  v51 = (v52 >> 13) ^ (v51 - v50 - v52);
  v50 = (v51 << 8) ^ (v50 - v52 - v51);
  v52 = (v50 >> 13) ^ (v52 - v51 - v50);
  v51 = (v52 >> 12) ^ (v51 - v50 - v52);
  v50 = (v51 << 16) ^ (v50 - v52 - v51);
  v52 = (v50 >> 5) ^ (v52 - v51 - v50);
  v51 = (v52 >> 3) ^ (v51 - v50 - v52);
  v50 = (v51 << 10) ^ (v50 - v52 - v51);
  v52 = (v50 >> 15) ^ (v52 - v51 - v50);
  dest = 0;
  if ( dword_88130 )
  {
    v29 = v52 & (*(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 4) - 1);
    if ( *(_DWORD *)(**(_DWORD **)(dword_88130 + 68) + 12 * v29) )
      dest = (char *)(*(_DWORD *)(**(_DWORD **)(dword_88130 + 68) + 12 * v29)
                    - *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 20));
    else
      dest = 0;
    while ( dest )
    {
      if ( *((_DWORD *)dest + 24) == v52 && *((_DWORD *)dest + 23) == strlen(a1) )
      {
        v3 = strlen(a1);
        if ( !memcmp(*((const void **)dest + 22), a1, v3) )
          break;
      }
      if ( *((_DWORD *)dest + 21) )
        dest = (char *)(*((_DWORD *)dest + 21) - *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 20));
      else
        dest = 0;
    }
  }
  if ( !dest )
  {
    dest = (char *)sub_202D4(0x68u, 1u, "cgminer.c", "block_exists", 5642);
    if ( !dest )
    {
      strcpy(v20, "block_exists OOM");
      sub_1E4EC(3, v20, 1);
      sub_4BFB0(1);
    }
    strcpy(dest, a1);
    v4 = dword_953A0++;
    *((_DWORD *)dest + 25) = v4;
    v53 = 0;
    if ( dword_88130 && *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 12) > 3u )
    {
      if ( dword_88130 )
      {
        v44 = 1;
        v46 = 1;
        v38 = dword_88130 + 68;
        while ( v46 )
        {
          v41 = v38;
          v38 = 0;
          v37 = 0;
          v45 = 0;
          while ( v41 )
          {
            ++v45;
            v40 = v41;
            v43 = 0;
            for ( j = 0; j < v44; ++j )
            {
              ++v43;
              v5 = *(_DWORD *)(v40 + 8) ? *(_DWORD *)(v40 + 8) + *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 20) : 0;
              v40 = v5;
              if ( !v5 )
                break;
            }
            v42 = v44;
            while ( v43 || v42 && v40 )
            {
              if ( v43 )
              {
                if ( v42 && v40 )
                {
                  if ( sub_376F8(
                         v41 - *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 20),
                         v40 - *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 20)) > 0 )
                  {
                    v39 = v40;
                    if ( *(_DWORD *)(v40 + 8) )
                      v9 = *(_DWORD *)(v40 + 8) + *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 20);
                    else
                      v9 = 0;
                    v40 = v9;
                    --v42;
                  }
                  else
                  {
                    v39 = v41;
                    if ( v41 )
                    {
                      if ( *(_DWORD *)(v41 + 8) )
                        v8 = *(_DWORD *)(v41 + 8) + *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 20);
                      else
                        v8 = 0;
                      v41 = v8;
                    }
                    --v43;
                  }
                }
                else
                {
                  v39 = v41;
                  if ( v41 )
                  {
                    if ( *(_DWORD *)(v41 + 8) )
                      v7 = *(_DWORD *)(v41 + 8) + *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 20);
                    else
                      v7 = 0;
                    v41 = v7;
                  }
                  --v43;
                }
              }
              else
              {
                v39 = v40;
                if ( *(_DWORD *)(v40 + 8) )
                  v6 = *(_DWORD *)(v40 + 8) + *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 20);
                else
                  v6 = 0;
                v40 = v6;
                --v42;
              }
              if ( v37 )
              {
                if ( v39 )
                  v10 = v39 - *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 20);
                else
                  v10 = 0;
                *(_DWORD *)(v37 + 8) = v10;
              }
              else
              {
                v38 = v39;
              }
              if ( v39 )
              {
                if ( v37 )
                  v11 = v37 - *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 20);
                else
                  v11 = 0;
                *(_DWORD *)(v39 + 4) = v11;
              }
              v37 = v39;
            }
            v41 = v40;
          }
          if ( v37 )
            *(_DWORD *)(v37 + 8) = 0;
          if ( v45 <= 1 )
          {
            v46 = 0;
            *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 16) = v37;
            dword_88130 = v38 - *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 20);
          }
          v44 *= 2;
        }
      }
      ptr = (void *)dword_88130;
      v55 = *(_DWORD *)(dword_88130 + 100);
      if ( *(_DWORD *)(dword_88130 + 72) || *((_DWORD *)ptr + 19) )
      {
        v27 = (char *)ptr + 68;
        if ( (void *)(*(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 16) - *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 20)) == ptr )
          *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 16) = *((_DWORD *)ptr + 18)
                                                          + *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 20);
        if ( *((_DWORD *)ptr + 18) )
          *(_DWORD *)(*((_DWORD *)ptr + 18) + *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 20) + 8) = *((_DWORD *)ptr + 19);
        else
          dword_88130 = *((_DWORD *)ptr + 19);
        if ( v27[2] )
          *(_DWORD *)(v27[2] + *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 20) + 4) = v27[1];
        v26 = (*(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 4) - 1) & v27[7];
        v12 = **(_DWORD **)(dword_88130 + 68) + 12 * v26;
        --*(_DWORD *)(v12 + 4);
        if ( *(_DWORD **)(**(_DWORD **)(dword_88130 + 68) + 12 * v26) == v27 )
          *(_DWORD *)(**(_DWORD **)(dword_88130 + 68) + 12 * v26) = v27[4];
        if ( v27[3] )
          *(_DWORD *)(v27[3] + 16) = v27[4];
        if ( v27[4] )
          *(_DWORD *)(v27[4] + 12) = v27[3];
        --*(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 12);
      }
      else
      {
        free(**(void ***)(dword_88130 + 68));
        free(*(void **)(dword_88130 + 68));
        dword_88130 = 0;
      }
      free(ptr);
    }
    v32 = (unsigned __int8 *)dest;
    v36 = -17973521;
    v34 = -1640531527;
    v35 = -1640531527;
    for ( k = strlen(dest); k > 0xB; k -= 12 )
    {
      v35 += *v32 + (v32[1] << 8) + (v32[2] << 16) + (v32[3] << 24);
      v34 += v32[4] + (v32[5] << 8) + (v32[6] << 16) + (v32[7] << 24);
      v36 += v32[8] + (v32[9] << 8) + (v32[10] << 16) + (v32[11] << 24);
      v35 = (v36 >> 13) ^ (v35 - v34 - v36);
      v34 = (v35 << 8) ^ (v34 - v36 - v35);
      v36 = (v34 >> 13) ^ (v36 - v35 - v34);
      v35 = (v36 >> 12) ^ (v35 - v34 - v36);
      v34 = (v35 << 16) ^ (v34 - v36 - v35);
      v36 = (v34 >> 5) ^ (v36 - v35 - v34);
      v35 = (v36 >> 3) ^ (v35 - v34 - v36);
      v34 = (v35 << 10) ^ (v34 - v36 - v35);
      v36 = (v34 >> 15) ^ (v36 - v35 - v34);
      v32 += 12;
    }
    v36 += strlen(dest);
    switch ( k )
    {
      case 1u:
        goto LABEL_122;
      case 2u:
        goto LABEL_121;
      case 3u:
        goto LABEL_120;
      case 4u:
        goto LABEL_119;
      case 5u:
        goto LABEL_118;
      case 6u:
        goto LABEL_117;
      case 7u:
        goto LABEL_116;
      case 8u:
        goto LABEL_115;
      case 9u:
        goto LABEL_114;
      case 0xAu:
        goto LABEL_113;
      case 0xBu:
        v36 += v32[10] << 24;
LABEL_113:
        v36 += v32[9] << 16;
LABEL_114:
        v36 += v32[8] << 8;
LABEL_115:
        v34 += v32[7] << 24;
LABEL_116:
        v34 += v32[6] << 16;
LABEL_117:
        v34 += v32[5] << 8;
LABEL_118:
        v34 += v32[4];
LABEL_119:
        v35 += v32[3] << 24;
LABEL_120:
        v35 += v32[2] << 16;
LABEL_121:
        v35 += v32[1] << 8;
LABEL_122:
        v35 += *v32;
        break;
      default:
        break;
    }
    v35 = (v36 >> 13) ^ (v35 - v34 - v36);
    v34 = (v35 << 8) ^ (v34 - v36 - v35);
    v36 = (v34 >> 13) ^ (v36 - v35 - v34);
    v35 = (v36 >> 12) ^ (v35 - v34 - v36);
    v34 = (v35 << 16) ^ (v34 - v36 - v35);
    v36 = (v34 >> 5) ^ (v36 - v35 - v34);
    v35 = (v36 >> 3) ^ (v35 - v34 - v36);
    v34 = (v35 << 10) ^ (v34 - v36 - v35);
    v36 = (v34 >> 15) ^ (v36 - v35 - v34);
    *((_DWORD *)dest + 24) = v36;
    *((_DWORD *)dest + 22) = dest;
    *((_DWORD *)dest + 23) = strlen(dest);
    if ( dword_88130 )
    {
      *((_DWORD *)dest + 17) = *(_DWORD *)(dword_88130 + 68);
      *((_DWORD *)dest + 19) = 0;
      *((_DWORD *)dest + 18) = *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 16)
                             - *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 20);
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 16) + 8) = dest;
      *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 16) = dest + 68;
    }
    else
    {
      *((_DWORD *)dest + 19) = 0;
      *((_DWORD *)dest + 18) = 0;
      dword_88130 = (int)dest;
      *((_DWORD *)dest + 17) = malloc(0x2Cu);
      if ( !*(_DWORD *)(dword_88130 + 68) )
        exit(-1);
      memset(*(void **)(dword_88130 + 68), 0, 0x2Cu);
      *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 16) = dword_88130 + 68;
      *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 4) = 32;
      *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 8) = 5;
      *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 20) = 68;
      v13 = *(void ***)(dword_88130 + 68);
      *v13 = malloc(0x180u);
      if ( !**(_DWORD **)(dword_88130 + 68) )
        exit(-1);
      memset(**(void ***)(dword_88130 + 68), 0, 0x180u);
      *(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 40) = -1609490463;
    }
    ++*(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 12);
    v25 = v36 & (*(_DWORD *)(*(_DWORD *)(dword_88130 + 68) + 4) - 1);
    v14 = **(_DWORD **)(dword_88130 + 68) + 12 * v25;
    ++*(_DWORD *)(v14 + 4);
    *((_DWORD *)dest + 21) = *(_DWORD *)(**(_DWORD **)(dword_88130 + 68) + 12 * v25);
    *((_DWORD *)dest + 20) = 0;
    if ( *(_DWORD *)(**(_DWORD **)(dword_88130 + 68) + 12 * v25) )
      *(_DWORD *)(*(_DWORD *)(**(_DWORD **)(dword_88130 + 68) + 12 * v25) + 12) = dest + 68;
    *(_DWORD *)(**(_DWORD **)(dword_88130 + 68) + 12 * v25) = dest + 68;
    if ( *(_DWORD *)(**(_DWORD **)(dword_88130 + 68) + 12 * v25 + 4) >= (unsigned int)(10
                                                                                     * (*(_DWORD *)(**(_DWORD **)(dword_88130 + 68)
                                                                                                  + 12 * v25
                                                                                                  + 8)
                                                                                      + 1))
      && *(_DWORD *)(*((_DWORD *)dest + 17) + 36) != 1 )
    {
      v24 = malloc(24 * *(_DWORD *)(*((_DWORD *)dest + 17) + 4));
      if ( !v24 )
        exit(-1);
      memset(v24, 0, 24 * *(_DWORD *)(*((_DWORD *)dest + 17) + 4));
      *(_DWORD *)(*((_DWORD *)dest + 17) + 24) = (*(_DWORD *)(*((_DWORD *)dest + 17) + 12) >> (*(_DWORD *)(*((_DWORD *)dest + 17) + 8)
                                                                                             + 1))
                                               + (((2 * *(_DWORD *)(*((_DWORD *)dest + 17) + 4) - 1)
                                                 & *(_DWORD *)(*((_DWORD *)dest + 17) + 12)) != 0);
      *(_DWORD *)(*((_DWORD *)dest + 17) + 28) = 0;
      for ( m = 0; *(_DWORD *)(*((_DWORD *)dest + 17) + 4) > m; ++m )
      {
        for ( n = *(_DWORD **)(**((_DWORD **)dest + 17) + 12 * m); n; n = v23 )
        {
          v23 = (_DWORD *)n[4];
          v22 = (2 * *(_DWORD *)(*((_DWORD *)dest + 17) + 4) - 1) & n[7];
          v21 = (char *)v24 + 12 * v22;
          if ( ++v21[1] > *(_DWORD *)(*((_DWORD *)dest + 17) + 24) )
          {
            ++*(_DWORD *)(*((_DWORD *)dest + 17) + 28);
            v21[2] = sub_68648(v21[1], *(_DWORD *)(*((_DWORD *)dest + 17) + 24));
          }
          n[3] = 0;
          n[4] = *v21;
          if ( *v21 )
            *(_DWORD *)(*v21 + 12) = n;
          *v21 = n;
        }
      }
      free(**((void ***)dest + 17));
      *(_DWORD *)(*((_DWORD *)dest + 17) + 4) *= 2;
      ++*(_DWORD *)(*((_DWORD *)dest + 17) + 8);
      **((_DWORD **)dest + 17) = v24;
      if ( *(_DWORD *)(*((_DWORD *)dest + 17) + 28) <= *(_DWORD *)(*((_DWORD *)dest + 17) + 12) >> 1 )
        v15 = 0;
      else
        v15 = *(_DWORD *)(*((_DWORD *)dest + 17) + 32) + 1;
      *(_DWORD *)(*((_DWORD *)dest + 17) + 32) = v15;
      if ( *(_DWORD *)(*((_DWORD *)dest + 17) + 32) > 1u )
        *(_DWORD *)(*((_DWORD *)dest + 17) + 36) = 1;
    }
    sub_37730(a3);
    if ( v55 && byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      snprintf(v20, 0x800u, "Deleted block %d from database", v55);
      sub_1E4EC(7, v20, 0);
    }
  }
  sub_2E74C(&stru_87FE8, "cgminer.c", "block_exists", 5676);
  if ( v53 != 1 )
    sub_37528(a1, a2);
  if ( v55 && byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    snprintf(v20, 0x800u, "Deleted block %d from database", v55);
    sub_1E4EC(7, v20, 0);
  }
  return v53;
}

int __fastcall sub_3EDE0(unsigned __int8 *a1)
{
  pthread_t v1; // r0
  __int64 v2; // r0
  int v3; // r2
  const char *v4; // r8
  const char *v5; // r6
  const char *v6; // r7
  unsigned int v7; // r9
  unsigned int v8; // r0
  int v9; // r0
  size_t v10; // r0
  _DWORD *v11; // r6
  void **v12; // r6
  int v13; // r0
  int v14; // r3
  bool v15; // r3
  char v17[1024]; // [sp+24h] [bp-CB8h] BYREF
  char v18[2048]; // [sp+424h] [bp-8B8h] BYREF
  unsigned int v19; // [sp+C24h] [bp-B8h] BYREF
  char *v20; // [sp+C28h] [bp-B4h] BYREF
  _BYTE v21[8]; // [sp+C2Ch] [bp-B0h] BYREF
  int v22; // [sp+C34h] [bp-A8h] BYREF
  char v23[20]; // [sp+C38h] [bp-A4h] BYREF
  char v24[12]; // [sp+C4Ch] [bp-90h] BYREF
  char s[16]; // [sp+C58h] [bp-84h] BYREF
  int v26; // [sp+C68h] [bp-74h]
  _DWORD *v27; // [sp+C6Ch] [bp-70h]
  int v28; // [sp+C70h] [bp-6Ch]
  _DWORD *v29; // [sp+C74h] [bp-68h]
  void *v30; // [sp+C78h] [bp-64h]
  int v31; // [sp+C7Ch] [bp-60h]
  bool v32; // [sp+C83h] [bp-59h]
  char *v33; // [sp+C84h] [bp-58h]
  void *ptr; // [sp+C88h] [bp-54h]
  __int64 *v35; // [sp+C8Ch] [bp-50h]
  unsigned __int8 *v36; // [sp+C90h] [bp-4Ch]
  _DWORD *j; // [sp+C94h] [bp-48h]
  unsigned int i; // [sp+C98h] [bp-44h]
  char *v39; // [sp+C9Ch] [bp-40h]
  int v40; // [sp+CA0h] [bp-3Ch]
  unsigned int v41; // [sp+CA4h] [bp-38h]
  int v42; // [sp+CA8h] [bp-34h]
  unsigned int v43; // [sp+CACh] [bp-30h]
  char v44; // [sp+CB3h] [bp-29h]
  int v45; // [sp+CB4h] [bp-28h]
  __int64 v46; // [sp+CB8h] [bp-24h]

  v36 = a1;
  v46 = 0;
  v45 = 0;
  v1 = pthread_self();
  pthread_detach(v1);
  snprintf(s, 0x10u, "%d/SStratum", *(_DWORD *)v36);
  sub_2A95C(s);
  *((_DWORD *)v36 + 182) = sub_20CB4();
  if ( !*((_DWORD *)v36 + 182) )
  {
    strcpy(v18, "Failed to create stratum_q in stratum_sthread");
    sub_1DB6C(3, v18, 1);
    sub_4B2A0(1);
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
  {
    snprintf(
      v18,
      0x800u,
      "in %s , pool: %d, pool_url: %s, miner_name: %s",
      "stratum_sthread",
      *(_DWORD *)v36,
      *((const char **)v36 + 41),
      *((const char **)v36 + 43));
    sub_1DB6C(5, v18, 0);
  }
  while ( !v36[105] )
  {
    v20 = (char *)sub_20FE8(*((_DWORD *)v36 + 182), 0);
    if ( !v20 )
    {
      strcpy(v18, "Stratum q returned empty work");
      sub_1DB6C(3, v18, 1);
      sub_4B2A0(1);
    }
    if ( *((_DWORD *)v20 + 76) <= 8u )
    {
      v22 = *((_DWORD *)v20 + 19);
      v35 = (__int64 *)v21;
      sub_2CDE4();
      *v35 = v2;
      if ( v45 == v22 && v46 == *v35 )
      {
        if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
        {
          snprintf(v18, 0x800u, "Filtering duplicate share to pool %d", *(_DWORD *)v36);
          sub_1DB6C(6, v18, 0);
        }
        sub_30E0C((void **)&v20, "cgminer.c", "stratum_sthread", 7737);
      }
      else if ( *((double *)v20 + 39) >= *((double *)v36 + 227) )
      {
        v45 = v22;
        v46 = *v35;
        sub_1FDA0(v24, (int)&v22, 4);
        sub_1FDA0(v23, (int)v21, *((_DWORD *)v20 + 76));
        ptr = sub_1F9F8(0x34u, 1u, "cgminer.c", "stratum_sthread", 7754);
        v33 = v20 + 192;
        v44 = 0;
        *((_DWORD *)ptr + 11) = time(0);
        *((_DWORD *)ptr + 9) = v20;
        memset(v17, 0, sizeof(v17));
        sub_2D2FC(&stru_86E70, "cgminer.c", "stratum_sthread", 7763);
        v3 = dword_90DEC++;
        *((_DWORD *)ptr + 10) = v3;
        sub_2D434(&stru_86E70, "cgminer.c", "stratum_sthread", 7766);
        v19 = 0;
        sub_1FF0C(&v19, v36 + 1780, 4);
        if ( v36[644] )
        {
          v4 = (const char *)*((_DWORD *)v36 + 43);
          v5 = (const char *)*((_DWORD *)v20 + 72);
          v6 = (const char *)*((_DWORD *)v20 + 77);
          v7 = sub_2CF00(*((_DWORD *)v20 + 111));
          v8 = sub_2CF00(v19);
          snprintf(
            v17,
            0x400u,
            "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\", \"%08x\"], \"id\": %d, \"method\": \"mining.submit\"}",
            v4,
            v5,
            v23,
            v6,
            v24,
            ~v8 & v7,
            *((_DWORD *)ptr + 10));
        }
        else
        {
          snprintf(
            v17,
            0x400u,
            "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": %d, \"method\": \"mining.submit\"}",
            *((const char **)v36 + 43),
            *((const char **)v20 + 72),
            v23,
            *((const char **)v20 + 77),
            v24,
            *((_DWORD *)ptr + 10));
        }
        if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
        {
          sub_2CDC0();
          snprintf(v18, 0x800u, "Submitting share %08lx to pool %d", v9, *(_DWORD *)v36);
          sub_1DB6C(6, v18, 0);
        }
        while ( time(0) < *((_DWORD *)ptr + 11) + 120 )
        {
          v10 = strlen(v17);
          if ( sub_2248C((int)v36, v17, v10) )
          {
            sub_2D2FC(&stru_86E70, "cgminer.c", "stratum_sthread", 7810);
            v39 = (char *)ptr + 40;
            v41 = -1640531527;
            v42 = -1640531527;
            v40 = 4;
            v43 = -17973517;
            v42 = (*((unsigned __int8 *)ptr + 43) << 24) - 1640531527;
            v42 += *((unsigned __int8 *)ptr + 42) << 16;
            v42 += *((unsigned __int8 *)ptr + 41) << 8;
            v42 += *((unsigned __int8 *)ptr + 40);
            v42 += 1640531527;
            v42 += 17973517;
            v42 ^= 0x7F76Du;
            v41 = (v42 << 8) ^ (-1622558010 - v42);
            v43 = -17973517 - v42 - v41;
            v43 ^= v41 >> 13;
            v42 -= v41;
            v42 -= v43;
            v42 ^= v43 >> 12;
            v41 -= v43;
            v41 -= v42;
            v41 ^= v42 << 16;
            v43 -= v42;
            v43 -= v41;
            v43 ^= v41 >> 5;
            v42 -= v41;
            v42 -= v43;
            v42 ^= v43 >> 3;
            v41 -= v43;
            v41 -= v42;
            v41 ^= v42 << 10;
            v43 -= v42;
            v43 -= v41;
            v43 ^= v41 >> 15;
            *((_DWORD *)ptr + 7) = v43;
            *((_DWORD *)ptr + 5) = (char *)ptr + 40;
            *((_DWORD *)ptr + 6) = 4;
            if ( dword_86F9C )
            {
              *(_DWORD *)ptr = *(_DWORD *)dword_86F9C;
              *((_DWORD *)ptr + 2) = 0;
              *((_DWORD *)ptr + 1) = *(_DWORD *)(*(_DWORD *)dword_86F9C + 16) - *(_DWORD *)(*(_DWORD *)dword_86F9C + 20);
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)dword_86F9C + 16) + 8) = ptr;
              *(_DWORD *)(*(_DWORD *)dword_86F9C + 16) = ptr;
            }
            else
            {
              *((_DWORD *)ptr + 2) = 0;
              *((_DWORD *)ptr + 1) = 0;
              dword_86F9C = (int)ptr;
              v11 = ptr;
              *v11 = malloc(0x2Cu);
              if ( !*(_DWORD *)dword_86F9C )
                exit(-1);
              memset(*(void **)dword_86F9C, 0, 0x2Cu);
              *(_DWORD *)(*(_DWORD *)dword_86F9C + 16) = dword_86F9C;
              *(_DWORD *)(*(_DWORD *)dword_86F9C + 4) = 32;
              *(_DWORD *)(*(_DWORD *)dword_86F9C + 8) = 5;
              *(_DWORD *)(*(_DWORD *)dword_86F9C + 20) = 0;
              v12 = *(void ***)dword_86F9C;
              *v12 = malloc(0x180u);
              if ( !**(_DWORD **)dword_86F9C )
                exit(-1);
              memset(**(void ***)dword_86F9C, 0, 0x180u);
              *(_DWORD *)(*(_DWORD *)dword_86F9C + 40) = -1609490463;
            }
            ++*(_DWORD *)(*(_DWORD *)dword_86F9C + 12);
            v31 = (*(_DWORD *)(*(_DWORD *)dword_86F9C + 4) - 1) & v43;
            ++*(_DWORD *)(**(_DWORD **)dword_86F9C + 12 * v31 + 4);
            *((_DWORD *)ptr + 4) = *(_DWORD *)(**(_DWORD **)dword_86F9C + 12 * v31);
            *((_DWORD *)ptr + 3) = 0;
            if ( *(_DWORD *)(**(_DWORD **)dword_86F9C + 12 * v31) )
              *(_DWORD *)(*(_DWORD *)(**(_DWORD **)dword_86F9C + 12 * v31) + 12) = ptr;
            *(_DWORD *)(**(_DWORD **)dword_86F9C + 12 * v31) = ptr;
            if ( *(_DWORD *)(**(_DWORD **)dword_86F9C + 12 * v31 + 4) >= (unsigned int)(10
                                                                                      * (*(_DWORD *)(**(_DWORD **)dword_86F9C + 12 * v31 + 8)
                                                                                       + 1))
              && *(_DWORD *)(*(_DWORD *)ptr + 36) != 1 )
            {
              v30 = malloc(24 * *(_DWORD *)(*(_DWORD *)ptr + 4));
              if ( !v30 )
                exit(-1);
              memset(v30, 0, 24 * *(_DWORD *)(*(_DWORD *)ptr + 4));
              *(_DWORD *)(*(_DWORD *)ptr + 24) = (((2 * *(_DWORD *)(*(_DWORD *)ptr + 4) - 1)
                                                 & *(_DWORD *)(*(_DWORD *)ptr + 12)) != 0)
                                               + (*(_DWORD *)(*(_DWORD *)ptr + 12) >> (*(_DWORD *)(*(_DWORD *)ptr + 8)
                                                                                     + 1));
              *(_DWORD *)(*(_DWORD *)ptr + 28) = 0;
              for ( i = 0; i < *(_DWORD *)(*(_DWORD *)ptr + 4); ++i )
              {
                for ( j = *(_DWORD **)(**(_DWORD **)ptr + 12 * i); j; j = v29 )
                {
                  v29 = (_DWORD *)j[4];
                  v28 = (2 * *(_DWORD *)(*(_DWORD *)ptr + 4) - 1) & j[7];
                  v27 = (char *)v30 + 12 * v28;
                  if ( ++v27[1] > *(_DWORD *)(*(_DWORD *)ptr + 24) )
                  {
                    ++*(_DWORD *)(*(_DWORD *)ptr + 28);
                    v13 = sub_679D0(v27[1], *(_DWORD *)(*(_DWORD *)ptr + 24));
                    v27[2] = v13;
                  }
                  j[3] = 0;
                  j[4] = *v27;
                  if ( *v27 )
                    *(_DWORD *)(*v27 + 12) = j;
                  *v27 = j;
                }
              }
              free(**(void ***)ptr);
              *(_DWORD *)(*(_DWORD *)ptr + 4) *= 2;
              ++*(_DWORD *)(*(_DWORD *)ptr + 8);
              **(_DWORD **)ptr = v30;
              if ( *(_DWORD *)(*(_DWORD *)ptr + 28) <= *(_DWORD *)(*(_DWORD *)ptr + 12) >> 1 )
                v14 = 0;
              else
                v14 = *(_DWORD *)(*(_DWORD *)ptr + 32) + 1;
              *(_DWORD *)(*(_DWORD *)ptr + 32) = v14;
              if ( *(_DWORD *)(*(_DWORD *)ptr + 32) > 1u )
                *(_DWORD *)(*(_DWORD *)ptr + 36) = 1;
            }
            ++*((_DWORD *)v36 + 183);
            sub_2D434(&stru_86E70, "cgminer.c", "stratum_sthread", 7813);
            if ( sub_2E910((int)v36, v36 + 96) && (byte_90DC0 || byte_865D1 || dword_857E4 > 3) )
            {
              snprintf(v18, 0x800u, "Pool %d communication resumed, submitting work", *(_DWORD *)v36);
              sub_1DB6C(4, v18, 0);
            }
            if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
            {
              strcpy(v18, "Successfully submitted, adding to stratum_shares db");
              sub_1DB6C(7, v18, 0);
            }
            v44 = 1;
            break;
          }
          if ( (unsigned __int8)sub_2E894((int)v36, v36 + 96) != 1 && sub_3E610((int)v36) )
          {
            if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
            {
              snprintf(v18, 0x800u, "Pool %d stratum share submission failure", *(_DWORD *)v36);
              sub_1DB6C(4, v18, 0);
            }
            ++dword_90DDC;
            ++*((_DWORD *)v36 + 33);
          }
          if ( byte_92FB4 )
          {
            if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
            {
              strcpy(v18, "Lowmem option prevents resubmitting stratum share");
              sub_1DB6C(7, v18, 0);
            }
            break;
          }
          sub_2D8F4((int)(v36 + 212), "cgminer.c", "stratum_sthread", 7835);
          v15 = *((_DWORD *)v36 + 153) && !strcmp(*((const char **)v20 + 80), *((const char **)v36 + 153));
          v32 = v15;
          sub_2DA1C((int)(v36 + 212), "cgminer.c", "stratum_sthread", 7837);
          if ( !v32 )
          {
            if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
            {
              strcpy(v18, "No matching session id for resubmitting stratum share");
              sub_1DB6C(7, v18, 0);
            }
            break;
          }
          sleep(2u);
        }
        if ( v44 != 1 )
        {
          if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
          {
            strcpy(v18, "Failed to submit stratum share, discarding");
            sub_1DB6C(7, v18, 0);
          }
          sub_30E0C((void **)&v20, "cgminer.c", "stratum_sthread", 7852);
          free(ptr);
          ++*((_DWORD *)v36 + 30);
          ++*(_QWORD *)&dword_942F8;
        }
        else
        {
          *((_DWORD *)ptr + 12) = time(0);
          v26 = *((_DWORD *)ptr + 12) - *((_DWORD *)ptr + 11);
          if ( (byte_865D0 || v26 > 0) && (byte_90DC0 || byte_865D1 || dword_857E4 > 5) )
          {
            snprintf(v18, 0x800u, "Pool %d stratum share submission lag time %d seconds", *(_DWORD *)v36, v26);
            sub_1DB6C(6, v18, 0);
          }
        }
      }
      else
      {
        if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
        {
          snprintf(v18, 0x800u, "Filtering high hash share to pool %d", *(_DWORD *)v36);
          sub_1DB6C(6, v18, 0);
        }
        sub_30E0C((void **)&v20, "cgminer.c", "stratum_sthread", 7745);
      }
    }
    else
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
      {
        snprintf(
          v18,
          0x800u,
          "Pool %d asking for inappropriately long nonce2 length %d",
          *(_DWORD *)v36,
          *((_DWORD *)v20 + 76));
        sub_1DB6C(3, v18, 0);
      }
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
      {
        strcpy(v18, "Not attempting to submit shares");
        sub_1DB6C(3, v18, 0);
      }
      sub_30E0C((void **)&v20, "cgminer.c", "stratum_sthread", 7725);
    }
  }
  sub_20E84(*((_DWORD *)v36 + 182));
  return 0;
}

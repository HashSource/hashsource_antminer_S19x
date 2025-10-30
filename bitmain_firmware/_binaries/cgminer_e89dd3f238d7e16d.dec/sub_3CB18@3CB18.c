int __fastcall sub_3CB18(double *a1, const char *a2)
{
  char v5[20]; // [sp+18h] [bp-964h] BYREF
  int s2; // [sp+818h] [bp-164h] BYREF
  _DWORD v7[23]; // [sp+81Ch] [bp-160h] BYREF
  char v8[160]; // [sp+878h] [bp-104h] BYREF
  double v9; // [sp+918h] [bp-64h]
  int v10; // [sp+920h] [bp-5Ch]
  _DWORD *v11; // [sp+924h] [bp-58h]
  int v12; // [sp+928h] [bp-54h]
  int v13; // [sp+92Ch] [bp-50h]
  _DWORD *v14; // [sp+930h] [bp-4Ch]
  _DWORD *v15; // [sp+934h] [bp-48h]
  _DWORD *v16; // [sp+938h] [bp-44h]
  int v17; // [sp+93Ch] [bp-40h]
  int *p_s2; // [sp+940h] [bp-3Ch]
  int v19; // [sp+944h] [bp-38h]
  unsigned int v20; // [sp+948h] [bp-34h]
  int v21; // [sp+94Ch] [bp-30h]
  unsigned int v22; // [sp+950h] [bp-2Ch]
  void *ptr; // [sp+954h] [bp-28h]
  unsigned __int8 v24; // [sp+95Bh] [bp-21h]
  void *v25; // [sp+95Ch] [bp-20h]

  v17 = 0;
  v24 = 0;
  v17 = sub_639D0(a2, 0, v7);
  if ( v17 )
  {
    v16 = (_DWORD *)sub_652F0(v17, "result");
    v15 = (_DWORD *)sub_652F0(v17, "error");
    v14 = (_DWORD *)sub_652F0(v17, "id");
    if ( v14 && *v14 == 7 || !v14 )
    {
      if ( v15 )
        ptr = (void *)sub_5F850(v15, 3);
      else
        ptr = strdup("(unknown reason)");
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
      {
        snprintf(v5, 0x800u, "JSON-RPC non method decode failed: %s", (const char *)ptr);
        sub_1DB6C(6, v5, 0);
      }
      free(ptr);
    }
    else
    {
      v13 = sub_652F0(v16, "version-rolling.mask");
      if ( !v13 && !strstr(a2, "mining.configure") && !strstr(a2, "mining.set_version_mask") )
      {
        s2 = sub_66FB0(v14);
        sub_2D2FC(&stru_86E70, "cgminer.c", "parse_stratum_response", 7361);
        p_s2 = &s2;
        v19 = 4;
        v21 = (HIBYTE(s2) << 24) - 1640531527;
        v21 += BYTE2(s2) << 16;
        v21 += BYTE1(s2) << 8;
        v21 += (unsigned __int8)s2;
        v21 += 1640531527;
        v21 += 17973517;
        v21 ^= 0x7F76Du;
        v20 = (v21 << 8) ^ (-1622558010 - v21);
        v22 = -17973517 - v21 - v20;
        v22 ^= v20 >> 13;
        v21 -= v20;
        v21 -= v22;
        v21 ^= v22 >> 12;
        v20 -= v22;
        v20 -= v21;
        v20 ^= v21 << 16;
        v22 -= v21;
        v22 -= v20;
        v22 ^= v20 >> 5;
        v21 -= v20;
        v21 -= v22;
        v21 ^= v22 >> 3;
        v20 -= v22;
        v20 -= v21;
        v20 ^= v21 << 10;
        v22 -= v21;
        v22 -= v20;
        v22 ^= v20 >> 15;
        v25 = 0;
        if ( dword_86F9C )
        {
          v12 = (*(_DWORD *)(*(_DWORD *)dword_86F9C + 4) - 1) & v22;
          if ( *(_DWORD *)(**(_DWORD **)dword_86F9C + 12 * v12) )
            v25 = (void *)(*(_DWORD *)(**(_DWORD **)dword_86F9C + 12 * v12) - *(_DWORD *)(*(_DWORD *)dword_86F9C + 20));
          else
            v25 = 0;
          while ( v25
               && (v22 != *((_DWORD *)v25 + 7) || *((_DWORD *)v25 + 6) != 4
                                               || memcmp(*((const void **)v25 + 5), &s2, 4u)) )
          {
            if ( *((_DWORD *)v25 + 4) )
              v25 = (void *)(*((_DWORD *)v25 + 4) - *(_DWORD *)(*(_DWORD *)dword_86F9C + 20));
            else
              v25 = 0;
          }
        }
        if ( v25 )
        {
          if ( *((_DWORD *)v25 + 1) || *((_DWORD *)v25 + 2) )
          {
            v11 = v25;
            if ( v25 == (void *)(*(_DWORD *)(*(_DWORD *)dword_86F9C + 16) - *(_DWORD *)(*(_DWORD *)dword_86F9C + 20)) )
              *(_DWORD *)(*(_DWORD *)dword_86F9C + 16) = *((_DWORD *)v25 + 1) + *(_DWORD *)(*(_DWORD *)dword_86F9C + 20);
            if ( *((_DWORD *)v25 + 1) )
              *(_DWORD *)(*((_DWORD *)v25 + 1) + *(_DWORD *)(*(_DWORD *)dword_86F9C + 20) + 8) = *((_DWORD *)v25 + 2);
            else
              dword_86F9C = *((_DWORD *)v25 + 2);
            if ( v11[2] )
              *(_DWORD *)(v11[2] + *(_DWORD *)(*(_DWORD *)dword_86F9C + 20) + 4) = v11[1];
            v10 = (*(_DWORD *)(*(_DWORD *)dword_86F9C + 4) - 1) & v11[7];
            --*(_DWORD *)(**(_DWORD **)dword_86F9C + 12 * v10 + 4);
            if ( v11 == *(_DWORD **)(**(_DWORD **)dword_86F9C + 12 * v10) )
              *(_DWORD *)(**(_DWORD **)dword_86F9C + 12 * v10) = v11[4];
            if ( v11[3] )
              *(_DWORD *)(v11[3] + 16) = v11[4];
            if ( v11[4] )
              *(_DWORD *)(v11[4] + 12) = v11[3];
            --*(_DWORD *)(*(_DWORD *)dword_86F9C + 12);
          }
          else
          {
            free(**(void ***)dword_86F9C);
            free(*(void **)dword_86F9C);
            dword_86F9C = 0;
          }
          --*((_DWORD *)a1 + 183);
        }
        sub_2D434(&stru_86E70, "cgminer.c", "parse_stratum_response", 7369);
        if ( v25 )
        {
          sub_3C9D8(v17, v16, v15, (int)v25);
          sub_30E0C((void **)v25 + 9, "cgminer.c", "parse_stratum_response", 7414);
          free(v25);
          v24 = 1;
        }
        else if ( v16 )
        {
          sub_2D8F4((int)a1 + 212, "cgminer.c", "parse_stratum_response", 7381);
          v9 = a1[228];
          sub_2DA1C((int)a1 + 212, "cgminer.c", "parse_stratum_response", 7383);
          if ( v16 && *v16 == 5 )
          {
            if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
            {
              snprintf(v5, 0x800u, "Accepted untracked stratum share from pool %d", *(_DWORD *)a1);
              sub_1DB6C(5, v5, 0);
            }
            sub_2D2FC(&stru_90DC4, "cgminer.c", "parse_stratum_response", 7391);
            ++*(_QWORD *)&dword_90F20;
            ++*((_QWORD *)a1 + 1);
            dbl_92F58 = dbl_92F58 + v9;
            a1[9] = a1[9] + v9;
            sub_2D434(&stru_90DC4, "cgminer.c", "parse_stratum_response", 7396);
          }
          else
          {
            if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
            {
              snprintf(v5, 0x800u, "Rejected untracked stratum share from pool %d", *(_DWORD *)a1);
              sub_1DB6C(5, v5, 0);
            }
            sub_2D2FC(&stru_90DC4, "cgminer.c", "parse_stratum_response", 7402);
            ++*(_QWORD *)&dword_92FE8;
            ++*((_QWORD *)a1 + 2);
            dbl_92FE0 = dbl_92FE0 + v9;
            a1[10] = a1[10] + v9;
            sub_2D434(&stru_90DC4, "cgminer.c", "parse_stratum_response", 7407);
          }
        }
      }
    }
  }
  else if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
  {
    snprintf(v5, 0x800u, "JSON decode failed(%d): %s", v7[0], v8);
    sub_1DB6C(6, v5, 0);
  }
  if ( v17 )
    sub_2CE0C(v17);
  return v24;
}

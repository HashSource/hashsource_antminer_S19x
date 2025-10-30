int __fastcall sub_3D9F4(double *a1, const char *a2)
{
  char v5[12]; // [sp+10h] [bp-94Ch] BYREF
  int s2; // [sp+810h] [bp-14Ch] BYREF
  _DWORD v7[23]; // [sp+814h] [bp-148h] BYREF
  char v8[160]; // [sp+870h] [bp-ECh] BYREF
  double v9; // [sp+910h] [bp-4Ch]
  int v10; // [sp+918h] [bp-44h]
  _DWORD *v11; // [sp+91Ch] [bp-40h]
  int v12; // [sp+920h] [bp-3Ch]
  int v13; // [sp+924h] [bp-38h]
  _DWORD *v14; // [sp+928h] [bp-34h]
  _DWORD *v15; // [sp+92Ch] [bp-30h]
  _DWORD *v16; // [sp+930h] [bp-2Ch]
  int v17; // [sp+934h] [bp-28h]
  int *p_s2; // [sp+938h] [bp-24h]
  int v19; // [sp+93Ch] [bp-20h]
  unsigned int v20; // [sp+940h] [bp-1Ch]
  int v21; // [sp+944h] [bp-18h]
  unsigned int v22; // [sp+948h] [bp-14h]
  void *ptr; // [sp+94Ch] [bp-10h]
  unsigned __int8 v24; // [sp+953h] [bp-9h]
  void *v25; // [sp+954h] [bp-8h]

  v17 = 0;
  v24 = 0;
  v17 = sub_64704(a2, 0, v7);
  if ( v17 )
  {
    v16 = (_DWORD *)sub_65FEC(v17, "result");
    v15 = (_DWORD *)sub_65FEC(v17, "error");
    v14 = (_DWORD *)sub_65FEC(v17, "id");
    if ( v14 && *v14 == 7 || !v14 )
    {
      if ( v15 )
        ptr = (void *)sub_605A4(v15, 3);
      else
        ptr = strdup("(unknown reason)");
      if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
      {
        snprintf(v5, 0x800u, "JSON-RPC non method decode failed: %s", (const char *)ptr);
        sub_1E4EC(6, v5, 0);
      }
      free(ptr);
    }
    else
    {
      v13 = sub_65FEC(v16, "version-rolling.mask");
      if ( !v13 && !strstr(a2, "mining.configure") && !strstr(a2, "mining.set_version_mask") )
      {
        s2 = sub_67C98(v14);
        sub_2E354(&stru_88008, "cgminer.c", "parse_stratum_response", 7361);
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
        if ( dword_88134 )
        {
          v12 = v22 & (*(_DWORD *)(*(_DWORD *)dword_88134 + 4) - 1);
          if ( *(_DWORD *)(**(_DWORD **)dword_88134 + 12 * v12) )
            v25 = (void *)(*(_DWORD *)(**(_DWORD **)dword_88134 + 12 * v12) - *(_DWORD *)(*(_DWORD *)dword_88134 + 20));
          else
            v25 = 0;
          while ( v25
               && (*((_DWORD *)v25 + 7) != v22 || *((_DWORD *)v25 + 6) != 4
                                               || memcmp(*((const void **)v25 + 5), &s2, 4u)) )
          {
            if ( *((_DWORD *)v25 + 4) )
              v25 = (void *)(*((_DWORD *)v25 + 4) - *(_DWORD *)(*(_DWORD *)dword_88134 + 20));
            else
              v25 = 0;
          }
        }
        if ( v25 )
        {
          if ( *((_DWORD *)v25 + 1) || *((_DWORD *)v25 + 2) )
          {
            v11 = v25;
            if ( (void *)(*(_DWORD *)(*(_DWORD *)dword_88134 + 16) - *(_DWORD *)(*(_DWORD *)dword_88134 + 20)) == v25 )
              *(_DWORD *)(*(_DWORD *)dword_88134 + 16) = *((_DWORD *)v25 + 1) + *(_DWORD *)(*(_DWORD *)dword_88134 + 20);
            if ( *((_DWORD *)v25 + 1) )
              *(_DWORD *)(*((_DWORD *)v25 + 1) + *(_DWORD *)(*(_DWORD *)dword_88134 + 20) + 8) = *((_DWORD *)v25 + 2);
            else
              dword_88134 = *((_DWORD *)v25 + 2);
            if ( v11[2] )
              *(_DWORD *)(v11[2] + *(_DWORD *)(*(_DWORD *)dword_88134 + 20) + 4) = v11[1];
            v10 = (*(_DWORD *)(*(_DWORD *)dword_88134 + 4) - 1) & v11[7];
            --*(_DWORD *)(**(_DWORD **)dword_88134 + 12 * v10 + 4);
            if ( *(_DWORD **)(**(_DWORD **)dword_88134 + 12 * v10) == v11 )
              *(_DWORD *)(**(_DWORD **)dword_88134 + 12 * v10) = v11[4];
            if ( v11[3] )
              *(_DWORD *)(v11[3] + 16) = v11[4];
            if ( v11[4] )
              *(_DWORD *)(v11[4] + 12) = v11[3];
            --*(_DWORD *)(*(_DWORD *)dword_88134 + 12);
          }
          else
          {
            free(**(void ***)dword_88134);
            free(*(void **)dword_88134);
            dword_88134 = 0;
          }
          --*((_DWORD *)a1 + 187);
        }
        sub_2E484(&stru_88008, "cgminer.c", "parse_stratum_response", 7369);
        if ( v25 )
        {
          sub_3D8B8(v17, v16, v15, (int)v25);
          sub_31F40((void **)v25 + 9, "cgminer.c", "parse_stratum_response", 7414);
          free(v25);
          v24 = 1;
        }
        else if ( v16 )
        {
          sub_2E91C((int)a1 + 212, "cgminer.c", "parse_stratum_response", 7381);
          v9 = a1[230];
          sub_2EA38((int)a1 + 212, "cgminer.c", "parse_stratum_response", 7383);
          if ( v16 && *v16 == 5 )
          {
            if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
            {
              snprintf(v5, 0x800u, "Accepted untracked stratum share from pool %d", *(_DWORD *)a1);
              sub_1E4EC(5, v5, 0);
            }
            sub_2E354(&stru_91F5C, "cgminer.c", "parse_stratum_response", 7391);
            ++*(_QWORD *)&dbl_920B8;
            ++*((_QWORD *)a1 + 1);
            dbl_940F0 = dbl_940F0 + v9;
            a1[9] = a1[9] + v9;
            sub_2E484(&stru_91F5C, "cgminer.c", "parse_stratum_response", 7396);
          }
          else
          {
            if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
            {
              snprintf(v5, 0x800u, "Rejected untracked stratum share from pool %d", *(_DWORD *)a1);
              sub_1E4EC(5, v5, 0);
            }
            sub_2E354(&stru_91F5C, "cgminer.c", "parse_stratum_response", 7402);
            ++*(_QWORD *)&dbl_94180;
            ++*((_QWORD *)a1 + 2);
            dbl_94178 = dbl_94178 + v9;
            a1[10] = a1[10] + v9;
            sub_2E484(&stru_91F5C, "cgminer.c", "parse_stratum_response", 7407);
          }
        }
      }
    }
  }
  else if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
  {
    snprintf(v5, 0x800u, "JSON decode failed(%d): %s", v7[0], v8);
    sub_1E4EC(6, v5, 0);
  }
  if ( v17 )
    sub_2DE88(v17);
  return v24;
}

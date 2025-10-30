int __fastcall sub_1785C(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  __int64 v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  __int64 v16; // r0
  double v17; // r0
  int v18; // r0
  __int64 v19; // r0
  double v20; // r0
  int v21; // r0
  __int64 v22; // r0
  double v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r3
  int v28; // r0
  int v29; // r0
  __int64 v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  __int64 v38; // r0
  double v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  __int64 v44; // r0
  double v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  __int64 v49; // r0
  int v50; // r0
  int v51; // r0
  __int64 v52; // r0
  int v53; // r0
  int v54; // r0
  __int64 v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  char v63[8]; // [sp+1Ch] [bp-9D8h] BYREF
  char v64[64]; // [sp+81Ch] [bp-1D8h] BYREF
  __int16 v65; // [sp+85Ch] [bp-198h] BYREF
  char s[256]; // [sp+860h] [bp-194h] BYREF
  char v67[32]; // [sp+960h] [bp-94h] BYREF
  _DWORD v68[4]; // [sp+980h] [bp-74h] BYREF
  double v69; // [sp+990h] [bp-64h] BYREF
  double v70; // [sp+998h] [bp-5Ch] BYREF
  double v71; // [sp+9A0h] [bp-54h] BYREF
  double v72; // [sp+9A8h] [bp-4Ch] BYREF
  int v73; // [sp+9B4h] [bp-40h]
  int v74; // [sp+9B8h] [bp-3Ch]
  _DWORD *v75; // [sp+9BCh] [bp-38h]
  double v76; // [sp+9C0h] [bp-34h]
  int v77; // [sp+9C8h] [bp-2Ch]
  int v78; // [sp+9CCh] [bp-28h]
  int v79; // [sp+9D0h] [bp-24h]
  int k; // [sp+9D4h] [bp-20h]
  int v81; // [sp+9D8h] [bp-1Ch]
  int v82; // [sp+9DCh] [bp-18h]
  int v83; // [sp+9E0h] [bp-14h]
  int m; // [sp+9E4h] [bp-10h]
  int j; // [sp+9E8h] [bp-Ch]
  int i; // [sp+9ECh] [bp-8h]

  v79 = 0;
  v78 = 0;
  v77 = 0;
  i = 0;
  j = 0;
  m = 0;
  v76 = 0.0;
  v72 = 0.0;
  v71 = 0.0;
  v70 = 0.0;
  v69 = 0.0;
  v75 = 0;
  memset(v68, 0, sizeof(v68));
  memset(v67, 0, sizeof(v67));
  memset(s, 0, sizeof(s));
  v83 = 0;
  v82 = 0;
  v81 = 0;
  v74 = 0;
  v65 = 0;
  memset(v64, 0, sizeof(v64));
  v73 = a2;
  if ( a2 && a1 )
  {
    sub_585B0(&v65, 1);
    sub_13374(&stru_954C8, "api_new.c", "get_stats_old", 979);
    v3 = sub_15B04(a1, 1, 70, *(const char **)(v73 + 8));
    v79 = sub_66A14(v3);
    v78 = sub_65ED4(v79);
    v4 = sub_67728("1.0.0");
    sub_6611C(v78, "BMMiner", v4);
    v5 = sub_67728(byte_87B48);
    sub_6611C(v78, "Miner", v5);
    v6 = sub_67728(byte_87C48);
    sub_6611C(v78, "CompileTime", v6);
    snprintf(v64, 0x40u, "%s", byte_87D48);
    if ( byte_954EC )
      snprintf(v64, 0x40u, "%s", &byte_954EC);
    v7 = sub_67728(v64);
    sub_6611C(v78, "Type", v7);
    sub_66EA4(v79, v78);
    for ( i = 0; i < dword_941A8; ++i )
    {
      v75 = (_DWORD *)sub_2EF94(i);
      v78 = sub_65ED4(v75);
      v8 = sub_67C3C(i, i >> 31);
      sub_6611C(v78, "STATS", v8);
      snprintf((char *)v68, 0x10u, "BTM_SOC%d", i);
      v9 = sub_67728(v68);
      sub_6611C(v78, "ID", v9);
      v76 = dbl_87478;
      v10 = sub_68F1C(LODWORD(dbl_87478), HIDWORD(dbl_87478));
      v11 = sub_67C3C(v10, HIDWORD(v10));
      sub_6611C(v78, "Elapsed", v11);
      v12 = sub_67C3C(v75[73], 0);
      sub_6611C(v78, "Calls", v12);
      v13 = sub_67C3C(v75[74], (int)v75[74] >> 31);
      sub_6611C(v78, "Wait", v13);
      v14 = sub_67C3C(v75[76], (int)v75[76] >> 31);
      sub_6611C(v78, "Max", v14);
      v15 = sub_67C3C(v75[78], (int)v75[78] >> 31);
      sub_6611C(v78, "Min", v15);
      sscanf(byte_955EC, "%lf", &v72);
      v16 = sub_68F1C(COERCE_UNSIGNED_INT64(v72 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v72 * 100.0)));
      v17 = sub_68E84(v16, HIDWORD(v16));
      v18 = sub_67DF4(LODWORD(v17));
      sub_6611C(v78, "GHS 5s", v18);
      sscanf(&::s[16], "%lf", &v70);
      v19 = sub_68F1C(COERCE_UNSIGNED_INT64(v70 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v70 * 100.0)));
      v20 = sub_68E84(v19, HIDWORD(v19));
      v21 = sub_67DF4(LODWORD(v20));
      sub_6611C(v78, "GHS av", v21);
      sscanf(::s, "%lf", &v71);
      v22 = sub_68F1C(COERCE_UNSIGNED_INT64(v71 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v71 * 100.0)));
      v23 = sub_68E84(v22, HIDWORD(v22));
      v24 = sub_67DF4(LODWORD(v23));
      sub_6611C(v78, "rate_30m", v24);
      v25 = sub_67C3C(dword_86C6C, dword_86C6C >> 31);
      sub_6611C(v78, "Mode", v25);
      v26 = sub_67C3C(dword_954E4, dword_954E4 >> 31);
      sub_6611C(v78, "miner_count", v26);
      for ( j = 0; dword_954E4 > j && j <= 3; ++j )
        v83 += *((_DWORD *)&unk_954E0 + 388 * j + 91);
      if ( dword_954E4 )
        v27 = dword_954E4;
      else
        v27 = 1;
      v83 = sub_688C0(v83, v27);
      v28 = sub_67C3C(v83, v83 >> 31);
      sub_6611C(v78, "frequency", v28);
      v29 = sub_67C3C(*(_DWORD *)&byte_9561C[24], *(int *)&byte_9561C[24] >> 31);
      sub_6611C(v78, "fan_num", v29);
      for ( j = 0; *(int *)&byte_9561C[24] > j; ++j )
      {
        memset(v67, 0, sizeof(v67));
        snprintf(v67, 0x20u, "fan%d", j + 1);
        v30 = *((int *)&unk_954E0 + j + 86);
        v31 = sub_67C3C(v30, HIDWORD(v30));
        sub_6611C(v78, v67, v31);
      }
      v32 = sub_67C3C(dword_954E4, dword_954E4 >> 31);
      sub_6611C(v78, "temp_num", v32);
      for ( j = 0; j <= 3; ++j )
      {
        for ( k = 0; dword_954E4 > k; ++k )
        {
          if ( *((_DWORD *)&unk_954E0 + 388 * k + 90) == j )
          {
            memset(v67, 0, sizeof(v67));
            v82 = -255;
            snprintf(v67, 0x20u, "temp%d", j + 1);
            for ( m = 0; m <= 3; ++m )
            {
              if ( *((_DWORD *)&unk_954E0 + 388 * k + m + 169) > v82 )
                v82 = *((_DWORD *)&unk_954E0 + 388 * k + m + 169);
            }
            v33 = sub_67C3C(v82, v82 >> 31);
            sub_6611C(v78, v67, v33);
            memset(v67, 0, sizeof(v67));
            v82 = -255;
            snprintf(v67, 0x20u, "temp2_%d", j + 1);
            for ( m = 0; m <= 3; ++m )
            {
              if ( *((_DWORD *)&unk_954E0 + 388 * k + m + 173) > v82 )
                v82 = *((_DWORD *)&unk_954E0 + 388 * k + m + 173);
            }
            v34 = sub_67C3C(v82, v82 >> 31);
            sub_6611C(v78, v67, v34);
          }
        }
      }
      for ( j = 0; j <= 3; ++j )
      {
        memset(v67, 0, sizeof(v67));
        memset(s, 0, sizeof(s));
        snprintf(v67, 0x20u, "temp_pcb%d", j + 1);
        for ( m = 0; dword_954E4 > m && m <= 3 && *((_DWORD *)&unk_954E0 + 388 * m + 90) != j; ++m )
          ;
        if ( dword_954E4 <= m )
          strcpy(s, "0-0-0-0");
        else
          snprintf(
            s,
            0x100u,
            "%d-%d-%d-%d",
            *((_DWORD *)&unk_954E0 + 388 * m + 169),
            *((_DWORD *)&unk_954E0 + 388 * m + 170),
            *((_DWORD *)&unk_954E0 + 388 * m + 171),
            *((_DWORD *)&unk_954E0 + 388 * m + 172));
        v35 = sub_67728(s);
        sub_6611C(v78, v67, v35);
      }
      for ( j = 0; j <= 3; ++j )
      {
        memset(v67, 0, sizeof(v67));
        memset(s, 0, sizeof(s));
        snprintf(v67, 0x20u, "temp_chip%d", j + 1);
        for ( m = 0; dword_954E4 > m && m <= 3 && *((_DWORD *)&unk_954E0 + 388 * m + 90) != j; ++m )
          ;
        if ( dword_954E4 <= m )
          strcpy(s, "0-0-0-0");
        else
          snprintf(
            s,
            0x100u,
            "%d-%d-%d-%d",
            *((_DWORD *)&unk_954E0 + 388 * m + 173),
            *((_DWORD *)&unk_954E0 + 388 * m + 174),
            *((_DWORD *)&unk_954E0 + 388 * m + 175),
            *((_DWORD *)&unk_954E0 + 388 * m + 176));
        v36 = sub_67728(s);
        sub_6611C(v78, v67, v36);
      }
      for ( j = 0; j <= 3; ++j )
      {
        memset(v67, 0, sizeof(v67));
        memset(s, 0, sizeof(s));
        snprintf(v67, 0x20u, "temp_pic%d", j + 1);
        for ( m = 0; dword_954E4 > m && m <= 3 && *((_DWORD *)&unk_954E0 + 388 * m + 90) != j; ++m )
          ;
        if ( dword_954E4 <= m )
          strcpy(s, "0-0-0-0");
        else
          snprintf(
            s,
            0x100u,
            "%d-%d-%d-%d",
            *((_DWORD *)&unk_954E0 + 388 * m + 165),
            *((_DWORD *)&unk_954E0 + 388 * m + 166),
            *((_DWORD *)&unk_954E0 + 388 * m + 167),
            *((_DWORD *)&unk_954E0 + 388 * m + 168));
        v37 = sub_67728(s);
        sub_6611C(v78, v67, v37);
      }
      sscanf(byte_9561C, "%lf", &v69);
      v38 = sub_68F1C(COERCE_UNSIGNED_INT64(v69 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v69 * 100.0)));
      v39 = sub_68E84(v38, HIDWORD(v38));
      v40 = sub_67DF4(LODWORD(v39));
      sub_6611C(v78, "total_rateideal", v40);
      v41 = sub_67728("GH");
      sub_6611C(v78, "rate_unit", v41);
      v42 = sub_67C3C(v83, v83 >> 31);
      sub_6611C(v78, "total_freqavg", v42);
      for ( j = 0; dword_954E4 > j && j <= 3; ++j )
        v81 += *((_DWORD *)&unk_954E0 + 388 * j + 100);
      v43 = sub_67C3C(v81, v81 >> 31);
      sub_6611C(v78, "total_acn", v43);
      v44 = sub_68F1C(COERCE_UNSIGNED_INT64(v70 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v70 * 100.0)));
      v45 = sub_68E84(v44, HIDWORD(v44));
      v46 = sub_67DF4(LODWORD(v45));
      sub_6611C(v78, "total rate", v46);
      v47 = sub_67C3C(v74, v74 >> 31);
      sub_6611C(v78, "temp_max", v47);
      v48 = sub_67C3C(dword_95228, dword_95228 >> 31);
      sub_6611C(v78, "no_matching_work", v48);
      for ( j = 0; j <= 3; ++j )
      {
        memset(v67, 0, sizeof(v67));
        snprintf(v67, 0x20u, "chain_acn%d", j + 1);
        for ( m = 0; dword_954E4 > m && m <= 3 && *((_DWORD *)&unk_954E0 + 388 * m + 90) != j; ++m )
          ;
        if ( dword_954E4 <= m )
        {
          v50 = sub_67C3C(0, 0);
        }
        else
        {
          v49 = *((int *)&unk_954E0 + 388 * m + 100);
          v50 = sub_67C3C(v49, HIDWORD(v49));
        }
        sub_6611C(v78, v67, v50);
      }
      for ( j = 0; j <= 3; ++j )
      {
        memset(v67, 0, sizeof(v67));
        memset(s, 0, sizeof(s));
        snprintf(v67, 0x20u, "chain_acs%d", j + 1);
        for ( m = 0; dword_954E4 > m && m <= 3 && *((_DWORD *)&unk_954E0 + 388 * m + 90) != j; ++m )
          ;
        if ( dword_954E4 <= m )
          s[0] = 0;
        else
          snprintf(s, 0x100u, "%s", (const char *)&unk_954E0 + 1552 * m + 404);
        v51 = sub_67728(s);
        sub_6611C(v78, v67, v51);
      }
      for ( j = 0; j <= 3; ++j )
      {
        memset(v67, 0, sizeof(v67));
        snprintf(v67, 0x20u, "chain_hw%d", j + 1);
        for ( m = 0; dword_954E4 > m && m <= 3 && *((_DWORD *)&unk_954E0 + 388 * m + 90) != j; ++m )
          ;
        if ( dword_954E4 <= m )
        {
          v53 = sub_67C3C(0, 0);
        }
        else
        {
          v52 = *((int *)&unk_954E0 + 388 * m + 177);
          v53 = sub_67C3C(v52, HIDWORD(v52));
        }
        sub_6611C(v78, v67, v53);
      }
      for ( j = 0; j <= 3; ++j )
      {
        memset(v67, 0, sizeof(v67));
        snprintf(v67, 0x20u, "chain_rate%d", j + 1);
        for ( m = 0; dword_954E4 > m && m <= 3 && *((_DWORD *)&unk_954E0 + 388 * m + 90) != j; ++m )
          ;
        if ( dword_954E4 <= m )
          v54 = sub_67728(&unk_69328);
        else
          v54 = sub_67728((char *)&unk_954E0 + 1552 * m + 384);
        sub_6611C(v78, v67, v54);
      }
      for ( j = 0; j <= 3; ++j )
      {
        memset(v67, 0, sizeof(v67));
        snprintf(v67, 0x20u, "freq%d", j + 1);
        for ( m = 0; dword_954E4 > m && m <= 3 && *((_DWORD *)&unk_954E0 + 388 * m + 90) != j; ++m )
          ;
        if ( dword_954E4 <= m )
        {
          v56 = sub_67C3C(0, 0);
        }
        else
        {
          v55 = *((int *)&unk_954E0 + 388 * m + 91);
          v56 = sub_67C3C(v55, HIDWORD(v55));
        }
        sub_6611C(v78, v67, v56);
      }
      v57 = sub_67728(byte_87B48);
      sub_6611C(v78, "miner_version", v57);
      v58 = sub_67728(byte_96EC0);
      sub_6611C(v78, "miner_id", v58);
      sub_66EA4(v79, v78);
    }
    sub_6611C(a1, "STATS", v79);
    v59 = sub_67C3C(1, 0);
    sub_6611C(a1, "id", v59);
    sub_134A4(&stru_954C8, "api_new.c", "get_stats_old", 1254);
    return v77;
  }
  else
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
    {
      snprintf(v63, 0x800u, "%s: input bad api param\n", "get_stats_old");
      sub_1E4EC(3, v63, 0);
    }
    return -2147483646;
  }
}

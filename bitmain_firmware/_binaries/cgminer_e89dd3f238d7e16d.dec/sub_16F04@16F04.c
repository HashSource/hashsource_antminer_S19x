int __fastcall sub_16F04(int a1, int a2)
{
  void *v3; // r0
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
  int v17; // r0
  int v18; // r0
  __int64 v19; // r0
  int v20; // r0
  int v21; // r0
  __int64 v22; // r0
  int v23; // r0
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
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  __int64 v44; // r0
  int v45; // r0
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
  char v66[256]; // [sp+860h] [bp-194h] BYREF
  char s[32]; // [sp+960h] [bp-94h] BYREF
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
  memset(s, 0, sizeof(s));
  memset(v66, 0, sizeof(v66));
  v83 = 0;
  v82 = 0;
  v81 = 0;
  v74 = 0;
  v65 = 0;
  memset(v64, 0, sizeof(v64));
  v73 = a2;
  if ( a2 && a1 )
  {
    sub_57A3C(&v65, 1);
    sub_12BA8(&stru_94330, "api_new.c", "get_stats_old", 979);
    v3 = sub_1524C(a1, 1, 70, *(const char **)(v73 + 8));
    v79 = sub_65D18(v3);
    v78 = sub_651D4(v79);
    v4 = sub_66A38("1.0.0");
    sub_65420(v78, "BMMiner", v4);
    v5 = sub_66A38(byte_869B0);
    sub_65420(v78, "Miner", v5);
    v6 = sub_66A38(byte_86AB0);
    sub_65420(v78, "CompileTime", v6);
    snprintf(v64, 0x40u, "%s", byte_86BB0);
    if ( byte_94354 )
      snprintf(v64, 0x40u, "%s", &byte_94354);
    v7 = sub_66A38(v64);
    sub_65420(v78, "Type", v7);
    sub_661B4(v79, v78);
    for ( i = 0; i < dword_93010; ++i )
    {
      v75 = (_DWORD *)sub_2DF88(i);
      v78 = sub_651D4(v75);
      v8 = sub_66F54(i, i >> 31);
      sub_65420(v78, "STATS", v8);
      snprintf((char *)v68, 0x10u, "BTM_SOC%d", i);
      v9 = sub_66A38(v68);
      sub_65420(v78, "ID", v9);
      v76 = dbl_862E0;
      v10 = sub_682AC(LODWORD(dbl_862E0), HIDWORD(dbl_862E0));
      v11 = sub_66F54(v10, HIDWORD(v10));
      sub_65420(v78, "Elapsed", v11);
      v12 = sub_66F54(v75[73], 0);
      sub_65420(v78, "Calls", v12);
      v13 = sub_66F54(v75[74], (int)v75[74] >> 31);
      sub_65420(v78, "Wait", v13);
      v14 = sub_66F54(v75[76], (int)v75[76] >> 31);
      sub_65420(v78, "Max", v14);
      v15 = sub_66F54(v75[78], (int)v75[78] >> 31);
      sub_65420(v78, "Min", v15);
      sscanf(byte_94454, "%lf", &v72);
      v16 = sub_682AC(COERCE_UNSIGNED_INT64(v72 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v72 * 100.0)));
      v17 = sub_68214(v16, HIDWORD(v16));
      v18 = sub_67110(v17);
      sub_65420(v78, "GHS 5s", v18);
      sscanf(&::s[16], "%lf", &v70);
      v19 = sub_682AC(COERCE_UNSIGNED_INT64(v70 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v70 * 100.0)));
      v20 = sub_68214(v19, HIDWORD(v19));
      v21 = sub_67110(v20);
      sub_65420(v78, "GHS av", v21);
      sscanf(::s, "%lf", &v71);
      v22 = sub_682AC(COERCE_UNSIGNED_INT64(v71 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v71 * 100.0)));
      v23 = sub_68214(v22, HIDWORD(v22));
      v24 = sub_67110(v23);
      sub_65420(v78, "rate_30m", v24);
      v25 = sub_66F54(dword_85AD4, dword_85AD4 >> 31);
      sub_65420(v78, "Mode", v25);
      v26 = sub_66F54(dword_9434C, dword_9434C >> 31);
      sub_65420(v78, "miner_count", v26);
      for ( j = 0; j < dword_9434C && j <= 3; ++j )
        v83 += *((_DWORD *)&unk_94348 + 388 * j + 91);
      if ( dword_9434C )
        v27 = dword_9434C;
      else
        v27 = 1;
      v83 = sub_67C48(v83, v27);
      v28 = sub_66F54(v83, v83 >> 31);
      sub_65420(v78, "frequency", v28);
      v29 = sub_66F54(*(_DWORD *)&byte_94484[24], *(int *)&byte_94484[24] >> 31);
      sub_65420(v78, "fan_num", v29);
      for ( j = 0; j < *(int *)&byte_94484[24]; ++j )
      {
        memset(s, 0, sizeof(s));
        snprintf(s, 0x20u, "fan%d", j + 1);
        v30 = *((int *)&unk_94348 + j + 86);
        v31 = sub_66F54(v30, HIDWORD(v30));
        sub_65420(v78, s, v31);
      }
      v32 = sub_66F54(dword_9434C, dword_9434C >> 31);
      sub_65420(v78, "temp_num", v32);
      for ( j = 0; j <= 3; ++j )
      {
        for ( k = 0; k < dword_9434C; ++k )
        {
          if ( j == *((_DWORD *)&unk_94348 + 388 * k + 90) )
          {
            memset(s, 0, sizeof(s));
            v82 = -255;
            snprintf(s, 0x20u, "temp%d", j + 1);
            for ( m = 0; m <= 3; ++m )
            {
              if ( v82 < *((_DWORD *)&unk_94348 + 388 * k + m + 169) )
                v82 = *((_DWORD *)&unk_94348 + 388 * k + m + 169);
            }
            v33 = sub_66F54(v82, v82 >> 31);
            sub_65420(v78, s, v33);
            memset(s, 0, sizeof(s));
            v82 = -255;
            snprintf(s, 0x20u, "temp2_%d", j + 1);
            for ( m = 0; m <= 3; ++m )
            {
              if ( v82 < *((_DWORD *)&unk_94348 + 388 * k + m + 173) )
                v82 = *((_DWORD *)&unk_94348 + 388 * k + m + 173);
            }
            v34 = sub_66F54(v82, v82 >> 31);
            sub_65420(v78, s, v34);
          }
        }
      }
      for ( j = 0; j <= 3; ++j )
      {
        memset(s, 0, sizeof(s));
        memset(v66, 0, sizeof(v66));
        snprintf(s, 0x20u, "temp_pcb%d", j + 1);
        for ( m = 0; m < dword_9434C && m <= 3 && j != *((_DWORD *)&unk_94348 + 388 * m + 90); ++m )
          ;
        if ( m >= dword_9434C )
          strcpy(v66, "0-0-0-0");
        else
          snprintf(
            v66,
            0x100u,
            "%d-%d-%d-%d",
            *((_DWORD *)&unk_94348 + 388 * m + 169),
            *((_DWORD *)&unk_94348 + 388 * m + 170),
            *((_DWORD *)&unk_94348 + 388 * m + 171),
            *((_DWORD *)&unk_94348 + 388 * m + 172));
        v35 = sub_66A38(v66);
        sub_65420(v78, s, v35);
      }
      for ( j = 0; j <= 3; ++j )
      {
        memset(s, 0, sizeof(s));
        memset(v66, 0, sizeof(v66));
        snprintf(s, 0x20u, "temp_chip%d", j + 1);
        for ( m = 0; m < dword_9434C && m <= 3 && j != *((_DWORD *)&unk_94348 + 388 * m + 90); ++m )
          ;
        if ( m >= dword_9434C )
          strcpy(v66, "0-0-0-0");
        else
          snprintf(
            v66,
            0x100u,
            "%d-%d-%d-%d",
            *((_DWORD *)&unk_94348 + 388 * m + 173),
            *((_DWORD *)&unk_94348 + 388 * m + 174),
            *((_DWORD *)&unk_94348 + 388 * m + 175),
            *((_DWORD *)&unk_94348 + 388 * m + 176));
        v36 = sub_66A38(v66);
        sub_65420(v78, s, v36);
      }
      for ( j = 0; j <= 3; ++j )
      {
        memset(s, 0, sizeof(s));
        memset(v66, 0, sizeof(v66));
        snprintf(s, 0x20u, "temp_pic%d", j + 1);
        for ( m = 0; m < dword_9434C && m <= 3 && j != *((_DWORD *)&unk_94348 + 388 * m + 90); ++m )
          ;
        if ( m >= dword_9434C )
          strcpy(v66, "0-0-0-0");
        else
          snprintf(
            v66,
            0x100u,
            "%d-%d-%d-%d",
            *((_DWORD *)&unk_94348 + 388 * m + 165),
            *((_DWORD *)&unk_94348 + 388 * m + 166),
            *((_DWORD *)&unk_94348 + 388 * m + 167),
            *((_DWORD *)&unk_94348 + 388 * m + 168));
        v37 = sub_66A38(v66);
        sub_65420(v78, s, v37);
      }
      sscanf(byte_94484, "%lf", &v69);
      v38 = sub_682AC(COERCE_UNSIGNED_INT64(v69 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v69 * 100.0)));
      v39 = sub_68214(v38, HIDWORD(v38));
      v40 = sub_67110(v39);
      sub_65420(v78, "total_rateideal", v40);
      v41 = sub_66A38("GH");
      sub_65420(v78, "rate_unit", v41);
      v42 = sub_66F54(v83, v83 >> 31);
      sub_65420(v78, "total_freqavg", v42);
      for ( j = 0; j < dword_9434C && j <= 3; ++j )
        v81 += *((_DWORD *)&unk_94348 + 388 * j + 100);
      v43 = sub_66F54(v81, v81 >> 31);
      sub_65420(v78, "total_acn", v43);
      v44 = sub_682AC(COERCE_UNSIGNED_INT64(v70 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v70 * 100.0)));
      v45 = sub_68214(v44, HIDWORD(v44));
      v46 = sub_67110(v45);
      sub_65420(v78, "total rate", v46);
      v47 = sub_66F54(v74, v74 >> 31);
      sub_65420(v78, "temp_max", v47);
      v48 = sub_66F54(dword_94090, dword_94090 >> 31);
      sub_65420(v78, "no_matching_work", v48);
      for ( j = 0; j <= 3; ++j )
      {
        memset(s, 0, sizeof(s));
        snprintf(s, 0x20u, "chain_acn%d", j + 1);
        for ( m = 0; m < dword_9434C && m <= 3 && j != *((_DWORD *)&unk_94348 + 388 * m + 90); ++m )
          ;
        if ( m >= dword_9434C )
        {
          v50 = sub_66F54(0, 0);
        }
        else
        {
          v49 = *((int *)&unk_94348 + 388 * m + 100);
          v50 = sub_66F54(v49, HIDWORD(v49));
        }
        sub_65420(v78, s, v50);
      }
      for ( j = 0; j <= 3; ++j )
      {
        memset(s, 0, sizeof(s));
        memset(v66, 0, sizeof(v66));
        snprintf(s, 0x20u, "chain_acs%d", j + 1);
        for ( m = 0; m < dword_9434C && m <= 3 && j != *((_DWORD *)&unk_94348 + 388 * m + 90); ++m )
          ;
        if ( m >= dword_9434C )
          v66[0] = 0;
        else
          snprintf(v66, 0x100u, "%s", (const char *)&unk_94348 + 1552 * m + 404);
        v51 = sub_66A38(v66);
        sub_65420(v78, s, v51);
      }
      for ( j = 0; j <= 3; ++j )
      {
        memset(s, 0, sizeof(s));
        snprintf(s, 0x20u, "chain_hw%d", j + 1);
        for ( m = 0; m < dword_9434C && m <= 3 && j != *((_DWORD *)&unk_94348 + 388 * m + 90); ++m )
          ;
        if ( m >= dword_9434C )
        {
          v53 = sub_66F54(0, 0);
        }
        else
        {
          v52 = *((int *)&unk_94348 + 388 * m + 177);
          v53 = sub_66F54(v52, HIDWORD(v52));
        }
        sub_65420(v78, s, v53);
      }
      for ( j = 0; j <= 3; ++j )
      {
        memset(s, 0, sizeof(s));
        snprintf(s, 0x20u, "chain_rate%d", j + 1);
        for ( m = 0; m < dword_9434C && m <= 3 && j != *((_DWORD *)&unk_94348 + 388 * m + 90); ++m )
          ;
        if ( m >= dword_9434C )
          v54 = sub_66A38(&unk_686A8);
        else
          v54 = sub_66A38((char *)&unk_94348 + 1552 * m + 384);
        sub_65420(v78, s, v54);
      }
      for ( j = 0; j <= 3; ++j )
      {
        memset(s, 0, sizeof(s));
        snprintf(s, 0x20u, "freq%d", j + 1);
        for ( m = 0; m < dword_9434C && m <= 3 && j != *((_DWORD *)&unk_94348 + 388 * m + 90); ++m )
          ;
        if ( m >= dword_9434C )
        {
          v56 = sub_66F54(0, 0);
        }
        else
        {
          v55 = *((int *)&unk_94348 + 388 * m + 91);
          v56 = sub_66F54(v55, HIDWORD(v55));
        }
        sub_65420(v78, s, v56);
      }
      v57 = sub_66A38(byte_869B0);
      sub_65420(v78, "miner_version", v57);
      v58 = sub_66A38(byte_95D28);
      sub_65420(v78, "miner_id", v58);
      sub_661B4(v79, v78);
    }
    sub_65420(a1, "STATS", v79);
    v59 = sub_66F54(1, 0);
    sub_65420(a1, "id", v59);
    sub_12CE0(&stru_94330, "api_new.c", "get_stats_old", 1254);
    return v77;
  }
  else
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      snprintf(v63, 0x800u, "%s: input bad api param\n", "get_stats_old");
      sub_1DB6C(3, v63, 0);
    }
    return -2147483646;
  }
}

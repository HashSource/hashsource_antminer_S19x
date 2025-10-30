int sub_5D428()
{
  int v0; // r0
  __int64 v1; // r0
  int v2; // r0
  __int64 v3; // r0
  double v4; // r0
  int v5; // r0
  __int64 v6; // r0
  double v7; // r0
  int v8; // r0
  __int64 v9; // r0
  double v10; // r0
  int v11; // r0
  __int64 v12; // r0
  double v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  __int64 v19; // r0
  int v20; // r0
  double v21; // d16
  __int64 v22; // r0
  double v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  __int64 v27; // r0
  int v28; // r0
  __int64 v29; // r0
  int v30; // r0
  __int64 v31; // r0
  double v32; // r0
  int v33; // r0
  __int64 v34; // r0
  double v35; // r0
  int v36; // r0
  __int64 v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  __int64 v41; // r0
  int v42; // r0
  int v43; // r0
  __int64 v44; // r0
  int v45; // r0
  int v46; // r0
  __int64 v47; // r0
  int v48; // r0
  __int64 v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r3
  int v53; // r0
  double v54; // d16
  double v55; // r0
  __int64 v56; // r0
  double v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r0
  __int64 v61; // r0
  int v62; // r0
  double v64; // [sp+8h] [bp-64h] BYREF
  double v65; // [sp+10h] [bp-5Ch] BYREF
  double v66; // [sp+18h] [bp-54h] BYREF
  double v67; // [sp+20h] [bp-4Ch] BYREF
  double v68; // [sp+28h] [bp-44h] BYREF
  char s[4]; // [sp+30h] [bp-3Ch] BYREF
  int v70; // [sp+34h] [bp-38h]
  double v71; // [sp+38h] [bp-34h]
  int v72; // [sp+44h] [bp-28h]
  int v73; // [sp+48h] [bp-24h]
  int v74; // [sp+4Ch] [bp-20h]
  int v75; // [sp+50h] [bp-1Ch]
  int v76; // [sp+54h] [bp-18h]
  int m; // [sp+58h] [bp-14h]
  int k; // [sp+5Ch] [bp-10h]
  int j; // [sp+60h] [bp-Ch]
  int i; // [sp+64h] [bp-8h]

  v75 = 0;
  v74 = 0;
  v73 = 0;
  v72 = 0;
  i = 0;
  j = 0;
  *(_DWORD *)s = 0;
  v70 = 0;
  v68 = 0.0;
  v67 = 0.0;
  v66 = 0.0;
  v65 = 0.0;
  v64 = 0.0;
  v0 = sub_5BF6C(&stru_954C8, "driver-btm-c5_socketa.c", "bitmain_api_stats", 433);
  v76 = sub_65ED4(v0);
  v71 = dbl_87478;
  v1 = sub_68F1C(LODWORD(dbl_87478), HIDWORD(dbl_87478));
  v2 = sub_67C3C(v1, HIDWORD(v1));
  sub_6611C(v76, "elapsed", v2);
  sscanf(byte_955EC, "%lf", &v68);
  v3 = sub_68F1C(COERCE_UNSIGNED_INT64(v68 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v68 * 100.0)));
  v4 = sub_68E84(v3, HIDWORD(v3));
  v5 = sub_67DF4(LODWORD(v4));
  sub_6611C(v76, "rate_5s", v5);
  sscanf(::s, "%lf", &v67);
  v6 = sub_68F1C(COERCE_UNSIGNED_INT64(v67 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v67 * 100.0)));
  v7 = sub_68E84(v6, HIDWORD(v6));
  v8 = sub_67DF4(LODWORD(v7));
  sub_6611C(v76, "rate_30m", v8);
  sscanf(&::s[16], "%lf", &v66);
  v9 = sub_68F1C(COERCE_UNSIGNED_INT64(v66 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v66 * 100.0)));
  v10 = sub_68E84(v9, HIDWORD(v9));
  v11 = sub_67DF4(LODWORD(v10));
  sub_6611C(v76, "rate_avg", v11);
  sscanf(byte_9561C, "%lf", &v65);
  v12 = sub_68F1C(COERCE_UNSIGNED_INT64(v65 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v65 * 100.0)));
  v13 = sub_68E84(v12, HIDWORD(v12));
  v14 = sub_67DF4(LODWORD(v13));
  sub_6611C(v76, "rate_ideal", v14);
  snprintf(s, 8u, "%s/s", &byte_9561C[16]);
  v15 = sub_67728(s);
  sub_6611C(v76, "rate_unit", v15);
  v16 = sub_67C3C(dword_954E4, dword_954E4 >> 31);
  sub_6611C(v76, "chain_num", v16);
  v17 = sub_67C3C(*(_DWORD *)&byte_9561C[24], *(int *)&byte_9561C[24] >> 31);
  v18 = sub_6611C(v76, "fan_num", v17);
  v75 = sub_66A14(v18);
  for ( i = 0; *(int *)&byte_9561C[24] > i; ++i )
  {
    v19 = *((int *)&unk_954E0 + i + 86);
    v20 = sub_67C3C(v19, HIDWORD(v19));
    sub_66EA4(v75, v20);
  }
  sub_6611C(v76, "fan", v75);
  if ( (double)dword_96EE0 <= 512.0 )
    v21 = 512.0;
  else
    v21 = (double)dword_96EE0;
  v22 = sub_68F1C(
          COERCE_UNSIGNED_INT64((double)dword_95228 / v21 * 10000.0),
          HIDWORD(COERCE_UNSIGNED_INT64((double)dword_95228 / v21 * 10000.0)));
  v23 = sub_68E84(v22, HIDWORD(v22));
  v24 = sub_67DF4(LODWORD(v23));
  sub_6611C(v76, "hwp_total", v24);
  v25 = sub_5D20C(v76);
  v26 = sub_66A14(v25);
  v73 = v26;
  for ( i = 0; dword_954E4 > i; ++i )
  {
    v72 = sub_65ED4(v26);
    v27 = *((int *)&unk_954E0 + 388 * i + 90);
    v28 = sub_67C3C(v27, HIDWORD(v27));
    sub_6611C(v72, "index", v28);
    v29 = *((int *)&unk_954E0 + 388 * i + 91);
    v30 = sub_67C3C(v29, HIDWORD(v29));
    sub_6611C(v72, "freq_avg", v30);
    sscanf((const char *)&unk_954E0 + 1552 * i + 368, "%lf", &v65);
    v31 = sub_68F1C(COERCE_UNSIGNED_INT64(v65 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v65 * 100.0)));
    v32 = sub_68E84(v31, HIDWORD(v31));
    v33 = sub_67DF4(LODWORD(v32));
    sub_6611C(v72, "rate_ideal", v33);
    sscanf((const char *)&unk_954E0 + 1552 * i + 384, "%lf", &v64);
    v34 = sub_68F1C(COERCE_UNSIGNED_INT64(v64 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v64 * 100.0)));
    v35 = sub_68E84(v34, HIDWORD(v34));
    v36 = sub_67DF4(LODWORD(v35));
    sub_6611C(v72, "rate_real", v36);
    v37 = *((int *)&unk_954E0 + 388 * i + 100);
    v38 = sub_67C3C(v37, HIDWORD(v37));
    sub_6611C(v72, "asic_num", v38);
    v39 = sub_67728((char *)&unk_954E0 + 1552 * i + 404);
    v40 = sub_6611C(v72, "asic", v39);
    v75 = sub_66A14(v40);
    for ( j = 0; j <= 3; ++j )
    {
      v41 = *((int *)&unk_954E0 + 388 * i + j + 165);
      v42 = sub_67C3C(v41, HIDWORD(v41));
      sub_66EA4(v75, v42);
    }
    v43 = sub_6611C(v72, "temp_pic", v75);
    v75 = sub_66A14(v43);
    for ( j = 0; j <= 3; ++j )
    {
      v44 = *((int *)&unk_954E0 + 388 * i + j + 169);
      v45 = sub_67C3C(v44, HIDWORD(v44));
      sub_66EA4(v75, v45);
    }
    v46 = sub_6611C(v72, "temp_pcb", v75);
    v75 = sub_66A14(v46);
    for ( j = 0; j <= 3; ++j )
    {
      v47 = *((int *)&unk_954E0 + 388 * i + j + 173);
      v48 = sub_67C3C(v47, HIDWORD(v47));
      sub_66EA4(v75, v48);
    }
    sub_6611C(v72, "temp_chip", v75);
    v49 = *((int *)&unk_954E0 + 388 * i + 177);
    v50 = sub_67C3C(v49, HIDWORD(v49));
    v51 = sub_6611C(v72, "hw", v50);
    if ( *((_BYTE *)&unk_954E0 + 1552 * i + 812) )
      v52 = sub_68090(v51);
    else
      v52 = sub_680B0(v51);
    sub_6611C(v72, "eeprom_loaded", v52);
    v53 = sub_67728((char *)&unk_954E0 + 1552 * i + 813);
    sub_6611C(v72, "sn", v53);
    if ( (double)*((int *)&unk_954E0 + 388 * i + 202) <= 512.0 )
      v54 = 512.0;
    else
      v54 = (double)*((int *)&unk_954E0 + 388 * i + 202);
    v55 = (double)*((int *)&unk_954E0 + 388 * i + 177) * 512.0 / v54 * 10000.0;
    v56 = sub_68F1C(LODWORD(v55), HIDWORD(v55));
    v57 = sub_68E84(v56, HIDWORD(v56));
    v58 = sub_67DF4(LODWORD(v57));
    v59 = sub_6611C(v72, "hwp", v58);
    if ( *((_DWORD *)&unk_954E0 + 388 * i + 220) )
    {
      v60 = sub_66A14(v59);
      v75 = v60;
      for ( k = 0; *((_DWORD *)&unk_954E0 + 388 * i + 220) > k; ++k )
      {
        v74 = sub_66A14(v60);
        for ( m = 0; *((_DWORD *)&unk_954E0 + 388 * i + 221) > m; ++m )
        {
          v61 = *((int *)&unk_954E0 + 388 * i + k * *((_DWORD *)&unk_954E0 + 388 * i + 221) + m + 222);
          v62 = sub_67C3C(v61, HIDWORD(v61));
          sub_66EA4(v74, v62);
        }
        v60 = sub_66EA4(v75, v74);
      }
      sub_6611C(v72, "tpl", v75);
    }
    v26 = sub_66EA4(v73, v72);
  }
  sub_6611C(v76, "chain", v73);
  sub_5C09C(&stru_954C8, "driver-btm-c5_socketa.c", "bitmain_api_stats", 540);
  return v76;
}

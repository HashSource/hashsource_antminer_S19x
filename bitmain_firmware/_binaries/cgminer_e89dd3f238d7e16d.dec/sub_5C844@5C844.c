int sub_5C844()
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
  double v21; // d7
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
  double v54; // d5
  double v55; // d7
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
  _DWORD s[2]; // [sp+30h] [bp-3Ch] BYREF
  double v70; // [sp+38h] [bp-34h]
  int v71; // [sp+44h] [bp-28h]
  int v72; // [sp+48h] [bp-24h]
  int v73; // [sp+4Ch] [bp-20h]
  int v74; // [sp+50h] [bp-1Ch]
  int v75; // [sp+54h] [bp-18h]
  int m; // [sp+58h] [bp-14h]
  int k; // [sp+5Ch] [bp-10h]
  int j; // [sp+60h] [bp-Ch]
  int i; // [sp+64h] [bp-8h]

  v74 = 0;
  v73 = 0;
  v72 = 0;
  v71 = 0;
  i = 0;
  j = 0;
  s[0] = 0;
  s[1] = 0;
  v68 = 0.0;
  v67 = 0.0;
  v66 = 0.0;
  v65 = 0.0;
  v64 = 0.0;
  v0 = sub_5B410(&stru_94330, "driver-btm-c5_socketa.c", "bitmain_api_stats", 433);
  v75 = sub_651D4(v0);
  v70 = dbl_862E0;
  v1 = sub_682AC(LODWORD(dbl_862E0), HIDWORD(dbl_862E0));
  v2 = sub_66F54(v1, HIDWORD(v1));
  sub_65420(v75, "elapsed", v2);
  sscanf(byte_94454, "%lf", &v68);
  v3 = sub_682AC(COERCE_UNSIGNED_INT64(v68 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v68 * 100.0)));
  v4 = sub_68214(v3, HIDWORD(v3));
  v5 = sub_67110(LODWORD(v4));
  sub_65420(v75, "rate_5s", v5);
  sscanf(::s, "%lf", &v67);
  v6 = sub_682AC(COERCE_UNSIGNED_INT64(v67 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v67 * 100.0)));
  v7 = sub_68214(v6, HIDWORD(v6));
  v8 = sub_67110(LODWORD(v7));
  sub_65420(v75, "rate_30m", v8);
  sscanf(&::s[16], "%lf", &v66);
  v9 = sub_682AC(COERCE_UNSIGNED_INT64(v66 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v66 * 100.0)));
  v10 = sub_68214(v9, HIDWORD(v9));
  v11 = sub_67110(LODWORD(v10));
  sub_65420(v75, "rate_avg", v11);
  sscanf(byte_94484, "%lf", &v65);
  v12 = sub_682AC(COERCE_UNSIGNED_INT64(v65 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v65 * 100.0)));
  v13 = sub_68214(v12, HIDWORD(v12));
  v14 = sub_67110(LODWORD(v13));
  sub_65420(v75, "rate_ideal", v14);
  snprintf((char *)s, 8u, "%s/s", &byte_94484[16]);
  v15 = sub_66A38(s);
  sub_65420(v75, "rate_unit", v15);
  v16 = sub_66F54(dword_9434C, dword_9434C >> 31);
  sub_65420(v75, "chain_num", v16);
  v17 = sub_66F54(*(_DWORD *)&byte_94484[24], *(int *)&byte_94484[24] >> 31);
  v18 = sub_65420(v75, "fan_num", v17);
  v74 = sub_65D18(v18);
  for ( i = 0; i < *(int *)&byte_94484[24]; ++i )
  {
    v19 = *((int *)&unk_94348 + i + 86);
    v20 = sub_66F54(v19, HIDWORD(v19));
    sub_661B4(v74, v20);
  }
  sub_65420(v75, "fan", v74);
  if ( (double)dword_95D48 <= 512.0 )
    v21 = 512.0;
  else
    v21 = (double)dword_95D48;
  v22 = sub_682AC(
          COERCE_UNSIGNED_INT64((double)dword_94090 / v21 * 10000.0),
          HIDWORD(COERCE_UNSIGNED_INT64((double)dword_94090 / v21 * 10000.0)));
  v23 = sub_68214(v22, HIDWORD(v22));
  v24 = sub_67110(LODWORD(v23));
  sub_65420(v75, "hwp_total", v24);
  v25 = sub_5C620(v75);
  v26 = sub_65D18(v25);
  v72 = v26;
  for ( i = 0; i < dword_9434C; ++i )
  {
    v71 = sub_651D4(v26);
    v27 = *((int *)&unk_94348 + 388 * i + 90);
    v28 = sub_66F54(v27, HIDWORD(v27));
    sub_65420(v71, "index", v28);
    v29 = *((int *)&unk_94348 + 388 * i + 91);
    v30 = sub_66F54(v29, HIDWORD(v29));
    sub_65420(v71, "freq_avg", v30);
    sscanf((const char *)&unk_94348 + 1552 * i + 368, "%lf", &v65);
    v31 = sub_682AC(COERCE_UNSIGNED_INT64(v65 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v65 * 100.0)));
    v32 = sub_68214(v31, HIDWORD(v31));
    v33 = sub_67110(LODWORD(v32));
    sub_65420(v71, "rate_ideal", v33);
    sscanf((const char *)&unk_94348 + 1552 * i + 384, "%lf", &v64);
    v34 = sub_682AC(COERCE_UNSIGNED_INT64(v64 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v64 * 100.0)));
    v35 = sub_68214(v34, HIDWORD(v34));
    v36 = sub_67110(LODWORD(v35));
    sub_65420(v71, "rate_real", v36);
    v37 = *((int *)&unk_94348 + 388 * i + 100);
    v38 = sub_66F54(v37, HIDWORD(v37));
    sub_65420(v71, "asic_num", v38);
    v39 = sub_66A38((char *)&unk_94348 + 1552 * i + 404);
    v40 = sub_65420(v71, "asic", v39);
    v74 = sub_65D18(v40);
    for ( j = 0; j <= 3; ++j )
    {
      v41 = *((int *)&unk_94348 + 388 * i + j + 165);
      v42 = sub_66F54(v41, HIDWORD(v41));
      sub_661B4(v74, v42);
    }
    v43 = sub_65420(v71, "temp_pic", v74);
    v74 = sub_65D18(v43);
    for ( j = 0; j <= 3; ++j )
    {
      v44 = *((int *)&unk_94348 + 388 * i + j + 169);
      v45 = sub_66F54(v44, HIDWORD(v44));
      sub_661B4(v74, v45);
    }
    v46 = sub_65420(v71, "temp_pcb", v74);
    v74 = sub_65D18(v46);
    for ( j = 0; j <= 3; ++j )
    {
      v47 = *((int *)&unk_94348 + 388 * i + j + 173);
      v48 = sub_66F54(v47, HIDWORD(v47));
      sub_661B4(v74, v48);
    }
    sub_65420(v71, "temp_chip", v74);
    v49 = *((int *)&unk_94348 + 388 * i + 177);
    v50 = sub_66F54(v49, HIDWORD(v49));
    v51 = sub_65420(v71, "hw", v50);
    if ( *((_BYTE *)&unk_94348 + 1552 * i + 812) )
      v52 = sub_673FC(v51);
    else
      v52 = sub_6741C(v51);
    sub_65420(v71, "eeprom_loaded", v52);
    v53 = sub_66A38((char *)&unk_94348 + 1552 * i + 813);
    sub_65420(v71, "sn", v53);
    if ( (double)*((int *)&unk_94348 + 388 * i + 202) <= 512.0 )
      v55 = 512.0;
    else
      v55 = (double)*((int *)&unk_94348 + 388 * i + 202);
    v54 = (double)*((int *)&unk_94348 + 388 * i + 177) * 512.0;
    v56 = sub_682AC(COERCE_UNSIGNED_INT64(v54 / v55 * 10000.0), HIDWORD(COERCE_UNSIGNED_INT64(v54 / v55 * 10000.0)));
    v57 = sub_68214(v56, HIDWORD(v56));
    v58 = sub_67110(LODWORD(v57));
    v59 = sub_65420(v71, "hwp", v58);
    if ( *((_DWORD *)&unk_94348 + 388 * i + 220) )
    {
      v60 = sub_65D18(v59);
      v74 = v60;
      for ( k = 0; k < *((_DWORD *)&unk_94348 + 388 * i + 220); ++k )
      {
        v73 = sub_65D18(v60);
        for ( m = 0; m < *((_DWORD *)&unk_94348 + 388 * i + 221); ++m )
        {
          v61 = *((int *)&unk_94348 + 388 * i + k * *((_DWORD *)&unk_94348 + 388 * i + 221) + m + 222);
          v62 = sub_66F54(v61, HIDWORD(v61));
          sub_661B4(v73, v62);
        }
        v60 = sub_661B4(v74, v73);
      }
      sub_65420(v71, "tpl", v74);
    }
    v26 = sub_661B4(v72, v71);
  }
  sub_65420(v75, "chain", v72);
  sub_5B548(&stru_94330, "driver-btm-c5_socketa.c", "bitmain_api_stats", 540);
  return v75;
}

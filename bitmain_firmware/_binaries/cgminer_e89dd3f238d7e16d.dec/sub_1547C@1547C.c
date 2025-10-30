int __fastcall sub_1547C(int a1, int a2)
{
  void *v3; // r0
  __int64 v4; // r0
  int v5; // r0
  __int64 v6; // r0
  int v7; // r0
  int v8; // r0
  __int64 v9; // r0
  int v10; // r0
  int v11; // r0
  __int64 v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  double v20; // r0
  double v21; // d7
  __int64 v22; // r0
  __int64 v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  __int64 v32; // r0
  int v33; // r0
  int v34; // r0
  double v35; // r0
  double v36; // d7
  __int64 v37; // r0
  double v38; // r0
  int v39; // r0
  __int64 v40; // r0
  int v41; // r0
  int v42; // r0
  __int64 v43; // r0
  int v44; // r0
  int v45; // r0
  __int64 v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  double v50; // d8
  double v51; // d7
  __int64 v52; // r0
  int v53; // r0
  int v54; // r0
  double v55; // d8
  double v56; // d7
  __int64 v57; // r0
  int v58; // r0
  int v59; // r0
  double v60; // d7
  __int64 v61; // r0
  int v62; // r0
  int v63; // r0
  double v64; // d7
  __int64 v65; // r0
  int v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  char v72[16]; // [sp+Ch] [bp-890h] BYREF
  __int16 v73; // [sp+80Ch] [bp-90h] BYREF
  double v74; // [sp+810h] [bp-8Ch] BYREF
  double v75; // [sp+818h] [bp-84h] BYREF
  double v76; // [sp+820h] [bp-7Ch] BYREF
  int v77; // [sp+82Ch] [bp-70h]
  double v78; // [sp+830h] [bp-6Ch]
  double v79; // [sp+838h] [bp-64h]
  double v80; // [sp+840h] [bp-5Ch]
  double v81; // [sp+848h] [bp-54h]
  double v82; // [sp+850h] [bp-4Ch]
  double v83; // [sp+858h] [bp-44h]
  __int64 v84; // [sp+860h] [bp-3Ch]
  double v85; // [sp+868h] [bp-34h]
  int v86; // [sp+874h] [bp-28h]
  int v87; // [sp+878h] [bp-24h]
  int v88; // [sp+87Ch] [bp-20h]

  v88 = 0;
  v87 = 0;
  v86 = 0;
  v85 = 0.0;
  v76 = 0.0;
  v75 = 0.0;
  v74 = 0.0;
  v84 = 0;
  v83 = 0.0;
  v82 = 0.0;
  v81 = 0.0;
  v80 = 0.0;
  v79 = 0.0;
  v78 = 0.0;
  v73 = 0;
  v77 = a2;
  if ( a2 && a1 )
  {
    sub_57A3C(&v73, 1);
    sub_12BA8(&stru_94330, "api_new.c", "get_summary_old", 749);
    v3 = sub_1524C(a1, 1, 11, *(const char **)(v77 + 8));
    v87 = sub_65D18(v3);
    v86 = sub_651D4(v87);
    v85 = dbl_862E0;
    v4 = sub_682AC(LODWORD(dbl_862E0), HIDWORD(dbl_862E0));
    v5 = sub_66F54(v4, HIDWORD(v4));
    sub_65420(v86, "Elapsed", v5);
    sscanf(byte_94454, "%lf", &v76);
    v6 = sub_682AC(COERCE_UNSIGNED_INT64(v76 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v76 * 100.0)));
    v7 = sub_68214(v6, HIDWORD(v6));
    v8 = sub_67110(v7);
    sub_65420(v86, "GHS 5s", v8);
    sscanf(&s[16], "%lf", &v74);
    v9 = sub_682AC(COERCE_UNSIGNED_INT64(v74 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v74 * 100.0)));
    v10 = sub_68214(v9, HIDWORD(v9));
    v11 = sub_67110(v10);
    sub_65420(v86, "GHS av", v11);
    sscanf(s, "%lf", &v75);
    v12 = sub_682AC(COERCE_UNSIGNED_INT64(v75 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v75 * 100.0)));
    v13 = sub_68214(v12, HIDWORD(v12));
    v14 = sub_67110(v13);
    sub_65420(v86, "GHS 30m", v14);
    v15 = sub_66F54(dword_940A4, 0);
    sub_65420(v86, "Found Blocks", v15);
    v16 = sub_66F54(dword_92FB8, dword_92FBC);
    sub_65420(v86, "Getwork", v16);
    v17 = sub_66F54(dword_90F20, dword_90F24);
    sub_65420(v86, "Accepted", v17);
    v18 = sub_66F54(dword_92FE8, dword_92FEC);
    sub_65420(v86, "Rejected", v18);
    v19 = sub_66F54(dword_94090, dword_94090 >> 31);
    sub_65420(v86, "Hardware Errors", v19);
    qword_90DF8 = sub_682AC(
                    COERCE_UNSIGNED_INT64(dbl_92F58 + dbl_92FE0 + dbl_90F28),
                    HIDWORD(COERCE_UNSIGNED_INT64(dbl_92F58 + dbl_92FE0 + dbl_90F28)));
    v20 = COERCE_DOUBLE(sub_68214(dword_90F20, dword_90F24));
    if ( dbl_862E0 == 0.0 )
      v21 = 1.0;
    else
      v21 = dbl_862E0;
    v22 = sub_682AC(
            COERCE_UNSIGNED_INT64(v20 / v21 * 60.0 * 100.0),
            HIDWORD(COERCE_UNSIGNED_INT64(v20 / v21 * 60.0 * 100.0)));
    v83 = COERCE_DOUBLE(sub_68214(v22, HIDWORD(v22))) / 100.0;
    v23 = sub_682AC(COERCE_UNSIGNED_INT64(v83 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v83 * 100.0)));
    v24 = sub_68214(v23, HIDWORD(v23));
    v25 = sub_67110(v24);
    sub_65420(v86, "Utility", v25);
    v26 = sub_66F54(dword_93038, dword_9303C);
    sub_65420(v86, "Discarded", v26);
    v27 = sub_66F54(dword_942F8, dword_942FC);
    sub_65420(v86, "Stale", v27);
    v28 = sub_66F54(dword_90F38, 0);
    sub_65420(v86, "Get Failures", v28);
    v29 = sub_66F54(dword_90F44, 0);
    sub_65420(v86, "Local Work", v29);
    v30 = sub_66F54(dword_90DDC, 0);
    sub_65420(v86, "Remote Failures", v30);
    v31 = sub_66F54(dword_94208, 0);
    sub_65420(v86, "Network Blocks", v31);
    v32 = sub_682AC(COERCE_UNSIGNED_INT64(dbl_90DB8 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_90DB8 * 100.0)));
    v33 = sub_68214(v32, HIDWORD(v32));
    v34 = sub_67110(v33);
    sub_65420(v86, "Total MH", v34);
    v35 = COERCE_DOUBLE(sub_68214(qword_90DF8, HIDWORD(qword_90DF8)));
    if ( dbl_862E0 == 0.0 )
      v36 = 1.0;
    else
      v36 = dbl_862E0;
    v37 = sub_682AC(
            COERCE_UNSIGNED_INT64(v35 / v36 * 60.0 * 100.0),
            HIDWORD(COERCE_UNSIGNED_INT64(v35 / v36 * 60.0 * 100.0)));
    v38 = COERCE_DOUBLE(sub_68214(v37, HIDWORD(v37)));
    v82 = v38 / 100.0;
    v39 = sub_67110(LODWORD(v38));
    sub_65420(v86, "Work Utility", v39);
    v40 = sub_682AC(COERCE_UNSIGNED_INT64(dbl_92F58 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_92F58 * 100.0)));
    v41 = sub_68214(v40, HIDWORD(v40));
    v42 = sub_67110(v41);
    sub_65420(v86, "Difficulty Accepted", v42);
    v43 = sub_682AC(COERCE_UNSIGNED_INT64(dbl_92FE0 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_92FE0 * 100.0)));
    v44 = sub_68214(v43, HIDWORD(v43));
    v45 = sub_67110(v44);
    sub_65420(v86, "Difficulty Rejected", v45);
    v46 = sub_682AC(COERCE_UNSIGNED_INT64(dbl_90F28 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_90F28 * 100.0)));
    v47 = sub_68214(v46, HIDWORD(v46));
    v48 = sub_67110(v47);
    sub_65420(v86, "Difficulty Stale", v48);
    v49 = sub_66F54(dword_86CD8, dword_86CDC);
    sub_65420(v86, "Best Share", v49);
    if ( dword_94090 + qword_90DF8 )
    {
      v50 = (double)dword_94090;
      v51 = v50
          / COERCE_DOUBLE(sub_68214(dword_94090 + (int)qword_90DF8, (unsigned __int64)(dword_94090 + qword_90DF8) >> 32));
    }
    else
    {
      v51 = 0.0;
    }
    v81 = v51;
    v52 = sub_682AC(COERCE_UNSIGNED_INT64(v51 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v51 * 100.0)));
    v53 = sub_68214(v52, HIDWORD(v52));
    v54 = sub_67110(v53);
    sub_65420(v86, "Device Hardware%", v54);
    if ( qword_90DF8 )
    {
      v55 = dbl_92FE0;
      v56 = v55 / COERCE_DOUBLE(sub_68214(qword_90DF8, HIDWORD(qword_90DF8)));
    }
    else
    {
      v56 = 0.0;
    }
    v80 = v56;
    v57 = sub_682AC(COERCE_UNSIGNED_INT64(v56 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v56 * 100.0)));
    v58 = sub_68214(v57, HIDWORD(v57));
    v59 = sub_67110(v58);
    sub_65420(v86, "Device Rejected%", v59);
    if ( dbl_92F58 + dbl_92FE0 + dbl_90F28 == 0.0 )
      v60 = 0.0;
    else
      v60 = dbl_92FE0 / (dbl_92F58 + dbl_92FE0 + dbl_90F28);
    v79 = v60;
    v61 = sub_682AC(COERCE_UNSIGNED_INT64(v60 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v60 * 100.0)));
    v62 = sub_68214(v61, HIDWORD(v61));
    v63 = sub_67110(v62);
    sub_65420(v86, "Pool Rejected%", v63);
    if ( dbl_92F58 + dbl_92FE0 + dbl_90F28 == 0.0 )
      v64 = 0.0;
    else
      v64 = dbl_90F28 / (dbl_92F58 + dbl_92FE0 + dbl_90F28);
    v78 = v64;
    v65 = sub_682AC(COERCE_UNSIGNED_INT64(v64 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v64 * 100.0)));
    v66 = sub_68214(v65, HIDWORD(v65));
    v67 = sub_67110(v66);
    sub_65420(v86, "Pool Stale%", v67);
    v68 = sub_66F54(dword_940B0, dword_940B0 >> 31);
    sub_65420(v86, "Last getwork", v68);
    sub_661B4(v87, v86);
    sub_65420(a1, "SUMMARY", v87);
    v69 = sub_66F54(1, 0);
    sub_65420(a1, "id", v69);
    sub_12CE0(&stru_94330, "api_new.c", "get_summary_old", 821);
    return v88;
  }
  else
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      snprintf(v72, 0x800u, "%s: input bad api param\n", "get_summary_old");
      sub_1DB6C(3, v72, 0);
    }
    return -2147483646;
  }
}

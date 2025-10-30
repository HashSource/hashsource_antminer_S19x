int __fastcall sub_15DA4(int a1, int a2)
{
  int v3; // r0
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
  double v21; // d16
  __int64 v22; // r0
  __int64 v23; // r0
  double v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  __int64 v32; // r0
  double v33; // r0
  int v34; // r0
  double v35; // r0
  double v36; // d16
  __int64 v37; // r0
  double v38; // r0
  int v39; // r0
  __int64 v40; // r0
  double v41; // r0
  int v42; // r0
  __int64 v43; // r0
  double v44; // r0
  int v45; // r0
  __int64 v46; // r0
  double v47; // r0
  int v48; // r0
  int v49; // r0
  double v50; // d8
  double v51; // d16
  __int64 v52; // r0
  double v53; // r0
  int v54; // r0
  double v55; // d8
  double v56; // d16
  __int64 v57; // r0
  double v58; // r0
  int v59; // r0
  double v60; // d16
  __int64 v61; // r0
  double v62; // r0
  int v63; // r0
  double v64; // d16
  __int64 v65; // r0
  double v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  char v72[16]; // [sp+Ch] [bp-880h] BYREF
  __int16 v73; // [sp+80Ch] [bp-80h] BYREF
  double v74; // [sp+810h] [bp-7Ch] BYREF
  double v75; // [sp+818h] [bp-74h] BYREF
  double v76; // [sp+820h] [bp-6Ch] BYREF
  int v77; // [sp+82Ch] [bp-60h]
  double v78; // [sp+830h] [bp-5Ch]
  double v79; // [sp+838h] [bp-54h]
  double v80; // [sp+840h] [bp-4Ch]
  double v81; // [sp+848h] [bp-44h]
  double v82; // [sp+850h] [bp-3Ch]
  double v83; // [sp+858h] [bp-34h]
  __int64 v84; // [sp+860h] [bp-2Ch]
  double v85; // [sp+868h] [bp-24h]
  int v86; // [sp+874h] [bp-18h]
  int v87; // [sp+878h] [bp-14h]
  int v88; // [sp+87Ch] [bp-10h]

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
    sub_585B0(&v73, 1);
    sub_13374(&stru_954C8, "api_new.c", "get_summary_old", 749);
    v3 = sub_15B04(a1, 1, 11, *(const char **)(v77 + 8));
    v87 = sub_66A14(v3);
    v86 = sub_65ED4(v87);
    v85 = dbl_87478;
    v4 = sub_68F1C(LODWORD(dbl_87478), HIDWORD(dbl_87478));
    v5 = sub_67C3C(v4, HIDWORD(v4));
    sub_6611C(v86, "Elapsed", v5);
    sscanf(byte_955EC, "%lf", &v76);
    v6 = sub_68F1C(COERCE_UNSIGNED_INT64(v76 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v76 * 100.0)));
    v7 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_68E84)(v6, HIDWORD(v6));
    v8 = sub_67DF4(v7);
    sub_6611C(v86, "GHS 5s", v8);
    sscanf(&s[16], "%lf", &v74);
    v9 = sub_68F1C(COERCE_UNSIGNED_INT64(v74 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v74 * 100.0)));
    v10 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_68E84)(v9, HIDWORD(v9));
    v11 = sub_67DF4(v10);
    sub_6611C(v86, "GHS av", v11);
    sscanf(s, "%lf", &v75);
    v12 = sub_68F1C(COERCE_UNSIGNED_INT64(v75 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v75 * 100.0)));
    v13 = ((__int64 (__fastcall *)(_DWORD, _DWORD))sub_68E84)(v12, HIDWORD(v12));
    v14 = sub_67DF4(v13);
    sub_6611C(v86, "GHS 30m", v14);
    v15 = sub_67C3C(dword_9523C, 0);
    sub_6611C(v86, "Found Blocks", v15);
    v16 = sub_67C3C(LODWORD(dbl_94150), HIDWORD(dbl_94150));
    sub_6611C(v86, "Getwork", v16);
    v17 = sub_67C3C(LODWORD(dbl_920B8), HIDWORD(dbl_920B8));
    sub_6611C(v86, "Accepted", v17);
    v18 = sub_67C3C(LODWORD(dbl_94180), HIDWORD(dbl_94180));
    sub_6611C(v86, "Rejected", v18);
    v19 = sub_67C3C(dword_95228, dword_95228 >> 31);
    sub_6611C(v86, "Hardware Errors", v19);
    *(_QWORD *)&dbl_91F90 = sub_68F1C(
                              COERCE_UNSIGNED_INT64(dbl_940F0 + dbl_94178 + dbl_920C0),
                              HIDWORD(COERCE_UNSIGNED_INT64(dbl_940F0 + dbl_94178 + dbl_920C0)));
    v20 = COERCE_DOUBLE(((__int64 (__fastcall *)(_DWORD, _DWORD))sub_68E84)(LODWORD(dbl_920B8), HIDWORD(dbl_920B8)));
    if ( dbl_87478 == 0.0 )
      v21 = 1.0;
    else
      v21 = dbl_87478;
    v22 = sub_68F1C(
            COERCE_UNSIGNED_INT64(v20 / v21 * 60.0 * 100.0),
            HIDWORD(COERCE_UNSIGNED_INT64(v20 / v21 * 60.0 * 100.0)));
    v83 = sub_68E84(v22, HIDWORD(v22)) / 100.0;
    v23 = sub_68F1C(COERCE_UNSIGNED_INT64(v83 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v83 * 100.0)));
    v24 = sub_68E84(v23, HIDWORD(v23));
    v25 = sub_67DF4(LODWORD(v24));
    sub_6611C(v86, "Utility", v25);
    v26 = sub_67C3C(LODWORD(dbl_941D0), HIDWORD(dbl_941D0));
    sub_6611C(v86, "Discarded", v26);
    v27 = sub_67C3C(LODWORD(dbl_95490), HIDWORD(dbl_95490));
    sub_6611C(v86, "Stale", v27);
    v28 = sub_67C3C(dword_920D0, 0);
    sub_6611C(v86, "Get Failures", v28);
    v29 = sub_67C3C(dword_920DC, 0);
    sub_6611C(v86, "Local Work", v29);
    v30 = sub_67C3C(dword_91F74, 0);
    sub_6611C(v86, "Remote Failures", v30);
    v31 = sub_67C3C(dword_953A0, 0);
    sub_6611C(v86, "Network Blocks", v31);
    v32 = sub_68F1C(COERCE_UNSIGNED_INT64(dbl_91F50 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_91F50 * 100.0)));
    v33 = sub_68E84(v32, HIDWORD(v32));
    v34 = sub_67DF4(LODWORD(v33));
    sub_6611C(v86, "Total MH", v34);
    v35 = sub_68E84(LODWORD(dbl_91F90), HIDWORD(dbl_91F90));
    if ( dbl_87478 == 0.0 )
      v36 = 1.0;
    else
      v36 = dbl_87478;
    v37 = sub_68F1C(
            COERCE_UNSIGNED_INT64(v35 / v36 * 60.0 * 100.0),
            HIDWORD(COERCE_UNSIGNED_INT64(v35 / v36 * 60.0 * 100.0)));
    v38 = sub_68E84(v37, HIDWORD(v37));
    v82 = v38 / 100.0;
    v39 = sub_67DF4(LODWORD(v38));
    sub_6611C(v86, "Work Utility", v39);
    v40 = sub_68F1C(COERCE_UNSIGNED_INT64(dbl_940F0 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_940F0 * 100.0)));
    v41 = sub_68E84(v40, HIDWORD(v40));
    v42 = sub_67DF4(LODWORD(v41));
    sub_6611C(v86, "Difficulty Accepted", v42);
    v43 = sub_68F1C(COERCE_UNSIGNED_INT64(dbl_94178 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_94178 * 100.0)));
    v44 = sub_68E84(v43, HIDWORD(v43));
    v45 = sub_67DF4(LODWORD(v44));
    sub_6611C(v86, "Difficulty Rejected", v45);
    v46 = sub_68F1C(COERCE_UNSIGNED_INT64(dbl_920C0 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_920C0 * 100.0)));
    v47 = sub_68E84(v46, HIDWORD(v46));
    v48 = sub_67DF4(LODWORD(v47));
    sub_6611C(v86, "Difficulty Stale", v48);
    v49 = sub_67C3C(LODWORD(dbl_87E70), HIDWORD(dbl_87E70));
    sub_6611C(v86, "Best Share", v49);
    if ( *(_QWORD *)&dbl_91F90 + dword_95228 )
    {
      v50 = (double)dword_95228;
      v51 = v50
          / sub_68E84(LODWORD(dbl_91F90) + dword_95228, (unsigned __int64)(*(_QWORD *)&dbl_91F90 + dword_95228) >> 32);
    }
    else
    {
      v51 = 0.0;
    }
    v81 = v51;
    v52 = sub_68F1C(COERCE_UNSIGNED_INT64(v51 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v51 * 100.0)));
    v53 = sub_68E84(v52, HIDWORD(v52));
    v54 = sub_67DF4(LODWORD(v53));
    sub_6611C(v86, "Device Hardware%", v54);
    if ( *(_QWORD *)&dbl_91F90 )
    {
      v55 = dbl_94178;
      v56 = v55 / sub_68E84(LODWORD(dbl_91F90), HIDWORD(dbl_91F90));
    }
    else
    {
      v56 = 0.0;
    }
    v80 = v56;
    v57 = sub_68F1C(COERCE_UNSIGNED_INT64(v56 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v56 * 100.0)));
    v58 = sub_68E84(v57, HIDWORD(v57));
    v59 = sub_67DF4(LODWORD(v58));
    sub_6611C(v86, "Device Rejected%", v59);
    if ( dbl_940F0 + dbl_94178 + dbl_920C0 == 0.0 )
      v60 = 0.0;
    else
      v60 = dbl_94178 / (dbl_940F0 + dbl_94178 + dbl_920C0);
    v79 = v60;
    v61 = sub_68F1C(COERCE_UNSIGNED_INT64(v60 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v60 * 100.0)));
    v62 = sub_68E84(v61, HIDWORD(v61));
    v63 = sub_67DF4(LODWORD(v62));
    sub_6611C(v86, "Pool Rejected%", v63);
    if ( dbl_940F0 + dbl_94178 + dbl_920C0 == 0.0 )
      v64 = 0.0;
    else
      v64 = dbl_920C0 / (dbl_940F0 + dbl_94178 + dbl_920C0);
    v78 = v64;
    v65 = sub_68F1C(COERCE_UNSIGNED_INT64(v64 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v64 * 100.0)));
    v66 = sub_68E84(v65, HIDWORD(v65));
    v67 = sub_67DF4(LODWORD(v66));
    sub_6611C(v86, "Pool Stale%", v67);
    v68 = sub_67C3C(dword_95248, dword_95248 >> 31);
    sub_6611C(v86, "Last getwork", v68);
    sub_66EA4(v87, v86);
    sub_6611C(a1, "SUMMARY", v87);
    v69 = sub_67C3C(1, 0);
    sub_6611C(a1, "id", v69);
    sub_134A4(&stru_954C8, "api_new.c", "get_summary_old", 821);
    return v88;
  }
  else
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
    {
      snprintf(v72, 0x800u, "%s: input bad api param\n", "get_summary_old");
      sub_1E4EC(3, v72, 0);
    }
    return -2147483646;
  }
}

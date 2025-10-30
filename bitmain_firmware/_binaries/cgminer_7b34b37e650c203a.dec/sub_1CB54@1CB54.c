int __fastcall sub_1CB54(int a1, int a2, int a3, int a4)
{
  char *v6; // r1
  double v7; // d7
  double v8; // d8
  double v9; // d10
  double v10; // r0
  const char *v11; // r4
  const char *v12; // r0
  const char *v13; // r0
  double *v14; // r3
  const char *v15; // r0
  const char *v16; // r0
  const char *v17; // r0
  const char *v18; // r0
  const char *v19; // r0
  const char *v20; // r0
  const char *v21; // r0
  const char *v22; // r0
  const char *v23; // r0
  const char *v24; // r0
  const char *v25; // r0
  const char *v26; // r0
  const char *v27; // r0
  const char *v28; // r0
  const char *v29; // r0
  const char *v30; // r0
  const char *v31; // r0
  const char *v32; // r0
  const char *v33; // r4
  __int64 v34; // r8
  double v35; // d8
  double v36; // d7
  int v37; // r2
  const char *v38; // r4
  double v39; // d7
  const char *v40; // r0
  double v41; // d7
  double v42; // d5
  const char *v43; // r0
  double v44; // d7
  double v45; // d5
  const char *v46; // r0
  char **v47; // r4
  int result; // r0
  int v49; // [sp+10h] [bp-54h]
  __int64 v51; // [sp+18h] [bp-4Ch]
  double v52; // [sp+20h] [bp-44h] BYREF
  double v53; // [sp+28h] [bp-3Ch] BYREF
  double v54; // [sp+30h] [bp-34h] BYREF
  double v55; // [sp+38h] [bp-2Ch] BYREF
  double v56; // [sp+40h] [bp-24h] BYREF
  double v57; // [sp+48h] [bp-1Ch] BYREF
  double v58; // [sp+50h] [bp-14h] BYREF
  double v59; // [sp+58h] [bp-Ch] BYREF

  sub_18AD4((unsigned int *)a1, 11, 0, 0, a4);
  v6 = "SUMMARY,";
  if ( a4 )
    v6 = ",\"SUMMARY\":[";
  v49 = sub_15B00((unsigned int *)a1, v6);
  if ( pthread_mutex_lock(&stru_76838) )
    sub_17604("summary", 2788);
  *(_QWORD *)&dword_76850 = sub_4A1B4(
                              COERCE_UNSIGNED_INT64(dbl_73370 + dbl_73390 + dbl_766B8),
                              HIDWORD(COERCE_UNSIGNED_INT64(dbl_73370 + dbl_73390 + dbl_766B8)));
  v51 = *(_QWORD *)&dword_76850;
  v7 = sub_4A11C(dword_755D8, dword_755DC, dword_76850, dword_76854);
  v8 = dbl_68720;
  if ( dbl_68720 == 0.0 )
  {
    v9 = 1.0;
  }
  else
  {
    v7 = v7 / dbl_68720;
    v9 = dbl_68720;
  }
  v52 = v7 * 60.0;
  v53 = (dbl_756A8 - dbl_76830) / 1000.0 / (dbl_68720 - dbl_68738);
  v10 = sub_4A11C(v51, HIDWORD(v51), v51, HIDWORD(v51));
  v55 = (double)SLODWORD(flt_6ABA0) + v8;
  v54 = v10 / v9 * 60.0;
  v11 = sub_18850(0, "Elapsed", 13, (const char *)&v55, 1);
  if ( !(_BYTE)dword_6ABA4 )
    sprintf((char *)&dword_6ABA4, "%.2f", 0.0);
  v12 = sub_18850((int)v11, "GHS 5s", 1, (const char *)&dword_6ABA4, 0);
  v13 = sub_18850((int)v12, "GHS av", 17, (const char *)&v53, 0);
  v14 = &dbl_6ABB8;
  if ( dbl_6ABB8 < 0.01 )
    v14 = &v53;
  v15 = sub_18850((int)v13, "GHS 30m", 17, (const char *)v14, 0);
  v16 = sub_18850((int)v15, "Found Blocks", 7, (const char *)&dword_7345C, 1);
  v17 = sub_18850((int)v16, "Getworks", 11, (const char *)&dword_755E8, 1);
  v18 = sub_18850((int)v17, "Accepted", 11, (const char *)&dword_755D8, 1);
  v19 = sub_18850((int)v18, "Rejected", 11, (const char *)&dword_767E8, 1);
  v20 = sub_18850((int)v19, "Hardware Errors", 6, (const char *)&dword_73368, 1);
  v21 = sub_18850((int)v20, "Utility", 20, (const char *)&v52, 0);
  v22 = sub_18850((int)v21, "Discarded", 11, (const char *)&dword_73380, 1);
  v23 = sub_18850((int)v22, "Stale", 11, (const char *)&dword_73318, 1);
  v24 = sub_18850((int)v23, "Get Failures", 7, (const char *)&dword_755D0, 1);
  v25 = sub_18850((int)v24, "Local Work", 7, (const char *)&dword_767E0, 1);
  v26 = sub_18850((int)v25, "Remote Failures", 7, (const char *)&dword_74494, 1);
  v27 = sub_18850((int)v26, "Network Blocks", 7, (const char *)&dword_766DC, 1);
  v28 = sub_18850((int)v27, "Total MH", 18, (const char *)&dbl_756A8, 1);
  v29 = sub_18850((int)v28, "Work Utility", 20, (const char *)&v54, 0);
  v30 = sub_18850((int)v29, "Difficulty Accepted", 24, (const char *)&dbl_73370, 1);
  v31 = sub_18850((int)v30, "Difficulty Rejected", 24, (const char *)&dbl_73390, 1);
  v32 = sub_18850((int)v31, "Difficulty Stale", 24, (const char *)&dbl_766B8, 1);
  v33 = sub_18850((int)v32, "Best Share", 10, (const char *)&dword_68FF0, 1);
  v34 = *(_QWORD *)&dword_76850 + dword_73368;
  if ( v34 )
  {
    v35 = (double)dword_73368;
    v36 = v35 / sub_4A11C(v34, HIDWORD(v34), (unsigned int)v34 | HIDWORD(v34), dword_73368);
  }
  else
  {
    v36 = 0.0;
  }
  v56 = v36;
  v38 = sub_18850((int)v33, "Device Hardware%", 25, (const char *)&v56, 0);
  if ( *(_QWORD *)&dword_76850 )
    v39 = dbl_73390 / sub_4A11C(dword_76850, dword_76854, v37, dword_76850 | (unsigned int)dword_76854);
  else
    v39 = 0.0;
  v57 = v39;
  v40 = sub_18850((int)v38, "Device Rejected%", 25, (const char *)&v57, 0);
  v41 = dbl_73390 + dbl_73370 + dbl_766B8;
  if ( v41 == 0.0 )
    v42 = 0.0;
  else
    v42 = dbl_73390 / v41;
  v58 = v42;
  v43 = sub_18850((int)v40, "Pool Rejected%", 25, (const char *)&v58, 0);
  v44 = dbl_73370 + dbl_73390 + dbl_766B8;
  if ( v44 == 0.0 )
    v45 = 0.0;
  else
    v45 = dbl_766B8 / v44;
  v59 = v45;
  v46 = sub_18850((int)v43, "Pool Stale%", 25, (const char *)&v59, 0);
  v47 = (char **)sub_18850((int)v46, "Last getwork", 16, (const char *)&dword_744A0, 0);
  if ( pthread_mutex_unlock(&stru_76838) )
    sub_17668("summary", 2844);
  off_67ED8();
  result = sub_17D00((unsigned int *)a1, v47, a4, 0);
  if ( (a4 & v49) != 0 )
    *(_BYTE *)(a1 + 13) = 1;
  return result;
}

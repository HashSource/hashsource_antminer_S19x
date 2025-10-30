int __fastcall sub_19450(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  __int64 v10; // r0
  double v11; // r0
  double v12; // d0
  int v13; // r0
  double v14; // d8
  __int64 v15; // r0
  double v16; // r0
  int v17; // r0
  __int64 v18; // r0
  double v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  __int64 v24; // r0
  double v25; // r0
  int v26; // r0
  __int64 v27; // d16
  int v28; // r0
  int v29; // r0
  __int64 v30; // r0
  double v31; // r0
  int v32; // r0
  int v33; // r0
  __int64 v34; // r0
  int v35; // r0
  __int64 v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // s15
  double v41; // d16
  __int64 v42; // r0
  double v43; // r0
  int v44; // r0
  double v45; // d8
  double v46; // d16
  __int64 v47; // r0
  double v48; // r0
  double v49; // d0
  int v50; // r0
  __int64 v51; // r0
  int v52; // r0
  int v53; // r0
  char v56[12]; // [sp+8h] [bp-85Ch] BYREF
  char s[24]; // [sp+808h] [bp-5Ch] BYREF
  double v58; // [sp+820h] [bp-44h]
  double v59; // [sp+828h] [bp-3Ch]
  int v60; // [sp+834h] [bp-30h]
  int v61; // [sp+838h] [bp-2Ch]
  int v62; // [sp+83Ch] [bp-28h]
  int v63; // [sp+840h] [bp-24h]
  int v64; // [sp+844h] [bp-20h]
  int v65; // [sp+848h] [bp-1Ch]
  int v66; // [sp+84Ch] [bp-18h]
  int v67; // [sp+850h] [bp-14h]
  int i; // [sp+854h] [bp-10h]

  v67 = 0;
  v66 = 0;
  v65 = 0;
  i = 0;
  v64 = 0;
  v63 = 0;
  v62 = a2;
  if ( a2 && a1 )
  {
    v66 = sub_19204();
    if ( v66 )
    {
      v3 = sub_15B04(a1, 1, 9, *(const char **)(v62 + 8));
      v4 = sub_66A14(v3);
      v64 = v4;
      for ( i = 0; i < v66; ++i )
      {
        v63 = sub_65ED4(v4);
        v61 = sub_19308(i);
        v60 = sub_2EF94(v61);
        v5 = sub_67C3C(i, i >> 31);
        sub_6611C(v63, "ASC", v5);
        v6 = sub_67728(*(_DWORD *)(*(_DWORD *)(v60 + 4) + 8));
        sub_6611C(v63, "Name", v6);
        v7 = sub_67C3C(*(_DWORD *)(v60 + 8), *(int *)(v60 + 8) >> 31);
        sub_6611C(v63, "ID", v7);
        if ( *(_DWORD *)(v60 + 32) == 1 )
          v8 = sub_67728("N");
        else
          v8 = sub_67728("Y");
        sub_6611C(v63, "Enabled", v8);
        v9 = sub_67728("Alive");
        sub_6611C(v63, "Status", v9);
        v10 = sub_68F1C(
                COERCE_UNSIGNED_INT64(*(double *)(v60 + 176) * 100.0),
                HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v60 + 176) * 100.0)));
        v11 = sub_68E84(v10, HIDWORD(v10));
        v12 = v11 / 100.0;
        v13 = sub_67DF4(LODWORD(v11));
        sub_6611C(v63, "Tenperature", v13);
        v14 = *(double *)(v60 + 80);
        sub_324E8(v60);
        v15 = sub_68F1C(COERCE_UNSIGNED_INT64(v14 / v12 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v14 / v12 * 100.0)));
        v16 = sub_68E84(v15, HIDWORD(v15));
        v17 = sub_67DF4(LODWORD(v16));
        sub_6611C(v63, "MHS av", v17);
        snprintf(s, 0x18u, "MHS %ds", dword_86C20);
        v18 = sub_68F1C(
                COERCE_UNSIGNED_INT64(*(double *)(v60 + 48) * 100.0),
                HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v60 + 48) * 100.0)));
        v19 = sub_68E84(v18, HIDWORD(v18));
        v20 = sub_67DF4(LODWORD(v19));
        sub_6611C(v63, s, v20);
        v21 = sub_67C3C(*(_DWORD *)(v60 + 36), *(int *)(v60 + 36) >> 31);
        sub_6611C(v63, "Accepted", v21);
        v22 = sub_67C3C(*(_DWORD *)(v60 + 40), *(int *)(v60 + 40) >> 31);
        sub_6611C(v63, "Rejected", v22);
        v23 = sub_67C3C(*(_DWORD *)(v60 + 44), *(int *)(v60 + 44) >> 31);
        sub_6611C(v63, "Hardware Errors", v23);
        v24 = sub_68F1C(
                COERCE_UNSIGNED_INT64(*(double *)(v60 + 88) * 100.0),
                HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v60 + 88) * 100.0)));
        v25 = sub_68E84(v24, HIDWORD(v24));
        v26 = sub_67DF4(LODWORD(v25));
        sub_6611C(v63, "Utility", v26);
        if ( *(int *)(v60 + 220) <= 0 )
          v27 = -1;
        else
          v27 = vshrd_n_s64(vdup_n_s32(*(_DWORD *)(v60 + 216)).n64_i64[0], 0x20u);
        v28 = sub_67C3C(v27, HIDWORD(v27));
        sub_6611C(v63, "Last Share Pool", v28);
        v29 = sub_67C3C(*(_DWORD *)(v60 + 220), *(int *)(v60 + 220) >> 31);
        sub_6611C(v63, "Last Share Time", v29);
        v30 = sub_68F1C(
                COERCE_UNSIGNED_INT64(*(double *)(v60 + 80) * 100.0),
                HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v60 + 80) * 100.0)));
        v31 = sub_68E84(v30, HIDWORD(v30));
        v32 = sub_67DF4(LODWORD(v31));
        sub_6611C(v63, "Total MH", v32);
        v33 = sub_67C3C(*(_DWORD *)(v60 + 192), *(_DWORD *)(v60 + 196));
        sub_6611C(v63, "Diff1 Work", v33);
        v34 = sub_68F1C(*(_DWORD *)(v60 + 200), *(_DWORD *)(v60 + 204));
        v35 = sub_67C3C(v34, HIDWORD(v34));
        sub_6611C(v63, "Difficulty Accepted", v35);
        v36 = sub_68F1C(*(_DWORD *)(v60 + 208), *(_DWORD *)(v60 + 212));
        v37 = sub_67C3C(v36, HIDWORD(v36));
        sub_6611C(v63, "Difficulty Rejected", v37);
        v38 = sub_67C3C(*(_DWORD *)(v60 + 232), *(int *)(v60 + 232) >> 31);
        sub_6611C(v63, "Last Share Difficulty", v38);
        v39 = sub_67C3C(*(_DWORD *)(v60 + 232), *(int *)(v60 + 232) >> 31);
        sub_6611C(v63, "Last Valid Work", v39);
        if ( *(_QWORD *)(v60 + 192) + *(int *)(v60 + 44) )
        {
          v40 = *(_DWORD *)(v60 + 44);
          v41 = (double)v40
              / sub_68E84(*(_DWORD *)(v60 + 192) + v40, (unsigned __int64)(*(_QWORD *)(v60 + 192) + v40) >> 32);
        }
        else
        {
          v41 = 0.0;
        }
        v59 = v41;
        v42 = sub_68F1C(COERCE_UNSIGNED_INT64(v41 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v41 * 100.0)));
        v43 = sub_68E84(v42, HIDWORD(v42));
        v44 = sub_67DF4(LODWORD(v43));
        sub_6611C(v63, "Device Hardware%", v44);
        if ( *(_QWORD *)(v60 + 192) )
        {
          v45 = *(double *)(v60 + 208);
          v46 = v45 / sub_68E84(*(_DWORD *)(v60 + 192), *(_DWORD *)(v60 + 196));
        }
        else
        {
          v46 = 0.0;
        }
        v58 = v46;
        v47 = sub_68F1C(COERCE_UNSIGNED_INT64(v46 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v46 * 100.0)));
        v48 = sub_68E84(v47, HIDWORD(v47));
        v49 = v48 / 100.0;
        v50 = sub_67DF4(LODWORD(v48));
        sub_6611C(v63, "Device Rejected%", v50);
        sub_324E8(v60);
        v51 = sub_68F1C(LODWORD(v49), HIDWORD(v49));
        v52 = sub_67C3C(v51, HIDWORD(v51));
        sub_6611C(v63, "Device Elapsed", v52);
        v4 = sub_66EA4(v64, v63);
      }
      sub_6611C(a1, "DEVS", v64);
      v53 = sub_67C3C(1, 0);
      sub_6611C(a1, "id", v53);
    }
    else
    {
      sub_15B04(a1, 0, 10, "No ASCs");
    }
    return v67;
  }
  else
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
    {
      snprintf(v56, 0x800u, "%s: input bad api param\n", "get_devs_old");
      sub_1E4EC(3, v56, 0);
    }
    return -2147483646;
  }
}

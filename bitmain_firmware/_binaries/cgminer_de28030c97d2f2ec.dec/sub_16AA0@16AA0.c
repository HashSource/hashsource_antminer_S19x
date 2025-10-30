int __fastcall sub_16AA0(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r3
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  __int64 v27; // r0
  double v28; // r0
  int v29; // r0
  __int64 v30; // r0
  double v31; // r0
  int v32; // r0
  __int64 v33; // r0
  double v34; // r0
  int v35; // r0
  __int64 v36; // r0
  double v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r3
  int v41; // r0
  int v42; // r3
  int v43; // r0
  int v44; // r0
  int v45; // r3
  __int64 v46; // d16
  double v47; // r0
  int v48; // r0
  double v49; // d16
  __int64 v50; // r0
  double v51; // r0
  int v52; // r0
  double v53; // d16
  __int64 v54; // r0
  double v55; // r0
  int v56; // r0
  int v57; // r0
  char v61[8]; // [sp+14h] [bp-968h] BYREF
  char v62[24]; // [sp+814h] [bp-168h] BYREF
  char v63[8]; // [sp+82Ch] [bp-150h] BYREF
  char v64[12]; // [sp+834h] [bp-148h] BYREF
  char v65[128]; // [sp+840h] [bp-13Ch] BYREF
  char s[128]; // [sp+8C0h] [bp-BCh] BYREF
  double v67; // [sp+940h] [bp-3Ch]
  int v68; // [sp+948h] [bp-34h]
  int v69; // [sp+94Ch] [bp-30h]
  __int64 v70; // [sp+950h] [bp-2Ch]
  double v71; // [sp+958h] [bp-24h]
  int v72; // [sp+964h] [bp-18h]
  int v73; // [sp+968h] [bp-14h]
  int v74; // [sp+96Ch] [bp-10h]
  int v75; // [sp+970h] [bp-Ch]
  int i; // [sp+974h] [bp-8h]

  v74 = 0;
  v73 = 0;
  v72 = 0;
  i = 0;
  memset(s, 0, sizeof(s));
  memset(v65, 0, sizeof(v65));
  memset(v64, 0, sizeof(v64));
  memset(v63, 0, sizeof(v63));
  memset(v62, 0, sizeof(v62));
  v75 = 0;
  v71 = 0.0;
  v70 = 0;
  v69 = a2;
  if ( a2 && a1 )
  {
    if ( dword_92028 )
    {
      v3 = sub_15B04(a1, 1, 7, *(const char **)(v69 + 8));
      v4 = sub_66A14(v3);
      v73 = v4;
      for ( i = 0; i < dword_92028; ++i )
      {
        v68 = *(_DWORD *)(dword_920CC + 4 * i);
        if ( !*(_BYTE *)(v68 + 105) )
        {
          v72 = sub_65ED4(v4);
          v5 = sub_67C3C(i, i >> 31);
          sub_6611C(v72, "POOL", v5);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(const char **)(v68 + 164));
          v6 = sub_67728(s);
          sub_6611C(v72, "URL", v6);
          memset(v64, 0, sizeof(v64));
          v7 = *(_DWORD *)(v68 + 100);
          if ( v7 == 1 )
          {
            if ( *(_BYTE *)(v68 + 97) )
              strcpy(v64, "Deed");
            else
              strcpy(v64, "Alive");
          }
          else if ( v7 )
          {
            if ( v7 == 2 )
              strcpy(v64, "Rejecting");
            else
              strcpy(v64, "Unknown");
          }
          else
          {
            strcpy(v64, "Disabled");
          }
          v8 = sub_67728(v64);
          sub_6611C(v72, "Status", v8);
          v9 = sub_67C3C(*(_DWORD *)(v68 + 4), *(int *)(v68 + 4) >> 31);
          sub_6611C(v72, "Priority", v9);
          v10 = sub_67C3C(*(_DWORD *)(v68 + 56), *(int *)(v68 + 56) >> 31);
          sub_6611C(v72, "Quota", v10);
          if ( *(_DWORD *)(v68 + 108) )
            v11 = sub_67728("Y");
          else
            v11 = sub_67728("N");
          sub_6611C(v72, "Long Poll", v11);
          v12 = sub_67C3C(*(_DWORD *)(v68 + 116), 0);
          sub_6611C(v72, "Getworks", v12);
          v13 = sub_67C3C(*(_DWORD *)(v68 + 8), *(_DWORD *)(v68 + 12));
          sub_6611C(v72, "Accepted", v13);
          v14 = sub_67C3C(*(_DWORD *)(v68 + 16), *(_DWORD *)(v68 + 20));
          sub_6611C(v72, "Rejected", v14);
          v15 = sub_67C3C(*(_DWORD *)(v68 + 124), 0);
          sub_6611C(v72, "Discarded", v15);
          v16 = sub_67C3C(*(_DWORD *)(v68 + 120), 0);
          sub_6611C(v72, "Stale", v16);
          v17 = sub_67C3C(*(_DWORD *)(v68 + 128), 0);
          sub_6611C(v72, "Get Failures", v17);
          v18 = sub_67C3C(*(_DWORD *)(v68 + 132), 0);
          sub_6611C(v72, "Remote Failures", v18);
          memset(v65, 0, sizeof(v65));
          snprintf(v65, 0x80u, "%s", *(const char **)(v68 + 172));
          v19 = sub_67728(v65);
          sub_6611C(v72, "User", v19);
          memset(v62, 0, sizeof(v62));
          if ( *(int *)(v68 + 352) > 0 )
          {
            v75 = time(0) - *(_DWORD *)(v68 + 352);
            if ( v75 < 0 )
              v75 = 0;
            snprintf(v62, 0x18u, "%d:%02d:%02d", v75 / 3600, v75 % 3600 / 60, v75 % 3600 % 60);
          }
          else
          {
            strcpy(v62, "0");
          }
          v20 = sub_67728(v62);
          sub_6611C(v72, "Last Share Time", v20);
          memset(v63, 0, sizeof(v63));
          snprintf(v63, 8u, "%s", (const char *)(v68 + 48));
          v21 = sub_67728(v63);
          sub_6611C(v72, "Diff", v21);
          v22 = sub_67C3C(*(_DWORD *)(v68 + 40), *(_DWORD *)(v68 + 44));
          sub_6611C(v72, "Diff1 Shares", v22);
          if ( *(_DWORD *)(v68 + 184) )
          {
            v23 = sub_20460(*(_DWORD *)(v68 + 180));
            v24 = sub_67728(v23);
            sub_6611C(v72, "Proxy Type", v24);
            v25 = sub_67728(*(_DWORD *)(v68 + 184));
          }
          else
          {
            v26 = sub_67728(&unk_69328);
            sub_6611C(v72, "Proxy Type", v26);
            v25 = sub_67728(&unk_69328);
          }
          sub_6611C(v72, "Proxy", v25);
          v27 = sub_68F1C(
                  COERCE_UNSIGNED_INT64(*(double *)(v68 + 72) * 100.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v68 + 72) * 100.0)));
          v28 = sub_68E84(v27, HIDWORD(v27));
          v29 = sub_67DF4(LODWORD(v28));
          sub_6611C(v72, "Difficulty Accepted", v29);
          v30 = sub_68F1C(
                  COERCE_UNSIGNED_INT64(*(double *)(v68 + 80) * 100.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v68 + 80) * 100.0)));
          v31 = sub_68E84(v30, HIDWORD(v30));
          v32 = sub_67DF4(LODWORD(v31));
          sub_6611C(v72, "Difficulty Rejected", v32);
          v33 = sub_68F1C(
                  COERCE_UNSIGNED_INT64(*(double *)(v68 + 88) * 100.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v68 + 88) * 100.0)));
          v34 = sub_68E84(v33, HIDWORD(v33));
          v35 = sub_67DF4(LODWORD(v34));
          sub_6611C(v72, "Difficulty Stale", v35);
          v36 = sub_68F1C(
                  COERCE_UNSIGNED_INT64(*(double *)(v68 + 360) * 100.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v68 + 360) * 100.0)));
          v37 = sub_68E84(v36, HIDWORD(v36));
          v38 = sub_67DF4(LODWORD(v37));
          v39 = sub_6611C(v72, "Last Share Difficulty", v38);
          if ( *(_BYTE *)(v68 + 656) )
            v40 = sub_68090(v39);
          else
            v40 = sub_680B0(v39);
          v41 = sub_6611C(v72, "Has Stratum", v40);
          if ( *(_BYTE *)(v68 + 657) )
            v42 = sub_68090(v41);
          else
            v42 = sub_680B0(v41);
          sub_6611C(v72, "Stratum Active", v42);
          if ( *(_BYTE *)(v68 + 657) )
            v43 = sub_67728(*(_DWORD *)(v68 + 576));
          else
            v43 = sub_67728(&unk_69328);
          v44 = sub_6611C(v72, "Stratum URL", v43);
          if ( *(_BYTE *)(v68 + 752) )
            v45 = sub_68090(v44);
          else
            v45 = sub_680B0(v44);
          sub_6611C(v72, "Has GBT", v45);
          v46 = 3LL * *(_QWORD *)(v68 + 368) + vshld_n_s64(3LL * *(_QWORD *)(v68 + 368), 5u);
          v47 = sub_68E84((int)v46 + *(_DWORD *)(v68 + 368), (unsigned __int64)(v46 + *(_QWORD *)(v68 + 368)) >> 32);
          v48 = sub_67DF4(LODWORD(v47));
          sub_6611C(v72, "Best Share", v48);
          if ( *(double *)(v68 + 72) + *(double *)(v68 + 80) + *(double *)(v68 + 88) == 0.0 )
            v49 = 0.0;
          else
            v49 = *(double *)(v68 + 80) / (*(double *)(v68 + 72) + *(double *)(v68 + 80) + *(double *)(v68 + 88));
          v71 = v49;
          v50 = sub_68F1C(COERCE_UNSIGNED_INT64(v49 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v49 * 100.0)));
          v51 = sub_68E84(v50, HIDWORD(v50));
          v52 = sub_67DF4(LODWORD(v51));
          sub_6611C(v72, "Pool Rejected%", v52);
          if ( *(double *)(v68 + 72) + *(double *)(v68 + 80) + *(double *)(v68 + 88) == 0.0 )
            v53 = 0.0;
          else
            v53 = *(double *)(v68 + 88) / (*(double *)(v68 + 72) + *(double *)(v68 + 80) + *(double *)(v68 + 88));
          v67 = v53;
          v54 = sub_68F1C(COERCE_UNSIGNED_INT64(v53 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v53 * 100.0)));
          v55 = sub_68E84(v54, HIDWORD(v54));
          v56 = sub_67DF4(LODWORD(v55));
          sub_6611C(v72, "Pool Stale%%", v56);
          v4 = sub_66EA4(v73, v72);
        }
      }
      sub_6611C(a1, "POOLS", v73);
      v57 = sub_67C3C(1, 0);
      sub_6611C(a1, "id", v57);
    }
    else
    {
      sub_15B04(a1, 0, 8, "No pools");
    }
    return v74;
  }
  else
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
    {
      snprintf(v61, 0x800u, "%s: input bad api param\n", "get_pools_old");
      sub_1E4EC(3, v61, 0);
    }
    return -2147483646;
  }
}

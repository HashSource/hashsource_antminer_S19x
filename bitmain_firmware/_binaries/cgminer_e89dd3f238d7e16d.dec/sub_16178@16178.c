int __fastcall sub_16178(int a1, int a2)
{
  void *v3; // r0
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
  int v28; // r0
  int v29; // r0
  __int64 v30; // r0
  int v31; // r0
  int v32; // r0
  __int64 v33; // r0
  int v34; // r0
  int v35; // r0
  __int64 v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r3
  int v41; // r0
  int v42; // r3
  int v43; // r0
  int v44; // r0
  int v45; // r3
  int v46; // r0
  int v47; // r0
  double v48; // d7
  __int64 v49; // r0
  int v50; // r0
  int v51; // r0
  double v52; // d7
  __int64 v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r0
  char v60[16]; // [sp+14h] [bp-980h] BYREF
  char v61[24]; // [sp+814h] [bp-180h] BYREF
  char v62[8]; // [sp+82Ch] [bp-168h] BYREF
  char v63[12]; // [sp+834h] [bp-160h] BYREF
  char v64[128]; // [sp+840h] [bp-154h] BYREF
  char s[128]; // [sp+8C0h] [bp-D4h] BYREF
  double v66; // [sp+940h] [bp-54h]
  int v67; // [sp+948h] [bp-4Ch]
  int v68; // [sp+94Ch] [bp-48h]
  __int64 v69; // [sp+950h] [bp-44h]
  double v70; // [sp+958h] [bp-3Ch]
  int v71; // [sp+964h] [bp-30h]
  int v72; // [sp+968h] [bp-2Ch]
  int v73; // [sp+96Ch] [bp-28h]
  int v74; // [sp+970h] [bp-24h]
  int i; // [sp+974h] [bp-20h]

  v73 = 0;
  v72 = 0;
  v71 = 0;
  i = 0;
  memset(s, 0, sizeof(s));
  memset(v64, 0, sizeof(v64));
  memset(v63, 0, sizeof(v63));
  memset(v62, 0, sizeof(v62));
  memset(v61, 0, sizeof(v61));
  v74 = 0;
  v70 = 0.0;
  v69 = 0;
  v68 = a2;
  if ( a2 && a1 )
  {
    if ( dword_90E90 )
    {
      v3 = sub_1524C(a1, 1, 7, *(const char **)(v68 + 8));
      v4 = sub_65D18(v3);
      v72 = v4;
      for ( i = 0; i < dword_90E90; ++i )
      {
        v67 = *(_DWORD *)(dword_90F34 + 4 * i);
        if ( !*(_BYTE *)(v67 + 105) )
        {
          v71 = sub_651D4(v4);
          v5 = sub_66F54(i, i >> 31);
          sub_65420(v71, "POOL", v5);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(const char **)(v67 + 164));
          v6 = sub_66A38(s);
          sub_65420(v71, "URL", v6);
          memset(v63, 0, sizeof(v63));
          v7 = *(_DWORD *)(v67 + 100);
          if ( v7 == 1 )
          {
            if ( *(_BYTE *)(v67 + 97) )
              strcpy(v63, "Deed");
            else
              strcpy(v63, "Alive");
          }
          else if ( v7 )
          {
            if ( v7 == 2 )
              strcpy(v63, "Rejecting");
            else
              strcpy(v63, "Unknown");
          }
          else
          {
            strcpy(v63, "Disabled");
          }
          v8 = sub_66A38(v63);
          sub_65420(v71, "Status", v8);
          v9 = sub_66F54(*(_DWORD *)(v67 + 4), *(int *)(v67 + 4) >> 31);
          sub_65420(v71, "Priority", v9);
          v10 = sub_66F54(*(_DWORD *)(v67 + 56), *(int *)(v67 + 56) >> 31);
          sub_65420(v71, "Quota", v10);
          if ( *(_DWORD *)(v67 + 108) )
            v11 = sub_66A38("Y");
          else
            v11 = sub_66A38("N");
          sub_65420(v71, "Long Poll", v11);
          v12 = sub_66F54(*(_DWORD *)(v67 + 116), 0);
          sub_65420(v71, "Getworks", v12);
          v13 = sub_66F54(*(_DWORD *)(v67 + 8), *(_DWORD *)(v67 + 12));
          sub_65420(v71, "Accepted", v13);
          v14 = sub_66F54(*(_DWORD *)(v67 + 16), *(_DWORD *)(v67 + 20));
          sub_65420(v71, "Rejected", v14);
          v15 = sub_66F54(*(_DWORD *)(v67 + 124), 0);
          sub_65420(v71, "Discarded", v15);
          v16 = sub_66F54(*(_DWORD *)(v67 + 120), 0);
          sub_65420(v71, "Stale", v16);
          v17 = sub_66F54(*(_DWORD *)(v67 + 128), 0);
          sub_65420(v71, "Get Failures", v17);
          v18 = sub_66F54(*(_DWORD *)(v67 + 132), 0);
          sub_65420(v71, "Remote Failures", v18);
          memset(v64, 0, sizeof(v64));
          snprintf(v64, 0x80u, "%s", *(const char **)(v67 + 172));
          v19 = sub_66A38(v64);
          sub_65420(v71, "User", v19);
          memset(v61, 0, sizeof(v61));
          if ( *(int *)(v67 + 352) > 0 )
          {
            v74 = time(0) - *(_DWORD *)(v67 + 352);
            if ( v74 < 0 )
              v74 = 0;
            snprintf(v61, 0x18u, "%d:%02d:%02d", v74 / 3600, v74 % 3600 / 60, v74 % 3600 % 60);
          }
          else
          {
            strcpy(v61, "0");
          }
          v20 = sub_66A38(v61);
          sub_65420(v71, "Last Share Time", v20);
          memset(v62, 0, sizeof(v62));
          snprintf(v62, 8u, "%s", (const char *)(v67 + 48));
          v21 = sub_66A38(v62);
          sub_65420(v71, "Diff", v21);
          v22 = sub_66F54(*(_DWORD *)(v67 + 40), *(_DWORD *)(v67 + 44));
          sub_65420(v71, "Diff1 Shares", v22);
          if ( *(_DWORD *)(v67 + 184) )
          {
            v23 = sub_1FB84(*(_DWORD *)(v67 + 180));
            v24 = sub_66A38(v23);
            sub_65420(v71, "Proxy Type", v24);
            v25 = sub_66A38(*(_DWORD *)(v67 + 184));
          }
          else
          {
            v26 = sub_66A38(&unk_686A8);
            sub_65420(v71, "Proxy Type", v26);
            v25 = sub_66A38(&unk_686A8);
          }
          sub_65420(v71, "Proxy", v25);
          v27 = sub_682AC(
                  COERCE_UNSIGNED_INT64(*(double *)(v67 + 72) * 100.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v67 + 72) * 100.0)));
          v28 = sub_68214(v27, HIDWORD(v27));
          v29 = sub_67110(v28);
          sub_65420(v71, "Difficulty Accepted", v29);
          v30 = sub_682AC(
                  COERCE_UNSIGNED_INT64(*(double *)(v67 + 80) * 100.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v67 + 80) * 100.0)));
          v31 = sub_68214(v30, HIDWORD(v30));
          v32 = sub_67110(v31);
          sub_65420(v71, "Difficulty Rejected", v32);
          v33 = sub_682AC(
                  COERCE_UNSIGNED_INT64(*(double *)(v67 + 88) * 100.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v67 + 88) * 100.0)));
          v34 = sub_68214(v33, HIDWORD(v33));
          v35 = sub_67110(v34);
          sub_65420(v71, "Difficulty Stale", v35);
          v36 = sub_682AC(
                  COERCE_UNSIGNED_INT64(*(double *)(v67 + 360) * 100.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v67 + 360) * 100.0)));
          v37 = sub_68214(v36, HIDWORD(v36));
          v38 = sub_67110(v37);
          v39 = sub_65420(v71, "Last Share Difficulty", v38);
          if ( *(_BYTE *)(v67 + 640) )
            v40 = sub_673FC(v39);
          else
            v40 = sub_6741C(v39);
          v41 = sub_65420(v71, "Has Stratum", v40);
          if ( *(_BYTE *)(v67 + 641) )
            v42 = sub_673FC(v41);
          else
            v42 = sub_6741C(v41);
          sub_65420(v71, "Stratum Active", v42);
          if ( *(_BYTE *)(v67 + 641) )
            v43 = sub_66A38(*(_DWORD *)(v67 + 576));
          else
            v43 = sub_66A38(&unk_686A8);
          v44 = sub_65420(v71, "Stratum URL", v43);
          if ( *(_BYTE *)(v67 + 736) )
            v45 = sub_673FC(v44);
          else
            v45 = sub_6741C(v44);
          sub_65420(v71, "Has GBT", v45);
          v46 = sub_68214(100 * *(_DWORD *)(v67 + 368), (unsigned __int64)(100LL * *(_QWORD *)(v67 + 368)) >> 32);
          v47 = sub_67110(v46);
          sub_65420(v71, "Best Share", v47);
          if ( *(double *)(v67 + 72) + *(double *)(v67 + 80) + *(double *)(v67 + 88) == 0.0 )
            v48 = 0.0;
          else
            v48 = *(double *)(v67 + 80) / (*(double *)(v67 + 72) + *(double *)(v67 + 80) + *(double *)(v67 + 88));
          v70 = v48;
          v49 = sub_682AC(COERCE_UNSIGNED_INT64(v48 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v48 * 100.0)));
          v50 = sub_68214(v49, HIDWORD(v49));
          v51 = sub_67110(v50);
          sub_65420(v71, "Pool Rejected%", v51);
          if ( *(double *)(v67 + 72) + *(double *)(v67 + 80) + *(double *)(v67 + 88) == 0.0 )
            v52 = 0.0;
          else
            v52 = *(double *)(v67 + 88) / (*(double *)(v67 + 72) + *(double *)(v67 + 80) + *(double *)(v67 + 88));
          v66 = v52;
          v53 = sub_682AC(COERCE_UNSIGNED_INT64(v52 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v52 * 100.0)));
          v54 = sub_68214(v53, HIDWORD(v53));
          v55 = sub_67110(v54);
          sub_65420(v71, "Pool Stale%%", v55);
          v4 = sub_661B4(v72, v71);
        }
      }
      sub_65420(a1, "POOLS", v72);
      v56 = sub_66F54(1, 0);
      sub_65420(a1, "id", v56);
    }
    else
    {
      sub_1524C(a1, 0, 8, "No pools");
    }
    return v73;
  }
  else
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      snprintf(v60, 0x800u, "%s: input bad api param\n", "get_pools_old");
      sub_1DB6C(3, v60, 0);
    }
    return -2147483646;
  }
}

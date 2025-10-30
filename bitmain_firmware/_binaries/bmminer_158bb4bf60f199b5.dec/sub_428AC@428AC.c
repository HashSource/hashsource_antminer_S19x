int __fastcall sub_428AC(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v7; // r9
  int v8; // r3
  const char *v9; // r0
  const char *v10; // r0
  const char *v11; // r0
  double v12; // d5
  double v13; // d7
  double v14; // d6
  const char *v15; // r0
  double v16; // d5
  double v17; // d7
  double v18; // d6
  char **v19; // r1
  _BOOL4 v20; // r3
  int v21; // r4
  int v22; // r3
  const char *v23; // r6
  const char *v24; // r5
  time_t v25; // r0
  unsigned int v26; // lr
  const char *v27; // r0
  const char *v28; // r0
  const char *v29; // r0
  const char *v30; // r0
  const char *v31; // r0
  const char *v32; // r0
  const char *v33; // r0
  const char *v34; // r0
  const char *v35; // r0
  const char *v36; // r0
  const char *v37; // r0
  const char *v38; // r0
  const char *v39; // r0
  const char *v40; // r0
  const char *v41; // r0
  const char *v42; // r0
  const char *v43; // r0
  int v44; // r6
  const char *v45; // r0
  const char *v46; // r0
  const char *v47; // r0
  const char *v48; // r0
  const char *v49; // r0
  const char *v50; // r0
  const char *v51; // r0
  const char *v52; // r0
  const char *v53; // r0
  const char *v54; // r0
  const char *v55; // r6
  const char *v56; // [sp+Ch] [bp-130h]
  int v58; // [sp+1Ch] [bp-120h]
  int v59; // [sp+24h] [bp-118h] BYREF
  double v60; // [sp+28h] [bp-114h] BYREF
  double v61; // [sp+30h] [bp-10Ch] BYREF
  char s[256]; // [sp+38h] [bp-104h] BYREF

  memset(s, 0, sizeof(s));
  if ( !dword_242F4C )
    return sub_3F65C((unsigned int *)a1, 8, 0, 0, a4);
  result = sub_3F65C((unsigned int *)a1, 7, 0, 0, a4);
  if ( !a4 )
  {
    v59 = 0;
    if ( dword_242F4C <= 0 )
      return result;
    v58 = 0;
    goto LABEL_6;
  }
  result = sub_3C770((unsigned int *)a1, ",\"POOLS\":[");
  v58 = result;
  v59 = 0;
  if ( dword_242F4C > 0 )
  {
LABEL_6:
    v7 = 0;
    v8 = 0;
    do
    {
      v21 = *(_DWORD *)(dword_244048 + 4 * v8);
      if ( !*(_BYTE *)(v21 + 105) )
      {
        v22 = *(_DWORD *)(v21 + 100);
        if ( v22 == 1 )
        {
          v55 = "Alive";
          if ( *(_BYTE *)(v21 + 97) )
            v55 = "Dead";
          v56 = v55;
        }
        else if ( v22 )
        {
          v23 = "Rejecting";
          if ( v22 != 2 )
            v23 = "Unknown";
          v56 = v23;
        }
        else
        {
          v56 = "Disabled";
        }
        v24 = "N";
        if ( *(_DWORD *)(v21 + 108) )
          v24 = "Y";
        if ( *(int *)(v21 + 352) > 0 )
        {
          v25 = time(0);
          v26 = (v25 - *(_DWORD *)(v21 + 352)) & ~((v25 - *(_DWORD *)(v21 + 352)) >> 31);
          sprintf(s, "%d:%02d:%02d", v26 / 0xE10, v26 % 0xE10 / 0x3C, v26 % 0xE10 % 0x3C);
        }
        else
        {
          *(_WORD *)s = 48;
        }
        v27 = sub_3F3D8(v7, "POOL", 6, (const char *)&v59, 0);
        v28 = sub_3F3D8((int)v27, "URL", 0, *(const char **)(v21 + 164), 0);
        v29 = sub_3F3D8((int)v28, "Status", 1, v56, 0);
        v30 = sub_3F3D8((int)v29, "Priority", 6, (const char *)(v21 + 4), 0);
        v31 = sub_3F3D8((int)v30, "Quota", 6, (const char *)(v21 + 56), 0);
        v32 = sub_3F3D8((int)v31, "Long Poll", 1, v24, 0);
        v33 = sub_3F3D8((int)v32, "Getworks", 7, (const char *)(v21 + 116), 0);
        v34 = sub_3F3D8((int)v33, "Accepted", 11, (const char *)(v21 + 8), 0);
        v35 = sub_3F3D8((int)v34, "Rejected", 11, (const char *)(v21 + 16), 0);
        v36 = sub_3F3D8((int)v35, "Discarded", 7, (const char *)(v21 + 124), 0);
        v37 = sub_3F3D8((int)v36, "Stale", 7, (const char *)(v21 + 120), 0);
        v38 = sub_3F3D8((int)v37, "Get Failures", 7, (const char *)(v21 + 128), 0);
        v39 = sub_3F3D8((int)v38, "Remote Failures", 7, (const char *)(v21 + 132), 0);
        v40 = sub_3F3D8((int)v39, "User", 0, *(const char **)(v21 + 172), 0);
        v41 = sub_3F3D8((int)v40, "Last Share Time", 1, s, 0);
        v42 = sub_3F3D8((int)v41, "Diff", 1, (const char *)(v21 + 48), 0);
        v43 = sub_3F3D8((int)v42, "Diff1 Shares", 11, (const char *)(v21 + 40), 0);
        v44 = (int)v43;
        if ( *(_DWORD *)(v21 + 184) )
        {
          v45 = (const char *)sub_497D0(*(_DWORD *)(v21 + 180));
          v46 = sub_3F3D8(v44, "Proxy Type", 2, v45, 0);
          v47 = sub_3F3D8((int)v46, "Proxy", 0, *(const char **)(v21 + 184), 0);
        }
        else
        {
          v54 = sub_3F3D8((int)v43, "Proxy Type", 2, "", *(_DWORD *)(v21 + 184));
          v47 = sub_3F3D8((int)v54, "Proxy", 2, "", 0);
        }
        v48 = sub_3F3D8((int)v47, "Difficulty Accepted", 24, (const char *)(v21 + 72), 0);
        v49 = sub_3F3D8((int)v48, "Difficulty Rejected", 24, (const char *)(v21 + 80), 0);
        v50 = sub_3F3D8((int)v49, "Difficulty Stale", 24, (const char *)(v21 + 88), 0);
        v51 = sub_3F3D8((int)v50, "Last Share Difficulty", 24, (const char *)(v21 + 360), 0);
        v52 = sub_3F3D8((int)v51, "Has Stratum", 14, (const char *)(v21 + 640), 0);
        v53 = sub_3F3D8((int)v52, "Stratum Active", 14, (const char *)(v21 + 641), 0);
        if ( *(_BYTE *)(v21 + 641) )
          v9 = sub_3F3D8((int)v53, "Stratum URL", 0, *(const char **)(v21 + 576), 0);
        else
          v9 = sub_3F3D8((int)v53, "Stratum URL", 2, "", *(_BYTE *)(v21 + 641));
        v10 = sub_3F3D8((int)v9, "Has GBT", 14, (const char *)(v21 + 736), 0);
        v11 = sub_3F3D8((int)v10, "Best Share", 10, (const char *)(v21 + 368), 1);
        v12 = *(double *)(v21 + 80);
        v13 = v12 + *(double *)(v21 + 72) + *(double *)(v21 + 88);
        if ( v13 == 0.0 )
          v14 = 0.0;
        else
          v14 = v12 / v13;
        v60 = v14;
        v15 = sub_3F3D8((int)v11, "Pool Rejected%", 25, (const char *)&v60, 0);
        v16 = *(double *)(v21 + 88);
        v17 = *(double *)(v21 + 72) + *(double *)(v21 + 80) + v16;
        if ( v17 == 0.0 )
          v18 = 0.0;
        else
          v18 = v16 / v17;
        v61 = v18;
        v19 = (char **)sub_3F3D8((int)v15, "Pool Stale%", 25, (const char *)&v61, 0);
        if ( a4 )
          v20 = v59 > 0;
        else
          v20 = 0;
        result = sub_3E88C((unsigned int *)a1, v19, a4, v20);
        v7 = result;
      }
      v8 = ++v59;
    }
    while ( v59 < dword_242F4C );
  }
  if ( v58 )
    *(_BYTE *)(a1 + 13) = 1;
  return result;
}

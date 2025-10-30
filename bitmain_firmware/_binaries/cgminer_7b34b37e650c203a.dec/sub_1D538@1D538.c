const char *__fastcall sub_1D538(int *a1)
{
  int v2; // r0
  const char *v3; // r0
  const char *v4; // r0
  const char *v5; // r0
  const char *v6; // r0
  const char *v7; // r0
  const char *v8; // r0
  const char *v9; // r0
  const char *v10; // r0
  const char *v11; // r0
  const char *v12; // r0
  const char *v13; // r0
  const char *v14; // r0
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
  const char *result; // r0
  int v29; // [sp+8h] [bp-824h] BYREF
  int v30; // [sp+Ch] [bp-820h] BYREF
  double v31; // [sp+10h] [bp-81Ch] BYREF
  int v32; // [sp+18h] [bp-814h] BYREF
  int v33; // [sp+1Ch] [bp-810h]
  __int64 v34; // [sp+20h] [bp-80Ch] BYREF
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  v2 = *a1;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v29 = 0;
  v30 = 0;
  v3 = sub_18850(v2, "Elapsed", 13, (const char *)&dbl_68720, 1);
  *a1 = (int)v3;
  v4 = sub_18850((int)v3, "GHS 5s", 1, "14189.74", 0);
  *a1 = (int)v4;
  v31 = 14274.51;
  v5 = sub_18850((int)v4, "GHS av", 17, (const char *)&v31, 1);
  *a1 = (int)v5;
  v6 = sub_18850((int)v5, "Found Blocks", 7, (const char *)&v29, 1);
  *a1 = (int)v6;
  v32 = 20;
  v33 = 0;
  v7 = sub_18850((int)v6, "Getworks", 11, (const char *)&v32, 1);
  *a1 = (int)v7;
  v32 = 82;
  v33 = 0;
  v8 = sub_18850((int)v7, "Accepted", 11, (const char *)&v32, 1);
  *a1 = (int)v8;
  v32 = 0;
  v33 = 0;
  v9 = sub_18850((int)v8, "Rejected", 11, (const char *)&v32, 1);
  *a1 = (int)v9;
  v10 = sub_18850((int)v9, "Hardware Errors", 6, (const char *)&v30, 1);
  *a1 = (int)v10;
  v31 = 5.91;
  v11 = sub_18850((int)v10, "Utility", 20, (const char *)&v31, 0);
  *a1 = (int)v11;
  v32 = 0;
  v33 = 0;
  v12 = sub_18850((int)v11, "Discarded", 11, (const char *)&v32, 1);
  *a1 = (int)v12;
  v32 = 0;
  v33 = 0;
  v13 = sub_18850((int)v12, "Stale", 11, (const char *)&v32, 1);
  *a1 = (int)v13;
  v14 = sub_18850((int)v13, "Get Failures", 7, (const char *)&v29, 1);
  *a1 = (int)v14;
  v15 = sub_18850((int)v14, "Local Work", 7, (const char *)&dword_767E0, 1);
  *a1 = (int)v15;
  v16 = sub_18850((int)v15, "Remote Failures", 7, (const char *)&v29, 1);
  *a1 = (int)v16;
  v17 = sub_18850((int)v16, "Network Blocks", 7, (const char *)&dword_766DC, 1);
  *a1 = (int)v17;
  v18 = sub_18850((int)v17, "Total MH", 18, (const char *)&dbl_756A8, 1);
  *a1 = (int)v18;
  v31 = 0.0;
  v19 = sub_18850((int)v18, "Work Utility", 20, (const char *)&v31, 0);
  *a1 = (int)v19;
  v31 = 1343488.0;
  v20 = sub_18850((int)v19, "Difficulty Accepted", 24, (const char *)&v31, 1);
  *a1 = (int)v20;
  v31 = 16384.0;
  v21 = sub_18850((int)v20, "Difficulty Rejected", 24, (const char *)&v31, 1);
  *a1 = (int)v21;
  v22 = sub_18850((int)v21, "Difficulty Stale", 24, (const char *)&dbl_766B8, 1);
  *a1 = (int)v22;
  v34 = 3432989;
  v23 = sub_18850((int)v22, "Best Share", 10, (const char *)&v34, 1);
  *a1 = (int)v23;
  v31 = 0.0;
  v24 = sub_18850((int)v23, "Device Hardware%", 25, (const char *)&v31, 0);
  *a1 = (int)v24;
  v25 = sub_18850((int)v24, "Device Rejected%", 25, (const char *)&v31, 0);
  *a1 = (int)v25;
  v26 = sub_18850((int)v25, "Pool Rejected%", 25, (const char *)&v31, 0);
  *a1 = (int)v26;
  v27 = sub_18850((int)v26, "Pool Stale%", 25, (const char *)&v31, 0);
  *a1 = (int)v27;
  result = sub_18850((int)v27, "Last getwork", 16, (const char *)&dword_744A0, 0);
  *a1 = (int)result;
  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
  {
    snprintf(s, 0x800u, "root %d", result);
    return (const char *)sub_20F58(5, s, 0);
  }
  return result;
}

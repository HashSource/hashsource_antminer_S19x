int __fastcall sub_13F84(int a1, const char **a2)
{
  void *v3; // r0
  int v4; // r0
  __int64 v5; // r0
  int v6; // r0
  __int64 v7; // r0
  int v8; // r0
  int v9; // r0
  __int64 v10; // r0
  int v11; // r0
  int v12; // r0
  __int64 v13; // r0
  int v14; // r0
  int v15; // r0
  __int64 v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  char v25[16]; // [sp+Ch] [bp-870h] BYREF
  __int16 v26; // [sp+80Ch] [bp-70h] BYREF
  char s[4]; // [sp+810h] [bp-6Ch] BYREF
  int v28; // [sp+814h] [bp-68h]
  double v29; // [sp+818h] [bp-64h] BYREF
  double v30; // [sp+820h] [bp-5Ch] BYREF
  double v31; // [sp+828h] [bp-54h] BYREF
  double v32; // [sp+830h] [bp-4Ch] BYREF
  int v33; // [sp+83Ch] [bp-40h]
  int v34; // [sp+840h] [bp-3Ch]
  int v35; // [sp+844h] [bp-38h]
  int v36; // [sp+848h] [bp-34h]
  int v37; // [sp+84Ch] [bp-30h]
  double v38; // [sp+850h] [bp-2Ch]
  int v39; // [sp+85Ch] [bp-20h]
  int v40; // [sp+860h] [bp-1Ch]
  int v41; // [sp+864h] [bp-18h]
  const char **v42; // [sp+868h] [bp-14h]
  int v43; // [sp+86Ch] [bp-10h]
  double v44; // [sp+870h] [bp-Ch]

  v43 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v42 = a2;
  v41 = 0;
  v40 = 0;
  v39 = 0;
  v44 = 0.0;
  v32 = 0.0;
  v31 = 0.0;
  v30 = 0.0;
  v29 = 0.0;
  *(_DWORD *)s = 0;
  v28 = 0;
  v38 = 0.0;
  v37 = 0;
  v26 = 0;
  if ( a2 )
  {
    sub_585B0(&v26, 1);
    sub_13C84(a1, v42);
    sub_13374(&stru_954C8, "api_new.c", "get_summary", 345);
    v3 = sub_13E18(a1);
    v39 = sub_66A14(v3);
    v4 = sub_65ED4(v39);
    v41 = v4;
    if ( dword_954E8 > 1 )
    {
      v44 = dbl_87478;
    }
    else
    {
      v44 = 0.0;
      if ( dword_954E8 > 0 )
        sub_4E78C(v4);
    }
    v5 = sub_68F1C(LODWORD(v44), HIDWORD(v44));
    v6 = sub_67C3C(v5, HIDWORD(v5));
    sub_6611C(v41, "elapsed", v6);
    sscanf(byte_955EC, "%lf", &v32);
    v7 = sub_68F1C(COERCE_UNSIGNED_INT64(v32 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v32 * 100.0)));
    v8 = sub_68E84(v7, HIDWORD(v7));
    v9 = sub_67DF4(v8);
    sub_6611C(v41, "rate_5s", v9);
    sscanf(::s, "%lf", &v31);
    v10 = sub_68F1C(COERCE_UNSIGNED_INT64(v31 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v31 * 100.0)));
    v11 = sub_68E84(v10, HIDWORD(v10));
    v12 = sub_67DF4(v11);
    sub_6611C(v41, "rate_30m", v12);
    sscanf(&::s[16], "%lf", &v30);
    v13 = sub_68F1C(COERCE_UNSIGNED_INT64(v30 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v30 * 100.0)));
    v14 = sub_68E84(v13, HIDWORD(v13));
    v15 = sub_67DF4(v14);
    sub_6611C(v41, "rate_avg", v15);
    sscanf(byte_9561C, "%lf", &v29);
    v16 = sub_68F1C(COERCE_UNSIGNED_INT64(v29 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v29 * 100.0)));
    v17 = sub_68E84(v16, HIDWORD(v16));
    v18 = sub_67DF4(v17);
    sub_6611C(v41, "rate_ideal", v18);
    snprintf(s, 8u, "%s/s", &byte_9561C[16]);
    v19 = sub_67728(s);
    sub_6611C(v41, "rate_unit", v19);
    v37 = dword_95228;
    v20 = sub_67C3C(dword_95228, dword_95228 >> 31);
    sub_6611C(v41, "hw_all", v20);
    v38 = dbl_87E70;
    v21 = sub_67C3C(LODWORD(dbl_87E70), HIDWORD(dbl_87E70));
    v22 = sub_6611C(v41, "bestshare", v21);
    v40 = sub_66A14(v22);
    sub_13B50(v40);
    sub_6611C(v41, "status", v40);
    sub_66EA4(v39, v41);
    sub_6611C(a1, "SUMMARY", v39);
    sub_134A4(&stru_954C8, "api_new.c", "get_summary", 398);
    return v43;
  }
  else
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
    {
      snprintf(v25, 0x800u, "%s: input bad api param\n", "get_summary");
      sub_1E4EC(3, v25, 0);
    }
    return -2147483646;
  }
}

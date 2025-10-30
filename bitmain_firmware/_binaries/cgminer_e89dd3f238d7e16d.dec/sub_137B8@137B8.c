int __fastcall sub_137B8(int a1, const char **a2)
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
  _DWORD s[2]; // [sp+810h] [bp-6Ch] BYREF
  double v28; // [sp+818h] [bp-64h] BYREF
  double v29; // [sp+820h] [bp-5Ch] BYREF
  double v30; // [sp+828h] [bp-54h] BYREF
  double v31; // [sp+830h] [bp-4Ch] BYREF
  int v32; // [sp+83Ch] [bp-40h]
  int v33; // [sp+840h] [bp-3Ch]
  int v34; // [sp+844h] [bp-38h]
  int v35; // [sp+848h] [bp-34h]
  int v36; // [sp+84Ch] [bp-30h]
  __int64 v37; // [sp+850h] [bp-2Ch]
  int v38; // [sp+85Ch] [bp-20h]
  int v39; // [sp+860h] [bp-1Ch]
  int v40; // [sp+864h] [bp-18h]
  const char **v41; // [sp+868h] [bp-14h]
  int v42; // [sp+86Ch] [bp-10h]
  double v43; // [sp+870h] [bp-Ch]

  v42 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v41 = a2;
  v40 = 0;
  v39 = 0;
  v38 = 0;
  v43 = 0.0;
  v31 = 0.0;
  v30 = 0.0;
  v29 = 0.0;
  v28 = 0.0;
  s[0] = 0;
  s[1] = 0;
  v37 = 0;
  v36 = 0;
  v26 = 0;
  if ( a2 )
  {
    sub_57A3C(&v26, 1);
    sub_134E0(a1, v41);
    sub_12BA8(&stru_94330, "api_new.c", "get_summary", 345);
    v3 = sub_13644(a1);
    v38 = sub_65D18(v3);
    v4 = sub_651D4(v38);
    v40 = v4;
    if ( dword_94350 > 1 )
    {
      v43 = dbl_862E0;
    }
    else
    {
      v43 = 0.0;
      if ( dword_94350 > 0 )
        sub_4DB08(v4);
    }
    v5 = sub_682AC(LODWORD(v43), HIDWORD(v43));
    v6 = sub_66F54(v5, HIDWORD(v5));
    sub_65420(v40, "elapsed", v6);
    sscanf(byte_94454, "%lf", &v31);
    v7 = sub_682AC(COERCE_UNSIGNED_INT64(v31 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v31 * 100.0)));
    v8 = sub_68214(v7, HIDWORD(v7));
    v9 = sub_67110(v8);
    sub_65420(v40, "rate_5s", v9);
    sscanf(::s, "%lf", &v30);
    v10 = sub_682AC(COERCE_UNSIGNED_INT64(v30 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v30 * 100.0)));
    v11 = sub_68214(v10, HIDWORD(v10));
    v12 = sub_67110(v11);
    sub_65420(v40, "rate_30m", v12);
    sscanf(&::s[16], "%lf", &v29);
    v13 = sub_682AC(COERCE_UNSIGNED_INT64(v29 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v29 * 100.0)));
    v14 = sub_68214(v13, HIDWORD(v13));
    v15 = sub_67110(v14);
    sub_65420(v40, "rate_avg", v15);
    sscanf(byte_94484, "%lf", &v28);
    v16 = sub_682AC(COERCE_UNSIGNED_INT64(v28 * 100.0), HIDWORD(COERCE_UNSIGNED_INT64(v28 * 100.0)));
    v17 = sub_68214(v16, HIDWORD(v16));
    v18 = sub_67110(v17);
    sub_65420(v40, "rate_ideal", v18);
    snprintf((char *)s, 8u, "%s/s", &byte_94484[16]);
    v19 = sub_66A38(s);
    sub_65420(v40, "rate_unit", v19);
    v36 = dword_94090;
    v20 = sub_66F54(dword_94090, dword_94090 >> 31);
    sub_65420(v40, "hw_all", v20);
    v37 = *(_QWORD *)&dword_86CD8;
    v21 = sub_66F54(dword_86CD8, dword_86CDC);
    v22 = sub_65420(v40, "bestshare", v21);
    v39 = sub_65D18(v22);
    sub_133B4(v39);
    sub_65420(v40, "status", v39);
    sub_661B4(v38, v40);
    sub_65420(a1, "SUMMARY", v38);
    sub_12CE0(&stru_94330, "api_new.c", "get_summary", 398);
    return v42;
  }
  else
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      snprintf(v25, 0x800u, "%s: input bad api param\n", "get_summary");
      sub_1DB6C(3, v25, 0);
    }
    return -2147483646;
  }
}

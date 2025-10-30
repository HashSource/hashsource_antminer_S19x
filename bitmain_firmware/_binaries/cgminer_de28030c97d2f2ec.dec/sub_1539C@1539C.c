int __fastcall sub_1539C(int a1, const char **a2)
{
  int v3; // r0
  int v4; // r3
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  __int64 v12; // r0
  int v13; // r0
  char v16[4]; // [sp+8h] [bp-844h] BYREF
  __int16 v17; // [sp+808h] [bp-44h] BYREF
  char s[4]; // [sp+80Ch] [bp-40h] BYREF
  int v19; // [sp+810h] [bp-3Ch]
  char v20[8]; // [sp+814h] [bp-38h] BYREF
  int v21; // [sp+81Ch] [bp-30h]
  int v22; // [sp+820h] [bp-2Ch]
  int v23; // [sp+824h] [bp-28h]
  int v24; // [sp+828h] [bp-24h]
  int v25; // [sp+82Ch] [bp-20h]
  const char **v26; // [sp+830h] [bp-1Ch]
  int v27; // [sp+834h] [bp-18h]
  int v28; // [sp+838h] [bp-14h]
  int v29; // [sp+83Ch] [bp-10h]
  int j; // [sp+840h] [bp-Ch]
  int i; // [sp+844h] [bp-8h]

  v29 = 0;
  i = 0;
  j = 0;
  v28 = 0;
  v27 = 0;
  memset(v20, 0, sizeof(v20));
  *(_DWORD *)s = 0;
  v19 = 0;
  v26 = a2;
  v17 = 0;
  v25 = 0;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  v21 = 0;
  if ( a2 )
  {
    sub_585B0(&v17, 1);
    sub_13C84(a1, v26);
    sub_13E18(a1);
    v3 = sub_13374(&stru_954C8, "api_new.c", "get_rate", 625);
    v28 = dword_96EE4;
    v4 = dword_96EE4;
    if ( dword_96EE4 >= 24 )
      v4 = 24;
    v28 = v4;
    v25 = sub_66A14(v3);
    v22 = sub_65ED4(v25);
    snprintf(s, 8u, "%s/s", &byte_9561C[16]);
    v5 = sub_67728(s);
    v6 = sub_6611C(v22, "unit", v5);
    v24 = sub_66A14(v6);
    for ( i = 0; i < v28; ++i )
    {
      memset(v20, 0, sizeof(v20));
      snprintf(v20, 8u, "%dmin", 15 * (i + 1));
      v7 = sub_67728(v20);
      sub_66EA4(v24, v7);
    }
    v8 = sub_6611C(v22, "xAxis", v24);
    v9 = sub_66A14(v8);
    v24 = v9;
    for ( i = 0; dword_954E4 > i; ++i )
    {
      v23 = sub_65ED4(v9);
      memset(v20, 0, sizeof(v20));
      snprintf(v20, 8u, "chain%d", *((_DWORD *)&unk_954E0 + 388 * i + 90));
      v10 = sub_67728(v20);
      v11 = sub_6611C(v23, "name", v10);
      v21 = sub_66A14(v11);
      for ( j = 0; j < v28; ++j )
      {
        v12 = *((int *)&unk_954E0 + 388 * i + j + 178);
        v13 = sub_67C3C(v12, HIDWORD(v12));
        sub_66EA4(v21, v13);
      }
      sub_6611C(v23, "data", v21);
      v9 = sub_66EA4(v24, v23);
    }
    sub_6611C(v22, "series", v24);
    sub_66EA4(v25, v22);
    sub_6611C(a1, "RATE", v25);
    sub_134A4(&stru_954C8, "api_new.c", "get_rate", 664);
    return v29;
  }
  else
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
    {
      snprintf(v16, 0x800u, "%s: input bad api param\n", "get_rate");
      sub_1E4EC(3, v16, 0);
    }
    return -2147483646;
  }
}

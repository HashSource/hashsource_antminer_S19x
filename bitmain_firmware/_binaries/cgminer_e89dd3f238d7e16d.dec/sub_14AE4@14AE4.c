int __fastcall sub_14AE4(int a1, const char **a2)
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
  _DWORD s[2]; // [sp+80Ch] [bp-40h] BYREF
  char v19[8]; // [sp+814h] [bp-38h] BYREF
  int v20; // [sp+81Ch] [bp-30h]
  int v21; // [sp+820h] [bp-2Ch]
  int v22; // [sp+824h] [bp-28h]
  int v23; // [sp+828h] [bp-24h]
  int v24; // [sp+82Ch] [bp-20h]
  const char **v25; // [sp+830h] [bp-1Ch]
  int v26; // [sp+834h] [bp-18h]
  int v27; // [sp+838h] [bp-14h]
  int v28; // [sp+83Ch] [bp-10h]
  int j; // [sp+840h] [bp-Ch]
  int i; // [sp+844h] [bp-8h]

  v28 = 0;
  i = 0;
  j = 0;
  v27 = 0;
  v26 = 0;
  memset(v19, 0, sizeof(v19));
  s[0] = 0;
  s[1] = 0;
  v25 = a2;
  v17 = 0;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  if ( a2 )
  {
    sub_57A3C(&v17, 1);
    sub_134E0(a1, v25);
    sub_13644(a1);
    v3 = sub_12BA8(&stru_94330, "api_new.c", "get_rate", 625);
    v27 = dword_95D4C;
    v4 = dword_95D4C;
    if ( dword_95D4C >= 24 )
      v4 = 24;
    v27 = v4;
    v24 = sub_65D18(v3);
    v21 = sub_651D4(v24);
    snprintf((char *)s, 8u, "%s/s", &byte_94484[16]);
    v5 = sub_66A38(s);
    v6 = sub_65420(v21, "unit", v5);
    v23 = sub_65D18(v6);
    for ( i = 0; i < v27; ++i )
    {
      memset(v19, 0, sizeof(v19));
      snprintf(v19, 8u, "%dmin", 15 * (i + 1));
      v7 = sub_66A38(v19);
      sub_661B4(v23, v7);
    }
    v8 = sub_65420(v21, "xAxis", v23);
    v9 = sub_65D18(v8);
    v23 = v9;
    for ( i = 0; i < dword_9434C; ++i )
    {
      v22 = sub_651D4(v9);
      memset(v19, 0, sizeof(v19));
      snprintf(v19, 8u, "chain%d", *((_DWORD *)&unk_94348 + 388 * i + 90));
      v10 = sub_66A38(v19);
      v11 = sub_65420(v22, "name", v10);
      v20 = sub_65D18(v11);
      for ( j = 0; j < v27; ++j )
      {
        v12 = *((int *)&unk_94348 + 388 * i + j + 178);
        v13 = sub_66F54(v12, HIDWORD(v12));
        sub_661B4(v20, v13);
      }
      sub_65420(v22, "data", v20);
      v9 = sub_661B4(v23, v22);
    }
    sub_65420(v21, "series", v23);
    sub_661B4(v24, v21);
    sub_65420(a1, "RATE", v24);
    sub_12CE0(&stru_94330, "api_new.c", "get_rate", 664);
    return v28;
  }
  else
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      snprintf(v16, 0x800u, "%s: input bad api param\n", "get_rate");
      sub_1DB6C(3, v16, 0);
    }
    return -2147483646;
  }
}

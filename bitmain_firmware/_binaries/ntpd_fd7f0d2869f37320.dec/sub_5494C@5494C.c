int __fastcall sub_5494C(int a1, int a2)
{
  int v3; // r6
  int v5; // r2
  int v6; // r0
  bool v7; // cc
  struct tm *v8; // r7
  _DWORD *v9; // r9
  int tm_sec; // r0
  int v11; // r1
  bool v12; // zf
  int tm_yday; // r2
  int tm_min; // r12
  int tm_hour; // lr
  int v16; // r3
  int v17; // r3
  int v18; // r1
  _DWORD *v19; // r6
  time_t v20; // [sp+0h] [bp-4Ch] BYREF
  struct tm tp; // [sp+4h] [bp-48h] BYREF
  _BYTE v22[8]; // [sp+30h] [bp-1Ch] BYREF
  unsigned __int8 v23; // [sp+38h] [bp-14h]
  unsigned __int8 v24; // [sp+3Ah] [bp-12h]
  unsigned __int8 v25; // [sp+3Bh] [bp-11h]
  unsigned __int8 v26; // [sp+3Ch] [bp-10h]
  unsigned __int8 v27; // [sp+3Dh] [bp-Fh]
  unsigned __int8 v28; // [sp+3Eh] [bp-Eh]
  unsigned __int8 v29; // [sp+3Fh] [bp-Dh]
  unsigned __int8 v30; // [sp+40h] [bp-Ch]
  char v31; // [sp+41h] [bp-Bh]

  v3 = *(_DWORD *)(a2 + 84);
  v22[0] = 0;
  if ( read(*(_DWORD *)(v3 + 28), v22, 0x12u) <= 17 || v22[0] != 9 )
    return sub_39C88(a2, 3);
  v5 = 10 * v29 + v28;
  tp.tm_wday = 0;
  tp.tm_yday = 0;
  tp.tm_gmtoff = 0;
  tp.tm_zone = 0;
  tp.tm_mday = 10 * v25 + v24;
  if ( (v23 & 1) != 0 )
    v6 = 1;
  else
    v6 = (v23 ^ 2) << 30 >> 31;
  v7 = v5 <= 98;
  tp.tm_isdst = v6;
  tp.tm_year = 10 * v29 + v28;
  if ( v5 <= 98 )
    v5 += 100;
  tp.tm_hour = 10 * v22[7] + v22[6];
  if ( v7 )
    tp.tm_year = v5;
  tp.tm_mon = 10 * v27 + v26 - 1;
  tp.tm_sec = 10 * v22[3] + v22[2];
  tp.tm_min = 10 * v22[5] + v22[4];
  v20 = mktime(&tp);
  if ( v20 == -1 )
    return sub_39C88(a2, 6);
  if ( tp.tm_isdst <= 0 )
  {
    if ( tp.tm_isdst || tp.tm_gmtoff != 3600 )
      return sub_39C88(a2, 6);
  }
  else if ( tp.tm_gmtoff != 7200 )
  {
    return sub_39C88(a2, 6);
  }
  *(_DWORD *)(v3 + 184) = strftime((char *)(v3 + 56), 0x80u, "%Y %m %d %H %M %S", &tp);
  v8 = gmtime_r(&v20, &tp);
  if ( !v8 )
    return sub_39C88(a2, 3);
  v9 = (_DWORD *)(v3 + 232);
  sub_6055C(v3 + 232);
  tm_sec = v8->tm_sec;
  v11 = 31250000 * v30;
  v12 = (v31 & 1) == 0;
  tm_yday = v8->tm_yday;
  tm_min = v8->tm_min;
  tm_hour = v8->tm_hour;
  *(_DWORD *)(v3 + 188) = v8->tm_year + 1900;
  *(_DWORD *)(v3 + 192) = tm_yday + 1;
  v16 = *(_DWORD *)(v3 + 776);
  *(_DWORD *)(v3 + 208) = v11;
  v17 = v16 + 1;
  *(_DWORD *)(v3 + 776) = v17;
  if ( !v12 )
    v17 = 25856;
  *(_DWORD *)(v3 + 204) = tm_sec;
  if ( !v12 )
    HIWORD(v17) = 7629;
  *(_DWORD *)(v3 + 196) = tm_hour;
  if ( !v12 )
    v17 += v11;
  *(_DWORD *)(v3 + 200) = tm_min;
  if ( !v12 )
    *(_DWORD *)(v3 + 208) = v17;
  if ( !sub_3A4E8((_DWORD *)v3) )
    return sub_39C88(a2, 6);
  sub_42D0C(a2 + 16, (const char *)(v3 + 56));
  if ( (v22[1] & 1) == 0 || (*(_BYTE *)(v3 + 768) & 2) != 0 )
    *(_BYTE *)(v3 + 40) = 0;
  else
    *(_BYTE *)(v3 + 40) = 3;
  v18 = *(_DWORD *)(v3 + 236);
  v19 = (_DWORD *)(v3 + 224);
  *v19 = *v9;
  v19[1] = v18;
  return sub_3A534(a2);
}

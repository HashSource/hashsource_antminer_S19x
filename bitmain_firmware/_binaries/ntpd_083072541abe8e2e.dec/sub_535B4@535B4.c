__int16 *__fastcall sub_535B4(int a1, int a2)
{
  int v2; // r6
  int v5; // r2
  int v6; // r0
  bool v7; // cc
  struct tm *v8; // r7
  _DWORD *v9; // r9
  int v10; // r0
  int v11; // r2
  int v12; // r1
  bool v13; // zf
  int v14; // r3
  int tm_hour; // r12
  int tm_sec; // r2
  int tm_min; // r1
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

  v2 = *(_DWORD *)(a2 + 84);
  v22[0] = 0;
  if ( read(*(_DWORD *)(v2 + 28), v22, 0x12u) <= 17 || v22[0] != 9 )
    return sub_394A0((__int16 *)a2, 3);
  tp.tm_wday = 0;
  v5 = 10 * v29 + v28;
  tp.tm_mon = 10 * v27 + v26 - 1;
  tp.tm_yday = 0;
  tp.tm_gmtoff = 0;
  tp.tm_zone = 0;
  tp.tm_year = v5;
  if ( (v23 & 1) != 0 )
    v6 = 1;
  else
    v6 = v23 ^ 2;
  if ( (v23 & 1) == 0 )
    v6 = v6 << 30 >> 31;
  v7 = v5 <= 98;
  tp.tm_isdst = v6;
  if ( v5 <= 98 )
    v5 += 100;
  tp.tm_mday = 10 * v25 + v24;
  if ( v7 )
    tp.tm_year = v5;
  tp.tm_hour = 10 * v22[7] + v22[6];
  tp.tm_min = 10 * v22[5] + v22[4];
  tp.tm_sec = 10 * v22[3] + v22[2];
  v20 = mktime(&tp);
  if ( v20 == -1 )
    return sub_394A0((__int16 *)a2, 6);
  *(_DWORD *)(v2 + 184) = strftime((char *)(v2 + 56), 0x80u, "%Y %m %d %H %M %S", &tp);
  v8 = gmtime_r(&v20, &tp);
  if ( !v8 )
    return sub_394A0((__int16 *)a2, 3);
  v9 = (_DWORD *)(v2 + 232);
  sub_5F724(v2 + 232);
  v10 = 31250000 * v30;
  v11 = *(_DWORD *)(v2 + 776);
  v12 = v8->tm_yday + 1;
  v13 = (v31 & 1) == 0;
  *(_DWORD *)(v2 + 188) = v8->tm_year + 1900;
  v14 = v11 + 1;
  tm_hour = v8->tm_hour;
  tm_sec = v8->tm_sec;
  *(_DWORD *)(v2 + 192) = v12;
  tm_min = v8->tm_min;
  *(_DWORD *)(v2 + 776) = v14;
  if ( !v13 )
    v14 = 500000000;
  *(_DWORD *)(v2 + 208) = v10;
  if ( !v13 )
    v14 += v10;
  *(_DWORD *)(v2 + 196) = tm_hour;
  if ( !v13 )
    *(_DWORD *)(v2 + 208) = v14;
  *(_DWORD *)(v2 + 200) = tm_min;
  *(_DWORD *)(v2 + 204) = tm_sec;
  if ( !sub_39CF8((_DWORD *)v2) )
    return sub_394A0((__int16 *)a2, 6);
  sub_41F44(a2 + 16, (const char *)(v2 + 56));
  if ( (v22[1] & 1) == 0 || (*(_BYTE *)(v2 + 768) & 2) != 0 )
    *(_BYTE *)(v2 + 40) = 0;
  else
    *(_BYTE *)(v2 + 40) = 3;
  v18 = *(_DWORD *)(v2 + 236);
  v19 = (_DWORD *)(v2 + 224);
  *v19 = *v9;
  v19[1] = v18;
  return (__int16 *)sub_39D44(a2);
}

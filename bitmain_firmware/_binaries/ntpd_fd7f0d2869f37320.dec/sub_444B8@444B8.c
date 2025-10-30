_BYTE *__fastcall sub_444B8(int a1)
{
  int v1; // r7
  int *v2; // r8
  int v3; // r4
  const char *v4; // r5
  _BYTE *result; // r0
  _DWORD *v6; // r4
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  struct tm *v13; // r0
  int tm_min; // r1
  int tm_hour; // r2
  int tm_mday; // r3
  int tm_year; // r1
  int tm_wday; // r2
  int tm_yday; // r3
  int tm_gmtoff; // r1
  const char *tm_zone; // r2
  struct tm *v22; // r0
  struct tm *v23; // r6
  int v24; // r0
  int v25; // r2
  int tm_sec; // r3
  int v27; // r1
  int v28; // [sp+Ch] [bp-4Ch] BYREF
  int v29; // [sp+10h] [bp-48h] BYREF
  int v30; // [sp+14h] [bp-44h] BYREF
  time_t v31; // [sp+18h] [bp-40h] BYREF
  time_t timer; // [sp+1Ch] [bp-3Ch] BYREF
  _BYTE *v33; // [sp+20h] [bp-38h] BYREF
  int v34; // [sp+24h] [bp-34h]
  struct tm tp; // [sp+28h] [bp-30h] BYREF

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(int **)(v1 + 84);
  v4 = (const char *)(v2 + 14);
  v3 = *v2;
  result = sub_3A6D4(a1, (bool *)v2 + 56, 128, &v33);
  if ( result )
  {
    v2[46] = (unsigned __int16)result;
    v8 = *(_DWORD *)(v3 + 8);
    v2[58] = *(_DWORD *)(v3 + 4);
    v2[59] = v8;
    v9 = v34;
    *(_DWORD *)(v3 + 4) = v33;
    *(_DWORD *)(v3 + 8) = v9;
    *(_BYTE *)v3 = 1;
    result = (_BYTE *)sscanf(v4, "%02d:%02d:%02d", &v28, &v29, &v30);
    if ( result == (_BYTE *)&dword_0 + 3 )
    {
      memset(&tp, 0, sizeof(tp));
      v10 = *(_DWORD *)(v3 + 32);
      v11 = *(_DWORD *)(v3 + 36);
      tp.tm_hour = v28;
      tp.tm_mon = v10;
      v12 = *(_DWORD *)(v3 + 28);
      tp.tm_year = v11;
      tp.tm_sec = v30;
      tp.tm_mday = v12;
      tp.tm_min = v29;
      tp.tm_isdst = -1;
      v31 = mktime(&tp);
      time(&timer);
      if ( v31 - timer <= 3600 )
      {
        if ( timer - v31 > 3600 )
          v31 += 86400;
      }
      else
      {
        v31 -= 86400;
      }
      v13 = localtime(&v31);
      if ( !v13 )
        return (_BYTE *)sub_39C88(v1, 3);
      tm_min = v13->tm_min;
      tm_hour = v13->tm_hour;
      tm_mday = v13->tm_mday;
      *(_DWORD *)(v3 + 16) = v13->tm_sec;
      *(_DWORD *)(v3 + 20) = tm_min;
      *(_DWORD *)(v3 + 24) = tm_hour;
      *(_DWORD *)(v3 + 28) = tm_mday;
      tm_year = v13->tm_year;
      tm_wday = v13->tm_wday;
      tm_yday = v13->tm_yday;
      *(_DWORD *)(v3 + 32) = v13->tm_mon;
      *(_DWORD *)(v3 + 36) = tm_year;
      *(_DWORD *)(v3 + 40) = tm_wday;
      *(_DWORD *)(v3 + 44) = tm_yday;
      tm_gmtoff = v13->tm_gmtoff;
      tm_zone = v13->tm_zone;
      *(_DWORD *)(v3 + 48) = v13->tm_isdst;
      *(_DWORD *)(v3 + 52) = tm_gmtoff;
      *(_DWORD *)(v3 + 56) = tm_zone;
      v22 = gmtime(&v31);
      v23 = v22;
      if ( v22 )
      {
        v24 = sub_6FBFC(v22->tm_year + 1900, v22->tm_mon + 1, v22->tm_mday);
        v25 = v23->tm_min;
        tm_sec = v23->tm_sec;
        v2[49] = v23->tm_hour;
        v2[50] = v25;
        v2[51] = tm_sec;
        v2[48] = v24;
        if ( sub_3A4E8(v2) )
        {
          v27 = v2[59];
          v2[56] = v2[58];
          v2[57] = v27;
          sub_3A534(v1);
          result = (_BYTE *)sub_42D0C(v1 + 16, v4);
          *(_BYTE *)(v3 + 12) = v2[49];
        }
        else
        {
          return (_BYTE *)sub_39C88(v1, 6);
        }
      }
      else
      {
        return (_BYTE *)sub_39C88(v1, 3);
      }
    }
    else if ( *(_BYTE *)(v3 + 13) )
    {
      --*(_BYTE *)(v3 + 13);
    }
    else
    {
      return (_BYTE *)sub_39C88(v1, 2);
    }
  }
  else if ( *(_BYTE *)v3 )
  {
    *(_BYTE *)v3 = 0;
  }
  else
  {
    *(_BYTE *)v3 = 1;
    v6 = (_DWORD *)(v3 + 4);
    result = v33;
    v7 = v34;
    *v6 = v33;
    v6[1] = v7;
  }
  return result;
}

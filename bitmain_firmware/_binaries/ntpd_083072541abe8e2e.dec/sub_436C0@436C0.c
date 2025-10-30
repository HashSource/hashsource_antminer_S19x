__int16 *__fastcall sub_436C0(int a1)
{
  int v1; // r7
  unsigned __int8 **v2; // r8
  unsigned __int8 *v3; // r4
  const char *v4; // r5
  __int16 *result; // r0
  int v6; // r3
  bool v7; // zf
  __int16 **v8; // r4
  __int16 *v9; // r1
  unsigned __int8 *v10; // r3
  unsigned __int8 *v11; // r0
  unsigned __int8 *v12; // r1
  __int16 *v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r12
  struct tm *v17; // r0
  int tm_min; // r1
  int tm_hour; // r2
  int tm_mday; // r3
  int tm_year; // r1
  int tm_wday; // r2
  int tm_yday; // r3
  int tm_gmtoff; // r1
  const char *tm_zone; // r2
  struct tm *v26; // r0
  struct tm *v27; // r6
  int v28; // r0
  unsigned __int8 *v29; // r1
  __int64 v30; // r2
  unsigned __int8 *v31; // r1
  int v32; // [sp+Ch] [bp-4Ch] BYREF
  int v33; // [sp+10h] [bp-48h] BYREF
  int v34; // [sp+14h] [bp-44h] BYREF
  time_t v35; // [sp+18h] [bp-40h] BYREF
  time_t timer; // [sp+1Ch] [bp-3Ch] BYREF
  __int16 *v37; // [sp+20h] [bp-38h] BYREF
  __int16 *v38; // [sp+24h] [bp-34h]
  struct tm tp; // [sp+28h] [bp-30h] BYREF

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(unsigned __int8 ***)(v1 + 84);
  v4 = (const char *)(v2 + 14);
  v3 = *v2;
  result = (__int16 *)sub_39EE4(a1, (bool *)v2 + 56, 128, &v37);
  if ( result )
  {
    v10 = (unsigned __int8 *)(unsigned __int16)result;
    v11 = (unsigned __int8 *)*((_DWORD *)v3 + 1);
    v12 = (unsigned __int8 *)*((_DWORD *)v3 + 2);
    v2[46] = v10;
    v2[58] = v11;
    v2[59] = v12;
    v13 = v38;
    *((_DWORD *)v3 + 1) = v37;
    *((_DWORD *)v3 + 2) = v13;
    *v3 = 1;
    result = (__int16 *)sscanf(v4, "%02d:%02d:%02d", &v32, &v33, &v34);
    if ( result == (__int16 *)((char *)&dword_0 + 3) )
    {
      memset(&tp.tm_isdst, 0, 12);
      tp.tm_yday = 0;
      tp.tm_wday = 0;
      v14 = *((_DWORD *)v3 + 7);
      v15 = *((_DWORD *)v3 + 8);
      v16 = *((_DWORD *)v3 + 9);
      tp.tm_isdst = -1;
      tp.tm_mon = v15;
      tp.tm_mday = v14;
      tp.tm_hour = v32;
      tp.tm_min = v33;
      tp.tm_year = v16;
      tp.tm_sec = v34;
      v35 = mktime(&tp);
      time(&timer);
      if ( v35 - timer > 3600 )
      {
        v35 -= 86400;
      }
      else if ( v35 - timer < -3600 )
      {
        v35 += 86400;
      }
      v17 = localtime(&v35);
      if ( !v17 )
        return sub_394A0((__int16 *)v1, 3);
      tm_min = v17->tm_min;
      tm_hour = v17->tm_hour;
      tm_mday = v17->tm_mday;
      *((_DWORD *)v3 + 4) = v17->tm_sec;
      *((_DWORD *)v3 + 5) = tm_min;
      *((_DWORD *)v3 + 6) = tm_hour;
      *((_DWORD *)v3 + 7) = tm_mday;
      tm_year = v17->tm_year;
      tm_wday = v17->tm_wday;
      tm_yday = v17->tm_yday;
      *((_DWORD *)v3 + 8) = v17->tm_mon;
      *((_DWORD *)v3 + 9) = tm_year;
      *((_DWORD *)v3 + 10) = tm_wday;
      *((_DWORD *)v3 + 11) = tm_yday;
      tm_gmtoff = v17->tm_gmtoff;
      tm_zone = v17->tm_zone;
      *((_DWORD *)v3 + 12) = v17->tm_isdst;
      *((_DWORD *)v3 + 13) = tm_gmtoff;
      *((_DWORD *)v3 + 14) = tm_zone;
      v26 = gmtime(&v35);
      v27 = v26;
      if ( v26 )
      {
        v28 = sub_6EC68(v26->tm_year + 1900, v26->tm_mon + 1, v26->tm_mday);
        v29 = (unsigned __int8 *)v27->tm_hour;
        LODWORD(v30) = v27->tm_min;
        HIDWORD(v30) = v27->tm_sec;
        v2[48] = (unsigned __int8 *)v28;
        v2[49] = v29;
        *((_QWORD *)v2 + 25) = v30;
        if ( sub_39CF8(v2) )
        {
          v31 = v2[59];
          v2[56] = v2[58];
          v2[57] = v31;
          sub_39D44(v1);
          result = (__int16 *)sub_41F44(v1 + 16, v4);
          v3[12] = (unsigned __int8)v2[49];
        }
        else
        {
          return sub_394A0((__int16 *)v1, 6);
        }
      }
      else
      {
        return sub_394A0((__int16 *)v1, 3);
      }
    }
    else if ( v3[13] )
    {
      --v3[13];
    }
    else
    {
      return sub_394A0((__int16 *)v1, 2);
    }
  }
  else
  {
    v6 = *v3;
    v7 = v6 == 0;
    if ( *v3 )
      *v3 = 0;
    else
      LOBYTE(v6) = 1;
    if ( v7 )
    {
      *v3 = v6;
      v8 = (__int16 **)(v3 + 4);
      result = v37;
      v9 = v38;
      *v8 = v37;
      v8[1] = v9;
    }
  }
  return result;
}

__int16 *__fastcall sub_5D6B4(int a1)
{
  int v1; // r7
  unsigned __int8 **v2; // r8
  unsigned __int8 *v3; // r4
  const char *v4; // r5
  __int16 *result; // r0
  __int16 *v6; // r3
  int v7; // r2
  __int16 **v8; // r4
  __int16 *v9; // r1
  unsigned __int8 *v10; // r0
  unsigned __int8 *v11; // r1
  __int16 *v12; // r1
  int v13; // r3
  struct tm *v14; // r0
  int v15; // r6
  int v16; // lr
  struct tm *v17; // r0
  struct tm *v18; // r6
  int v19; // r0
  unsigned __int8 *tm_hour; // r1
  __int64 v21; // r2
  unsigned __int8 *v22; // r1
  int v23; // [sp+8h] [bp-4Ch] BYREF
  int v24; // [sp+Ch] [bp-48h] BYREF
  int v25; // [sp+10h] [bp-44h] BYREF
  time_t v26; // [sp+14h] [bp-40h] BYREF
  __int16 *v27; // [sp+18h] [bp-3Ch] BYREF
  __int16 *v28; // [sp+1Ch] [bp-38h]
  _DWORD s[11]; // [sp+20h] [bp-34h] BYREF

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(unsigned __int8 ***)(v1 + 84);
  v4 = (const char *)(v2 + 14);
  v3 = *v2;
  result = (__int16 *)sub_39EE4(a1, (bool *)v2 + 56, 128, &v27);
  v6 = result;
  if ( result )
  {
    v10 = (unsigned __int8 *)*((_DWORD *)v3 + 1);
    v11 = (unsigned __int8 *)*((_DWORD *)v3 + 2);
    v2[46] = (unsigned __int8 *)v6;
    v2[58] = v10;
    v2[59] = v11;
    v12 = v28;
    *((_DWORD *)v3 + 1) = v27;
    *((_DWORD *)v3 + 2) = v12;
    *v3 = 1;
    result = (__int16 *)sscanf(v4, "Y %d/%d/%d", v3 + 16, v3 + 24, v3 + 20);
    if ( result )
    {
      v13 = *((_DWORD *)v3 + 4);
      if ( v13 <= 68 )
        v13 += 100;
      *((_DWORD *)v3 + 4) = v13;
    }
    else
    {
      result = (__int16 *)sscanf(v4, "Z %02d:%02d:%02d", &v23, &v24, &v25);
      if ( result == (__int16 *)((char *)&dword_0 + 3) )
      {
        v14 = (struct tm *)memset(s, 0, sizeof(s));
        v15 = *((_DWORD *)v3 + 4);
        v16 = *((_DWORD *)v3 + 5);
        s[4] = *((_DWORD *)v3 + 6) - 1;
        s[5] = v15;
        s[3] = v16;
        s[2] = v23;
        s[1] = v24;
        s[0] = v25;
        s[8] = -1;
        v26 = mktime(v14);
        v17 = gmtime(&v26);
        v18 = v17;
        if ( v17 )
        {
          v19 = sub_6EC68(v17->tm_year + 1900, v17->tm_mon + 1, v17->tm_mday);
          tm_hour = (unsigned __int8 *)v18->tm_hour;
          LODWORD(v21) = v18->tm_min;
          HIDWORD(v21) = v18->tm_sec;
          v2[48] = (unsigned __int8 *)v19;
          v2[49] = tm_hour;
          *((_QWORD *)v2 + 25) = v21;
          if ( sub_39CF8(v2) )
          {
            v22 = v2[59];
            v2[56] = v2[58];
            v2[57] = v22;
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
    }
  }
  else
  {
    v7 = *v3;
    if ( *v3 )
      *v3 = 0;
    else
      LOBYTE(v6) = 1;
    if ( !v7 )
    {
      *v3 = (unsigned __int8)v6;
      v8 = (__int16 **)(v3 + 4);
      result = v27;
      v9 = v28;
      *v8 = v27;
      v8[1] = v9;
    }
  }
  return result;
}

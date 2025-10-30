_BYTE *__fastcall sub_5E434(int a1)
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
  int v10; // r3
  int v11; // r12
  int v12; // r1
  struct tm *v13; // r0
  struct tm *v14; // r6
  int v15; // r0
  int tm_min; // r2
  int tm_sec; // r3
  int v18; // r1
  int v19; // [sp+8h] [bp-4Ch] BYREF
  int v20; // [sp+Ch] [bp-48h] BYREF
  int v21; // [sp+10h] [bp-44h] BYREF
  time_t v22; // [sp+14h] [bp-40h] BYREF
  _BYTE *v23; // [sp+18h] [bp-3Ch] BYREF
  int v24; // [sp+1Ch] [bp-38h]
  struct tm tp; // [sp+20h] [bp-34h] BYREF

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(int **)(v1 + 84);
  v4 = (const char *)(v2 + 14);
  v3 = *v2;
  result = sub_3A6D4(a1, (bool *)v2 + 56, 128, &v23);
  if ( result )
  {
    v2[46] = (int)result;
    v8 = *(_DWORD *)(v3 + 8);
    v2[58] = *(_DWORD *)(v3 + 4);
    v2[59] = v8;
    v9 = v24;
    *(_DWORD *)(v3 + 4) = v23;
    *(_DWORD *)(v3 + 8) = v9;
    *(_BYTE *)v3 = 1;
    result = (_BYTE *)sscanf(v4, "Y %d/%d/%d", v3 + 16, v3 + 24, v3 + 20);
    if ( result )
    {
      v10 = *(_DWORD *)(v3 + 16);
      if ( v10 <= 68 )
        v10 += 100;
      *(_DWORD *)(v3 + 16) = v10;
    }
    else
    {
      result = (_BYTE *)sscanf(v4, "Z %02d:%02d:%02d", &v19, &v20, &v21);
      if ( result == (_BYTE *)&dword_0 + 3 )
      {
        memset(&tp, 0, sizeof(tp));
        v11 = *(_DWORD *)(v3 + 16);
        v12 = *(_DWORD *)(v3 + 20);
        tp.tm_mon = *(_DWORD *)(v3 + 24) - 1;
        tp.tm_mday = v12;
        tp.tm_hour = v19;
        tp.tm_year = v11;
        tp.tm_min = v20;
        tp.tm_isdst = -1;
        tp.tm_sec = v21;
        v22 = mktime(&tp);
        v13 = gmtime(&v22);
        v14 = v13;
        if ( v13 )
        {
          v15 = sub_6FBFC(v13->tm_year + 1900, v13->tm_mon + 1, v13->tm_mday);
          tm_min = v14->tm_min;
          tm_sec = v14->tm_sec;
          v2[49] = v14->tm_hour;
          v2[50] = tm_min;
          v2[51] = tm_sec;
          v2[48] = v15;
          if ( sub_3A4E8(v2) )
          {
            v18 = v2[59];
            v2[56] = v2[58];
            v2[57] = v18;
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
    result = v23;
    v7 = v24;
    *v6 = v23;
    v6[1] = v7;
  }
  return result;
}

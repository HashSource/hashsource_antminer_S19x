struct tm *__fastcall sub_6A7F4(__int64 *a1, int a2)
{
  __int64 v3; // r2
  int v4; // r1
  bool v5; // zf
  int v6; // r10
  bool v7; // zf
  bool v8; // zf
  struct tm *result; // r0
  int tm_year; // r2
  int v11; // r10
  time_t v12; // [sp+0h] [bp-Ch] BYREF

  v3 = *a1;
  v4 = *(int *)a1 >> 31;
  v12 = *(_DWORD *)a1;
  v5 = HIDWORD(v3) == v4;
  if ( HIDWORD(v3) == v4 )
    v5 = 1;
  if ( !v5 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v3 >= 0 )
      {
        if ( ++v6 > 3 )
          return 0;
        v3 -= 883612800;
        v7 = HIDWORD(v3) == (int)v3 >> 31;
        if ( HIDWORD(v3) == (int)v3 >> 31 )
          v7 = 1;
        if ( v7 )
          goto LABEL_15;
      }
      else
      {
        if ( --v6 < -3 )
          return 0;
        v3 += 883612800;
        v8 = HIDWORD(v3) == (int)v3 >> 31;
        if ( HIDWORD(v3) == (int)v3 >> 31 )
          v8 = 1;
        if ( v8 )
        {
LABEL_15:
          v12 = v3;
          goto LABEL_16;
        }
      }
    }
  }
  v6 = 0;
LABEL_16:
  if ( a2 )
  {
    while ( 1 )
    {
      result = localtime(&v12);
      if ( result )
        break;
LABEL_18:
      if ( v12 < 0 )
      {
        if ( --v6 < -3 )
          return 0;
        v12 += 883612800;
        goto LABEL_16;
      }
      if ( v12 <= 883612799 )
        return 0;
      if ( ++v6 > 3 )
        return 0;
      v12 -= 883612800;
      if ( !a2 )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    result = gmtime(&v12);
    if ( !result )
      goto LABEL_18;
  }
  if ( v6 )
  {
    tm_year = result->tm_year;
    v11 = 28 * v6;
    result->tm_year = v11 + tm_year;
    if ( (unsigned int)(v11 + tm_year - 1) > 0xC6 )
      return 0;
  }
  return result;
}

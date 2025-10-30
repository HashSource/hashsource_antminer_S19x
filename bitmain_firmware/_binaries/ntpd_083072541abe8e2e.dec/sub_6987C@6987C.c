struct tm *__fastcall sub_6987C(__int64 *a1, int a2)
{
  __int64 v3; // r2
  int v4; // r1
  bool v5; // zf
  int v6; // r4
  int v7; // r1
  bool v8; // zf
  int v9; // r1
  bool v10; // zf
  struct tm *(**v11)(const time_t *); // r5
  struct tm *result; // r0
  int v13; // r4
  time_t v14; // [sp+0h] [bp-Ch] BYREF

  v3 = *a1;
  v4 = *(int *)a1 >> 31;
  v14 = *(_DWORD *)a1;
  v5 = HIDWORD(v3) == v4;
  if ( HIDWORD(v3) == v4 )
    v5 = 1;
  if ( v5 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 0;
    do
    {
      while ( v3 >= 0 )
      {
        if ( ++v6 > 3 )
          return 0;
        v7 = ((int)v3 - 883612800) >> 31;
        v3 -= 883612800;
        v8 = v7 == HIDWORD(v3);
        if ( v7 == HIDWORD(v3) )
          v8 = 1;
        if ( v8 )
          goto LABEL_15;
      }
      if ( --v6 < -3 )
        return 0;
      v9 = ((int)v3 + 883612800) >> 31;
      v3 += 883612800;
      v10 = v9 == HIDWORD(v3);
      if ( v9 == HIDWORD(v3) )
        v10 = 1;
    }
    while ( !v10 );
LABEL_15:
    v14 = v3;
  }
  v11 = &localtime;
  if ( !a2 )
    v11 = &gmtime;
  while ( 1 )
  {
    result = ((struct tm *(__fastcall *)(const time_t *))v11)(&v14);
    if ( result )
      break;
    while ( v14 >= 0 )
    {
      if ( v14 <= 883612799 )
        return 0;
      if ( ++v6 > 3 )
        return 0;
      v14 -= 883612800;
      result = ((struct tm *(__fastcall *)(const time_t *))v11)(&v14);
      if ( result )
        goto LABEL_23;
    }
    if ( --v6 < -3 )
      return 0;
    v14 += 883612800;
  }
LABEL_23:
  if ( v6 )
  {
    v13 = result->tm_year + 28 * v6;
    result->tm_year = v13;
    if ( (unsigned int)(v13 - 1) > 0xC6 )
      return 0;
  }
  return result;
}

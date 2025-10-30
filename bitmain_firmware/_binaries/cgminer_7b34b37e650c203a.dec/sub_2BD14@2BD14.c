int sub_2BD14()
{
  struct tm *v0; // r0
  int v1; // r12
  int v2; // r7
  int tm_min; // r6
  int tm_hour; // r4
  int v7; // r12
  _BOOL4 v8; // r7
  _BOOL4 v9; // r1
  _BOOL4 v10; // r5
  _BOOL4 v11; // r2
  time_t tv_sec; // [sp+4h] [bp-10h] BYREF
  struct timeval v13; // [sp+8h] [bp-Ch] BYREF

  sub_239A4(&v13);
  tv_sec = v13.tv_sec;
  v0 = localtime(&tv_sec);
  v1 = (unsigned __int8)byte_7339C;
  if ( byte_7339C )
  {
    v2 = (unsigned __int8)byte_732E4;
    tm_min = v0->tm_min;
    tm_hour = v0->tm_hour;
    if ( byte_732E4 )
    {
      if ( dword_732F0 > dword_733A8 || (dword_732EC > dword_733A4 ? (v9 = dword_732F0 == dword_733A8) : (v9 = 0), v9) )
      {
        if ( dword_732F0 > tm_hour || (dword_732EC > tm_min ? (v2 = dword_732F0 == tm_hour) : (v2 = 0), v2) )
        {
          if ( dword_733A8 <= tm_hour )
          {
            v11 = dword_733A4 > tm_min && dword_733A8 == tm_hour;
            return !v11;
          }
          else
          {
            return 0;
          }
        }
      }
      else if ( dword_733A8 > tm_hour || (dword_733A4 > tm_min ? (v10 = dword_733A8 == tm_hour) : (v10 = 0), v10) )
      {
        if ( dword_732F0 <= tm_hour )
          return dword_732EC > tm_min && dword_732F0 == tm_hour;
      }
    }
    else if ( dword_733A8 <= tm_hour && (dword_733A4 <= tm_min || dword_733A8 != tm_hour) )
    {
      byte_7339C = byte_732E4;
      return v1;
    }
    return v2;
  }
  v7 = v0->tm_hour;
  if ( v7 < dword_732F0 )
    return 1;
  v8 = v0->tm_min < dword_732EC;
  if ( v7 != dword_732F0 )
    return 0;
  return v8;
}

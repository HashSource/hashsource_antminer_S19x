const char *__fastcall sub_28D00C(const char *result)
{
  const char *v1; // r5
  int v2; // r7
  const char *v3; // r4
  int v4; // r4
  int v5; // r5

  if ( (const char *)dword_48AE2C != result && dword_49014C >= (int)result )
  {
    v1 = &result[-dword_48AE2C];
    v2 = (int)result;
    if ( (int)&result[-dword_48AE2C] <= 0 )
    {
      result = (const char *)dword_490138;
      if ( dword_490138 && *(_BYTE *)dword_490138 )
      {
        v4 = -(int)v1;
        v5 = 0;
        while ( 1 )
        {
          ++v5;
          result = (const char *)tputs(result, 1, (int (*)(int))sub_293B80);
          if ( v5 == v4 )
            break;
          result = (const char *)dword_490138;
        }
      }
    }
    else
    {
      v3 = 0;
      do
      {
        ++v3;
        IO_putc(10, (_IO_FILE *)dword_48AAB0);
      }
      while ( v1 != v3 );
      result = (const char *)tputs((const char *)dword_490140, 1, (int (*)(int))sub_293B80);
      dword_48AE04 = 0;
    }
    dword_48AE2C = v2;
  }
  return result;
}

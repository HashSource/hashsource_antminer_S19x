int sub_2A8CC8()
{
  int result; // r0
  __int64 v1; // [sp+0h] [bp-10h] BYREF

  result = dword_48BBE0;
  if ( !dword_48BBE0 )
  {
    if ( getrlimit64(7, &v1) || v1 == -1 )
      result = sysconf(4) / 8;
    else
      result = v1 >> 3;
    if ( result < 10 )
      result = 10;
    dword_48BBE0 = result;
  }
  return result;
}

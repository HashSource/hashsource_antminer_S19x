int __fastcall sub_964A8(int (__fastcall *a1)(_DWORD, int))
{
  DIR *v2; // r0
  DIR *v3; // r5
  int v4; // r4
  int *v5; // r6
  int v6; // r10
  int result; // r0
  __int64 v8; // r0
  int v9; // r5
  int v10; // r4
  bool v11; // zf
  int v12; // r1
  int v13; // [sp+0h] [bp-78h] BYREF
  __int64 v14; // [sp+8h] [bp-70h]
  char *endptr[26]; // [sp+10h] [bp-68h] BYREF

  v2 = opendir("/proc/self/fd");
  v3 = v2;
  if ( v2 )
  {
    v4 = readdir64(v2);
    if ( v4 )
    {
      v5 = _errno_location();
      do
      {
        *v5 = 0;
        v6 = strtol((const char *)(v4 + 19), endptr, 10);
        if ( !*endptr[0] && !*v5 && v6 != dirfd(v3) && a1(0, v6) )
          break;
        v4 = readdir64(v3);
      }
      while ( v4 );
    }
    closedir(v3);
    return 0;
  }
  else
  {
    if ( getrlimit64(7, &v13) || (v8 = v14, v14 == -1) )
      LODWORD(v8) = sysconf(4);
    v9 = v8;
    if ( (int)v8 <= 0 )
    {
      return 0;
    }
    else
    {
      v10 = 0;
      while ( 1 )
      {
        v11 = _fxstat64(3, v10, endptr) == -1;
        v12 = v10++;
        if ( !v11 )
        {
          result = a1(0, v12);
          if ( result )
            break;
        }
        if ( v9 == v10 )
          return 0;
      }
    }
  }
  return result;
}

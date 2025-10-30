int __fastcall sub_4BB58(int a1, int (__fastcall *a2)(_DWORD, _DWORD, _DWORD))
{
  int result; // r0
  DIR *v5; // r4
  int i; // r9
  int v7; // r8
  unsigned int v8; // r2
  int v9; // r3
  _DWORD v10[3]; // [sp+4h] [bp-90h] BYREF
  char name[132]; // [sp+10h] [bp-84h] BYREF

  result = sub_4B63C(a1, "Tgid", 1);
  if ( a1 == result )
  {
    sub_93170(name, 128, "/proc/%ld/task", a1);
    v5 = opendir(name);
    if ( v5 )
    {
      for ( i = 0; ; i = 1 )
      {
        while ( 1 )
        {
          v7 = 0;
          while ( 1 )
          {
            v9 = readdir64(v5);
            if ( !v9 )
              break;
            v8 = strtoul((const char *)(v9 + 19), 0, 10);
            if ( v8 )
            {
              sub_98F48(v10, a1, v8, 0);
              if ( a2(v10[0], v10[1], v10[2]) )
                v7 = 1;
            }
          }
          if ( !v7 )
            break;
          i = 0;
          rewinddir(v5);
        }
        rewinddir(v5);
        if ( i == 1 )
          break;
      }
      return closedir(v5);
    }
    else
    {
      return sub_946B0("Could not open /proc/%ld/task.", a1);
    }
  }
  return result;
}

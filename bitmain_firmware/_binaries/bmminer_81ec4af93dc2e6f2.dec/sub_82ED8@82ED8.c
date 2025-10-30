int __fastcall sub_82ED8(int a1, int a2)
{
  const char *v3; // r4
  int *v4; // r0
  int *v5; // r0
  int *v6; // r0
  int *v7; // r0
  int fd; // [sp+14h] [bp-18h]
  int i; // [sp+1Ch] [bp-10h]

  *(_DWORD *)(*(_DWORD *)(a2 + 16) + 4) = **(_DWORD **)(a2 + 16);
  for ( i = 0; i < *(_DWORD *)(*(_DWORD *)(a1 + 5172) + 4); ++i )
  {
    if ( (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)(**(_DWORD **)(a1 + 5172) + 4 * i) + 9260))(
           *(_DWORD *)(**(_DWORD **)(a1 + 5172) + 4 * i),
           a2) )
    {
      sub_89984(2, "src/rule.c", 245, "zlog_spec_gen_path fail");
      return -1;
    }
  }
  **(_BYTE **)(*(_DWORD *)(a2 + 16) + 4) = 0;
  if ( sub_7F9F4(*(_DWORD *)(a1 + 6264), a2) )
  {
    sub_89984(2, "src/rule.c", 248, "zlog_format_output fail");
    return -1;
  }
  else
  {
    fd = open64(**(_DWORD **)(a2 + 16), *(_DWORD *)(a1 + 4140) | 0x441, *(_DWORD *)(a1 + 4136));
    if ( fd >= 0 )
    {
      if ( write(fd, **(const void ***)(a2 + 28), *(_DWORD *)(*(_DWORD *)(a2 + 28) + 4) - **(_DWORD **)(a2 + 28)) >= 0 )
      {
        if ( *(_DWORD *)(a1 + 6248) )
        {
          if ( ++*(_DWORD *)(a1 + 6252) >= *(_DWORD *)(a1 + 6248) )
          {
            *(_DWORD *)(a1 + 6252) = 0;
            if ( fsync(fd) )
            {
              v6 = _errno_location();
              sub_89984(2, "src/rule.c", 267, "fsync[%d] fail, errno[%d]", fd, *v6);
            }
          }
        }
        if ( close(fd) >= 0 )
        {
          return 0;
        }
        else
        {
          v7 = _errno_location();
          sub_89984(2, "src/rule.c", 271, "close fail, maybe cause by write, errno[%d]", *v7);
          return -1;
        }
      }
      else
      {
        v5 = _errno_location();
        sub_89984(2, "src/rule.c", 260, "write fail, errno[%d]", *v5);
        close(fd);
        return -1;
      }
    }
    else
    {
      v3 = **(const char ***)(a2 + 16);
      v4 = _errno_location();
      sub_89984(2, "src/rule.c", 255, "open file[%s] fail, errno[%d]", v3, *v4);
      return -1;
    }
  }
}

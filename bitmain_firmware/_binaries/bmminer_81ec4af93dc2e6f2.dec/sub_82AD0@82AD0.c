int __fastcall sub_82AD0(int a1, int a2)
{
  int *v3; // r0
  int *v4; // r0
  int *v5; // r0
  int *v6; // r0
  int *v7; // r0
  pthread_mutex_t *v8; // r5
  int v9; // r0
  _BYTE v13[48]; // [sp+10h] [bp-7Ch] BYREF
  __int64 v14; // [sp+40h] [bp-4Ch]
  size_t n; // [sp+78h] [bp-14h]
  int fd; // [sp+7Ch] [bp-10h]

  if ( sub_7F9F4(*(_DWORD *)(a1 + 6264), a2) )
  {
    sub_89984(2, "src/rule.c", 167, "zlog_format_gen_msg fail");
    return -1;
  }
  else
  {
    fd = open64(a1 + 4144, *(_DWORD *)(a1 + 4140) | 0x441, *(_DWORD *)(a1 + 4136));
    if ( fd >= 0 )
    {
      n = *(_DWORD *)(*(_DWORD *)(a2 + 28) + 4) - **(_DWORD **)(a2 + 28);
      if ( write(fd, **(const void ***)(a2 + 28), n) >= 0 )
      {
        if ( *(_DWORD *)(a1 + 6248) )
        {
          if ( ++*(_DWORD *)(a1 + 6252) >= *(_DWORD *)(a1 + 6248) )
          {
            *(_DWORD *)(a1 + 6252) = 0;
            if ( fsync(fd) )
            {
              v5 = _errno_location();
              sub_89984(2, "src/rule.c", 187, "fsync[%d] fail, errno[%d]", fd, *v5);
            }
          }
        }
        if ( close(fd) >= 0 )
        {
          if ( n <= *(_DWORD *)(a1 + 5200) )
          {
            if ( sub_8CCD8(a1 + 4144, v13) )
            {
              v7 = _errno_location();
              sub_89984(
                1,
                "src/rule.c",
                202,
                "stat [%s] fail, errno[%d], maybe in rotating",
                (const char *)(a1 + 4144),
                *v7);
              return 0;
            }
            else if ( v14 + n >= *(int *)(a1 + 5200) )
            {
              v8 = *(pthread_mutex_t **)(dword_9C8B08 + 5160);
              v9 = sub_82998(a1, a2);
              if ( sub_821D4(v8, (const char *)(a1 + 4144), n, v9, *(_DWORD *)(a1 + 5200), *(_DWORD *)(a1 + 5204)) )
              {
                sub_89984(2, "src/rule.c", 214, "zlog_rotater_rotate fail");
                return -1;
              }
              else
              {
                return 0;
              }
            }
            else
            {
              return 0;
            }
          }
          else
          {
            sub_89984(
              0,
              "src/rule.c",
              197,
              "one msg's len[%ld] > archive_max_size[%ld], no rotate",
              n,
              *(_DWORD *)(a1 + 5200));
            return 0;
          }
        }
        else
        {
          v6 = _errno_location();
          sub_89984(2, "src/rule.c", 191, "close fail, maybe cause by write, errno[%d]", *v6);
          return -1;
        }
      }
      else
      {
        v4 = _errno_location();
        sub_89984(2, "src/rule.c", 180, "write fail, errno[%d]", *v4);
        close(fd);
        return -1;
      }
    }
    else
    {
      v3 = _errno_location();
      sub_89984(2, "src/rule.c", 174, "open file[%s] fail, errno[%d]", (const char *)(a1 + 4144), *v3);
      return -1;
    }
  }
}

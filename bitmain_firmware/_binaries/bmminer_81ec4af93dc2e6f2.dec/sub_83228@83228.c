int __fastcall sub_83228(int a1, int a2)
{
  const char *v3; // r4
  int *v4; // r0
  int *v5; // r0
  int *v6; // r0
  int *v7; // r0
  int *v8; // r0
  pthread_mutex_t *v9; // r4
  int v10; // r0
  _BYTE v14[48]; // [sp+10h] [bp-8Ch] BYREF
  __int64 v15; // [sp+40h] [bp-5Ch]
  size_t n; // [sp+7Ch] [bp-20h]
  int fd; // [sp+80h] [bp-1Ch]
  const char *v18; // [sp+84h] [bp-18h]
  int v19; // [sp+88h] [bp-14h]
  int v20; // [sp+8Ch] [bp-10h]

  *(_DWORD *)(*(_DWORD *)(a2 + 16) + 4) = **(_DWORD **)(a2 + 16);
  v20 = 0;
  v19 = ***(_DWORD ***)(a1 + 5172);
  while ( v20 < *(_DWORD *)(*(_DWORD *)(a1 + 5172) + 4) )
  {
    v19 = *(_DWORD *)(**(_DWORD **)(a1 + 5172) + 4 * v20);
    if ( (*(int (__fastcall **)(int, int))(v19 + 9260))(v19, a2) )
    {
      sub_89984(2, "src/rule.c", 285, "zlog_spec_gen_path fail");
      return -1;
    }
    ++v20;
  }
  **(_BYTE **)(*(_DWORD *)(a2 + 16) + 4) = 0;
  if ( sub_7F9F4(*(_DWORD *)(a1 + 6264), a2) )
  {
    sub_89984(2, "src/rule.c", 288, "zlog_format_output fail");
    return -1;
  }
  else
  {
    v18 = **(const char ***)(a2 + 16);
    fd = open64(v18, *(_DWORD *)(a1 + 4140) | 0x441, *(_DWORD *)(a1 + 4136));
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
              v6 = _errno_location();
              sub_89984(2, "src/rule.c", 308, "fsync[%d] fail, errno[%d]", fd, *v6);
            }
          }
        }
        if ( close(fd) >= 0 )
        {
          if ( n <= *(_DWORD *)(a1 + 5200) )
          {
            if ( sub_8CCD8(v18, v14) )
            {
              v8 = _errno_location();
              sub_89984(1, "src/rule.c", 323, "stat [%s] fail, errno[%d], maybe in rotating", v18, *v8);
              return 0;
            }
            else if ( v15 + n >= *(int *)(a1 + 5200) )
            {
              v9 = *(pthread_mutex_t **)(dword_9C8B08 + 5160);
              v10 = sub_82998(a1, a2);
              if ( sub_821D4(v9, v18, n, v10, *(_DWORD *)(a1 + 5200), *(_DWORD *)(a1 + 5204)) )
              {
                sub_89984(2, "src/rule.c", 335, "zlog_rotater_rotate fail");
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
              318,
              "one msg's len[%ld] > archive_max_size[%ld], no rotate",
              n,
              *(_DWORD *)(a1 + 5200));
            return 0;
          }
        }
        else
        {
          v7 = _errno_location();
          sub_89984(2, "src/rule.c", 312, "write fail, maybe cause by write, errno[%d]", *v7);
          return -1;
        }
      }
      else
      {
        v5 = _errno_location();
        sub_89984(2, "src/rule.c", 301, "write fail, errno[%d]", *v5);
        close(fd);
        return -1;
      }
    }
    else
    {
      v3 = **(const char ***)(a2 + 16);
      v4 = _errno_location();
      sub_89984(2, "src/rule.c", 295, "open file[%s] fail, errno[%d]", v3, *v4);
      return -1;
    }
  }
}

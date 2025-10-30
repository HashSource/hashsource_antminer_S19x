int __fastcall sub_84D84(int a1)
{
  int *v1; // r0
  int *v3; // r0
  int v6; // [sp+10h] [bp-14h] BYREF
  size_t n; // [sp+14h] [bp-10h]
  char *v8; // [sp+18h] [bp-Ch]
  int v9; // [sp+1Ch] [bp-8h]

  if ( **(_BYTE **)(a1 + 36) )
  {
    v8 = strchr(*(const char **)(a1 + 36), 35);
    if ( v8 )
    {
      v6 = 0;
      _isoc99_sscanf(v8, "#%d%n", a1 + 1076, &v6);
      if ( !v6 )
        v6 = 1;
      if ( v8[v6] == 114 )
      {
        *(_DWORD *)(a1 + 1080) = 1;
      }
      else
      {
        if ( v8[v6] != 115 )
        {
          sub_8CD10(2, "src/rotater.c", 386, "#r or #s not found");
          return -1;
        }
        *(_DWORD *)(a1 + 1080) = 2;
      }
      n = (size_t)&v8[-*(_DWORD *)(a1 + 36)];
      if ( n <= 0x400 )
      {
        memcpy((void *)(a1 + 40), *(const void **)(a1 + 36), n);
        v9 = snprintf((char *)(a1 + n + 40), 1025 - n, "*%s", &v8[v6 + 1]);
        if ( v9 >= 0 && v9 <= 1025 - n )
        {
          *(_DWORD *)(a1 + 1068) = n;
          *(_DWORD *)(a1 + 1072) = n + 1;
          return 0;
        }
        else
        {
          v3 = _errno_location();
          sub_8CD10(2, "src/rotater.c", 401, "nwirte[%d], overflow or errno[%d]", v9, *v3);
          return -1;
        }
      }
      else
      {
        sub_8CD10(2, "src/rotater.c", 393, "sizeof glob_path not enough,len[%ld]", n);
        return -1;
      }
    }
    else
    {
      sub_8CD10(2, "src/rotater.c", 374, "no # in archive_path[%s]", *(const char **)(a1 + 36));
      return -1;
    }
  }
  else
  {
    v9 = snprintf((char *)(a1 + 40), 0x401u, "%s.*", *(const char **)(a1 + 32));
    if ( (unsigned int)v9 < 0x402 )
    {
      *(_DWORD *)(a1 + 1080) = 1;
      *(_DWORD *)(a1 + 1076) = 0;
      *(_DWORD *)(a1 + 1068) = strlen(*(const char **)(a1 + 32)) + 1;
      *(_DWORD *)(a1 + 1072) = strlen(*(const char **)(a1 + 32)) + 2;
      return 0;
    }
    else
    {
      v1 = _errno_location();
      sub_8CD10(2, "src/rotater.c", 360, "nwirte[%d], overflow or errno[%d]", v9, *v1);
      return -1;
    }
  }
}

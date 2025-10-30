int __fastcall sub_3B4A4(int a1)
{
  int v2; // r4
  int v4; // r3
  int v5; // r3
  int v6; // r3
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v8[4096]; // [sp+818h] [bp-1000h] BYREF

  if ( (unsigned int)snprintf(v8, 0x1000u, "/usr/bin/checksize.sh %d %s", 0, *(const char **)(a1 + 8)) < 0x1000 )
  {
    v4 = sub_3B200(v8);
    if ( v4 && (unsigned int)off_AFC24 > 4 )
    {
      snprintf(s, 0x800u, "my_system returned failed %d on LOGCHECKSIZE\n", v4);
      sub_3AF5C(4, s, 0, v5);
    }
    if ( (unsigned int)snprintf(
                         v8,
                         0x1000u,
                         "/usr/bin/rotate.sh %d %d %s %s %s %s %s",
                         0,
                         *(_DWORD *)a1,
                         *(const char **)(a1 + 8),
                         *(const char **)(a1 + 4),
                         (const char *)(a1 + 42),
                         (const char *)(a1 + 72),
                         *(const char **)(a1 + 92)) < 0x1000 )
    {
      v2 = sub_3B200(v8);
      if ( v2 )
      {
        if ( (unsigned int)off_AFC24 > 4 )
        {
          snprintf(s, 0x800u, "my_system returned failed %d on LOGROTATE\n", v2);
          sub_3AF5C(4, s, 0, v6);
        }
      }
      return v2;
    }
    if ( (unsigned int)off_AFC24 > 3 )
    {
      v2 = -1;
      strcpy(s, "too large command LOGROTATE\n");
      sub_3AF5C(3, s, 0, *(int *)"");
      return v2;
    }
    return -1;
  }
  if ( (unsigned int)off_AFC24 <= 3 )
    return -1;
  strcpy(s, "too large command LOGCHECKSIZE\n");
  sub_3AF5C(3, s, 0, *(int *)"ZE\n");
  return -1;
}

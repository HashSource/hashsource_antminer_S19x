int __fastcall sub_3BC54(int a1)
{
  int result; // r0
  int v3; // r3
  int v4; // r3
  int v5; // r4
  int v6; // r3
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v8[4096]; // [sp+818h] [bp-1000h] BYREF

  if ( (unsigned int)snprintf(v8, 0x1000u, "/usr/bin/checksize.sh %d %s", 0, *(const char **)(a1 + 8)) >= 0x1000 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "too large command LOGCHECKSIZE\n");
      sub_3B6AC(3, s, 0, *(int *)"ZE\n");
    }
    return -1;
  }
  v3 = sub_3B950(v8);
  if ( v3 && (unsigned int)dword_B308C > 4 )
  {
    snprintf(s, 0x800u, "my_system returned failed %d on LOGCHECKSIZE\n", v3);
    sub_3B6AC(4, s, 0, v4);
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
    result = sub_3B950(v8);
    v5 = result;
    if ( result && (unsigned int)dword_B308C > 4 )
    {
      snprintf(s, 0x800u, "my_system returned failed %d on LOGROTATE\n", result);
      sub_3B6AC(4, s, 0, v6);
      return v5;
    }
  }
  else
  {
    if ( (unsigned int)dword_B308C <= 3 )
      return -1;
    strcpy(s, "too large command LOGROTATE\n");
    sub_3B6AC(3, s, 0, *(int *)"");
    return -1;
  }
  return result;
}

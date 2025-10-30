int __fastcall sub_3BAF8(int a1, const char *a2, const char *a3, const char *a4)
{
  int result; // r0
  int v5; // r4
  int v6; // r3
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  char v8[4100]; // [sp+818h] [bp-1004h] BYREF

  if ( (unsigned int)snprintf(
                       v8,
                       0x1000u,
                       "/usr/bin/updatename.sh %s %s %s %s %s %s",
                       *(const char **)(a1 + 8),
                       (const char *)(a1 + 42),
                       (const char *)(a1 + 72),
                       a2,
                       a3,
                       a4) < 0x1000 )
  {
    if ( (unsigned int)dword_B308C > 4 )
    {
      strcpy(s, "_log_update_name\n");
      sub_3B6AC(4, s, 0, *(int *)"name\n");
    }
    result = sub_3B950(v8);
    v5 = result;
    if ( result && (unsigned int)dword_B308C > 4 )
    {
      snprintf(s, 0x800u, "my_system returned failed %d on LOGUPDATENAME\n", result);
      sub_3B6AC(4, s, 0, v6);
      return v5;
    }
  }
  else
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "too large command LOGUPDATENAME\n");
      sub_3B6AC(3, s, 0, *(int *)"AME\n");
    }
    return -1;
  }
  return result;
}

void __fastcall __noreturn sub_3B688(int a1)
{
  unsigned int v2; // r4
  struct tm *v3; // r7
  size_t v4; // r0
  int v5; // r7
  int v6; // r3
  int v7; // r3
  char *dest; // [sp+14h] [bp-1848h]
  time_t timer; // [sp+20h] [bp-183Ch] BYREF
  char s[20]; // [sp+24h] [bp-1838h] BYREF
  char v11[32]; // [sp+38h] [bp-1824h] BYREF
  char v12[2040]; // [sp+58h] [bp-1804h] BYREF
  char v13[4100]; // [sp+858h] [bp-1004h] BYREF

  if ( a1 )
  {
    v2 = 1;
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 92) = "cglog_sync";
    dest = (char *)(a1 + 72);
    while ( 1 )
    {
      do
      {
        ++v2;
        sleep(1u);
      }
      while ( v2 != 30 * (v2 / 0x1E) );
      time(&timer);
      v3 = localtime(&timer);
      strftime(v11, 0xFu, "%Y-%m/%d", v3);
      strftime(s, 0xAu, "%H-%M-%S", v3);
      if ( !strncmp((const char *)(a1 + 42), "1970", 4u) && timer > 31536000 )
      {
        v5 = sub_3B354(a1, "cglog_init", v11, s);
        if ( !(v5 | sub_3B354(a1, "cglog_sync", v11, s)) )
        {
          strncpy((char *)(a1 + 42), v11, 0x1Eu);
          strncpy(dest, s, 0x14u);
          strcpy((char *)(a1 + 12), (const char *)(a1 + 42));
        }
      }
      if ( *(_BYTE *)(a1 + 12) )
      {
        v4 = strlen(v11);
        if ( strncmp((const char *)(a1 + 12), v11, v4) )
        {
          if ( (unsigned int)snprintf(
                               v13,
                               0x1000u,
                               "/usr/bin/symbollink.sh %s %s %s %s %s",
                               *(const char **)(a1 + 8),
                               (const char *)(a1 + 42),
                               dest,
                               "cglog_sync",
                               v11) < 0x1000 )
          {
            v6 = sub_3B200(v13);
            if ( v6 )
            {
              if ( (unsigned int)off_AFC24 > 4 )
              {
                snprintf(v12, 0x800u, "my_system returned failed %d on LOG_SYMBOL_LINK\n", v6);
                sub_3AF5C(4, v12, 0, v7);
              }
            }
            else
            {
              strncpy((char *)(a1 + 12), v11, 0x1Eu);
            }
          }
          else if ( (unsigned int)off_AFC24 > 3 )
          {
            strcpy(v12, "too large command LOG_SYMBOL_LINK\n");
            sub_3AF5C(3, v12, 0, *(unsigned __int16 *)"");
          }
        }
      }
      else
      {
        strcpy((char *)(a1 + 12), (const char *)(a1 + 42));
      }
      sub_3B4A4(a1);
    }
  }
  strcpy(v13, "input arg wrong\n");
  sub_3AF5C(0, v13, 0, *(int *)"ong\n");
  _assert_fail("0", "logging.c", 0x1CEu, "log_thread_routine");
}

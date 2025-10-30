int __fastcall sub_259C0(int a1, int a2)
{
  int v2; // r0
  int v4; // r0
  int v5; // r0
  char v7[256]; // [sp+8h] [bp-A34h] BYREF
  int v8; // [sp+110h] [bp-92Ch]
  int v9; // [sp+114h] [bp-928h]
  char v10[4]; // [sp+118h] [bp-924h] BYREF
  char s[256]; // [sp+918h] [bp-124h] BYREF
  char *v12; // [sp+A18h] [bp-24h] BYREF
  char *v13; // [sp+A1Ch] [bp-20h] BYREF
  void *ptr; // [sp+A20h] [bp-1Ch]
  int v15; // [sp+A24h] [bp-18h]
  char *s2; // [sp+A28h] [bp-14h]
  char *s1; // [sp+A2Ch] [bp-10h]
  char *v18; // [sp+A30h] [bp-Ch]
  char *v19; // [sp+A34h] [bp-8h]

  v9 = a1;
  v8 = a2;
  memset(s, 0, 0xFFu);
  v2 = sub_65E88(v8, 0);
  v19 = (char *)sub_66AE0(v2);
  if ( !v19 )
  {
    v19 = *(char **)(v9 + 600);
LABEL_21:
    v4 = sub_65E88(v8, 1);
    v15 = sub_66FB0(v4);
    if ( v15 )
    {
      v18 = v7;
      sprintf(v7, "%d", v15);
    }
    else
    {
      v5 = sub_65E88(v8, 1);
      v18 = (char *)sub_66AE0(v5);
      if ( !v18 )
        v18 = *(char **)(v9 + 584);
    }
    snprintf(s, 0xFEu, "%s:%s", v19, v18);
    if ( (unsigned __int8)sub_21EF8(s, &v13, &v12) != 1 )
      return 0;
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
    {
      snprintf(v10, 0x800u, "Stratum reconnect requested from pool %d to %s", *(_DWORD *)v9, s);
      sub_1DB6C(4, v10, 0);
    }
    sub_3E12C(v9);
    sub_1F44C((pthread_mutex_t *)(v9 + 704), "util.c", "parse_reconnect", 2452);
    sub_25954(v9);
    ptr = *(void **)(v9 + 600);
    *(_DWORD *)(v9 + 600) = v13;
    *(_DWORD *)(v9 + 576) = *(_DWORD *)(v9 + 600);
    free(ptr);
    ptr = *(void **)(v9 + 584);
    *(_DWORD *)(v9 + 584) = v12;
    free(ptr);
    sub_1F584((pthread_mutex_t *)(v9 + 704), "util.c", "parse_reconnect", 2461);
    return sub_2A490(v9);
  }
  s1 = strchr(*(const char **)(v9 + 600), 46);
  if ( s1 )
  {
    s2 = strchr(v19, 46);
    if ( s2 )
    {
      if ( !strcmp(s1, s2) )
        goto LABEL_21;
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
      {
        snprintf(
          v10,
          0x800u,
          "Denied stratum reconnect request to non-matching domain url '%s'",
          *(const char **)(v9 + 600));
        sub_1DB6C(3, v10, 0);
      }
      return 0;
    }
    else
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
      {
        snprintf(v10, 0x800u, "Denied stratum reconnect request to url without domain '%s'", v19);
        sub_1DB6C(3, v10, 0);
      }
      return 0;
    }
  }
  else
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      snprintf(v10, 0x800u, "Denied stratum reconnect request for pool without domain '%s'", *(const char **)(v9 + 600));
      sub_1DB6C(3, v10, 0);
    }
    return 0;
  }
}

int __fastcall sub_2870C(int a1, int a2)
{
  int v4; // r0
  const char *v5; // r6
  const char *v6; // r7
  char *v7; // r8
  char *v8; // r1
  int v9; // r0
  int v10; // r2
  char *v11; // r5
  int v12; // r3
  void *v13; // r0
  void *v14; // r0
  int v16; // r0
  int *v17; // r0
  int *v18; // r0
  char s[264]; // [sp+10h] [bp-A2Ch] BYREF
  int v20; // [sp+118h] [bp-924h] BYREF
  char *v21; // [sp+11Ch] [bp-920h] BYREF
  char v22[256]; // [sp+120h] [bp-91Ch] BYREF
  char v23[12]; // [sp+220h] [bp-81Ch] BYREF

  memset(v22, 0, 0xFFu);
  v4 = sub_48484(a2, 0);
  v5 = (const char *)sub_48630(v4);
  if ( !v5 )
  {
    v5 = *(const char **)(a1 + 600);
    goto LABEL_6;
  }
  v6 = *(const char **)(a1 + 600);
  v7 = strchr(v6, 46);
  if ( !v7 )
  {
    if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 2 )
      return 0;
    snprintf(v23, 0x800u, "Denied stratum reconnect request for pool without domain '%s'", v6);
    goto LABEL_20;
  }
  v8 = strchr(v5, 46);
  if ( !v8 )
  {
    if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 2 )
      return 0;
    snprintf(v23, 0x800u, "Denied stratum reconnect request to url without domain '%s'", v5);
    goto LABEL_20;
  }
  if ( strcmp(v7, v8) )
  {
    if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 2 )
      return 0;
    snprintf(v23, 0x800u, "Denied stratum reconnect request to non-matching domain url '%s'", v6);
LABEL_20:
    sub_20F58(3, v23, 0);
    return 0;
  }
LABEL_6:
  v9 = sub_48484(a2, 1);
  v10 = sub_4888C(v9);
  if ( v10 )
  {
    v11 = s;
    sprintf(s, "%d", v10);
  }
  else
  {
    v16 = sub_48484(a2, 1);
    v11 = (char *)sub_48630(v16);
    if ( !v11 )
      v11 = *(char **)(a1 + 584);
  }
  snprintf(v22, 0xFEu, "%s:%s", v5, v11);
  if ( !sub_23CD8(v22, &v20, &v21) )
    return 0;
  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
  {
    snprintf(v23, 0x800u, "Stratum reconnect requested from pool %d to %s", *(_DWORD *)a1, v22);
    sub_20F58(4, v23, 0);
  }
  sub_33AB4(a1);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 704)) )
  {
    v17 = _errno_location();
    snprintf(v23, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v17, "util.c", "parse_reconnect", 2370);
    sub_20F58(3, v23, 1);
    sub_3EBA0(1);
  }
  sub_223C0(a1);
  v12 = v20;
  v13 = *(void **)(a1 + 600);
  *(_DWORD *)(a1 + 576) = v20;
  *(_DWORD *)(a1 + 600) = v12;
  free(v13);
  v14 = *(void **)(a1 + 584);
  *(_DWORD *)(a1 + 584) = v21;
  free(v14);
  if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 704)) )
  {
    v18 = _errno_location();
    snprintf(v23, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v18, "util.c", "parse_reconnect", 2379);
    sub_20F58(3, v23, 1);
    sub_3EBA0(1);
  }
  off_67ED8();
  return sub_28690(a1);
}

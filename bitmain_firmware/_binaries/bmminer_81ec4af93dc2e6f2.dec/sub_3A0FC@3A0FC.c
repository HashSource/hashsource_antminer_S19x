_BYTE *__fastcall sub_3A0FC(const char *a1, int a2, int a3, int a4, char a5, const char *a6, const char *a7, int a8)
{
  _BYTE *v12; // r4
  char *v13; // r5
  int v15; // r3
  int v16; // r3
  int v17; // r3
  int v18; // r3
  int *v19; // r0
  int v20; // r3
  int *v21; // r0
  int v22; // r3
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( a3 <= 0 )
  {
    snprintf(
      s,
      0x800u,
      "Invalid new list %s with allocate %d must be > 0 in %s %s():%d",
      a1,
      a3,
      "klist.c",
      "_k_new_list",
      100);
    sub_3AF5C(3, s, 1, v15);
    nullsub_1();
    if ( a4 >= 0 )
      goto LABEL_3;
  }
  else if ( a4 >= 0 )
  {
    goto LABEL_3;
  }
  snprintf(
    s,
    0x800u,
    "Invalid new list %s with limit %d must be >= 0 in %s %s():%d",
    a1,
    a4,
    "klist.c",
    "_k_new_list",
    103);
  sub_3AF5C(3, s, 1, v16);
  nullsub_1();
LABEL_3:
  v12 = calloc(1u, 0x40u);
  if ( !v12 )
  {
    snprintf(s, 0x800u, "Failed to calloc list %s in %s %s():%d", a1, "klist.c", "_k_new_list", 107);
    sub_3AF5C(3, s, 1, v18);
    nullsub_1();
  }
  v12[4] = 0;
  v13 = (char *)calloc(1u, 0x38u);
  *((_DWORD *)v12 + 2) = v13;
  if ( !v13 )
  {
    snprintf(s, 0x800u, "Failed to calloc lock for list %s in %s %s():%d", a1, "klist.c", "_k_new_list", 113);
    sub_3AF5C(3, s, 1, v17);
    nullsub_1();
    v13 = (char *)*((_DWORD *)v12 + 2);
  }
  if ( pthread_mutex_init((pthread_mutex_t *)v13, 0) )
  {
    v21 = _errno_location();
    snprintf(s, 0x800u, "Failed to pthread_mutex_init errno=%d in %s %s():%d", *v21, "klist.c", "_k_new_list", 115);
    sub_3AF5C(3, s, 1, v22);
    nullsub_1();
  }
  if ( pthread_rwlock_init((pthread_rwlock_t *)(v13 + 24), 0) )
  {
    v19 = _errno_location();
    snprintf(s, 0x800u, "Failed to pthread_rwlock_init errno=%d in %s %s():%d", *v19, "klist.c", "_k_new_list", 115);
    sub_3AF5C(3, s, 1, v20);
    nullsub_1();
  }
  *(_DWORD *)v12 = a1;
  *((_DWORD *)v12 + 5) = a2;
  *((_DWORD *)v12 + 9) = a3;
  *((_DWORD *)v12 + 10) = a4;
  v12[44] = a5;
  sub_39D18((const char **)v12, a6, a7, a8);
  return v12;
}

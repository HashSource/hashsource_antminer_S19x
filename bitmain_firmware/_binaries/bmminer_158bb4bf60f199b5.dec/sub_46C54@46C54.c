_BYTE *__fastcall sub_46C54(const char *a1, int a2, int a3, int a4, char a5, const char *a6, const char *a7, int a8)
{
  _BYTE *v12; // r0
  _BYTE *v13; // r4
  pthread_mutex_t *v14; // r0
  pthread_mutex_t *v15; // r5
  int *v17; // r0
  int *v18; // r0
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
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  if ( a4 < 0 )
  {
    snprintf(
      s,
      0x800u,
      "Invalid new list %s with limit %d must be >= 0 in %s %s():%d",
      a1,
      a4,
      "klist.c",
      "_k_new_list",
      103);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  v12 = calloc(1u, 0x40u);
  v13 = v12;
  if ( !v12 )
  {
    snprintf(s, 0x800u, "Failed to calloc list %s in %s %s():%d", a1, "klist.c", "_k_new_list", 107);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  v12[4] = 0;
  v14 = (pthread_mutex_t *)calloc(1u, 0x38u);
  v15 = v14;
  *((_DWORD *)v13 + 2) = v14;
  if ( !v14 )
  {
    snprintf(s, 0x800u, "Failed to calloc lock for list %s in %s %s():%d", a1, "klist.c", "_k_new_list", 113);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  if ( pthread_mutex_init(v14, 0) )
  {
    v18 = _errno_location();
    snprintf(s, 0x800u, "Failed to pthread_mutex_init errno=%d in %s %s():%d", *v18, "klist.c", "_k_new_list", 115);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  if ( pthread_rwlock_init((pthread_rwlock_t *)&v15[1], 0) )
  {
    v17 = _errno_location();
    snprintf(s, 0x800u, "Failed to pthread_rwlock_init errno=%d in %s %s():%d", *v17, "klist.c", "_k_new_list", 115);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  *(_DWORD *)v13 = a1;
  *((_DWORD *)v13 + 5) = a2;
  *((_DWORD *)v13 + 9) = a3;
  *((_DWORD *)v13 + 10) = a4;
  v13[44] = a5;
  sub_46870((const char **)v13, a6, a7, a8);
  return v13;
}

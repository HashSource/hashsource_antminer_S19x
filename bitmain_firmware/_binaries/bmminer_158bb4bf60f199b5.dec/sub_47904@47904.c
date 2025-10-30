int __fastcall sub_47904(const char **a1, const char *a2, const char *a3, int a4)
{
  int v5; // r5
  void *v6; // r0
  int v7; // r5
  void *v8; // r0
  char *v9; // r5
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( *((_BYTE *)a1 + 4) )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() a store - from %s %s() line %d in %s %s():%d",
      *a1,
      "_k_free_list",
      a2,
      a3,
      a4,
      "klist.c",
      "_k_free_list",
      400);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  if ( (int)a1[12] > 0 )
  {
    v5 = 0;
    do
    {
      v6 = *(void **)&a1[13][4 * v5++];
      free(v6);
    }
    while ( (int)a1[12] > v5 );
  }
  free((void *)a1[13]);
  if ( (int)a1[14] > 0 )
  {
    v7 = 0;
    do
    {
      v8 = *(void **)&a1[15][4 * v7++];
      free(v8);
    }
    while ( (int)a1[14] > v7 );
  }
  free((void *)a1[15]);
  v9 = (char *)a1[2];
  pthread_rwlock_destroy((pthread_rwlock_t *)(v9 + 24));
  pthread_mutex_destroy((pthread_mutex_t *)v9);
  free((void *)a1[2]);
  free(a1);
  return 0;
}

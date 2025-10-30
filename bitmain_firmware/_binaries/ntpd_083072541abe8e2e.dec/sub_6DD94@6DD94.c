int __fastcall sub_6DD94(pthread_t *a1)
{
  int v2; // r0
  int v3; // r3
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r5
  int result; // r0
  size_t v9; // r5
  int v10; // r0
  size_t v11; // r7
  char *v12; // r0
  char *v13; // r0
  char *v14; // r0
  int v15; // [sp+8h] [bp-138h] BYREF
  size_t stacksize; // [sp+Ch] [bp-134h] BYREF
  __int64 v17; // [sp+10h] [bp-130h] BYREF
  pthread_attr_t v18; // [sp+18h] [bp-128h] BYREF
  sigset_t v19; // [sp+3Ch] [bp-104h] BYREF
  sigset_t v20; // [sp+BCh] [bp-84h] BYREF

  a1[2] = 0;
  if ( sub_68F08(&v17, &v15) )
  {
    sub_64E00((_BYTE *)&dword_0 + 3, "start_blocking_thread: pipe_socketpair() %m");
    exit(1);
  }
  a1[13] = sub_6C0B8(v17);
  v2 = sub_6C0B8(SHIDWORD(v17));
  v3 = v15;
  a1[14] = v2;
  v4 = a1[13];
  a1[15] = v3;
  v5 = fcntl(v4, 3, 0);
  if ( v5 == -1 )
  {
    sub_64E00((_BYTE *)&dword_0 + 3, "start_blocking_thread: fcntl(F_GETFL) %m");
    exit(1);
  }
  if ( fcntl(a1[13], 4, v5 | 0x800) == -1 )
  {
    sub_64E00((_BYTE *)&dword_0 + 3, "start_blocking_thread: fcntl(F_SETFL, O_NONBLOCK) %m");
    exit(1);
  }
  addremove_io_fd(a1[13], a1[15], 0);
  pthread_attr_init(&v18);
  pthread_attr_setdetachstate(&v18, 1);
  v6 = pthread_attr_getstacksize(&v18, &stacksize);
  if ( v6 )
  {
    v13 = strerror(v6);
    sub_64E00((_BYTE *)&dword_0 + 3, "start_blocking_thread: pthread_attr_getstacksize() -> %s", v13);
  }
  else
  {
    if ( stacksize < 0x10000 )
    {
      v9 = 0x10000;
    }
    else
    {
      if ( stacksize <= 0x40000 )
        goto LABEL_7;
      v9 = 0x40000;
    }
    v10 = pthread_attr_setstacksize(&v18, v9);
    if ( v10 )
    {
      v11 = stacksize;
      v12 = strerror(v10);
      sub_64E00(
        (_BYTE *)&dword_0 + 3,
        "start_blocking_thread: pthread_attr_setstacksize(0x%lx -> 0x%lx) -> %s",
        v11,
        v9,
        v12);
    }
  }
LABEL_7:
  a1[2] = (pthread_t)sub_63BA4(0, 4u, 0, 1);
  sigemptyset(&v20);
  sigaddset(&v20, 14);
  sigaddset(&v20, 10);
  sigaddset(&v20, 12);
  sigaddset(&v20, 1);
  sigaddset(&v20, 2);
  sigaddset(&v20, 3);
  sigaddset(&v20, 15);
  sigaddset(&v20, 7);
  sigemptyset(&v19);
  pthread_sigmask(0, &v20, &v19);
  v7 = pthread_create(a1 + 35, &v18, (void *(*)(void *))blocking_thread, a1);
  pthread_sigmask(2, &v19, 0);
  result = pthread_attr_destroy(&v18);
  if ( v7 )
  {
    v14 = strerror(v7);
    sub_64E00((_BYTE *)&dword_0 + 3, "start_blocking_thread: pthread_create() -> %s", v14);
    exit(1);
  }
  a1[2] = (pthread_t)(a1 + 35);
  return result;
}

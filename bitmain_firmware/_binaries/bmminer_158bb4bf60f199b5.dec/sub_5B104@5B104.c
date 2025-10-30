int __fastcall sub_5B104(_DWORD *a1)
{
  int v2; // r5
  pthread_t v4; // r0
  int v5; // r5
  int *v6; // r0
  int *v7; // r0
  int *v8; // r0
  int *v9; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( !*((_BYTE *)a1 + 107) )
  {
    v4 = pthread_self();
    pthread_detach(v4);
  }
  v2 = *((unsigned __int8 *)a1 + 105);
  if ( *((_BYTE *)a1 + 105) )
    return 0;
  while ( !sub_55244(a1) )
  {
    sub_5A31C((int)a1);
    if ( *((_BYTE *)a1 + 107) )
      goto LABEL_16;
    sleep(0x1Eu);
    if ( *((_BYTE *)a1 + 105) )
      return 0;
  }
  sub_551DC((int)a1, (_BYTE *)a1 + 97);
  if ( pthread_mutex_lock(&stru_2440BC) )
  {
    v6 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v6, "cgminer.c", "test_pool_thread", 10765);
    goto LABEL_23;
  }
  if ( pthread_rwlock_wrlock(&rwlock) )
  {
    v7 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v7, "cgminer.c", "test_pool_thread", 10765);
    goto LABEL_23;
  }
  if ( !byte_1AF228 )
  {
    v5 = *a1;
    dword_1AF12C = (int)a1;
    byte_1AF228 = 1;
    v2 = v5 != 0;
  }
  if ( pthread_rwlock_unlock(&rwlock) )
  {
    v8 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v8,
      "cgminer.c",
      "test_pool_thread",
      10779);
    goto LABEL_23;
  }
  if ( pthread_mutex_unlock(&stru_2440BC) )
  {
    v9 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v9,
      "cgminer.c",
      "test_pool_thread",
      10779);
LABEL_23:
    sub_47AB4(3, s, 1);
    sub_54CCC(1, 1);
  }
  off_9E444();
  if ( v2 && (byte_244080 || byte_1AECC4 || dword_9E320 > 4) )
  {
    snprintf(s, 0x800u, "Switching to pool %d %s - first alive pool", *a1, (const char *)a1[41]);
    sub_47AB4(5, s, 0);
  }
  sub_582C8(a1);
  sub_59E6C(0);
LABEL_16:
  *((_BYTE *)a1 + 284) = 0;
  return 0;
}

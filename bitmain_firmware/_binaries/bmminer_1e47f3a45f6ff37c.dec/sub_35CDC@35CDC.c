int sub_35CDC()
{
  int v0; // r4
  int v1; // r5
  int *v3; // r0
  int v4; // r3
  int *v5; // r0
  int v6; // r3
  int *v7; // r0
  int v8; // r3
  int *v9; // r0
  int v10; // r3
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v0 = sub_3D194(1, 448, "bmminer.c", "make_work", 1389);
  if ( !v0 )
  {
    strcpy(s, "Failed to calloc work in make_work");
    sub_3B6AC(3, s, 1, *(_DWORD *)"e_work");
  }
  if ( pthread_mutex_lock(&stru_5C0F00) )
  {
    v3 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v3, "bmminer.c", "total_work_inc", 1380);
    sub_3B6AC(3, s, 1, v4);
    if ( !pthread_rwlock_wrlock(&rwlock) )
      goto LABEL_5;
  }
  else if ( !pthread_rwlock_wrlock(&rwlock) )
  {
    goto LABEL_5;
  }
  v5 = _errno_location();
  snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v5, "bmminer.c", "total_work_inc", 1380);
  sub_3B6AC(3, s, 1, v6);
LABEL_5:
  v1 = dword_B6AE0++;
  if ( pthread_rwlock_unlock(&rwlock) )
  {
    v7 = _errno_location();
    snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v7, "bmminer.c", "total_work_inc", 1382);
    sub_3B6AC(3, s, 1, v8);
  }
  if ( pthread_mutex_unlock(&stru_5C0F00) )
  {
    v9 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v9, "bmminer.c", "total_work_inc", 1382);
    sub_3B6AC(3, s, 1, v10);
  }
  off_B31B8();
  *(_DWORD *)(v0 + 340) = v1;
  return v0;
}

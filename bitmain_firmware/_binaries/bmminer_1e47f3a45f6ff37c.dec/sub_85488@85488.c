int __fastcall sub_85488(pthread_mutex_t *a1)
{
  const char *count; // r4
  int *v2; // r0
  int *v3; // r0
  _WORD v6[2]; // [sp+14h] [bp-20h] BYREF
  int v7; // [sp+18h] [bp-1Ch]
  int v8; // [sp+1Ch] [bp-18h]
  int v9; // [sp+24h] [bp-10h]

  v9 = 0;
  v6[0] = 2;
  v7 = 0;
  v6[1] = 0;
  v8 = 0;
  if ( fcntl(a1[1].__count, 6, v6) )
  {
    v9 = -1;
    count = (const char *)a1[1].__count;
    v2 = _errno_location();
    sub_8CD10(2, "src/rotater.c", 518, "unlock fd[%s] fail, errno[%d]", count, *v2);
  }
  if ( pthread_mutex_unlock(a1) )
  {
    v9 = -1;
    v3 = _errno_location();
    sub_8CD10(2, "src/rotater.c", 523, "pthread_mutext_unlock fail, errno[%d]", *v3);
  }
  return v9;
}

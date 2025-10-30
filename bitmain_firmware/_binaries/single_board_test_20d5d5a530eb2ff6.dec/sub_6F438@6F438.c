int __fastcall sub_6F438(int a1)
{
  unsigned __int8 v1; // r5
  pthread_mutex_t *v2; // r4
  int v3; // r5

  v1 = a1;
  v2 = (pthread_mutex_t *)((char *)&unk_65E148 + 24 * a1);
  pthread_mutex_lock(v2);
  v3 = sub_6EBA4(v1);
  pthread_mutex_unlock(v2);
  return v3;
}

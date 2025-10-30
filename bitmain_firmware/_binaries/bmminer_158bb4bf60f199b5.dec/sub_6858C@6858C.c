int __fastcall sub_6858C(int a1)
{
  unsigned __int8 v1; // r5
  pthread_mutex_t *v2; // r4
  int v3; // r5

  v1 = a1;
  v2 = (pthread_mutex_t *)((char *)&unk_1B1038 + 24 * a1);
  pthread_mutex_lock(v2);
  v3 = sub_6793C(v1);
  pthread_mutex_unlock(v2);
  return v3;
}

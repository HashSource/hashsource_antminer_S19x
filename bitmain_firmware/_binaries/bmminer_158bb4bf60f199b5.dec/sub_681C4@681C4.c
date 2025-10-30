int __fastcall sub_681C4(int a1, int a2, int *a3)
{
  pthread_mutex_t *v5; // r4
  char v7[2048]; // [sp+0h] [bp-800h] BYREF

  if ( !a3 )
    return -3;
  v5 = (pthread_mutex_t *)((char *)&unk_1B0EB8 + 24 * a1);
  pthread_mutex_lock(v5);
  if ( a2 )
  {
    snprintf(v7, 0x800u, "unknown set config type = %d\n", a2);
    sub_47AB4(1, v7, 0);
  }
  else
  {
    sub_66908(15, *a3);
  }
  pthread_mutex_unlock(v5);
  return -5;
}

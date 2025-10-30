int __fastcall sub_3FDB4(int a1)
{
  size_t v2; // r6
  size_t v3; // r6
  size_t v4; // r6

  byte_4B9A70 = 0;
  if ( dword_4B9A80 )
    free((void *)dword_4B9A80);
  if ( dword_4B9A88 )
    free((void *)dword_4B9A88);
  if ( dword_4B9AA4 )
    free((void *)dword_4B9AA4);
  memset(&unk_4B9A78, 0, 0x50u);
  memcpy(&unk_4B9A78, (const void *)a1, 0x50u);
  v2 = *(_DWORD *)(a1 + 12);
  dword_4B9A80 = (int)malloc(v2);
  memcpy((void *)dword_4B9A80, *(const void **)(a1 + 8), v2);
  v3 = 32 * *(_DWORD *)(a1 + 20);
  dword_4B9A88 = (int)malloc(v3);
  memcpy((void *)dword_4B9A88, *(const void **)(a1 + 16), v3);
  v4 = *(_DWORD *)(a1 + 48);
  dword_4B9AA4 = (int)malloc(v4);
  memcpy((void *)dword_4B9AA4, *(const void **)(a1 + 44), v4);
  byte_4B9A70 = 1;
  pthread_mutex_lock(&stru_4B9A28);
  pthread_cond_broadcast(&cond);
  return pthread_mutex_unlock(&stru_4B9A28);
}

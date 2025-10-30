void *sub_41CC4()
{
  int v0; // r3

  pthread_mutex_lock(&stru_5FE898);
  *(_DWORD *)dword_5FE790 = 0;
  v0 = dword_5FE790;
  *(_DWORD *)(dword_5FE790 + 4) = 0;
  *(_DWORD *)(v0 + 8) = 0;
  *(_DWORD *)(v0 + 12) = 0;
  pthread_mutex_unlock(&stru_5FE898);
  return j_memset((void *)(dword_5FE790 + 16), 0, 0x27ECu);
}

int sub_3D790()
{
  pthread_mutex_lock(&stru_634A68);
  if ( dword_6E33D4 )
  {
    fflush((FILE *)dword_6E33D4);
    fclose((FILE *)dword_6E33D4);
    dword_6E33D4 = 0;
  }
  pthread_mutex_unlock(&stru_634A68);
  pthread_mutex_lock(&mutex);
  memset(&byte_6E33D8, 0, 0x80u);
  pthread_mutex_unlock(&mutex);
  return j_pthread_cond_signal(&cond);
}

ssize_t __fastcall sub_3FFEC(int a1, const void *a2, size_t a3)
{
  ssize_t v6; // r6
  int v8; // r4

  if ( a1 == 255 )
  {
    v8 = 0;
    v6 = 0;
    if ( sub_26C0C(0) )
      goto LABEL_7;
    while ( ++v8 != 4 )
    {
      if ( sub_26C0C(v8) )
      {
LABEL_7:
        pthread_mutex_lock(&stru_4B9AC8);
        ioctl(dword_5BFCE4, 0x40047509u, v8);
        v6 = write(dword_5BFCE4, a2, a3);
        pthread_mutex_unlock(&stru_4B9AC8);
      }
    }
  }
  else
  {
    pthread_mutex_lock(&stru_4B9AC8);
    ioctl(dword_5BFCE4, 0x40047509u, a1);
    v6 = write(dword_5BFCE4, a2, a3);
    pthread_mutex_unlock(&stru_4B9AC8);
  }
  return v6;
}

int __fastcall sub_6FDD8(int a1)
{
  int v1; // r5
  int v2; // r6

  if ( !dword_65E308 )
    return -2;
  if ( dword_65E30C == a1 )
  {
    v1 = pthread_mutex_lock(&stru_65E310);
    if ( v1 )
    {
      v1 = -4;
      nullsub_8();
    }
    else
    {
      memset(&unk_65E328, 0x20, 0x40u);
      v2 = dword_65E30C;
      lseek(dword_65E30C, 0, 0);
      write(v2, &unk_65E328, 0x40u);
      pthread_mutex_unlock(&stru_65E310);
    }
  }
  else
  {
    v1 = -3;
    nullsub_8();
  }
  return v1;
}

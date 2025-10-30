int __fastcall sub_3FBFC(int a1, int (*a2)())
{
  int v3; // r5
  int v4; // r6
  int v6; // r4

  if ( a2 == sub_1C200 )
  {
    v3 = 4098;
  }
  else if ( (char *)a2 == (char *)&unk_F4240 )
  {
    v3 = 4104;
  }
  else if ( (double)(int)a2 == 1500000.0 )
  {
    v3 = 4106;
  }
  else
  {
    if ( (char *)a2 != (char *)&unk_2DC6C0 )
    {
      v3 = 4103;
      if ( (char *)a2 != (char *)&unk_5B8D80 )
        v3 = -1;
      if ( a1 != 255 )
        goto LABEL_9;
      goto LABEL_16;
    }
    v3 = 4109;
  }
  if ( a1 != 255 )
  {
LABEL_9:
    pthread_mutex_lock(&stru_4B9AC8);
    ioctl(dword_5BFCE4, 0x40047509u, a1);
    v4 = ioctl(dword_5BFCE4, 0x40047508u, v3);
    pthread_mutex_unlock(&stru_4B9AC8);
    return v4;
  }
LABEL_16:
  v4 = 0;
  v6 = 0;
  if ( sub_26C0C(0) )
    goto LABEL_19;
  while ( ++v6 != 4 )
  {
    if ( sub_26C0C(v6) )
    {
LABEL_19:
      pthread_mutex_lock(&stru_4B9AC8);
      ioctl(dword_5BFCE4, 0x40047509u, v6);
      v4 = ioctl(dword_5BFCE4, 0x40047508u, v3);
      pthread_mutex_unlock(&stru_4B9AC8);
    }
  }
  return v4;
}

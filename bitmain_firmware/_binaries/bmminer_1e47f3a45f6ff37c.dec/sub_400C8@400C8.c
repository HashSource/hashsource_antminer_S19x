int sub_400C8()
{
  int fd; // r0
  void *v1; // r0
  int v2; // r6
  int i; // r4
  int v4; // r8
  _DWORD *v5; // r6
  char *v6; // r4
  int v8; // r3
  int v9; // r3
  int v10; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  fd = open("/dev/uart_trans", 2);
  dword_5BFCE4 = fd;
  if ( fd < 0 )
  {
    if ( (unsigned int)dword_B308C <= 3 )
      return -1;
    snprintf(s, 0x800u, "open uart_trans dev error,fd = %d\n", fd);
    sub_3B6AC(3, s, 0, v8);
    return -1;
  }
  else
  {
    v1 = mmap(0, (size_t)&loc_20D0C, 3, 1, fd, 0);
    dword_5BFCE8 = (int)v1;
    if ( v1 )
    {
      if ( (unsigned int)dword_B308C > 4 )
      {
        snprintf(s, 0x800u, "uart_trans addr:%p.\n", v1);
        sub_3B6AC(4, s, 0, v9);
      }
      byte_5BFCE0 = 0;
      v2 = ioctl(dword_5BFCE4, 0x7506u, 0);
      if ( v2 )
      {
        if ( (unsigned int)dword_B308C > 3 )
        {
          strcpy(s, "uart stop send work failed.\n");
          sub_3B6AC(3, s, 0, *(int *)"");
        }
      }
      else
      {
        memset((void *)dword_5BFCE8, 0, (size_t)&loc_20D0C);
        for ( i = 0; i != 4; ++i )
        {
          if ( sub_26C0C(i) )
            v2 |= 1 << i;
        }
        if ( ioctl(dword_5BFCE4, 0x40047501u, v2) )
        {
          if ( (unsigned int)dword_B308C > 3 )
          {
            strcpy(s, "uart set chain failed.\n");
            sub_3B6AC(3, s, 0, *(int *)"in failed.\n");
          }
        }
        else if ( ioctl(dword_5BFCE4, 0x40047502u, 768) )
        {
          if ( (unsigned int)dword_B308C > 3 )
          {
            strcpy(s, "uart set wq failed.\n");
            sub_3B6AC(3, s, 0, *(int *)"failed.\n");
          }
        }
        else
        {
          pthread_mutex_init(&stru_4B9A28, 0);
          pthread_condattr_init(&cond_attr);
          pthread_condattr_setclock(&cond_attr, 1);
          pthread_cond_init(&cond, &cond_attr);
          v4 = sub_3E744((int)&unk_5BFCEC, 0, (void *(*)(void *))sub_3F574, 0);
          if ( !v4 )
          {
            v5 = &unk_5BFD2C;
            pthread_detach(dword_5BFCF8);
            v6 = 0;
            while ( 1 )
            {
              if ( sub_26C0C((int)v6) && sub_26C0C((int)v6) == 1 )
              {
                if ( sub_3E744((int)v5, 0, (void *(*)(void *))sub_3FF08, v6) )
                {
                  if ( (unsigned int)dword_B308C > 3 )
                  {
                    snprintf(s, 0x800u, "chain %d create uart rcv thread failed.\n", v6);
                    sub_3B6AC(3, s, 0, v10);
                    if ( (unsigned int)dword_B308C > 3 )
                    {
                      strcpy(s, "create uart rcv thread failed.\n");
                      sub_3B6AC(3, s, 0, *(int *)"d.\n");
                    }
                  }
                  v4 = -1;
                  sub_3DB9C((int)&unk_5BFCEC);
                  munmap((void *)dword_5BFCE8, 0x20D0Cu);
                  close(dword_5BFCE4);
                  return v4;
                }
                pthread_detach(v5[3]);
              }
              ++v6;
              v5 += 16;
              if ( v6 == (char *)4 )
                return v4;
            }
          }
          if ( (unsigned int)dword_B308C > 3 )
          {
            strcpy(s, "create uart make work thread failed.\n");
            sub_3B6AC(3, s, 0, *(int *)" failed.\n");
          }
        }
      }
      munmap((void *)dword_5BFCE8, (size_t)&loc_20D0C);
      close(dword_5BFCE4);
      return -1;
    }
    else
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(s, "mmap uart_trans buf error.\n");
        sub_3B6AC(3, s, 0, *(int *)"ans buf error.\n");
      }
      v4 = -1;
      close(dword_5BFCE4);
      return v4;
    }
  }
}

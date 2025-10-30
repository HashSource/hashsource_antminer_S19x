int __fastcall sub_6CE2C(int a1, int a2, unsigned int a3)
{
  int v7; // [sp+14h] [bp-818h] BYREF
  char v8[2048]; // [sp+18h] [bp-814h] BYREF
  void *ptr; // [sp+818h] [bp-14h] BYREF
  const char *v10; // [sp+81Ch] [bp-10h]
  int v11; // [sp+820h] [bp-Ch]
  unsigned int i; // [sp+824h] [bp-8h]

  v7 = a1;
  i = 0;
  if ( pthread_mutex_lock(&stru_536944) )
  {
    strcpy(v8, "failed to i2c lock\n");
    sub_3B6AC(0, v8, 0, (int)v8);
    return -1;
  }
  else
  {
    v11 = 0;
    if ( sub_59620((_DWORD *)dword_53695C, (int)&v7, (int)&ptr) == 1 )
    {
      v10 = (const char *)ptr;
      if ( ioctl(*((_DWORD *)ptr + 1), 0x703u, *((_DWORD *)ptr + 2) >> 1) >= 0 )
      {
        for ( i = 0; i < a3; ++i )
        {
          if ( read(*((_DWORD *)v10 + 1), (void *)(a2 + i), 1u) != 1 )
          {
            snprintf(v8, 0x800u, "fail to read %d:%d\n", i, a3);
            sub_3B6AC(0, v8, 0, (int)v8);
          }
        }
        free(ptr);
        pthread_mutex_unlock(&stru_536944);
        return i;
      }
      else
      {
        snprintf(v8, 0x800u, "read io ctrl for path = %s, addr = %d failed\n", v10 + 12, *((_DWORD *)v10 + 2));
        sub_3B6AC(0, v8, 0, (int)v8);
        free(ptr);
        pthread_mutex_unlock(&stru_536944);
        return -3;
      }
    }
    else
    {
      snprintf(v8, 0x800u, "ctx %d not inited\n", v7);
      sub_3B6AC(0, v8, 0, (int)v8);
      pthread_mutex_unlock(&stru_536944);
      return -4;
    }
  }
}

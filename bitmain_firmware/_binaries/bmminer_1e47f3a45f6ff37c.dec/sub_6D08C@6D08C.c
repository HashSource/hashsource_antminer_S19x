int __fastcall sub_6D08C(int a1, const void *a2, size_t a3)
{
  int v7; // [sp+14h] [bp-818h] BYREF
  char v8[2048]; // [sp+1Ch] [bp-810h] BYREF
  void *ptr; // [sp+81Ch] [bp-10h] BYREF
  const char *v10; // [sp+820h] [bp-Ch]
  int v11; // [sp+824h] [bp-8h]

  v7 = a1;
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
        if ( write(*((_DWORD *)v10 + 1), a2, a3) != a3 )
        {
          snprintf(v8, 0x800u, "fail to write %d\n", a3);
          sub_3B6AC(0, v8, 0, (int)v8);
        }
        free(ptr);
        usleep(0x2710u);
        pthread_mutex_unlock(&stru_536944);
        return a3;
      }
      else
      {
        snprintf(v8, 0x800u, "write io ctrl for path = %s, addr = %d failed\n", v10 + 12, *((_DWORD *)v10 + 2));
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

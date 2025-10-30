int __fastcall sub_6B060(int a1, int a2, unsigned int a3)
{
  int v7; // [sp+Ch] [bp-818h] BYREF
  char v8[2048]; // [sp+10h] [bp-814h] BYREF
  void *ptr[2]; // [sp+810h] [bp-14h] BYREF
  int v10; // [sp+818h] [bp-Ch]
  unsigned int i; // [sp+81Ch] [bp-8h]

  v7 = a1;
  i = 0;
  if ( pthread_mutex_lock(&stru_531B04) )
  {
    strcpy(v8, "failed to i2c lock\n");
    sub_3AF5C(0, v8, 0, (int)v8);
    return -1;
  }
  else
  {
    v10 = 0;
    ptr[0] = 0;
    if ( sub_5862C((_DWORD *)dword_531B1C, (int)&v7, (int)ptr) == 1 )
    {
      ptr[1] = ptr[0];
      v10 = (*(_DWORD *)ptr[0] << 26)
          | (*((_DWORD *)ptr[0] + 1) >> 4 << 20)
          | (*((_DWORD *)ptr[0] + 1) >> 1 << 16) & 0x70000
          | 0x2080000;
      for ( i = 0; i < a3; ++i )
      {
        if ( !sub_6AF6C() )
        {
          free(ptr[0]);
          strcpy(v8, "iic not ready 4 read1\n");
          sub_3AF5C(0, v8, 0, (int)v8);
          pthread_mutex_unlock(&stru_531B04);
          return -2;
        }
        sub_52EA0(12, v10);
        if ( !sub_6AFDC((_BYTE *)(a2 + i)) )
        {
          free(ptr[0]);
          strcpy(v8, "iic not ready 4 read2\n");
          sub_3AF5C(0, v8, 0, (int)v8);
          pthread_mutex_unlock(&stru_531B04);
          return -3;
        }
      }
      free(ptr[0]);
      usleep(0x2710u);
      pthread_mutex_unlock(&stru_531B04);
      return a3;
    }
    else
    {
      snprintf(v8, 0x800u, "ctx %d not inited\n", v7);
      sub_3AF5C(0, v8, 0, (int)v8);
      pthread_mutex_unlock(&stru_531B04);
      return -2;
    }
  }
}

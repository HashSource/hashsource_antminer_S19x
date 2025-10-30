int __fastcall sub_6B330(int a1, int a2, unsigned int a3)
{
  int v7; // [sp+Ch] [bp-820h] BYREF
  char v8[2048]; // [sp+14h] [bp-818h] BYREF
  void *ptr; // [sp+814h] [bp-18h] BYREF
  char v10; // [sp+81Bh] [bp-11h] BYREF
  _DWORD *v11; // [sp+81Ch] [bp-10h]
  int v12; // [sp+820h] [bp-Ch]
  unsigned int i; // [sp+824h] [bp-8h]

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
    v12 = 0;
    ptr = 0;
    if ( sub_5862C((_DWORD *)dword_531B1C, (int)&v7, (int)&ptr) == 1 )
    {
      v11 = ptr;
      for ( i = 0; i < a3; ++i )
      {
        v12 = (*v11 << 26) | (v11[1] >> 4 << 20) | (v11[1] >> 1 << 16) & 0x70000 | *(unsigned __int8 *)(a2 + i);
        if ( !sub_6AF6C() )
        {
          free(ptr);
          strcpy(v8, "iic not ready 4 write\n");
          sub_3AF5C(0, v8, 0, (int)v8);
          pthread_mutex_unlock(&stru_531B04);
          return -2;
        }
        sub_52EA0(12, v12);
        if ( !sub_6AFDC(&v10) )
        {
          strcpy(v8, "iic write failed\n");
          sub_3AF5C(0, v8, 0, (int)v8);
          free(ptr);
          pthread_mutex_unlock(&stru_531B04);
          return -3;
        }
      }
      free(ptr);
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

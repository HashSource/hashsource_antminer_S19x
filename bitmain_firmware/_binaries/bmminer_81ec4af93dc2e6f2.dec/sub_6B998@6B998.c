int __fastcall sub_6B998(int a1, unsigned __int8 *a2, int a3, int a4, unsigned int a5, char a6)
{
  int v10; // [sp+Ch] [bp-820h] BYREF
  char v11[2048]; // [sp+14h] [bp-818h] BYREF
  void *ptr; // [sp+814h] [bp-18h] BYREF
  char v13; // [sp+81Bh] [bp-11h] BYREF
  _DWORD *v14; // [sp+81Ch] [bp-10h]
  int v15; // [sp+820h] [bp-Ch]
  unsigned int i; // [sp+824h] [bp-8h]

  v10 = a1;
  i = 0;
  if ( a3 == 1 )
  {
    if ( pthread_mutex_lock(&stru_531B04) )
    {
      strcpy(v11, "failed to i2c lock\n");
      sub_3AF5C(0, v11, 0, (int)v11);
      return -1;
    }
    else
    {
      v15 = 0;
      ptr = 0;
      if ( sub_5862C((_DWORD *)dword_531B1C, (int)&v10, (int)&ptr) == 1 )
      {
        v14 = ptr;
        for ( i = 0; i < a5; ++i )
        {
          v15 = (*v14 << 26) | (v14[1] >> 4 << 20) | (v14[1] >> 1 << 16) & 0x70000 | *(unsigned __int8 *)(a4 + i);
          if ( a6 )
            v15 |= ((*a2 + i) << 8) | 0x1000000;
          if ( !sub_6AF6C() )
          {
            strcpy(v11, "iic not ready 4 write\n");
            sub_3AF5C(0, v11, 0, (int)v11);
            free(ptr);
            pthread_mutex_unlock(&stru_531B04);
            return -2;
          }
          sub_52EA0(12, v15);
          if ( !sub_6AFDC(&v13) )
          {
            strcpy(v11, "iic write reg failed\n");
            sub_3AF5C(0, v11, 0, (int)v11);
            free(ptr);
            pthread_mutex_unlock(&stru_531B04);
            return -3;
          }
        }
        free(ptr);
        usleep(0x2710u);
        pthread_mutex_unlock(&stru_531B04);
        return a5;
      }
      else
      {
        snprintf(v11, 0x800u, "ctx %d not inited\n", v10);
        sub_3AF5C(0, v11, 0, (int)v11);
        pthread_mutex_unlock(&stru_531B04);
        return -2;
      }
    }
  }
  else
  {
    strcpy(v11, "more than one byte reg address is not supported\n");
    sub_3AF5C(0, v11, 0, (int)v11);
    return -3;
  }
}

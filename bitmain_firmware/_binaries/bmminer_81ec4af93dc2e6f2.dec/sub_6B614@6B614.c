int __fastcall sub_6B614(int a1, unsigned __int8 *a2, int a3, int a4, unsigned int a5, char a6)
{
  int v11; // [sp+Ch] [bp-818h] BYREF
  char v12[2048]; // [sp+10h] [bp-814h] BYREF
  void *ptr; // [sp+810h] [bp-14h] BYREF
  _DWORD *v14; // [sp+814h] [bp-10h]
  int v15; // [sp+818h] [bp-Ch]
  unsigned int i; // [sp+81Ch] [bp-8h]

  v11 = a1;
  i = 0;
  if ( a3 == 1 || a3 == 2 )
  {
    if ( pthread_mutex_lock(&stru_531B04) )
    {
      strcpy(v12, "failed to i2c lock\n");
      sub_3AF5C(0, v12, 0, (int)v12);
      return -1;
    }
    else
    {
      v15 = 0;
      ptr = 0;
      if ( sub_5862C((_DWORD *)dword_531B1C, (int)&v11, (int)&ptr) == 1 )
      {
        v14 = ptr;
        for ( i = 0; i < a5; i += a3 )
        {
          if ( a3 == 2 )
            v15 = (*v14 << 26) | (v14[1] >> 4 << 20) | (v14[1] >> 1 << 16) & 0x70000 | 0x2000000;
          else
            v15 = (*v14 << 26) | (v14[1] >> 4 << 20) | (v14[1] >> 1 << 16) & 0x70000 | 0x2080000;
          if ( a6 )
            v15 |= ((*a2 + i) << 8) | 0x1000000;
          if ( !sub_6AF6C() )
          {
            strcpy(v12, "iic not ready 4 read1\n");
            sub_3AF5C(0, v12, 0, (int)v12);
            free(ptr);
            pthread_mutex_unlock(&stru_531B04);
            return -2;
          }
          sub_52EA0(12, v15);
          if ( !sub_6AFDC((_BYTE *)(a4 + i)) )
          {
            free(ptr);
            pthread_mutex_unlock(&stru_531B04);
            return -3;
          }
          ++i;
        }
        free(ptr);
        usleep(0x2710u);
        pthread_mutex_unlock(&stru_531B04);
        return a5;
      }
      else
      {
        snprintf(v12, 0x800u, "ctx %d not inited\n", v11);
        sub_3AF5C(0, v12, 0, (int)v12);
        pthread_mutex_unlock(&stru_531B04);
        return -2;
      }
    }
  }
  else
  {
    strcpy(v12, "more than two byte reg data len is not supported\n");
    sub_3AF5C(0, v12, 0, (int)v12);
    return -3;
  }
}

int __fastcall sub_76EE8(int a1, unsigned __int8 *a2, int a3, unsigned __int8 *a4, int a5, char a6)
{
  _DWORD *v8; // r11
  unsigned __int8 *v9; // r10
  unsigned __int8 *v10; // r2
  int v11; // t1
  int v12; // r4
  void *v14; // r0
  int v15; // [sp+4h] [bp-810h] BYREF
  char v16; // [sp+Bh] [bp-809h] BYREF
  void *ptr; // [sp+Ch] [bp-808h] BYREF
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v15 = a1;
  if ( a3 == 1 )
  {
    if ( pthread_mutex_lock(&stru_65EA38) )
    {
      strcpy(s, "failed to i2c lock\n");
      nullsub_8();
      return -1;
    }
    else
    {
      ptr = 0;
      if ( sub_7015C((_DWORD *)dword_65EA34, (int)&v15, (int)&ptr) == 1 )
      {
        v8 = ptr;
        if ( a5 )
        {
          v9 = a4;
          do
          {
            v10 = (unsigned __int8 *)(v9 - a4);
            v11 = *v9++;
            v12 = (v8[1] >> 4 << 20) | (*v8 << 26) | (((v8[1] >> 1) & 7) << 16) | v11;
            if ( a6 )
              v12 |= ((_DWORD)&v10[*a2] << 8) | 0x1000000;
            if ( !sub_76890() )
            {
              strcpy(s, "iic not ready 4 write\n");
              nullsub_8();
              free(ptr);
              pthread_mutex_unlock(&stru_65EA38);
              return -2;
            }
            sub_6E0BC(12, v12);
            if ( !sub_768C8(&v16) )
            {
              strcpy(s, "iic write reg failed\n");
              nullsub_8();
              free(ptr);
              pthread_mutex_unlock(&stru_65EA38);
              return -3;
            }
          }
          while ( &a4[a5] != v9 );
          v14 = ptr;
        }
        else
        {
          v14 = ptr;
        }
        free(v14);
        usleep(0x2710u);
        pthread_mutex_unlock(&stru_65EA38);
        return a5;
      }
      else
      {
        snprintf(s, 0x800u, "ctx %d not inited\n", v15);
        nullsub_8();
        pthread_mutex_unlock(&stru_65EA38);
        return -2;
      }
    }
  }
  else
  {
    strcpy(s, "more than one byte reg address is not supported\n");
    nullsub_8();
    return -3;
  }
}

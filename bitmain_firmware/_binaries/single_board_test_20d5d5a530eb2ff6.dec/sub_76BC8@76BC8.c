int __fastcall sub_76BC8(int a1, unsigned __int8 *a2, int a3)
{
  _DWORD *v5; // r7
  unsigned __int8 *v6; // r5
  int v7; // t1
  int v8; // r8
  void *v10; // r0
  int v11; // [sp+4h] [bp-810h] BYREF
  char v12; // [sp+Bh] [bp-809h] BYREF
  void *ptr; // [sp+Ch] [bp-808h] BYREF
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v11 = a1;
  if ( pthread_mutex_lock(&stru_65EA38) )
  {
    strcpy(s, "failed to i2c lock\n");
    nullsub_8();
    return -1;
  }
  else
  {
    ptr = 0;
    if ( sub_7015C((_DWORD *)dword_65EA34, (int)&v11, (int)&ptr) == 1 )
    {
      v5 = ptr;
      if ( a3 )
      {
        v6 = &a2[a3];
        do
        {
          v7 = *a2++;
          v8 = (v5[1] >> 4 << 20) | (*v5 << 26) | (((v5[1] >> 1) & 7) << 16) | v7;
          if ( !sub_76890() )
          {
            free(ptr);
            strcpy(s, "iic not ready 4 write\n");
            nullsub_8();
            pthread_mutex_unlock(&stru_65EA38);
            return -2;
          }
          sub_6E0BC(12, v8);
          if ( !sub_768C8(&v12) )
          {
            strcpy(s, "iic write failed\n");
            nullsub_8();
            free(ptr);
            pthread_mutex_unlock(&stru_65EA38);
            return -3;
          }
        }
        while ( v6 != a2 );
        v10 = ptr;
      }
      else
      {
        v10 = ptr;
      }
      free(v10);
      usleep(0x2710u);
      pthread_mutex_unlock(&stru_65EA38);
      return a3;
    }
    else
    {
      snprintf(s, 0x800u, "ctx %d not inited\n", v11);
      nullsub_8();
      pthread_mutex_unlock(&stru_65EA38);
      return -2;
    }
  }
}

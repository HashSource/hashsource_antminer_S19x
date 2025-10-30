int __fastcall sub_76D30(int a1, unsigned __int8 *a2, int a3, int a4, unsigned int a5, char a6)
{
  unsigned int v8; // r5
  _DWORD *v9; // r11
  _BYTE *v10; // r0
  unsigned int v11; // r0
  int v12; // r4
  int v13; // r1
  unsigned int v14; // r0
  int v15; // r4
  int v16; // r4
  void *v18; // r0
  int v20; // [sp+4h] [bp-810h] BYREF
  void *ptr; // [sp+Ch] [bp-808h] BYREF
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v20 = a1;
  if ( (unsigned int)(a3 - 1) > 1 )
  {
    strcpy(s, "more than two byte reg data len is not supported\n");
    nullsub_8();
    return -3;
  }
  else
  {
    v8 = pthread_mutex_lock(&stru_65EA38);
    if ( v8 )
    {
      strcpy(s, "failed to i2c lock\n");
      nullsub_8();
      return -1;
    }
    else
    {
      ptr = 0;
      if ( sub_7015C((_DWORD *)dword_65EA34, (int)&v20, (int)&ptr) == 1 )
      {
        v9 = ptr;
        if ( a5 )
        {
          do
          {
            v11 = v9[1];
            v12 = *v9 << 26;
            v13 = (v11 >> 1) & 7;
            v14 = v11 >> 4;
            if ( a3 == 2 )
              v15 = v12 | 0x2000000;
            else
              v15 = v12 | 0x2080000;
            v16 = v15 | (v14 << 20) | (v13 << 16);
            if ( a6 )
              v16 |= ((*a2 + v8) << 8) | 0x1000000;
            if ( !sub_76890() )
            {
              strcpy(s, "iic not ready 4 read1\n");
              nullsub_8();
              free(ptr);
              pthread_mutex_unlock(&stru_65EA38);
              return -2;
            }
            sub_6E0BC(12, v16);
            v10 = (_BYTE *)(a4 + v8);
            v8 += a3 + 1;
            if ( !sub_768C8(v10) )
            {
              free(ptr);
              pthread_mutex_unlock(&stru_65EA38);
              return -3;
            }
          }
          while ( a5 > v8 );
          v18 = ptr;
        }
        else
        {
          v18 = ptr;
        }
        free(v18);
        usleep(0x2710u);
        pthread_mutex_unlock(&stru_65EA38);
        return a5;
      }
      else
      {
        snprintf(s, 0x800u, "ctx %d not inited\n", v20);
        nullsub_8();
        pthread_mutex_unlock(&stru_65EA38);
        return -2;
      }
    }
  }
}

int __fastcall sub_76A5C(int a1, _BYTE *a2, int a3)
{
  void *v5; // r0
  int v6; // r6
  _BYTE *v7; // r8
  _BYTE *v8; // r0
  int v10; // [sp+4h] [bp-80Ch] BYREF
  void *ptr; // [sp+Ch] [bp-804h] BYREF
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v10 = a1;
  if ( pthread_mutex_lock(&stru_65EA38) )
  {
    strcpy(s, "failed to i2c lock\n");
    nullsub_8();
    return -1;
  }
  else
  {
    ptr = 0;
    if ( sub_7015C((_DWORD *)dword_65EA34, (int)&v10, (int)&ptr) == 1 )
    {
      v5 = ptr;
      v6 = (*(_DWORD *)ptr << 26)
         | 0x2080000
         | (*((_DWORD *)ptr + 1) >> 4 << 20)
         | (((*((_DWORD *)ptr + 1) >> 1) & 7) << 16);
      if ( a3 )
      {
        v7 = &a2[a3];
        while ( 1 )
        {
          if ( !sub_76890() )
          {
            free(ptr);
            strcpy(s, "iic not ready 4 read1\n");
            nullsub_8();
            pthread_mutex_unlock(&stru_65EA38);
            return -2;
          }
          sub_6E0BC(12, v6);
          v8 = a2++;
          if ( !sub_768C8(v8) )
            break;
          if ( a2 == v7 )
          {
            v5 = ptr;
            goto LABEL_11;
          }
        }
        free(ptr);
        strcpy(s, "iic not ready 4 read2\n");
        nullsub_8();
        pthread_mutex_unlock(&stru_65EA38);
        return -3;
      }
      else
      {
LABEL_11:
        free(v5);
        usleep(0x2710u);
        pthread_mutex_unlock(&stru_65EA38);
        return a3;
      }
    }
    else
    {
      snprintf(s, 0x800u, "ctx %d not inited\n", v10);
      nullsub_8();
      pthread_mutex_unlock(&stru_65EA38);
      return -2;
    }
  }
}

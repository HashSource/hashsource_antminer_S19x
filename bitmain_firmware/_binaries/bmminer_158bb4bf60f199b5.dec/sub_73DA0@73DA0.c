int __fastcall sub_73DA0(int a1, _BYTE *a2, int a3)
{
  void *v5; // r0
  int v6; // r5
  _BYTE *v7; // r8
  _BYTE *v8; // r0
  int v10; // [sp+4h] [bp-80Ch] BYREF
  void *ptr; // [sp+Ch] [bp-804h] BYREF
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v10 = a1;
  if ( pthread_mutex_lock(&stru_1B14D4) )
  {
    strcpy(s, "failed to i2c lock\n");
    sub_47AB4(0, s, 0);
    return -1;
  }
  else
  {
    ptr = 0;
    if ( sub_69FD4((_DWORD *)dword_1B14D0, (int)&v10, (int)&ptr) == 1 )
    {
      v5 = ptr;
      v6 = (*(_DWORD *)ptr << 26)
         | 0x2000000
         | (*((_DWORD *)ptr + 1) >> 4 << 20)
         | (*((_DWORD *)ptr + 1) << 15) & 0x70000;
      if ( a3 )
      {
        v7 = &a2[a3];
        while ( 1 )
        {
          if ( !sub_73AD4() )
          {
            free(ptr);
            strcpy(s, "iic not ready 4 read1\n");
            sub_47AB4(0, s, 0);
            pthread_mutex_unlock(&stru_1B14D4);
            return -2;
          }
          sub_66908(12, v6);
          v8 = a2++;
          if ( !sub_73B30(v8) )
            break;
          if ( a2 == v7 )
          {
            v5 = ptr;
            goto LABEL_10;
          }
        }
        free(ptr);
        strcpy(s, "iic not ready 4 read2\n");
        sub_47AB4(0, s, 0);
        pthread_mutex_unlock(&stru_1B14D4);
        return -3;
      }
      else
      {
LABEL_10:
        free(v5);
        pthread_mutex_unlock(&stru_1B14D4);
        return a3;
      }
    }
    else
    {
      snprintf(s, 0x800u, "ctx %d not inited\n", v10);
      sub_47AB4(0, s, 0);
      pthread_mutex_unlock(&stru_1B14D4);
      return -2;
    }
  }
}

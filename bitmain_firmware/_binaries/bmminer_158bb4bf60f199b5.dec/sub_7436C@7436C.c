int __fastcall sub_7436C(int a1, unsigned __int8 *a2, int a3, int a4, int a5)
{
  int v7; // r8
  _DWORD *v8; // r9
  int v9; // r5
  int v10; // t1
  int v11; // r1
  int v12; // r4
  int v14; // [sp+4h] [bp-810h] BYREF
  void *ptr; // [sp+Ch] [bp-808h] BYREF
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v14 = a1;
  if ( a3 == 1 )
  {
    v7 = pthread_mutex_lock(&stru_1B14D4);
    if ( v7 )
    {
      strcpy(s, "failed to i2c lock\n");
      sub_47AB4(0, s, 0);
      return -1;
    }
    else
    {
      ptr = 0;
      if ( sub_69FD4((_DWORD *)dword_1B14D0, (int)&v14, (int)&ptr) == 1 )
      {
        v8 = ptr;
        if ( a5 )
        {
          v9 = a4 - 1;
          do
          {
            v10 = *(unsigned __int8 *)++v9;
            v11 = *a2 + v7++;
            v12 = (*v8 << 26) | 0x1000000 | (v8[1] >> 4 << 20) | v10 | (v8[1] << 15) & 0x70000 | (v11 << 8);
            if ( !sub_73AD4() )
            {
              strcpy(s, "iic not ready 4 write\n");
              sub_47AB4(0, s, 0);
              free(ptr);
              pthread_mutex_unlock(&stru_1B14D4);
              return -2;
            }
            sub_66908(12, v12);
          }
          while ( a5 != v7 );
          v8 = ptr;
        }
        free(v8);
        pthread_mutex_unlock(&stru_1B14D4);
        return a5;
      }
      else
      {
        snprintf(s, 0x800u, "ctx %d not inited\n", v14);
        sub_47AB4(0, s, 0);
        pthread_mutex_unlock(&stru_1B14D4);
        return -2;
      }
    }
  }
  else
  {
    strcpy(s, "more than one byte reg address is not supported\n");
    sub_47AB4(0, s, 0);
    return -3;
  }
}

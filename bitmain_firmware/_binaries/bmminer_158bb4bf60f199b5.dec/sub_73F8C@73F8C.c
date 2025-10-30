int __fastcall sub_73F8C(int a1, int a2, int a3)
{
  _DWORD *v5; // r8
  int v6; // r6
  int v7; // r5
  int v8; // r6
  int v9; // t1
  int v10; // r4
  int v12; // [sp+4h] [bp-80Ch] BYREF
  void *ptr; // [sp+Ch] [bp-804h] BYREF
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v12 = a1;
  if ( pthread_mutex_lock(&stru_1B14D4) )
  {
    strcpy(s, "failed to i2c lock\n");
    sub_47AB4(0, s, 0);
    return -1;
  }
  else
  {
    ptr = 0;
    if ( sub_69FD4((_DWORD *)dword_1B14D0, (int)&v12, (int)&ptr) == 1 )
    {
      v5 = ptr;
      if ( a3 )
      {
        v6 = a2 + a3;
        v7 = a2 - 1;
        v8 = v6 - 1;
        do
        {
          v9 = *(unsigned __int8 *)++v7;
          v10 = v9 | (v5[1] >> 4 << 20) | (*v5 << 26) | (v5[1] << 15) & 0x70000;
          if ( !sub_73AD4() )
          {
            free(ptr);
            strcpy(s, "iic not ready 4 write\n");
            sub_47AB4(0, s, 0);
            pthread_mutex_unlock(&stru_1B14D4);
            return -2;
          }
          sub_66908(12, v10);
        }
        while ( v8 != v7 );
        v5 = ptr;
      }
      free(v5);
      pthread_mutex_unlock(&stru_1B14D4);
      return a3;
    }
    else
    {
      snprintf(s, 0x800u, "ctx %d not inited\n", v12);
      sub_47AB4(0, s, 0);
      pthread_mutex_unlock(&stru_1B14D4);
      return -2;
    }
  }
}

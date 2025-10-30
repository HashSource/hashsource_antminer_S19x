int __fastcall sub_6FCC8(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // r4
  unsigned int v5; // r5
  bool v6; // cc
  int v8; // r10
  size_t v9; // r9
  const void *v10; // r1
  unsigned int v11; // r11
  int v14; // [sp+4h] [bp-808h]

  v4 = a2;
  if ( !dword_65E308 )
    return -2;
  v5 = a4;
  if ( dword_65E30C == a1 )
  {
    v6 = a4 > 0x40;
    if ( a4 <= 0x40 )
      v6 = (unsigned __int8)a2 > 3u;
    if ( !v6 )
    {
      v14 = pthread_mutex_lock(&stru_65E310);
      if ( v14 )
      {
        v14 = -4;
        nullsub_8();
      }
      else
      {
        v8 = 0;
        do
        {
          v9 = v5;
          if ( v5 >= 0x10 )
            v9 = 16;
          v10 = (const void *)(a3 + v8);
          v11 = (unsigned __int8)(v4 + 1);
          v8 += v9;
          memcpy((char *)&unk_65E328 + 16 * v4, v10, v9);
          v5 -= v9;
          v4 = (char)v11;
        }
        while ( v11 <= 3 && v5 != 0 );
        write(dword_65E30C, &unk_65E328, 0x40u);
        pthread_mutex_unlock(&stru_65E310);
      }
      return v14;
    }
  }
  nullsub_8();
  return -3;
}

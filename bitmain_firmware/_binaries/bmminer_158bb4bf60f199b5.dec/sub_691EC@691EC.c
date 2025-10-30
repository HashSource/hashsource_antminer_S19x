int __fastcall sub_691EC(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // r7
  unsigned int v5; // r4
  bool v6; // cc
  int v7; // r5
  int v9; // r11
  unsigned __int8 v10; // r5
  size_t v11; // r6
  const void *v12; // r1
  char v15[2052]; // [sp+0h] [bp-804h] BYREF

  v4 = a2;
  if ( !dword_1B11FC )
    return -2;
  v5 = a4;
  if ( dword_1B1200 != a1 )
    goto LABEL_18;
  v6 = a4 > 0x40;
  if ( a4 <= 0x40 )
    v6 = (unsigned __int8)a2 > 3u;
  v7 = v6;
  if ( v6 )
  {
LABEL_18:
    strcpy(v15, "bad param\n");
    sub_47AB4(1, v15, 0);
    return -3;
  }
  else
  {
    v9 = pthread_mutex_lock(&stru_1B1204);
    if ( v9 )
    {
      strcpy(v15, "failed to lcd lock\n");
      sub_47AB4(v7, v15, v7);
      return -4;
    }
    else
    {
      do
      {
        v10 = v4 + 1;
        if ( v5 >= 0x10 )
          v11 = 16;
        else
          v11 = v5;
        v12 = (const void *)(a3 + v9);
        v9 += v11;
        memcpy((char *)&unk_1B121C + 16 * v4, v12, v11);
        v5 -= v11;
        v4 = (char)v10;
      }
      while ( v10 <= 3u && v5 != 0 );
      write(dword_1B1200, &unk_1B121C, 0x40u);
      pthread_mutex_unlock(&stru_1B1204);
      return 0;
    }
  }
}

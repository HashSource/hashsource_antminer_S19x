int __fastcall sub_6E880(int a1, unsigned __int8 a2, int a3, unsigned int a4)
{
  size_t v5; // r3
  char v6; // r2
  unsigned int v8; // [sp+0h] [bp-81Ch]
  unsigned __int8 v10; // [sp+Bh] [bp-811h]
  char v11[2048]; // [sp+10h] [bp-80Ch] BYREF
  size_t n; // [sp+810h] [bp-Ch]
  int v13; // [sp+814h] [bp-8h]

  v8 = a4;
  v10 = a2;
  v13 = 0;
  if ( !dword_53696C )
    return -2;
  if ( a1 == dword_536968 && a2 <= 3u && a4 <= 0x40 )
  {
    if ( pthread_mutex_lock(&stru_536970) )
    {
      strcpy(v11, "failed to lcd lock\n");
      sub_3B6AC(0, v11, 0, (int)v11);
      return -4;
    }
    else
    {
      do
      {
        v5 = v8;
        if ( v8 >= 0x10 )
          v5 = 16;
        n = v5;
        v6 = v10++;
        memcpy((char *)&unk_536988 + 16 * v6, (const void *)(a3 + v13), v5);
        v13 += n;
        v8 -= n;
      }
      while ( v8 && v10 <= 3u );
      write(dword_536968, &unk_536988, 0x40u);
      pthread_mutex_unlock(&stru_536970);
      return 0;
    }
  }
  else
  {
    strcpy(v11, "bad param\n");
    sub_3B6AC(1, v11, 0, (int)v11);
    return -3;
  }
}

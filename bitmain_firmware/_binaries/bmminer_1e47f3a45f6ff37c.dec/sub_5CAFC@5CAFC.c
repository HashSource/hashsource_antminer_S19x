int __fastcall sub_5CAFC(unsigned __int8 a1)
{
  char v4[16]; // [sp+14h] [bp-810h] BYREF
  int v5; // [sp+814h] [bp-10h] BYREF
  __int16 v6; // [sp+818h] [bp-Ch]
  char v7; // [sp+81Ah] [bp-Ah]
  unsigned __int8 v8; // [sp+81Bh] [bp-9h]
  int v9; // [sp+81Ch] [bp-8h]

  v9 = 0;
  if ( a1 <= 0xFu )
  {
    if ( dword_9CD940[2 * a1] && dword_9CD940[2 * a1 + 1] )
    {
      return dword_9CD940[2 * a1];
    }
    else
    {
      v5 = a1;
      v6 = 0;
      v7 = 4;
      v8 = a1;
      pthread_mutex_lock(&stru_536318);
      v9 = sub_6ECB0(&v5);
      pthread_mutex_unlock(&stru_536318);
      if ( v9 >= 0 )
      {
        dword_9CD940[2 * a1] = v9;
        dword_9CD940[2 * a1 + 1] = 1;
      }
      return v9;
    }
  }
  else
  {
    snprintf(v4, 0x800u, "%s: Bad pic param, input chain is %d\n", "open_pic", a1);
    sub_3B6AC(0, v4, 0, (int)v4);
    return -2147483135;
  }
}

int __fastcall sub_182B4(int a1, unsigned int a2, int a3)
{
  int v7; // r3
  __int16 v8; // r4
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( a2 <= 3 )
  {
    if ( a2 )
    {
      if ( a2 == 3 )
      {
        if ( a3 >= sub_27348() )
          goto LABEL_5;
      }
      else if ( !sub_26AC4(a1) || a3 >= sub_179C4() || !dword_B3C54 )
      {
        goto LABEL_5;
      }
    }
    else if ( sub_26AF4() <= a3 )
    {
      goto LABEL_5;
    }
    if ( dword_B3C50 )
    {
      pthread_mutex_lock(&stru_B3C58);
      v8 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(dword_B3C50 + 4 * a1) + 4 * a2) + 6 * a3 + 2);
      pthread_mutex_unlock(&stru_B3C58);
      return v8;
    }
  }
LABEL_5:
  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(s, 0x800u, "get_sensor_temp_by_index invalid return 255!!, location:%d, index:%d", a2, a3);
    sub_3B6AC(4, s, 0, v7);
  }
  return 255;
}

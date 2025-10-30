int __fastcall sub_55C10(int (__fastcall *a1)(int, bool))
{
  char v4[2048]; // [sp+8h] [bp-80Ch] BYREF
  int v5; // [sp+808h] [bp-Ch]
  int i; // [sp+80Ch] [bp-8h]

  i = 0;
  v5 = 0;
  if ( pthread_mutex_lock(&stru_535EE0) )
  {
    strcpy(v4, "failed to api lock\n");
    sub_3B6AC(0, v4, 0, (int)v4);
    return -1;
  }
  else
  {
    for ( i = 0; i <= 4; ++i )
    {
      if ( !dword_535F08[i] )
      {
        dword_535F08[i] = a1;
        break;
      }
    }
    if ( i > 4 )
    {
      v5 = -2;
      strcpy(v4, "no more listener available\n");
      sub_3B6AC(0, v4, 0, (int)v4);
    }
    pthread_mutex_unlock(&stru_535EE0);
    return v5;
  }
}

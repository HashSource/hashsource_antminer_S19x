int __fastcall sub_55D64(int (__fastcall *a1)(int, bool))
{
  char v4[2048]; // [sp+Ch] [bp-808h] BYREF
  int i; // [sp+80Ch] [bp-8h]

  i = 0;
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
      if ( dword_535F08[i] == a1 )
      {
        dword_535F08[i] = 0;
        break;
      }
    }
    if ( i > 4 )
    {
      strcpy(v4, "listener not registered before\n");
      sub_3B6AC(1, v4, 0, (int)v4);
    }
    pthread_mutex_unlock(&stru_535EE0);
    return 0;
  }
}

int __fastcall sub_53344(int a1, int a2)
{
  int v5; // [sp+Ch] [bp-810h] BYREF
  char v6[2048]; // [sp+10h] [bp-80Ch] BYREF
  _DWORD v7[2]; // [sp+810h] [bp-Ch] BYREF

  v5 = a1;
  if ( a2 )
  {
    if ( !dword_531054 )
      sub_53178();
    if ( pthread_mutex_lock(&stru_531078) )
    {
      strcpy(v6, "fail to lock gpio ctrl mutex\n");
      sub_3AF5C(0, v6, 0, (int)v6);
      return -1;
    }
    else
    {
      if ( !sub_584EC(dword_531090, &v5) )
      {
        v7[0] = a2;
        v7[1] = -1;
        sub_5848C(dword_531090, &v5, 4, v7, 8);
      }
      pthread_mutex_unlock(&stru_531078);
      return 0;
    }
  }
  else
  {
    strcpy(v6, "bad param\n");
    sub_3AF5C(0, v6, 0, (int)v6);
    return -1;
  }
}

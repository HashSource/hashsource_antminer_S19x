int __fastcall sub_56ABC(int a1, int a2)
{
  int v5; // [sp+Ch] [bp-810h] BYREF
  char v6[2048]; // [sp+10h] [bp-80Ch] BYREF
  _DWORD v7[2]; // [sp+810h] [bp-Ch] BYREF

  v5 = a1;
  if ( a2 )
  {
    if ( pthread_mutex_lock(&stru_535F78) )
    {
      strcpy(v6, "fail to lock gpio ctrl mutex\n");
      sub_3B6AC(0, v6, 0, (int)v6);
      return -1;
    }
    else
    {
      if ( !sub_594E0(dword_535F90, &v5) )
      {
        v7[0] = a2;
        v7[1] = -1;
        sub_59480(dword_535F90, &v5, 4, v7, 8);
      }
      pthread_mutex_unlock(&stru_535F78);
      return 0;
    }
  }
  else
  {
    strcpy(v6, "bad param\n");
    sub_3B6AC(0, v6, 0, (int)v6);
    return -1;
  }
}

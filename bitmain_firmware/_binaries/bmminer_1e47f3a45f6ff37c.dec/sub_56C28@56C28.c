int __fastcall sub_56C28(int a1, int a2)
{
  int v4; // [sp+4h] [bp-808h] BYREF
  char v5[2048]; // [sp+8h] [bp-804h] BYREF

  v4 = a1;
  if ( a2 )
  {
    if ( pthread_mutex_lock(&stru_535F78) )
    {
      strcpy(v5, "fail to lock gpio ctrl mutex\n");
      sub_3B6AC(0, v5, 0, (int)v5);
      return -1;
    }
    else
    {
      if ( sub_594E0(dword_535F90, &v4) == 1 )
      {
        sub_5954C(dword_535F90, &v4);
      }
      else
      {
        strcpy(v5, "callback function not registered before\n");
        sub_3B6AC(1, v5, 0, (int)v5);
      }
      pthread_mutex_unlock(&stru_535F78);
      return 0;
    }
  }
  else
  {
    strcpy(v5, "bad param\n");
    sub_3B6AC(0, v5, 0, (int)v5);
    return -1;
  }
}

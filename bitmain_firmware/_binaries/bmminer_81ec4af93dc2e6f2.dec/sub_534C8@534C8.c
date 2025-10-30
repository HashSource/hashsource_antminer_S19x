int __fastcall sub_534C8(int a1, int a2)
{
  int v4; // [sp+4h] [bp-808h] BYREF
  char v5[2048]; // [sp+8h] [bp-804h] BYREF

  v4 = a1;
  if ( a2 )
  {
    if ( pthread_mutex_lock(&stru_531078) )
    {
      strcpy(v5, "fail to lock gpio ctrl mutex\n");
      sub_3AF5C(0, v5, 0, (int)v5);
      return -1;
    }
    else
    {
      if ( sub_584EC(dword_531090, &v4) == 1 )
      {
        sub_58558(dword_531090, &v4);
      }
      else
      {
        strcpy(v5, "callback function not registered before\n");
        sub_3AF5C(1, v5, 0, (int)v5);
      }
      pthread_mutex_unlock(&stru_531078);
      return 0;
    }
  }
  else
  {
    strcpy(v5, "bad param\n");
    sub_3AF5C(0, v5, 0, (int)v5);
    return -1;
  }
}

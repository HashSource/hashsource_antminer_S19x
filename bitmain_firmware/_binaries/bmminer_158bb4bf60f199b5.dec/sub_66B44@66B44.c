int __fastcall sub_66B44(int a1, int a2)
{
  int v3; // [sp+4h] [bp-808h] BYREF
  char v4[2052]; // [sp+8h] [bp-804h] BYREF

  v3 = a1;
  if ( a2 )
  {
    if ( pthread_mutex_lock(&stru_1B0E7C) )
    {
      strcpy(v4, "fail to lock gpio ctrl mutex\n");
      sub_47AB4(0, v4, 0);
      return -1;
    }
    else
    {
      if ( sub_69F3C(dword_1B0E94, &v3) == 1 )
      {
        sub_69F5C(dword_1B0E94, &v3);
      }
      else
      {
        strcpy(v4, "callback function not registered before\n");
        sub_47AB4(1, v4, 0);
      }
      pthread_mutex_unlock(&stru_1B0E7C);
      return 0;
    }
  }
  else
  {
    strcpy(v4, "bad param\n");
    sub_47AB4(0, v4, 0);
    return -1;
  }
}

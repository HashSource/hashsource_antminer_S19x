void __fastcall sub_7699C(int a1)
{
  _DWORD *v1; // r4
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( pthread_mutex_lock(&stru_65EA38) )
  {
    strcpy(s, "failed to i2c lock\n");
    nullsub_8();
  }
  else
  {
    if ( sub_700FC((_DWORD *)dword_65EA34) == (_DWORD *)1 )
    {
      sub_70110((_DWORD *)dword_65EA34);
    }
    else
    {
      snprintf(s, 0x800u, "ctx(%d) is not inited\n", a1);
      nullsub_8();
    }
    v1 = sub_7019C(dword_65EA34);
    if ( ((int (*)(void))*v1)() )
    {
      while ( ((int (__fastcall *)(_DWORD *))*v1)(v1) )
        ;
      j_j_free(v1);
      pthread_mutex_unlock(&stru_65EA38);
    }
    else
    {
      j_j_free(v1);
      pthread_mutex_unlock(&stru_65EA38);
      dword_65EA30 = 0;
      sub_70180((void **)dword_65EA34);
      dword_65EA34 = 0;
    }
  }
}

void __fastcall sub_73C78(int a1)
{
  _DWORD *v1; // r4
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( pthread_mutex_lock(&stru_1B14D4) )
  {
    strcpy(s, "failed to i2c lock\n");
    sub_47AB4(0, s, 0);
  }
  else
  {
    if ( sub_69F3C((_DWORD *)dword_1B14D0) == (_DWORD *)1 )
    {
      sub_69F5C((_DWORD *)dword_1B14D0);
    }
    else
    {
      snprintf(s, 0x800u, "ctx(%d) is not inited\n", a1);
      sub_47AB4(1, s, 0);
    }
    v1 = sub_6A044(dword_1B14D0);
    if ( ((int (*)(void))*v1)() )
    {
      while ( ((int (__fastcall *)(_DWORD *))*v1)(v1) )
        ;
      j_free(v1);
      pthread_mutex_unlock(&stru_1B14D4);
    }
    else
    {
      j_free(v1);
      pthread_mutex_unlock(&stru_1B14D4);
      dword_1B14CC = 0;
      sub_6A018((void **)dword_1B14D0);
      dword_1B14D0 = 0;
    }
  }
}

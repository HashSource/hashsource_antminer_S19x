int __fastcall sub_74568(int a1, int a2, int a3)
{
  _DWORD *v6; // r4
  int *v7; // r0
  int *v8; // r5
  int v9; // r12
  void (__fastcall *v10)(_DWORD *, _DWORD *, int); // r3
  _DWORD v12[513]; // [sp+0h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_1B14D4) )
  {
    strcpy((char *)v12, "failed to i2c lock\n");
    sub_47AB4(0, (const char *)v12, 0);
    return -4;
  }
  else
  {
    v6 = sub_6A044(dword_1B14D0);
    if ( ((int (*)(void))*v6)() )
    {
      while ( ***(_DWORD ***)(v6[5] + 16) != a1 )
      {
        if ( !((int (__fastcall *)(_DWORD *))*v6)(v6) )
          goto LABEL_8;
      }
      v7 = (int *)((int (*)(void))v6[2])();
      v8 = v7;
      if ( a2 == 1795 )
      {
        v9 = *v7;
        v10 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v6[1];
        v12[1] = a3;
        v12[0] = v9;
        v10(v6, v12, 8);
        free(v8);
      }
    }
LABEL_8:
    j_free(v6);
    pthread_mutex_unlock(&stru_1B14D4);
    return 0;
  }
}

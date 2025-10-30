int __fastcall sub_7467C(int a1, int a2)
{
  _DWORD *v4; // r4
  _DWORD *v5; // r5
  void (__fastcall *v6)(_DWORD *, _DWORD *, int); // r3
  int v7; // r12
  _DWORD v9[512]; // [sp+0h] [bp-800h] BYREF

  if ( pthread_mutex_lock(&stru_1B14D4) )
  {
    strcpy((char *)v9, "failed to i2c lock\n");
    sub_47AB4(0, (const char *)v9, 0);
    return -4;
  }
  else
  {
    v4 = sub_6A044(dword_1B14D0);
    if ( ((int (*)(void))*v4)() )
    {
      while ( ***(_DWORD ***)(v4[5] + 16) != a1 )
      {
        if ( !((int (__fastcall *)(_DWORD *))*v4)(v4) )
          goto LABEL_7;
      }
      v5 = (_DWORD *)((int (*)(void))v4[2])();
      v6 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v4[1];
      v7 = v5[1];
      v9[0] = a2;
      v9[1] = v7;
      v6(v4, v9, 8);
      free(v5);
    }
LABEL_7:
    j_free(v4);
    pthread_mutex_unlock(&stru_1B14D4);
    return 0;
  }
}

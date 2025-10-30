int __fastcall sub_770B0(int a1, int a2, int a3)
{
  int v6; // r6
  _DWORD *v7; // r4
  int *v8; // r0
  int *v9; // r5
  int v11; // r0
  void (__fastcall *v12)(_DWORD *, _DWORD *, int); // r3
  _DWORD v13[512]; // [sp+0h] [bp-800h] BYREF

  if ( pthread_mutex_lock(&stru_65EA38) )
  {
    v6 = -4;
    strcpy((char *)v13, "failed to i2c lock\n");
    nullsub_8();
  }
  else
  {
    v6 = 0;
    v7 = sub_7019C(dword_65EA34);
    if ( ((int (*)(void))*v7)() )
    {
      while ( ***(_DWORD ***)(v7[5] + 16) != a1 )
      {
        if ( !((int (__fastcall *)(_DWORD *))*v7)(v7) )
          goto LABEL_8;
      }
      v8 = (int *)((int (*)(void))v7[2])();
      v9 = v8;
      if ( a2 == 1795 )
      {
        v11 = *v8;
        v12 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v7[1];
        v13[1] = a3;
        v13[0] = v11;
        v12(v7, v13, 8);
        free(v9);
      }
    }
LABEL_8:
    j_j_free(v7);
    pthread_mutex_unlock(&stru_65EA38);
  }
  return v6;
}

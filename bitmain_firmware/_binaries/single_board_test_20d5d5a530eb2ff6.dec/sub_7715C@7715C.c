int __fastcall sub_7715C(int a1, int a2)
{
  int v4; // r6
  _DWORD *v5; // r4
  _DWORD *v6; // r5
  void (__fastcall *v7)(_DWORD *, _DWORD *, int); // r3
  int v8; // r2
  _DWORD v10[513]; // [sp+0h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_65EA38) )
  {
    v4 = -4;
    strcpy((char *)v10, "failed to i2c lock\n");
    nullsub_8();
  }
  else
  {
    v4 = 0;
    v5 = sub_7019C(dword_65EA34);
    if ( ((int (*)(void))*v5)() )
    {
      while ( ***(_DWORD ***)(v5[5] + 16) != a1 )
      {
        if ( !((int (__fastcall *)(_DWORD *))*v5)(v5) )
          goto LABEL_7;
      }
      v6 = (_DWORD *)((int (*)(void))v5[2])();
      v7 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v5[1];
      v8 = v6[1];
      v10[0] = a2;
      v10[1] = v8;
      v7(v5, v10, 8);
      free(v6);
    }
LABEL_7:
    j_j_free(v5);
    pthread_mutex_unlock(&stru_65EA38);
  }
  return v4;
}

int sub_6E780()
{
  _DWORD *v0; // r4
  void (__fastcall *v1)(_DWORD *, _DWORD *, int); // r3
  int v2; // r6
  _DWORD *v3; // r5
  int v4; // r6
  unsigned __int8 v6; // [sp+Fh] [bp-Dh] BYREF
  _DWORD v7[3]; // [sp+10h] [bp-Ch] BYREF

  prctl(15, "gpio", 0);
  while ( dword_65DFC0 )
  {
    if ( !pthread_mutex_lock(&stru_65DF8C) )
    {
      v0 = (_DWORD *)sub_7019C(dword_65DFA4);
      if ( ((int (*)(void))*v0)() )
      {
        while ( 1 )
        {
          v2 = v0[5];
          v3 = (_DWORD *)((int (*)(void))v0[2])();
          v4 = ***(_DWORD ***)(v2 + 16);
          v6 = 0;
          if ( sub_6E690(v4, &v6) )
            break;
          if ( v3[1] != v6 )
          {
            ((void (__fastcall *)(int, _DWORD))*v3)(v4, v6);
            v1 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v0[1];
            v7[0] = *v3;
            v7[1] = v6;
            v1(v0, v7, 8);
          }
          free(v3);
          if ( !((int (__fastcall *)(_DWORD *))*v0)(v0) )
            goto LABEL_12;
        }
        free(v3);
      }
LABEL_12:
      j_j_free(v0);
      pthread_mutex_unlock(&stru_65DF8C);
    }
    usleep(0x30D40u);
  }
  return 0;
}

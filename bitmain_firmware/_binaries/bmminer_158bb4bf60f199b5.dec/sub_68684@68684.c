int sub_68684()
{
  int (**v0)(void); // r5
  int v1; // r2
  int v2; // r0
  int v3; // r3
  int *v4; // r0
  int v5; // r3
  int *v6; // r4
  _DWORD v8[3]; // [sp+Ch] [bp-Ch] BYREF

  prctl(15, "ui", 0);
  while ( dword_1B11BC )
  {
    if ( !pthread_mutex_lock(&stru_1B11C0) )
    {
      v0 = (int (**)(void))sub_6A044(dword_1B11D8);
      if ( (*v0)() )
      {
        do
        {
          v4 = (int *)v0[2]();
          v5 = v4[1];
          v6 = v4;
          if ( v5 )
          {
            v1 = *v4;
            v2 = v4[2];
          }
          else
          {
            sub_6739C(***((_DWORD ***)v0[5] + 4), *((unsigned __int8 *)v4 + 8));
            v5 = *v6;
            v2 = v6[2] != 1;
            v1 = *v6;
            v6[2] = v2;
          }
          v3 = v5 - 200;
          v8[0] = v1;
          v6[1] = v3;
          v8[1] = v3;
          v8[2] = v2;
          ((void (__fastcall *)(int (**)(void), _DWORD *))v0[1])(v0, v8);
          free(v6);
        }
        while ( ((int (__fastcall *)(int (**)(void)))*v0)(v0) );
      }
      j_free(v0);
      pthread_mutex_unlock(&stru_1B11C0);
    }
    usleep((__useconds_t)&loc_30D40);
  }
  return 0;
}

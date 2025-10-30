int sub_52F98()
{
  _DWORD v1[2]; // [sp+814h] [bp-28h] BYREF
  unsigned __int8 v2; // [sp+81Fh] [bp-1Dh] BYREF
  int v3; // [sp+820h] [bp-1Ch]
  void *ptr; // [sp+824h] [bp-18h]
  int v5; // [sp+828h] [bp-14h]
  int v6; // [sp+82Ch] [bp-10h]
  int v7; // [sp+830h] [bp-Ch]
  int i; // [sp+834h] [bp-8h]

  v7 = 0;
  prctl(15, "gpio", 0, 0, 0);
  while ( dword_531058 )
  {
    if ( !pthread_mutex_lock(&stru_531078) )
    {
      v6 = sub_588A0(dword_531090);
      for ( i = (*(int (__fastcall **)(int))v6)(v6); i; i = (*(int (__fastcall **)(int))v6)(v6) )
      {
        v5 = *(_DWORD *)(v6 + 20);
        ptr = (void *)(*(int (__fastcall **)(int))(v6 + 8))(i);
        v3 = ***(_DWORD ***)(v5 + 16);
        v2 = 0;
        v7 = sub_53D88(v3, &v2);
        if ( v7 )
        {
          free(ptr);
          break;
        }
        if ( *((_DWORD *)ptr + 1) != v2 )
        {
          (*(void (__fastcall **)(int, _DWORD))ptr)(v3, v2);
          v1[0] = *(_DWORD *)ptr;
          v1[1] = v2;
          (*(void (__fastcall **)(int, _DWORD *, int))(v6 + 4))(v6, v1, 8);
        }
        free(ptr);
      }
      sub_58924(v6);
      pthread_mutex_unlock(&stru_531078);
    }
    usleep(0x30D40u);
  }
  return 0;
}

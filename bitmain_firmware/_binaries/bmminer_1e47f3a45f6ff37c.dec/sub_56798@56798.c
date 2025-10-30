int sub_56798()
{
  _DWORD v1[2]; // [sp+80Ch] [bp-28h] BYREF
  unsigned __int8 v2; // [sp+817h] [bp-1Dh] BYREF
  int v3; // [sp+818h] [bp-1Ch]
  void *ptr; // [sp+81Ch] [bp-18h]
  int v5; // [sp+820h] [bp-14h]
  int v6; // [sp+824h] [bp-10h]
  int v7; // [sp+828h] [bp-Ch]
  int i; // [sp+82Ch] [bp-8h]

  v7 = 0;
  prctl(15, "gpio");
  while ( dword_535F58 )
  {
    if ( !pthread_mutex_lock(&stru_535F78) )
    {
      v6 = sub_59890(dword_535F90);
      for ( i = (*(int (__fastcall **)(int))v6)(v6); i; i = (*(int (__fastcall **)(int))v6)(v6) )
      {
        v5 = *(_DWORD *)(v6 + 20);
        ptr = (void *)(*(int (__fastcall **)(int))(v6 + 8))(i);
        v3 = ***(_DWORD ***)(v5 + 16);
        v2 = 0;
        v7 = sub_57458(v3, &v2);
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
      sub_59914(v6);
      pthread_mutex_unlock(&stru_535F78);
    }
    usleep(0x30D40u);
  }
  return 0;
}

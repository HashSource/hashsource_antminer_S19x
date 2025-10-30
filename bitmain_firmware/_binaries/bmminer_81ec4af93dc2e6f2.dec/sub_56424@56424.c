int sub_56424()
{
  _DWORD v1[3]; // [sp+14h] [bp-20h] BYREF
  int v2; // [sp+20h] [bp-14h]
  void *ptr; // [sp+24h] [bp-10h]
  int v4; // [sp+28h] [bp-Ch]
  int i; // [sp+2Ch] [bp-8h]

  prctl(15, &unk_99614, 0, 0, 0);
  while ( dword_5313C4 )
  {
    if ( !pthread_mutex_lock(&stru_5313A4) )
    {
      v4 = sub_588A0(dword_5313BC);
      for ( i = (*(int (__fastcall **)(int))v4)(v4); i; i = (*(int (__fastcall **)(int))v4)(v4) )
      {
        ptr = (void *)(*(int (__fastcall **)(int))(v4 + 8))(i);
        v2 = *(_DWORD *)(v4 + 20);
        if ( !*((_DWORD *)ptr + 1) )
        {
          sub_53F6C(***(_DWORD ***)(v2 + 16), *((_DWORD *)ptr + 2));
          *((_DWORD *)ptr + 2) = *((_DWORD *)ptr + 2) != 1;
          *((_DWORD *)ptr + 1) = *(_DWORD *)ptr;
        }
        *((_DWORD *)ptr + 1) -= 200;
        *((_DWORD *)ptr + 1) = *((_DWORD *)ptr + 1);
        v1[0] = *(_DWORD *)ptr;
        v1[1] = *((_DWORD *)ptr + 1);
        v1[2] = *((_DWORD *)ptr + 2);
        (*(void (__fastcall **)(int, _DWORD *, int))(v4 + 4))(v4, v1, 12);
        free(ptr);
      }
      sub_58924(v4);
      pthread_mutex_unlock(&stru_5313A4);
    }
    usleep(0x30D40u);
  }
  return 0;
}

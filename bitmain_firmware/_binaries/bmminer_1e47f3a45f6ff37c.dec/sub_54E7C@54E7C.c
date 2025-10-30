int sub_54E7C()
{
  _DWORD v1[3]; // [sp+Ch] [bp-20h] BYREF
  int v2; // [sp+18h] [bp-14h]
  void *ptr; // [sp+1Ch] [bp-10h]
  int v4; // [sp+20h] [bp-Ch]
  int i; // [sp+24h] [bp-8h]

  prctl(15, &unk_9C524);
  while ( dword_535F00 )
  {
    if ( !pthread_mutex_lock(&stru_535EE0) )
    {
      v4 = sub_59890(dword_535EF8);
      for ( i = (*(int (__fastcall **)(int))v4)(v4); i; i = (*(int (__fastcall **)(int))v4)(v4) )
      {
        ptr = (void *)(*(int (__fastcall **)(int))(v4 + 8))(i);
        v2 = *(_DWORD *)(v4 + 20);
        if ( !*((_DWORD *)ptr + 1) )
        {
          sub_5763C(***(_DWORD ***)(v2 + 16), (unsigned __int8)*((_DWORD *)ptr + 2));
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
      sub_59914(v4);
      pthread_mutex_unlock(&stru_535EE0);
    }
    usleep(0x30D40u);
  }
  return 0;
}

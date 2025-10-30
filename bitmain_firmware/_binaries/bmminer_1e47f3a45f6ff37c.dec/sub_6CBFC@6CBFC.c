int __fastcall sub_6CBFC(int a1)
{
  _DWORD v2[2]; // [sp+4h] [bp-828h] BYREF
  char v3[2048]; // [sp+Ch] [bp-820h] BYREF
  void *v4; // [sp+80Ch] [bp-20h] BYREF
  void *ptr; // [sp+810h] [bp-1Ch]
  _DWORD *v6; // [sp+814h] [bp-18h]
  const char *v7; // [sp+818h] [bp-14h]
  int v8; // [sp+81Ch] [bp-10h]
  int i; // [sp+820h] [bp-Ch]
  int v10; // [sp+824h] [bp-8h]

  v2[0] = a1;
  v8 = 0;
  v10 = 1;
  v4 = 0;
  if ( pthread_mutex_lock(&stru_536944) )
  {
    strcpy(v3, "failed to i2c lock\n");
    return sub_3B6AC(0, v3, 0, (int)v3);
  }
  else
  {
    if ( sub_59620((_DWORD *)dword_53695C, (int)v2, (int)&v4) == 1 )
    {
      v7 = (const char *)v4;
      sub_5954C((_DWORD *)dword_53695C, (int)v2);
      v6 = sub_59890(dword_53695C);
      for ( i = ((int (__fastcall *)(_DWORD *))*v6)(v6); i; i = ((int (__fastcall *)(_DWORD *))*v6)(v6) )
      {
        ptr = (void *)((int (__fastcall *)(int))v6[2])(i);
        if ( !strncmp(v7 + 12, (const char *)ptr + 12, 0x100u) )
        {
          v10 = 0;
          free(ptr);
          break;
        }
        free(ptr);
      }
      sub_59914(v6);
    }
    else
    {
      v10 = 0;
      snprintf(v3, 0x800u, "ctx(%d) not inited\n", v2[0]);
      sub_3B6AC(1, v3, 0, (int)v3);
    }
    if ( v10 )
      close(*((_DWORD *)v4 + 1));
    if ( v4 )
      free(v4);
    return pthread_mutex_unlock(&stru_536944);
  }
}

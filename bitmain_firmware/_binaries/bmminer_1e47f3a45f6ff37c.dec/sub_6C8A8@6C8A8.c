int __fastcall sub_6C8A8(const char *a1)
{
  _DWORD v4[512]; // [sp+10h] [bp-81Ch] BYREF
  int v5; // [sp+810h] [bp-1Ch]
  void *ptr; // [sp+814h] [bp-18h]
  _DWORD *v7; // [sp+818h] [bp-14h]
  int v8; // [sp+81Ch] [bp-10h]
  int i; // [sp+820h] [bp-Ch]
  int v10; // [sp+824h] [bp-8h]

  v8 = -1;
  v10 = 1;
  if ( !pthread_mutex_lock(&stru_536944) )
  {
    if ( !dword_536960 )
      dword_53695C = (int)sub_59400(444528, 0, 0);
    v7 = sub_59890(dword_53695C);
    for ( i = ((int (__fastcall *)(_DWORD *))*v7)(v7); i; i = ((int (__fastcall *)(_DWORD *))*v7)(v7) )
    {
      ptr = (void *)((int (__fastcall *)(int))v7[2])(i);
      if ( !strncmp(a1, (const char *)ptr + 12, 0x100u) )
      {
        memset(v4, 0, 0x10Cu);
        v4[0] = ++dword_536960;
        v4[1] = *((_DWORD *)ptr + 1);
        strncpy((char *)&v4[3], a1, 0x100u);
        sub_59480((_DWORD *)dword_53695C, (int)&dword_536960, 4, (int)v4, 268);
        v10 = 0;
        free(ptr);
        break;
      }
      free(ptr);
    }
    sub_59914(v7);
    if ( v10 )
    {
      v5 = open(a1, 2050);
      if ( v5 < 0 )
      {
        snprintf((char *)v4, 0x800u, "failed to open %s\n", a1);
        sub_3B6AC(0, (const char *)v4, 0, (int)v4);
        pthread_mutex_unlock(&stru_536944);
        return -1;
      }
      memset(v4, 0, 0x10Cu);
      v4[0] = ++dword_536960;
      v4[1] = v5;
      strncpy((char *)&v4[3], a1, 0x100u);
      sub_59480((_DWORD *)dword_53695C, (int)&dword_536960, 4, (int)v4, 268);
    }
    pthread_mutex_unlock(&stru_536944);
    return dword_536960;
  }
  strcpy((char *)v4, "failed to i2c lock\n");
  sub_3B6AC(0, (const char *)v4, 0, (int)v4);
  return -4;
}

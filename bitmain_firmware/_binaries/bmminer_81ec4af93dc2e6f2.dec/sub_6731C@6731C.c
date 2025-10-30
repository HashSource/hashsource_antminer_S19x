int sub_6731C()
{
  int v1; // r0
  int v2; // r0
  void *v3; // r0
  char v5[2048]; // [sp+0h] [bp-814h] BYREF
  int v6; // [sp+800h] [bp-14h] BYREF
  __int16 v7; // [sp+804h] [bp-10h]
  char v8; // [sp+806h] [bp-Eh]
  char v9; // [sp+807h] [bp-Dh]
  int v10; // [sp+808h] [bp-Ch]
  int v11; // [sp+80Ch] [bp-8h]

  v11 = 0;
  v10 = 0;
  if ( dword_531538 && dword_53153C )
    return dword_531538;
  v6 = 0;
  v7 = 1;
  v8 = 2;
  v9 = 0;
  pthread_mutex_lock(&stru_531520);
  v11 = sub_6A5F8(&v6);
  v1 = pthread_mutex_unlock(&stru_531520);
  if ( v11 < 0 )
    return v11;
  dword_531538 = v11;
  dword_53153C = 1;
  v11 = sub_67764(v1);
  if ( v11 >= 0 )
  {
    dword_531540 = v11;
    snprintf(v5, 0x800u, "power open power_version = 0x%x\n", v11);
    sub_3AF5C(3, v5, 0, (int)v5);
    if ( dword_531540 == 193 )
    {
      v10 = sub_646C4(dword_531538);
      snprintf(v5, 0x800u, "power fw_version = 0x%x\n", v10);
      sub_3AF5C(3, v5, 0, (int)v5);
    }
    v3 = memset(&unk_531548, 0, 0x160u);
    if ( sub_69438(v3) )
    {
      byte_531544 = 0;
      strcpy(v5, "power is not Calibrated\n");
    }
    else
    {
      byte_531544 = 1;
      strcpy(v5, "power is Calibrated\n");
    }
    sub_3AF5C(3, v5, 0, (int)v5);
    return 0;
  }
  else
  {
    strcpy(v5, "power open power_version < 0 will close power\n");
    v2 = sub_3AF5C(3, v5, 0, (int)v5);
    sub_675F4(v2);
    return v11;
  }
}

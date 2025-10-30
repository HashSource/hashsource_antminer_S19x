int sub_666FC()
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
  if ( dword_536348 && dword_53634C )
    return dword_536348;
  v6 = 0;
  v7 = 1;
  v8 = 2;
  v9 = 0;
  pthread_mutex_lock(&stru_536330);
  v11 = sub_6ECB0(&v6);
  v1 = pthread_mutex_unlock(&stru_536330);
  if ( v11 < 0 )
    return v11;
  dword_536348 = v11;
  dword_53634C = 1;
  v11 = sub_66B44(v1);
  if ( v11 >= 0 )
  {
    dword_536350 = v11;
    snprintf(v5, 0x800u, "power open power_version = 0x%x\n", v11);
    sub_3B6AC(3, v5, 0, (int)v5);
    if ( dword_536350 == 193 )
    {
      v10 = sub_632F4(dword_536348);
      snprintf(v5, 0x800u, "power fw_version = 0x%x\n", v10);
      sub_3B6AC(3, v5, 0, (int)v5);
    }
    v3 = memset(&unk_536358, 0, 0x160u);
    if ( sub_68948(v3) )
    {
      byte_536354 = 0;
      strcpy(v5, "power is not Calibrated\n");
    }
    else
    {
      byte_536354 = 1;
      strcpy(v5, "power is Calibrated\n");
    }
    sub_3B6AC(3, v5, 0, (int)v5);
    return 0;
  }
  else
  {
    strcpy(v5, "power open power_version < 0 will close power\n");
    v2 = sub_3B6AC(3, v5, 0, (int)v5);
    sub_669D4(v2);
    return v11;
  }
}

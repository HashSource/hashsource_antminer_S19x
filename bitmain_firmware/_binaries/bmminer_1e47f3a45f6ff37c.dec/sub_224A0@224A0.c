int __fastcall sub_224A0(int a1)
{
  int v2; // r0
  int v3; // r6
  int v5; // r3
  int v6; // r0
  int v7; // r6
  unsigned int v8; // r0
  int v9; // r0
  int v10; // r4
  int v11; // r0
  int v12; // r3
  int v13; // r3
  int v14; // r0
  unsigned int v15; // r0
  int v16; // r3
  char v17[2048]; // [sp+0h] [bp-800h] BYREF

  v2 = sub_66B44();
  v3 = v2;
  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(v17, 0x800u, "power type version: 0x%04x\n", v2);
    sub_3B6AC(3, v17, 0, v5);
  }
  dword_B3DE0 = v3;
  if ( !sub_272F4((unsigned __int16)v3) )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v17, "power type version error\n");
      sub_3B6AC(3, v17, 0, *(_DWORD *)"ersion error\n");
    }
    return -1;
  }
  v6 = sub_66404(0);
  v7 = v6;
  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(v17, 0x800u, "disable power watchdog: 0x%04x\n", v6);
    sub_3B6AC(3, v17, 0, v12);
    if ( v7 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(v17, 0x800u, "%s power disable watchdog error.\n", "power_init");
        sub_3B6AC(3, v17, 0, v13);
        return v7;
      }
      return v7;
    }
  }
  else if ( v6 )
  {
    return v7;
  }
  v8 = sleep(1u);
  v9 = sub_57920(v8);
  if ( dword_B3DE0 == 193 )
  {
    v14 = sub_65E40(v9);
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(v17, 0x800u, "power his_sta = 0x%x", v14);
      sub_3B6AC(3, v17, 0, v16);
    }
    sub_65F68();
    v15 = sleep(5u);
    sub_65E40(v15);
  }
  sleep(0xAu);
  v10 = sub_223A0(a1);
  v11 = usleep(0x186A0u);
  if ( v10 )
    return v10;
  sub_578D8(v11);
  return 0;
}

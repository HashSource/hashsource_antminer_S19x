int __fastcall sub_21F88(int a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r6
  int v6; // r0
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r3
  int v11; // r3
  int v12; // r3
  int v13; // r0
  unsigned int v14; // r0
  int v15; // r3
  char v16[2048]; // [sp+0h] [bp-800h] BYREF

  v2 = sub_67764();
  v3 = v2;
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(v16, 0x800u, "power type version: 0x%04x\n", v2);
    sub_3AF5C(3, v16, 0, v10);
  }
  dword_B106C = v3;
  if ( sub_26DA4((unsigned __int16)v3) )
  {
    v6 = sub_67024(0);
    v4 = v6;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(v16, 0x800u, "disable power watchdog: 0x%04x\n", v6);
      sub_3AF5C(3, v16, 0, v11);
      if ( v4 )
      {
        if ( (unsigned int)off_AFC24 > 3 )
        {
          snprintf(v16, 0x800u, "%s power disable watchdog error.\n", "power_init");
          sub_3AF5C(3, v16, 0, v12);
        }
        return v4;
      }
    }
    else if ( v6 )
    {
      return v4;
    }
    v7 = sleep(1u);
    v8 = sub_563DC(v7);
    if ( dword_B106C == 193 )
    {
      v13 = sub_66A58(v8);
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf(v16, 0x800u, "power his_sta = 0x%x", v13);
        sub_3AF5C(3, v16, 0, v15);
      }
      sub_66B80();
      v14 = sleep(5u);
      sub_66A58(v14);
    }
    sleep(0xAu);
    v4 = sub_21E80(a1);
    v9 = usleep((__useconds_t)&off_186A0);
    if ( !v4 )
      sub_56394(v9);
    return v4;
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v16, "power type version error\n");
    sub_3AF5C(3, v16, 0, *(_DWORD *)"ersion error\n");
    return -1;
  }
  return -1;
}

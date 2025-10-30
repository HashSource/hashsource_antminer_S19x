int sub_2F568()
{
  int result; // r0
  bool v1; // zf
  int v2; // r2
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r3
  int v7; // r0
  int v8; // r0
  int v9; // r5
  int v10; // r3
  int v11; // r3
  int v12; // [sp+0h] [bp-80Ch] BYREF
  unsigned int seed; // [sp+4h] [bp-808h]
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  sub_3D7A0(&v12);
  result = (int)dword_4B6CD4;
  v1 = dword_4B6CD4[0] == 0;
  if ( !dword_4B6CD4[0] )
    v1 = dword_4B6CD4[1] == 0;
  if ( v1 )
    return sub_3D7A0(dword_4B6CD4);
  v2 = v12 - dword_4B6CD4[0];
  if ( (int)(seed - dword_4B6CD4[1]) < 0 )
    --v2;
  if ( v2 <= 300 )
  {
    if ( !dword_B13C4 )
    {
      if ( dword_B13C0 )
      {
        if ( (unsigned int)off_AFC24 > 3 )
        {
          strcpy(s, "network connection resume");
          result = sub_3AF5C(3, s, 0, *(_DWORD *)"ection resume");
        }
        v3 = sub_3F37C(result);
        result = sub_43B4C(v3, 0);
        dword_B13C0 = 0;
      }
      return result;
    }
    v7 = sub_3795C(dword_4B6CD4) + dword_B13C0;
    if ( !v7 )
      v7 = seed;
    srandom(v7);
    v8 = random();
    v9 = v8 % 300 + 1;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(s, 0x800u, "network connection resume, restart after %d secs", v8 % 300 + 1);
      sub_3AF5C(3, s, 0, v10);
      if ( !v9 )
        goto LABEL_28;
    }
    else if ( v8 % 300 == -1 )
    {
LABEL_30:
      result = sub_43B4C(7, "network connection resume, restart...");
      dword_B13C4 = 0;
      dword_B13C0 = 0;
      return result;
    }
    do
    {
      sleep(1u);
      --v9;
    }
    while ( v9 );
LABEL_28:
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "send msg for restart...");
      sub_3AF5C(3, s, 0, *(_DWORD *)" restart...");
    }
    goto LABEL_30;
  }
  if ( dword_B13C0 )
  {
    if ( v2 >= (unsigned int)(dword_B13C0 + 300) && !dword_B13C4 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf(s, 0x800u, "network connection lost for 5 min + %d seconds, power off...", dword_B13C0);
        sub_3AF5C(3, s, 0, v11);
      }
      result = sub_43B4C(21, "power off by NET_LOST");
      dword_B13C4 = 1;
    }
  }
  else
  {
    v4 = sub_43B4C(4, "network connection lost");
    v5 = sub_3795C(v4);
    if ( !v5 )
      v5 = seed;
    srandom(v5);
    result = random();
    dword_B13C0 = result % 300 + 1;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(s, 0x800u, "will power off in %d seconds in case not resume", result % 300 + 1);
      return sub_3AF5C(3, s, 0, v6);
    }
  }
  return result;
}

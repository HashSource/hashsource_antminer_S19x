int sub_2FBA0()
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
  int v9; // r4
  int v10; // r3
  int v11; // r3
  int v12; // [sp+0h] [bp-808h] BYREF
  unsigned int seed; // [sp+4h] [bp-804h]
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  sub_3DFCC(&v12);
  result = (int)dword_534B60;
  v1 = dword_534B60[0] == dword_534B60[1];
  if ( dword_534B60[0] == dword_534B60[1] )
    v1 = dword_534B60[0] == 0;
  if ( v1 )
    return sub_3DFCC(dword_534B60);
  v2 = v12 - dword_534B60[0];
  if ( (int)(seed - dword_534B60[1]) < 0 )
    --v2;
  if ( v2 <= 300 )
  {
    if ( !dword_B4134 )
    {
      if ( dword_B4130 )
      {
        if ( (unsigned int)dword_B308C > 3 )
        {
          strcpy(s, "network connection resume");
          result = sub_3B6AC(3, s, 0, *(_DWORD *)"ection resume");
        }
        v3 = sub_40F64(result);
        result = sub_458A0(v3, 0);
        dword_B4130 = 0;
      }
      return result;
    }
    v7 = sub_37F9C(dword_534B60) + dword_B4130;
    if ( !v7 )
      v7 = seed;
    srandom(v7);
    v8 = random();
    v9 = v8 % 300 + 1;
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(s, 0x800u, "network connection resume, restart after %d secs", v9);
      sub_3B6AC(3, s, 0, v10);
      if ( !v9 )
        goto LABEL_28;
    }
    else if ( v8 % 300 == -1 )
    {
LABEL_30:
      result = sub_458A0(7, "network connection resume, restart...");
      dword_B4134 = 0;
      dword_B4130 = 0;
      return result;
    }
    do
    {
      sleep(1u);
      --v9;
    }
    while ( v9 );
LABEL_28:
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "send msg for restart...");
      sub_3B6AC(3, s, 0, *(_DWORD *)" restart...");
    }
    goto LABEL_30;
  }
  if ( dword_B4130 )
  {
    if ( v2 >= (unsigned int)(dword_B4130 + 300) && !dword_B4134 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(s, 0x800u, "network connection lost for 5 min + %d seconds, power off...", dword_B4130);
        sub_3B6AC(3, s, 0, v11);
      }
      result = sub_458A0(21, "power off by NET_LOST");
      dword_B4134 = 1;
    }
  }
  else
  {
    v4 = sub_458A0(4, "network connection lost");
    v5 = sub_37F9C(v4);
    if ( !v5 )
      v5 = seed;
    srandom(v5);
    result = random();
    dword_B4130 = result % 300 + 1;
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(s, 0x800u, "will power off in %d seconds in case not resume", result % 300 + 1);
      return sub_3B6AC(3, s, 0, v6);
    }
  }
  return result;
}

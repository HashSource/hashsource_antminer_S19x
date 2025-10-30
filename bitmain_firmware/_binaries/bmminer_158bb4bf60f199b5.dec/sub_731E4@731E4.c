int sub_731E4()
{
  int v0; // r5
  int v1; // r7
  int v2; // r4
  int v4; // [sp+8h] [bp-814h] BYREF
  __int16 v5; // [sp+Ch] [bp-810h]
  int v6; // [sp+10h] [bp-80Ch] BYREF
  int v7; // [sp+14h] [bp-808h]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  if ( dword_1B14B0 || (v0 = sub_72E2C(), v0 >= 0) )
  {
    v1 = dword_1B14AC;
    v2 = 10;
    do
    {
      LOBYTE(v4) = -1;
      LOBYTE(v6) = 0;
      pthread_mutex_lock(&stru_1B1494);
      if ( sub_73984(v1, &v6) != 1 )
      {
        snprintf(s, 0x800u, "%s: iic read is failed\n", "_bitmain_get_power_code_version");
        sub_47AB4(0, s, 0);
      }
      pthread_mutex_unlock(&stru_1B1494);
      usleep(0x186A0u);
      --v2;
    }
    while ( v2 );
    v4 = 33860181;
    v6 = 0;
    v7 = 0;
    v5 = 6;
    if ( sub_72E84(v1, (unsigned __int8 *)&v4, 6u, (unsigned __int8 *)&v6) )
    {
      v0 = -2147482880;
      strcpy(s, "get power version failed\n");
      sub_47AB4(0, s, 0);
    }
    else
    {
      return (unsigned __int16)v7;
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_version");
    sub_47AB4(0, s, 0);
  }
  return v0;
}

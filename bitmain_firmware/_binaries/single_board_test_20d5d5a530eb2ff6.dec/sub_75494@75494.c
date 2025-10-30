int sub_75494()
{
  int v1; // r5
  unsigned __int8 v2[4]; // [sp+8h] [bp-810h] BYREF
  __int16 v3; // [sp+Ch] [bp-80Ch]
  int v4; // [sp+10h] [bp-808h] BYREF
  int v5; // [sp+14h] [bp-804h]
  char s[2048]; // [sp+18h] [bp-800h] BYREF

  if ( dword_65E464 || (v1 = sub_74ABC(), v1 >= 0) )
  {
    if ( dword_65E468 == 193 )
    {
      v2[0] = 85;
      v2[1] = -86;
      v2[2] = 4;
      v2[3] = 8;
      v3 = 12;
      v4 = 0;
      v5 = 0;
      if ( sub_73B38(dword_65E460, v2, 6u, (unsigned __int8 *)&v4, 8u) )
      {
        strcpy(s, "get power status failed\n");
        nullsub_8();
        snprintf(s, 0x800u, "can nont get power ret = 0x%x\n", -2147482880);
        nullsub_8();
        return -1;
      }
      else
      {
        return (unsigned __int16)v5;
      }
    }
    else
    {
      return -1;
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_miner_power");
    nullsub_8();
    return v1;
  }
}

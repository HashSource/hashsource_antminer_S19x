int sub_753AC()
{
  int result; // r0
  int v1; // r5
  unsigned __int8 v2[4]; // [sp+8h] [bp-81Ch] BYREF
  __int16 v3; // [sp+Ch] [bp-818h]
  _DWORD v4[2]; // [sp+10h] [bp-814h] BYREF
  int v5; // [sp+18h] [bp-80Ch]
  __int16 v6; // [sp+1Ch] [bp-808h]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( !dword_65E464 )
  {
    v1 = sub_74ABC();
    if ( v1 < 0 )
    {
      snprintf(
        s,
        0x800u,
        "%s: auto exec bitmain_power_open, but open power failed\n",
        "bitmain_get_history_power_status");
      nullsub_8();
      return v1;
    }
  }
  if ( dword_65E468 != 193 )
    return -1;
  v2[0] = 85;
  v2[1] = -86;
  v2[2] = 4;
  v2[3] = 10;
  v4[0] = 0;
  v3 = 14;
  v4[1] = 0;
  v5 = 0;
  v6 = 0;
  if ( sub_73B38(dword_65E460, v2, 6u, (unsigned __int8 *)v4, 0xEu) )
  {
    strcpy(s, "get power status failed\n");
    nullsub_8();
LABEL_11:
    snprintf(s, 0x800u, "can nont get history power status; ret = 0x%x\n", -2147482880);
    nullsub_8();
    return -1;
  }
  result = v5;
  if ( v5 == -2147482880 )
    goto LABEL_11;
  return result;
}

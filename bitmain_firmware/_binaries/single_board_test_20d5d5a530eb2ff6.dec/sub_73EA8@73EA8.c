unsigned int sub_73EA8()
{
  bool v0; // cc
  unsigned int result; // r0
  int v2; // [sp+8h] [bp-82Ch] BYREF
  __int16 v3; // [sp+Ch] [bp-828h]
  float s[8]; // [sp+10h] [bp-824h] BYREF
  float v5[513]; // [sp+30h] [bp-804h] BYREF

  v0 = (unsigned int)dword_65E468 > 0x62;
  if ( dword_65E468 != 98 )
    v0 = (unsigned int)(dword_65E468 - 100) > 2;
  result = !v0;
  if ( !v0 )
  {
    v2 = 67414613;
    v3 = 1028;
    memset(s, 0, sizeof(s));
    if ( sub_73C90(dword_65E460, (unsigned __int8 *)&v2, 6u, (unsigned __int8 *)s, 0xAu) )
    {
      strcpy((char *)v5, "Get power dc_volt value failed\n");
      nullsub_8();
      return 0;
    }
    else
    {
      v5[0] = s[1];
      return (unsigned int)((float)(s[1] * 100.0) + 0.00001);
    }
  }
  return result;
}

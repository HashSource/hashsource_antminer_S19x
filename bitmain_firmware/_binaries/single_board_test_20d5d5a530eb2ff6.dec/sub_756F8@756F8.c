int sub_756F8()
{
  int v0; // r5
  int v1; // r9
  int v2; // r4
  int result; // r0
  unsigned __int8 v4[8]; // [sp+8h] [bp-810h] BYREF
  int v5; // [sp+10h] [bp-808h] BYREF
  int v6; // [sp+14h] [bp-804h]
  char s[2048]; // [sp+18h] [bp-800h] BYREF

  if ( dword_65E464 || (v0 = sub_74ABC(), v0 >= 0) )
  {
    v1 = dword_65E460;
    LOWORD(v2) = 3;
    while ( 1 )
    {
      v4[1] = -86;
      v5 = 0;
      v6 = 0;
      v4[0] = 85;
      v4[2] = 4;
      v4[4] = 4;
      v4[3] = 1;
      v4[5] = 1;
      if ( sub_73C90(v1, v4, 6u, (unsigned __int8 *)&v5, 8u) )
      {
        strcpy(s, "get power fw ver failed\n");
        nullsub_8();
        result = -2147482880;
      }
      else
      {
        result = (unsigned __int16)v6;
        if ( (_WORD)v6 )
          return (unsigned __int16)v6;
      }
      v2 = (unsigned __int16)(v2 - 1);
      if ( !v2 )
        return result;
    }
  }
  snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_sw_ver");
  nullsub_8();
  return v0;
}

int sub_7495C()
{
  int v0; // r5
  int v1; // r10
  int result; // r0
  unsigned __int8 v3; // [sp+10h] [bp-814h] BYREF
  char v4; // [sp+11h] [bp-813h]
  char v5; // [sp+12h] [bp-812h]
  char v6; // [sp+13h] [bp-811h]
  __int16 v7; // [sp+14h] [bp-810h]
  int v8; // [sp+18h] [bp-80Ch] BYREF
  int v9; // [sp+1Ch] [bp-808h]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( dword_65E464 || (v0 = sub_74ABC(), v0 >= 0) )
  {
    v1 = dword_65E460;
    v8 = 0;
    v9 = 0;
    v3 = 85;
    v4 = -86;
    v5 = 4;
    v6 = 2;
    v7 = 6;
    if ( !sub_73B38(dword_65E460, &v3, 6u, (unsigned __int8 *)&v8, 8u) )
      goto LABEL_4;
    strcpy(s, "get power version failed\n");
    nullsub_8();
    strcpy(s, "check power version failed, use v2 protocal to try it again\n");
    nullsub_8();
    v8 = 0;
    v9 = 0;
    v3 = 85;
    v4 = -86;
    v5 = 4;
    v6 = 2;
    v7 = 516;
    if ( sub_73C90(v1, &v3, 6u, (unsigned __int8 *)&v8, 8u) )
    {
      strcpy(s, "get power version failed\n");
      nullsub_8();
      return -2147482880;
    }
    else
    {
LABEL_4:
      result = (unsigned __int16)v9;
      if ( (_WORD)v9 )
        dword_65E468 = (unsigned __int16)v9;
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_version");
    nullsub_8();
    return v0;
  }
  return result;
}

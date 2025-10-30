int __fastcall sub_75570(int a1)
{
  bool v2; // cc
  __int16 v3; // r1
  int v4; // r4
  int result; // r0
  int v6; // r5
  char v7[2052]; // [sp+0h] [bp-804h] BYREF

  if ( !dword_65E464 )
  {
    v6 = sub_74ABC();
    if ( v6 < 0 )
    {
      snprintf(v7, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_watchdog");
      nullsub_8();
      return v6;
    }
  }
  v2 = (unsigned int)dword_65E468 > 0x62;
  if ( dword_65E468 != 98 )
    v2 = (unsigned int)(dword_65E468 - 100) > 2;
  v3 = !v2;
  if ( v2 )
  {
    if ( a1 == 1 )
      v4 = sub_7444C(dword_65E460, 1);
    else
      v4 = sub_7444C(dword_65E460, v3);
LABEL_11:
    if ( v4 >= 0 )
      return v4;
    goto LABEL_17;
  }
  if ( a1 == 1 )
  {
    v4 = sub_73E54(dword_65E460, 1u);
    goto LABEL_11;
  }
  result = sub_73E54(dword_65E460, 0);
  v4 = result;
  if ( result < 0 )
  {
LABEL_17:
    strcpy(v7, "can nont set power watchdog\n");
    nullsub_8();
    return v4;
  }
  return result;
}

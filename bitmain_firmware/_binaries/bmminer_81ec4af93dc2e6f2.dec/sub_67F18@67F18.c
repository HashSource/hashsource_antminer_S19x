int sub_67F18()
{
  __int64 v0; // d0
  int v1; // r0
  int v2; // r1
  __int64 v5; // [sp+0h] [bp-814h]
  char v6[12]; // [sp+8h] [bp-80Ch] BYREF
  unsigned int v7; // [sp+808h] [bp-Ch]
  int v8; // [sp+80Ch] [bp-8h]

  v5 = v0;
  v8 = 0;
  v1 = sub_62FF4();
  if ( v1 )
    return sub_636D0();
  v7 = 0;
  if ( dword_53153C || (v1 = sub_6731C(), v8 = v1, v1 >= 0) )
  {
    v7 = sub_68658(v1, v2);
    if ( v7 < 0x100 )
      return sub_6514C(dword_531538, v7);
    return -2147482879;
  }
  else
  {
    snprintf(v6, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage");
    sub_3AF5C(0, v6, 0, (int)v6);
    return v8;
  }
}

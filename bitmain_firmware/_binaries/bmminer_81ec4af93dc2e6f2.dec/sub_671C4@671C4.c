int __fastcall sub_671C4(_BYTE *a1)
{
  char v4[8]; // [sp+Ch] [bp-808h] BYREF
  int v5; // [sp+80Ch] [bp-8h]

  v5 = 0;
  if ( dword_53153C || (v5 = sub_6731C(), v5 >= 0) )
  {
    if ( a1 )
      *a1 = byte_531544;
    return 0;
  }
  else
  {
    snprintf(v4, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_is_calibrated");
    sub_3AF5C(0, v4, 0, (int)v4);
    return v5;
  }
}

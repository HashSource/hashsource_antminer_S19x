void sub_4DCA8()
{
  unsigned int v0; // r3
  const char *v1; // r6
  const char *v2; // r12
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C <= 3 )
    return;
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "%-40s : %d\n", "voltage", **(_DWORD **)dword_535D98);
  sub_3C5B8(3, s, 0);
  if ( (unsigned int)dword_B308C > 3 )
  {
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "%-40s : %d\n", "freq_base", *(_DWORD *)(*(_DWORD *)dword_535D98 + 4));
    sub_3C5B8(3, s, 0);
    if ( (unsigned int)dword_B308C <= 3 )
      return;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "%-40s : %d\n", "freq_threshold", *(_DWORD *)(*(_DWORD *)dword_535D98 + 8));
    sub_3C5B8(3, s, 0);
    if ( (unsigned int)dword_B308C <= 3 )
      goto LABEL_16;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "%-40s : %d\n", "freq_serial_threshold", *(_DWORD *)(*(_DWORD *)dword_535D98 + 12));
    sub_3C5B8(3, s, 0);
    if ( (unsigned int)dword_B308C <= 3 )
      return;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "%-40s : %d\n", "freq_step", *(_DWORD *)(*(_DWORD *)dword_535D98 + 16));
    sub_3C5B8(3, s, 0);
  }
  v0 = dword_B308C;
  if ( (unsigned int)dword_B308C <= 3 )
  {
LABEL_19:
    if ( v0 > 3 )
    {
      memset(s, 0, 0x800u);
      snprintf(s, 0x800u, "%-40s : %.2f\n", "nonce_rate_threshold", *(float *)(*(_DWORD *)dword_535D98 + 32));
      sub_3C5B8(3, s, 0);
      if ( (unsigned int)dword_B308C > 3 )
      {
        memset(s, 0, 0x800u);
        snprintf(s, 0x800u, "%-40s : %.2f\n", "nonce_rate_dec_threshold", *(float *)(*(_DWORD *)dword_535D98 + 36));
        sub_3C5B8(3, s, 0);
      }
    }
    return;
  }
  v1 = "true";
  memset(s, 0, 0x800u);
  if ( *(_BYTE *)(*(_DWORD *)dword_535D98 + 20) )
    v2 = "true";
  else
    v2 = "false";
  snprintf(s, 0x800u, "%-40s : %s\n", "is_inc_freq_with_high_vol", v2);
  sub_3C5B8(3, s, 0);
  if ( (unsigned int)dword_B308C > 3 )
  {
    memset(s, 0, 0x800u);
    if ( !*(_BYTE *)(*(_DWORD *)dword_535D98 + 21) )
      v1 = "false";
    snprintf(s, 0x800u, "%-40s : %s\n", "is_inc_freq_with_high_vol_runtime", v1);
    sub_3C5B8(3, s, 0);
LABEL_16:
    if ( (unsigned int)dword_B308C <= 3 )
      return;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "%-40s : %d\n", "is_board_init_with_power_off", *(_DWORD *)(*(_DWORD *)dword_535D98 + 24));
    sub_3C5B8(3, s, 0);
    if ( (unsigned int)dword_B308C <= 3 )
      return;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "%-40s : %.4f\n", "hw_threshold", *(float *)(*(_DWORD *)dword_535D98 + 28));
    sub_3C5B8(3, s, 0);
    v0 = dword_B308C;
    goto LABEL_19;
  }
}

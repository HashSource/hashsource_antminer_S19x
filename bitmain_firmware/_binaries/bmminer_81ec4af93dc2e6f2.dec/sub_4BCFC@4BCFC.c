void sub_4BCFC()
{
  void *v0; // r3
  const char *v1; // r6
  const char *v2; // r12
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 <= 3 )
    return;
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "%-40s : %d\n", "voltage", **(_DWORD **)dword_530F0C);
  sub_3BE28(3, s, 0);
  if ( (unsigned int)off_AFC24 > 3 )
  {
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "%-40s : %d\n", "freq_base", *(_DWORD *)(*(_DWORD *)dword_530F0C + 4));
    sub_3BE28(3, s, 0);
    if ( (unsigned int)off_AFC24 <= 3 )
      return;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "%-40s : %d\n", "freq_threshold", *(_DWORD *)(*(_DWORD *)dword_530F0C + 8));
    sub_3BE28(3, s, 0);
    if ( (unsigned int)off_AFC24 <= 3 )
      goto LABEL_16;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "%-40s : %d\n", "freq_serial_threshold", *(_DWORD *)(*(_DWORD *)dword_530F0C + 12));
    sub_3BE28(3, s, 0);
    if ( (unsigned int)off_AFC24 <= 3 )
      return;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "%-40s : %d\n", "freq_step", *(_DWORD *)(*(_DWORD *)dword_530F0C + 16));
    sub_3BE28(3, s, 0);
  }
  v0 = off_AFC24;
  if ( (unsigned int)off_AFC24 <= 3 )
  {
LABEL_19:
    if ( (unsigned int)v0 > 3 )
    {
      memset(s, 0, 0x800u);
      snprintf(s, 0x800u, "%-40s : %.2f\n", "nonce_rate_threshold", *(float *)(*(_DWORD *)dword_530F0C + 32));
      sub_3BE28(3, s, 0);
      if ( (unsigned int)off_AFC24 > 3 )
      {
        memset(s, 0, 0x800u);
        snprintf(s, 0x800u, "%-40s : %.2f\n", "nonce_rate_dec_threshold", *(float *)(*(_DWORD *)dword_530F0C + 36));
        sub_3BE28(3, s, 0);
      }
    }
    return;
  }
  v1 = "false";
  memset(s, 0, 0x800u);
  if ( *(_BYTE *)(*(_DWORD *)dword_530F0C + 20) )
    v2 = "true";
  else
    v2 = "false";
  snprintf(s, 0x800u, "%-40s : %s\n", "is_inc_freq_with_high_vol", v2);
  sub_3BE28(3, s, 0);
  if ( (unsigned int)off_AFC24 > 3 )
  {
    memset(s, 0, 0x800u);
    if ( *(_BYTE *)(*(_DWORD *)dword_530F0C + 21) )
      v1 = "true";
    snprintf(s, 0x800u, "%-40s : %s\n", "is_inc_freq_with_high_vol_runtime", v1);
    sub_3BE28(3, s, 0);
LABEL_16:
    if ( (unsigned int)off_AFC24 <= 3 )
      return;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "%-40s : %d\n", "is_board_init_with_power_off", *(_DWORD *)(*(_DWORD *)dword_530F0C + 24));
    sub_3BE28(3, s, 0);
    if ( (unsigned int)off_AFC24 <= 3 )
      return;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "%-40s : %.4f\n", "hw_threshold", *(float *)(*(_DWORD *)dword_530F0C + 28));
    sub_3BE28(3, s, 0);
    v0 = off_AFC24;
    goto LABEL_19;
  }
}

void sub_39C04()
{
  unsigned int v0; // r3
  char *v1; // r6
  char *v2; // r12
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C <= 3 )
    return;
  snprintf(s, 0x800u, "%-40s : %d\n", "voltage", **(_DWORD **)dword_1AEA7C);
  sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-40s : %d\n", "freq_base", *(_DWORD *)(*(_DWORD *)dword_1AEA7C + 4));
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return;
    snprintf(s, 0x800u, "%-40s : %d\n", "freq_threshold", *(_DWORD *)(*(_DWORD *)dword_1AEA7C + 8));
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_16;
    snprintf(s, 0x800u, "%-40s : %d\n", "freq_serial_threshold", *(_DWORD *)(*(_DWORD *)dword_1AEA7C + 12));
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return;
    snprintf(s, 0x800u, "%-40s : %d\n", "freq_step", *(_DWORD *)(*(_DWORD *)dword_1AEA7C + 16));
    sub_47EC8(3, s, 0);
  }
  v0 = dword_9E31C;
  if ( (unsigned int)dword_9E31C <= 3 )
  {
LABEL_19:
    if ( v0 > 3 )
    {
      snprintf(s, 0x800u, "%-40s : %.2f\n", "nonce_rate_threshold", *(float *)(*(_DWORD *)dword_1AEA7C + 32));
      sub_47EC8(3, s, 0);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(s, 0x800u, "%-40s : %.2f\n", "nonce_rate_dec_threshold", *(float *)(*(_DWORD *)dword_1AEA7C + 36));
        sub_47EC8(3, s, 0);
      }
    }
    return;
  }
  v1 = "false";
  if ( *(_BYTE *)(*(_DWORD *)dword_1AEA7C + 20) )
    v2 = "true";
  else
    v2 = "false";
  snprintf(s, 0x800u, "%-40s : %s\n", "is_inc_freq_with_high_vol", v2);
  sub_47EC8(3, s, 0);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    if ( *(_BYTE *)(*(_DWORD *)dword_1AEA7C + 21) )
      v1 = "true";
    snprintf(s, 0x800u, "%-40s : %s\n", "is_inc_freq_with_high_vol_runtime", v1);
    sub_47EC8(3, s, 0);
LABEL_16:
    if ( (unsigned int)dword_9E31C <= 3 )
      return;
    snprintf(s, 0x800u, "%-40s : %d\n", "is_board_init_with_power_off", *(_DWORD *)(*(_DWORD *)dword_1AEA7C + 24));
    sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return;
    snprintf(s, 0x800u, "%-40s : %.4f\n", "hw_threshold", *(float *)(*(_DWORD *)dword_1AEA7C + 28));
    sub_47EC8(3, s, 0);
    v0 = dword_9E31C;
    goto LABEL_19;
  }
}

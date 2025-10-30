char *sub_4CE9C()
{
  int i; // r4
  char *result; // r0
  void *v2; // r3
  const char *v3; // r6
  const char *v4; // r12
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 3 )
  {
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "%-40s : %d\n", "voltage", **(_DWORD **)dword_530F10);
    sub_3BE28(3, s, 0);
    if ( (unsigned int)off_AFC24 > 3 )
    {
      memset(s, 0, 0x800u);
      snprintf(s, 0x800u, "%-40s : ", "freq_base");
      sub_3BE28(3, s, 0);
    }
  }
  for ( i = 0; i != 4; ++i )
  {
    result = (char *)sub_266F0(i);
    if ( result && (unsigned int)off_AFC24 > 3 )
    {
      memset(s, 0, 0x800u);
      snprintf(s, 0x800u, "[%d] = %d ", i, *(_DWORD *)(*(_DWORD *)dword_530F10 + 4 * i + 4));
      result = sub_3BE28(3, s, 0);
    }
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    memset(s, 0, 0x800u);
    *(_WORD *)s = 10;
    result = sub_3BE28(3, s, 0);
    if ( (unsigned int)off_AFC24 > 3 )
    {
      memset(s, 0, 0x800u);
      snprintf(s, 0x800u, "%-40s : %d\n", "freq_threshold", *(_DWORD *)(*(_DWORD *)dword_530F10 + 20));
      result = sub_3BE28(3, s, 0);
      if ( (unsigned int)off_AFC24 <= 3 )
        return result;
      memset(s, 0, 0x800u);
      snprintf(s, 0x800u, "%-40s : %d\n", "freq_serial_threshold", *(_DWORD *)(*(_DWORD *)dword_530F10 + 24));
      result = sub_3BE28(3, s, 0);
      if ( (unsigned int)off_AFC24 <= 3 )
        goto LABEL_24;
      memset(s, 0, 0x800u);
      snprintf(s, 0x800u, "%-40s : %d\n", "freq_diff_threshold", *(_DWORD *)(*(_DWORD *)dword_530F10 + 28));
      result = sub_3BE28(3, s, 0);
      if ( (unsigned int)off_AFC24 <= 3 )
        return result;
      memset(s, 0, 0x800u);
      snprintf(s, 0x800u, "%-40s : %d\n", "freq_step", *(_DWORD *)(*(_DWORD *)dword_530F10 + 32));
      result = sub_3BE28(3, s, 0);
    }
    v2 = off_AFC24;
    if ( (unsigned int)off_AFC24 <= 3 )
    {
LABEL_27:
      if ( (unsigned int)v2 > 3 )
      {
        memset(s, 0, 0x800u);
        snprintf(s, 0x800u, "%-40s : %.2f\n", "nonce_rate_threshold", *(float *)(*(_DWORD *)dword_530F10 + 48));
        result = sub_3BE28(3, s, 0);
        if ( (unsigned int)off_AFC24 > 3 )
        {
          memset(s, 0, 0x800u);
          snprintf(s, 0x800u, "%-40s : %.2f\n", "nonce_rate_dec_threshold", *(float *)(*(_DWORD *)dword_530F10 + 52));
          result = sub_3BE28(3, s, 0);
          if ( (unsigned int)off_AFC24 > 3 )
          {
            memset(s, 0, 0x800u);
            snprintf(s, 0x800u, "%-40s : %d\n", "freq_tuning_fine_step", *(_DWORD *)(*(_DWORD *)dword_530F10 + 56));
            result = sub_3BE28(3, s, 0);
            if ( (unsigned int)off_AFC24 > 3 )
            {
              memset(s, 0, 0x800u);
              snprintf(s, 0x800u, "%-40s : %d\n", "freq_tuning_fine_count", *(_DWORD *)(*(_DWORD *)dword_530F10 + 60));
              return sub_3BE28(3, s, 0);
            }
          }
        }
      }
      return result;
    }
    v3 = "false";
    memset(s, 0, 0x800u);
    if ( *(_BYTE *)(*(_DWORD *)dword_530F10 + 36) )
      v4 = "true";
    else
      v4 = "false";
    snprintf(s, 0x800u, "%-40s : %s\n", "is_inc_freq_with_high_vol", v4);
    result = sub_3BE28(3, s, 0);
    if ( (unsigned int)off_AFC24 <= 3 )
      return result;
    memset(s, 0, 0x800u);
    if ( *(_BYTE *)(*(_DWORD *)dword_530F10 + 37) )
      v3 = "true";
    snprintf(s, 0x800u, "%-40s : %s\n", "is_inc_freq_with_high_vol_runtime", v3);
    result = sub_3BE28(3, s, 0);
LABEL_24:
    if ( (unsigned int)off_AFC24 <= 3 )
      return result;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "%-40s : %d\n", "is_board_init_with_power_off", *(_DWORD *)(*(_DWORD *)dword_530F10 + 40));
    result = sub_3BE28(3, s, 0);
    if ( (unsigned int)off_AFC24 <= 3 )
      return result;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "%-40s : %.4f\n", "hw_threshold", *(float *)(*(_DWORD *)dword_530F10 + 44));
    result = sub_3BE28(3, s, 0);
    v2 = off_AFC24;
    goto LABEL_27;
  }
  return result;
}

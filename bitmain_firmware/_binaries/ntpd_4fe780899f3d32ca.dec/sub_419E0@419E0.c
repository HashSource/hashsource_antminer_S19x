void sub_419E0()
{
  int v0; // r0
  FILE *v1; // r4
  const char *v2; // r4
  int v3; // r7
  unsigned int v4; // r8
  unsigned int v5; // r0
  const char *v6; // r0
  unsigned int v7; // [sp+34h] [bp-Ch] BYREF

  if ( stats_control )
  {
    sub_5F724(&v7);
    sub_2BE54((int)&dword_BCC4C, v7);
    v3 = dword_BCC4C;
    v4 = v7 / 0x15180;
    v5 = v7 - (_DWORD)&off_15180 * (v7 / 0x15180);
    v7 = v5;
    if ( dword_BCC4C )
    {
      v6 = (const char *)sub_63804(v5);
      _fprintf_chk(
        v3,
        1,
        "%lu %s %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu\n",
        v4 + 15020,
        v6,
        current_time - sys_stattime,
        sys_received,
        sys_processed,
        sys_newversion,
        sys_oldversion,
        sys_restricted,
        sys_badlength,
        sys_badauth,
        sys_declined,
        sys_limitrejected,
        sys_kodsent);
      fflush((FILE *)dword_BCC4C);
      sub_38C70();
    }
  }
  if ( stats_drift_file )
  {
    if ( fabs(dbl_BCCB8 - drift_comp) >= dbl_BCCB0 )
    {
      dbl_BCCB8 = drift_comp;
      dbl_BCCB0 = wander_threshold;
      v0 = fopen64(dword_BCCC0, "w");
      v1 = (FILE *)v0;
      if ( v0 )
      {
        _fprintf_chk(v0, 1, "%.3f\n", drift_comp * 1000000.0);
        fclose(v1);
        v2 = (const char *)dword_BCCC0;
        if ( rename((const char *)dword_BCCC0, (const char *)stats_drift_file) )
          sub_64E00(4, "Unable to rename temp drift file %s to %s, %m", v2, (const char *)stats_drift_file);
      }
      else
      {
        sub_64E00(3, "frequency file %s: %m", (const char *)dword_BCCC0);
      }
    }
    else
    {
      dbl_BCCB0 = dbl_BCCB0 * 0.5;
    }
  }
}

void sub_42798()
{
  int v0; // r0
  FILE *v1; // r4
  const char *v2; // r4
  int v3; // r8
  unsigned int v4; // r0
  unsigned int v5; // r7
  const char *v6; // r0
  unsigned int v7; // [sp+34h] [bp-Ch] BYREF

  if ( stats_control )
  {
    sub_6055C(&v7);
    sub_2C1C4((int)&dword_BDC5C, v7);
    v3 = dword_BDC5C;
    v4 = v7 - (_DWORD)&loc_15180 * (v7 / 0x15180);
    v5 = v7 / 0x15180 + 15020;
    v7 = v4;
    if ( dword_BDC5C )
    {
      v6 = (const char *)sub_6474C(v4);
      _fprintf_chk(
        v3,
        1,
        "%lu %s %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu\n",
        v5,
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
      fflush((FILE *)dword_BDC5C);
      sub_39460();
    }
  }
  if ( stats_drift_file )
  {
    if ( fabs(dbl_BDCC8 - drift_comp) >= dbl_BDCC0 )
    {
      dbl_BDCC8 = drift_comp;
      dbl_BDCC0 = wander_threshold;
      v0 = fopen64(dword_BDCD0, "w");
      v1 = (FILE *)v0;
      if ( v0 )
      {
        _fprintf_chk(v0, 1, "%.3f\n", drift_comp * 1000000.0);
        fclose(v1);
        v2 = (const char *)dword_BDCD0;
        if ( rename((const char *)dword_BDCD0, (const char *)stats_drift_file) )
          sub_65D40(4, "Unable to rename temp drift file %s to %s, %m", v2, (const char *)stats_drift_file);
      }
      else
      {
        sub_65D40(3, "frequency file %s: %m", (const char *)dword_BDCD0);
      }
    }
    else
    {
      dbl_BDCC0 = dbl_BDCC0 * 0.5;
    }
  }
}

void *__fastcall sub_2EF04(const char *a1, int a2, int a3, int a4, int a5, int a6)
{
  void *result; // r0
  int *v11; // r4
  char *v12; // r0
  __int16 v13; // r3
  const char *v14; // r3
  __int16 v15; // r3
  int v16; // r2
  char *v17; // r0
  char *v18; // r0
  const char *v19; // r3
  const char *v20; // r3
  const char *v21; // r3
  const char *v22; // r3
  const char *v23; // r3
  char *v24; // r0
  char *v25; // r0
  _DWORD *v26; // [sp+18h] [bp-40Ch] BYREF
  _DWORD v27[256]; // [sp+1Ch] [bp-408h] BYREF
  _DWORD v28[2]; // [sp+41Ch] [bp-8h] BYREF

  v27[0] = 0;
  result = memset(&v27[1], 0, 0x3FCu);
  v26 = v27;
  switch ( a2 )
  {
    case -1:
      switch ( a3 )
      {
        case 14:
          v25 = sub_2EE0C();
          result = (void *)sub_65D40(
                             3,
                             "%s: %s line %d: invalid struct timex pointer: 0x%lx",
                             a1,
                             v25,
                             a6,
                             &dword_BBCC0);
          break;
        case 22:
          v24 = sub_2EE0C();
          result = (void *)sub_65D40(
                             3,
                             "%s: %s line %d: invalid struct timex \"constant\" element value: %ld",
                             a1,
                             v24,
                             a6,
                             dword_BBCD8);
          break;
        case 1:
          v11 = _errno_location();
          if ( a5 )
          {
            *v11 = 1;
            sub_65D40(3, "%s: ntp_adjtime(TAI) failed: %m", a1);
          }
          *v11 = 1;
          v12 = sub_2EE0C();
          result = (void *)sub_65D40(3, "%s: %s line %d: ntp_adjtime: %m", a1, v12, a6);
          break;
        default:
          v18 = sub_2EE0C();
          result = (void *)sub_65D40(
                             5,
                             "%s: %s line %d: unhandled errno value %d after failed ntp_adjtime call",
                             a1,
                             v18,
                             a6,
                             a3);
          break;
      }
      break;
    case 0:
      return result;
    case 1:
      result = (void *)sub_65D40(6, "kernel reports leap second insertion scheduled");
      break;
    case 2:
      result = (void *)sub_65D40(6, "kernel reports leap second deletion scheduled");
      break;
    case 3:
      result = (void *)sub_65D40(6, "kernel reports leap second in progress");
      break;
    case 4:
      result = (void *)sub_65D40(6, "kernel reports leap second has occurred");
      break;
    case 5:
      v13 = dword_BBCD4;
      if ( (dword_BBCD4 & 0x40) != 0 )
      {
        sub_6FB98(&v26, v28, "%sClock Unsynchronized", byte_99528);
        v13 = dword_BBCD4;
      }
      if ( (v13 & 0x1000) != 0 )
      {
        if ( LOBYTE(v27[0]) )
          v14 = "; ";
        else
          v14 = byte_99528;
        sub_6FB98(&v26, v28, "%sClock Error", v14);
      }
      v15 = dword_BBCD4;
      if ( (dword_BBCD4 & 0x102) == 2 )
      {
        if ( LOBYTE(v27[0]) )
          v20 = "; ";
        else
          v20 = byte_99528;
        sub_6FB98(&v26, v28, "%sPPS Frequency Sync wanted but no PPS", v20);
        v15 = dword_BBCD4;
      }
      if ( (v15 & 0x104) == 4 )
      {
        if ( LOBYTE(v27[0]) )
          v19 = "; ";
        else
          v19 = byte_99528;
        sub_6FB98(&v26, v28, "%sPPS Time Sync wanted but no PPS signal", v19);
        v15 = dword_BBCD4;
      }
      if ( (v15 & 0x204) == 0x204 )
      {
        if ( LOBYTE(v27[0]) )
          v23 = "; ";
        else
          v23 = byte_99528;
        sub_6FB98(&v26, v28, "%sPPS Time Sync wanted but PPS Jitter exceeded", v23);
        v15 = dword_BBCD4;
      }
      if ( (v15 & 0x402) == 0x402 )
      {
        if ( LOBYTE(v27[0]) )
          v21 = "; ";
        else
          v21 = byte_99528;
        sub_6FB98(&v26, v28, "%sPPS Frequency Sync wanted but PPS Wander exceeded", v21);
        v15 = dword_BBCD4;
      }
      if ( (v15 & 0x802) == 0x802 )
      {
        if ( LOBYTE(v27[0]) )
          v22 = "; ";
        else
          v22 = byte_99528;
        sub_6FB98(&v26, v28, "%sPPS Frequency Sync wanted but Calibration error detected", v22);
      }
      if ( a4 )
      {
        v16 = dword_BBCD4;
        if ( (dword_BBCD4 & 0x100) == 0 )
        {
          sub_26294(13, 0, "no PPS signal");
          v16 = dword_BBCD4;
        }
      }
      else
      {
        v16 = dword_BBCD4;
      }
      result = (void *)sub_65D40(6, "kernel reports TIME_ERROR: %#x: %s", v16, (const char *)v27);
      break;
    default:
      v17 = sub_2EE0C();
      result = (void *)sub_65D40(
                         5,
                         "%s: %s line %d: unhandled return value %d from ntp_adjtime() in %s at line %d",
                         a1,
                         v17,
                         a6,
                         a2,
                         "ntp_adjtime_error_handler",
                         431);
      break;
  }
  return result;
}

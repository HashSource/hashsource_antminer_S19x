void *__fastcall sub_2EA24(const char *a1, int a2, int a3, int a4, int a5, int a6)
{
  void *result; // r0
  int *v11; // r0
  int *v12; // r4
  char *v13; // r0
  __int16 v14; // r3
  const char *v15; // r3
  int v16; // r3
  int v17; // r2
  char *v18; // r0
  char *v19; // r0
  const char *v20; // r3
  const char *v21; // r3
  const char *v22; // r3
  const char *v23; // r3
  const char *v24; // r3
  char *v25; // r0
  char *v26; // r0
  _DWORD *v27; // [sp+18h] [bp-40Ch] BYREF
  _DWORD v28[256]; // [sp+1Ch] [bp-408h] BYREF
  _DWORD v29[2]; // [sp+41Ch] [bp-8h] BYREF

  v28[0] = 0;
  result = memset(&v28[1], 0, 0x3FCu);
  v27 = v28;
  switch ( a2 )
  {
    case -1:
      switch ( a3 )
      {
        case 14:
          v26 = sub_2E914();
          result = (void *)sub_64E00(
                             3,
                             "%s: %s line %d: invalid struct timex pointer: 0x%lx",
                             a1,
                             v26,
                             a6,
                             &dword_B9CBC);
          break;
        case 22:
          v25 = sub_2E914();
          result = (void *)sub_64E00(
                             3,
                             "%s: %s line %d: invalid struct timex \"constant\" element value: %ld",
                             a1,
                             v25,
                             a6,
                             dword_B9CD4);
          break;
        case 1:
          v11 = _errno_location();
          v12 = v11;
          if ( a5 )
          {
            *v11 = 1;
            sub_64E00(3, "%s: ntp_adjtime(TAI) failed: %m", a1);
          }
          *v12 = 1;
          v13 = sub_2E914();
          result = (void *)sub_64E00(3, "%s: %s line %d: ntp_adjtime: %m", a1, v13, a6);
          break;
        default:
          v19 = sub_2E914();
          result = (void *)sub_64E00(
                             5,
                             "%s: %s line %d: unhandled errno value %d after failed ntp_adjtime call",
                             a1,
                             v19,
                             a6,
                             a3);
          break;
      }
      break;
    case 0:
      return result;
    case 1:
      result = (void *)sub_64E00(6, "kernel reports leap second insertion scheduled");
      break;
    case 2:
      result = (void *)sub_64E00(6, "kernel reports leap second deletion scheduled");
      break;
    case 3:
      result = (void *)sub_64E00(6, "kernel reports leap second in progress");
      break;
    case 4:
      result = (void *)sub_64E00(6, "kernel reports leap second has occurred");
      break;
    case 5:
      v14 = dword_B9CD0;
      if ( (dword_B9CD0 & 0x40) != 0 )
      {
        sub_6EC04(&v27, v29, "%sClock Unsynchronized", byte_97F7C);
        v14 = dword_B9CD0;
      }
      if ( (v14 & 0x1000) != 0 )
      {
        if ( LOBYTE(v28[0]) )
          v15 = "; ";
        else
          v15 = byte_97F7C;
        sub_6EC04(&v27, v29, "%sClock Error", v15);
      }
      v16 = dword_B9CD0;
      if ( (dword_B9CD0 & 0x102) == 2 )
      {
        if ( LOBYTE(v28[0]) )
          v23 = "; ";
        else
          v23 = byte_97F7C;
        sub_6EC04(&v27, v29, "%sPPS Frequency Sync wanted but no PPS", v23);
        v16 = dword_B9CD0;
      }
      if ( (v16 & 0x104) == 4 )
      {
        if ( LOBYTE(v28[0]) )
          v21 = "; ";
        else
          v21 = byte_97F7C;
        sub_6EC04(&v27, v29, "%sPPS Time Sync wanted but no PPS signal", v21);
        v16 = dword_B9CD0;
      }
      if ( (v16 & 0x204) == 0x204 )
      {
        if ( LOBYTE(v28[0]) )
          v24 = "; ";
        else
          v24 = byte_97F7C;
        sub_6EC04(&v27, v29, "%sPPS Time Sync wanted but PPS Jitter exceeded", v24);
        v16 = dword_B9CD0;
      }
      if ( (~v16 & 0x402) == 0 )
      {
        if ( LOBYTE(v28[0]) )
          v22 = "; ";
        else
          v22 = byte_97F7C;
        sub_6EC04(&v27, v29, "%sPPS Frequency Sync wanted but PPS Wander exceeded", v22);
        v16 = dword_B9CD0;
      }
      if ( (~v16 & 0x802) == 0 )
      {
        if ( LOBYTE(v28[0]) )
          v20 = "; ";
        else
          v20 = byte_97F7C;
        sub_6EC04(&v27, v29, "%sPPS Frequency Sync wanted but Calibration error detected", v20);
      }
      v17 = dword_B9CD0;
      if ( a4 && (dword_B9CD0 & 0x100) == 0 )
      {
        sub_25EE0((__int16 *)&byte_9[4], 0, "no PPS signal");
        v17 = dword_B9CD0;
      }
      result = (void *)sub_64E00(6, "kernel reports TIME_ERROR: %#x: %s", v17, (const char *)v28);
      break;
    default:
      v18 = sub_2E914();
      result = (void *)sub_64E00(
                         5,
                         "%s: %s line %d: unhandled return value %d from ntp_adjtime() in %s at line %d",
                         a1,
                         v18,
                         a6,
                         a2,
                         "ntp_adjtime_error_handler",
                         431);
      break;
  }
  return result;
}

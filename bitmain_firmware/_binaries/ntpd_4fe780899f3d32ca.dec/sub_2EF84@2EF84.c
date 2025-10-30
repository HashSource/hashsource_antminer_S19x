__int16 *sub_2EF84()
{
  __int16 *result; // r0
  __int16 v1; // r1
  int v2; // r5
  int *v3; // r0

  pll_control = 1;
  memset(&flt_B9CC0, 0, 0x7Cu);
  dword_B9CBC = 61;
  dword_B9CD0 = 65;
  dword_B9CC8 = 16000000;
  dword_B9CCC = 16000000;
  dword_B9DC0 = 0;
  dword_B9D3C = (int)sub_2E8C0;
  dword_B9CD4 = (unsigned __int8)sys_poll;
  if ( sigaction(31, (const struct sigaction *)&dword_B9D3C, &stru_B9DC8) )
  {
    result = (__int16 *)sub_64E00(3, "sigaction() trap SIGSYS: %m");
    pll_control = 0;
    pll_status = dword_B9CD0;
  }
  else
  {
    if ( !_sigsetjmp((struct __jmp_buf_tag *)&unk_B9B30, 1) )
    {
      v2 = adjtimex((struct timex *)&dword_B9CBC);
      if ( v2 )
      {
        v3 = _errno_location();
        sub_2EA24("start_kern_loop", v2, *v3, 0, 0, 1127);
      }
    }
    if ( sigaction(31, &stru_B9DC8, 0) )
    {
      sub_64E00(3, "sigaction() restore SIGSYS: %m");
      pll_control = 0;
      pll_status = dword_B9CD0;
      return 0;
    }
    else
    {
      result = (__int16 *)&GLOBAL_OFFSET_TABLE_;
      v1 = dword_B9CD0;
      pll_status = dword_B9CD0;
      if ( pll_control )
      {
        if ( !dword_B9E54 )
        {
          dword_B9E54 = 1;
          sub_8C1A8(sub_2F368);
          v1 = pll_status;
        }
        if ( v1 < 0 )
          ext_enable = 1;
        return sub_25EE0((__int16 *)&byte_9[4], 0, "kernel time sync enabled");
      }
    }
  }
  return result;
}

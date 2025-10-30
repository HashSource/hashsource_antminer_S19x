Elf32_Dyn **sub_2F49C()
{
  Elf32_Dyn **result; // r0
  __int16 v1; // r1
  int v2; // r5
  int *v3; // r0

  pll_control = 1;
  memset(&dword_BBCC0, 0, 0x80u);
  dword_BBCCC = 16000000;
  dword_BBCC0 = 61;
  dword_BBCD0 = 16000000;
  dword_BBCD4 = 65;
  dword_BBDC4 = 0;
  dword_BBD40 = (int)sub_2ED14;
  dword_BBCD8 = (unsigned __int8)sys_poll;
  if ( sigaction(31, (const struct sigaction *)&dword_BBD40, &stru_BBDCC) )
  {
    result = (Elf32_Dyn **)sub_65D40(3, "sigaction() trap SIGSYS: %m");
    pll_control = 0;
LABEL_3:
    pll_status = dword_BBCD4;
    return result;
  }
  if ( !_sigsetjmp((struct __jmp_buf_tag *)&unk_BAB30, 1) )
  {
    v2 = adjtimex((struct timex *)&dword_BBCC0);
    if ( v2 )
    {
      v3 = _errno_location();
      sub_2EF04("start_kern_loop", v2, *v3, 0, 0, 1127);
    }
  }
  if ( sigaction(31, &stru_BBDCC, 0) )
  {
    result = (Elf32_Dyn **)sub_65D40(3, "sigaction() restore SIGSYS: %m");
    pll_control = 0;
    goto LABEL_3;
  }
  result = &GLOBAL_OFFSET_TABLE_;
  v1 = dword_BBCD4;
  pll_status = dword_BBCD4;
  if ( pll_control )
  {
    if ( !dword_BBE58 )
    {
      dword_BBE58 = 1;
      sub_8D6FC(sub_2ED68);
      v1 = pll_status;
    }
    if ( v1 < 0 )
      ext_enable = 1;
    return (Elf32_Dyn **)sub_26294(13, 0, "kernel time sync enabled");
  }
  return result;
}

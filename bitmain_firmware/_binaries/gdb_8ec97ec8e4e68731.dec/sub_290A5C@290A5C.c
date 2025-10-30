int sub_290A5C()
{
  int v0; // r6
  int v2; // r0
  struct sigaction oact; // [sp+4h] [bp-8Ch] BYREF

  if ( dword_470788 )
  {
    if ( dword_48AFC0 )
    {
      v0 = dword_48AFC4;
      if ( dword_48AFC4 )
        goto LABEL_4;
LABEL_10:
      sigemptyset(&oset);
      sigprocmask(v0, &stru_48AFC8, &oset);
      sub_290A08(2, (void (*)(int))sub_291134, byte_48B0C8);
      sub_290A08(15, (void (*)(int))sub_291134, byte_48B154);
      sub_290A08(3, (void (*)(int))sub_291134, byte_48B1E0);
      v2 = sub_29097C(14, (void (*)(int))sub_291134, (char *)&stru_48B26C);
      if ( v2 == 1 )
      {
        sigaction(14, &stru_48B26C, &oact);
      }
      else if ( !v2 )
      {
LABEL_14:
        sub_290A08(20, (void (*)(int))sub_291134, byte_48B2F8);
        sub_290A08(22, (void (*)(int))sub_291134, byte_48B384);
        sub_290A08(21, (void (*)(int))sub_291134, (char *)&stru_48B410);
        dword_48AFC4 = 1;
        sigprocmask(2, &oset, 0);
        goto LABEL_4;
      }
      if ( (stru_48B26C.sa_flags & 0x10000000) != 0 )
        sigaction(14, &stru_48B26C, &oact);
      goto LABEL_14;
    }
    sigemptyset(&stru_48AFC8);
    sigaddset(&stru_48AFC8, 2);
    sigaddset(&stru_48AFC8, 15);
    sigaddset(&stru_48AFC8, 3);
    sigaddset(&stru_48AFC8, 14);
    sigaddset(&stru_48AFC8, 20);
    sigaddset(&stru_48AFC8, 21);
    sigaddset(&stru_48AFC8, 22);
    dword_48AFC0 = 1;
    if ( dword_470788 )
    {
      v0 = dword_48AFC4;
      if ( !dword_48AFC4 )
        goto LABEL_10;
    }
  }
LABEL_4:
  if ( !dword_47078C || dword_48B49C )
    return 0;
  sub_290A08(28, (void (*)(int))sub_290930, off_48AF34);
  dword_48B49C = 1;
  return 0;
}

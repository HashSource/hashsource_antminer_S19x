int sub_290C8C()
{
  struct sigaction oact; // [sp+4h] [bp-90h] BYREF

  if ( dword_470788 && dword_48AFC4 == 1 )
  {
    sigemptyset(&oact.sa_mask);
    sigaction(2, (const struct sigaction *)byte_48B0C8, &oact);
    sigaction(15, (const struct sigaction *)byte_48B154, &oact);
    sigaction(3, (const struct sigaction *)byte_48B1E0, &oact);
    sigaction(14, &stru_48B26C, &oact);
    sigaction(20, (const struct sigaction *)byte_48B2F8, &oact);
    sigaction(22, (const struct sigaction *)byte_48B384, &oact);
    sigaction(21, &stru_48B410, &oact);
    dword_48AFC4 = 0;
  }
  if ( !dword_47078C || dword_48B49C != 1 )
    return 0;
  sigemptyset(&oact.sa_mask);
  sigaction(28, (const struct sigaction *)off_48AF34, &oact);
  dword_48B49C = 0;
  return 0;
}

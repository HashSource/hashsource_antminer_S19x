__pid_t __fastcall sub_4C380(__pid_t pid, int *stat_loc, int options)
{
  __pid_t v6; // r4

  do
    v6 = waitpid(pid, stat_loc, options);
  while ( v6 == -1 && *_errno_location() == 4 );
  return v6;
}

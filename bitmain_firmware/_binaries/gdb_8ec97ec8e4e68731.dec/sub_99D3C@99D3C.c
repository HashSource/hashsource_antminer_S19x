int *__fastcall sub_99D3C(int a1)
{
  struct sigaction *v2; // r5
  int v3; // r9
  int i; // r4
  FILE *v5; // r10
  const char *v6; // r0
  int *result; // r0

  if ( sigprocmask(0, 0, (sigset_t *)&unk_475854) == -1 )
    sub_258B04("sigprocmask");
  v2 = &act;
  v3 = 0;
  for ( i = 1; i != 65; ++i )
  {
    result = (int *)sigaction(i, 0, v2);
    if ( result == (int *)-1 )
    {
      result = _errno_location();
      if ( *result != 22 )
        sub_258B04("sigaction");
    }
    else if ( !a1 && (char *)v2->sa_handler > (char *)1 )
    {
      v5 = (FILE *)stderr;
      v6 = (const char *)strsignal(i);
      v3 = 1;
      result = (int *)fprintf(v5, "warning: Found custom handler for signal %d (%s) preinstalled.\n", i, v6);
    }
    ++v2;
  }
  if ( v3 )
    return (int *)fwrite(
                    "Some signal dispositions inherited from the environment (SIG_DFL/SIG_IGN)\n"
                    "won't be propagated to spawned programs.\n",
                    1u,
                    0x73u,
                    (FILE *)stderr);
  return result;
}

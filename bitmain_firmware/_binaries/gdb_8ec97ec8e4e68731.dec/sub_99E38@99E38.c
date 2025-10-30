int sub_99E38()
{
  int v0; // r4
  const struct sigaction *v1; // r5
  int result; // r0

  v0 = 1;
  v1 = &act;
  do
  {
    if ( sigaction(v0, v1, 0) == -1 && *_errno_location() != 22 )
      sub_258B04("sigaction");
    ++v0;
    ++v1;
  }
  while ( v0 != 65 );
  result = sigprocmask(2, (const sigset_t *)&unk_475854, 0);
  if ( result == -1 )
    sub_258B04("sigprocmask");
  return result;
}

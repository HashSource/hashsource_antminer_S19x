int sub_92FA4()
{
  int result; // r0
  __pid_t v1; // r4
  __pid_t v2; // r0

  result = dword_475220;
  if ( dword_475220 )
  {
    v1 = getpid();
    v2 = getpid();
    return setpgid(v1, v2);
  }
  return result;
}

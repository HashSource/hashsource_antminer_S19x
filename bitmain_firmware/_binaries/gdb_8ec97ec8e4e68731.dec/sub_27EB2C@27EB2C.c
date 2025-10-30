__pid_t sub_27EB2C()
{
  __pid_t v0; // r4
  int *v2; // r0
  char *v3; // r0

  v0 = dword_475220;
  if ( dword_475220 )
  {
    v0 = dword_48AA94;
    if ( dword_48AA94 )
    {
      v0 = setsid();
      if ( v0 == -1 )
      {
        v2 = _errno_location();
        v3 = sub_6FF98(*v2);
        sub_946B0("Failed to create new terminal session: setsid: %s", v3);
      }
    }
  }
  return v0;
}

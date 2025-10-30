void sub_27E894()
{
  int v0; // r7
  void (*v1)(int); // r6
  int v2; // r0
  int v3; // r5
  int *v4; // r0
  char *v5; // r0

  if ( dword_48AA94 )
  {
    v0 = open64("/dev/tty", 2);
    if ( v0 > 0 )
    {
      v1 = dword_475220 ? signal(22, (__sighandler_t)1) : 0;
      ioctl(v0, 0x5422u, 0);
      close(v0);
      if ( dword_475220 )
        signal(22, v1);
    }
    v2 = open64(dword_48AA94, 258);
    v3 = v2;
    if ( v2 < 0 )
      sub_16644(dword_48AA94);
    if ( v2 )
    {
      close(0);
      if ( dup(v3) < 0 )
        sub_16644((int)"dup'ing tty into fd 0");
      if ( v3 == 1 )
        goto LABEL_16;
      close(1);
      if ( dup(v3) >= 0 )
      {
        if ( v3 == 2 )
        {
          if ( ioctl(2, 0x540Eu, 0) != -1 )
            return;
          goto LABEL_23;
        }
LABEL_16:
        close(2);
        if ( dup(v3) < 0 )
          sub_16644((int)"dup'ing tty into fd 2");
        if ( ioctl(v3, 0x540Eu, 0) != -1 )
        {
          if ( v3 <= 2 )
            return;
          goto LABEL_19;
        }
LABEL_23:
        v4 = _errno_location();
        v5 = sub_6FF98(*v4);
        sub_946B0("GDB: Failed to set controlling terminal: %s", v5);
        if ( v3 <= 2 )
          return;
LABEL_19:
        close(v3);
        return;
      }
    }
    else
    {
      close(1);
      if ( dup(v3) >= 0 )
        goto LABEL_16;
    }
    sub_16644((int)"dup'ing tty into fd 1");
  }
}

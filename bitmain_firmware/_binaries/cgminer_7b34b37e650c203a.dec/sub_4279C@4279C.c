int sub_4279C()
{
  int v0; // r5
  char *v1; // r4
  int *v3; // r0
  int *v4; // r0
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( pthread_mutex_init(&stru_76874, 0) )
  {
    v3 = _errno_location();
    snprintf(
      s,
      0x800u,
      "Failed to pthread_mutex_init errno=%d in %s %s():%d",
      *v3,
      "socketa_api.c",
      "cgminer_socket_init",
      256);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  if ( pthread_mutex_init(&stru_7688C, 0) )
  {
    v4 = _errno_location();
    snprintf(
      s,
      0x800u,
      "Failed to pthread_mutex_init errno=%d in %s %s():%d",
      *v4,
      "socketa_api.c",
      "cgminer_socket_init",
      257);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  v0 = sub_43D64(&off_55DAC, 2);
  sleep(6u);
  if ( v0 )
  {
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
    {
      snprintf(s, 0x800u, "%s trans init failed: %d", "cgminer_socket_init", v0);
      sub_20F58(3, s, 0);
    }
  }
  else
  {
    while ( 1 )
    {
      v1 = aBitmainApiDete;
      v0 = 0;
      do
      {
        v0 |= sub_43FA4(v1);
        if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
        {
          snprintf(s, 0x800u, "%s reg %s return: %d", "cgminer_socket_init", v1, v0);
          sub_20F58(5, s, 0);
        }
        v1 += 132;
      }
      while ( v1 != (char *)&unk_689C8 );
      if ( !v0 )
        break;
      sleep(5u);
      if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
      {
        snprintf(s, 0x800u, "%s reg failed wait 5s", "cgminer_socket_init");
        sub_20F58(3, s, 0);
      }
    }
  }
  return v0;
}

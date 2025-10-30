int sub_F4A5C()
{
  int v0; // r4
  int v2; // r6
  char *v3; // r0
  int v4; // r0
  _BOOL4 v5; // r0
  int v6; // r0
  int v7; // r4
  int v8; // r0
  int v9; // r3
  int v10; // r3
  ssize_t v11; // r5
  char buf; // [sp+Fh] [bp-209h] BYREF
  fd_set s; // [sp+10h] [bp-208h] BYREF
  struct utsname name; // [sp+90h] [bp-188h] BYREF

  v0 = dword_6E1AF4;
  if ( dword_6E1AF4 )
    return v0;
  if ( shmget(114, 1, 0) == -1 )
  {
    v0 = uname(&name);
    if ( !v0 )
    {
      v2 = strtol(name.release, 0, 10);
      v3 = strchr(name.release, 46);
      if ( v3 )
      {
        v4 = strtol(v3 + 1, 0, 10);
        if ( v2 > 4 )
          return v0;
        v5 = v4 > 7;
        if ( v2 != 4 )
          v5 = 0;
        if ( v5 )
          return v0;
      }
      else if ( v2 > 4 )
      {
        return v0;
      }
    }
    v6 = open("/dev/random", 0);
    v7 = v6;
    if ( v6 == -1 )
      return dword_6E1AF4;
    if ( v6 >= 1024 )
    {
      while ( 1 )
      {
        v11 = read(v7, &buf, 1u);
        if ( v11 >= 0 )
          break;
        if ( *_errno_location() != 4 )
        {
LABEL_28:
          close(v7);
          return dword_6E1AF4;
        }
      }
    }
    else
    {
      memset(&s, 0, sizeof(s));
      LOBYTE(v8) = v7 & 0x1F;
      v9 = (v7 + 31) & (v7 >> 31);
      if ( v7 >= 0 )
        v9 = v7;
      v10 = v9 >> 5;
      if ( v7 <= 0 )
        v8 = -(-v7 & 0x1F);
      s.__fds_bits[v10] |= 1 << v8;
      while ( 1 )
      {
        v11 = select(v7 + 1, &s, 0, 0, 0);
        if ( v11 >= 0 )
          break;
        if ( *_errno_location() != 4 )
          goto LABEL_28;
      }
    }
    close(v7);
    if ( v11 != 1 )
      return dword_6E1AF4;
    dword_6E1AF4 = 1;
    if ( shmget(114, 1, 804) == -1 )
      return 1;
  }
  dword_6E1AF4 = 1;
  dword_6E1AF0 = shmat();
  if ( dword_6E1AF0 == -1 )
    return 1;
  sub_DE4AC((int)sub_F4A4C);
  return dword_6E1AF4;
}

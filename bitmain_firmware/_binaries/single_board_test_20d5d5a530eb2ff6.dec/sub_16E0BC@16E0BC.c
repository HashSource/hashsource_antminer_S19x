int __fastcall sub_16E0BC(int a1)
{
  int v1; // r0
  int v3; // r3
  _BYTE v4[12]; // [sp+Ch] [bp-Ch] BYREF

  sub_10C554(*(pthread_rwlock_t **)(a1 + 20));
  dword_6E2F48 = 1;
  dword_6E1D44 = (int)fopen("/dev/tty", "r");
  if ( !dword_6E1D44 )
    dword_6E1D44 = stdin;
  dword_6E1D48 = (int)fopen("/dev/tty", "w");
  if ( !dword_6E1D48 )
    dword_6E1D48 = stderr;
  v1 = fileno((FILE *)dword_6E1D44);
  if ( tcgetattr(v1, (struct termios *)&unk_6E2F0C) != -1 )
    return 1;
  v3 = *_errno_location();
  if ( v3 == 25 || v3 == 22 || (unsigned int)(v3 - 5) <= 1 || v3 == 1 || v3 == 19 )
  {
    dword_6E2F48 = 0;
    return 1;
  }
  else
  {
    sub_B5560(v4, 9u, "%d", v3);
    sub_D0048(40, 114, 108, (int)"crypto/ui/ui_openssl.c", 464);
    sub_D1240(2, "errno=", v4);
    return 0;
  }
}

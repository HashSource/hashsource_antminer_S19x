void sub_35188()
{
  char v0[2048]; // [sp+0h] [bp-804h] BYREF

  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v0, 0x800u, "Attempting to restart %s", byte_87EA4);
    sub_1E4EC(4, v0, 0);
  }
  sub_2BDCC((int)sub_34CC4, 0, 5000);
  sub_4BD7C(1);
  if ( dword_88144 > 0 )
  {
    kill(dword_88144, 15);
    dword_88144 = 0;
  }
  execv(*(const char **)dword_898AC, (char *const *)dword_898AC);
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    strcpy(v0, "Failed to restart application");
    sub_1E4EC(4, v0, 0);
  }
}

void sub_319C4()
{
  char v0[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
  {
    snprintf(v0, 0x800u, "Attempting to restart %s", s);
    sub_20F58(4, v0, 0);
  }
  sub_2541C((int)sub_31ECC, 0, 5000);
  sub_3189C(1);
  if ( dword_68FFC > 0 )
  {
    kill(dword_68FFC, 15);
    dword_68FFC = 0;
  }
  execv(*(const char **)dword_69054, (char *const *)dword_69054);
  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
  {
    strcpy(v0, "Failed to restart application");
    sub_20F58(4, v0, 0);
  }
}

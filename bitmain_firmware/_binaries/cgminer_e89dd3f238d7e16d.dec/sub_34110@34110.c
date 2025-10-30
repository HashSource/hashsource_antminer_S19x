void sub_34110()
{
  char v0[2048]; // [sp+0h] [bp-804h] BYREF

  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v0, 0x800u, "Attempting to restart %s", byte_86D0C);
    sub_1DB6C(4, v0, 0);
  }
  sub_2ADD8((int)sub_33C3C, 0, 5000);
  sub_4B068(1);
  if ( dword_86FAC > 0 )
  {
    kill(dword_86FAC, 15);
    dword_86FAC = 0;
  }
  execv(*(const char **)dword_88714, (char *const *)dword_88714);
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    strcpy(v0, "Failed to restart application");
    sub_1DB6C(4, v0, 0);
  }
}

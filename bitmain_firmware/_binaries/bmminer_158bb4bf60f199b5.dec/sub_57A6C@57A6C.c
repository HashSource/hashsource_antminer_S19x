void sub_57A6C()
{
  char v0[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
  {
    snprintf(v0, 0x800u, "Attempting to restart %s", byte_1AECE4);
    sub_47AB4(4, v0, 0);
  }
  sub_4C084((int)sub_57F5C, 0, 5000);
  sub_57944(1);
  if ( dword_1AF0DC > 0 )
  {
    kill(dword_1AF0DC, 15);
    dword_1AF0DC = 0;
  }
  execv(*(const char **)dword_1AF128, (char *const *)dword_1AF128);
  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
  {
    strcpy(v0, "Failed to restart application");
    sub_47AB4(4, v0, 0);
  }
}

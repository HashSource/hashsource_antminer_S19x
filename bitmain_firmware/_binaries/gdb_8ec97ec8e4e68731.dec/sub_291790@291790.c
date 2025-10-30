bool sub_291790()
{
  __pid_t v0; // r0
  char v2[128]; // [sp+0h] [bp-80h] BYREF

  if ( dword_48B6C4 )
    fclose((FILE *)dword_48B6C4);
  v0 = getpid();
  sprintf(v2, "/var/tmp/rltrace.%ld", v0);
  unlink(v2);
  dword_48B6C4 = fopen64(v2, "w+");
  return dword_48B6C4 != 0;
}

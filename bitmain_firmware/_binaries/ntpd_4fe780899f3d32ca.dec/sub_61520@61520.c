int sub_61520()
{
  int result; // r0
  int *v1; // r0
  char *v2; // r0
  int v3; // [sp+0h] [bp-8h] BYREF

  v3 = 0;
  _printf_chk(1, "audio_show: ctl_fd %d\n", dword_1070F4);
  result = ioctl(dword_1070F4, 0x80044DFF, &v3);
  if ( result == -1 )
  {
    v1 = _errno_location();
    v2 = strerror(*v1);
    return _printf_chk(1, "SOUND_MIXER_READ_RECSRC: %s\n", v2);
  }
  return result;
}

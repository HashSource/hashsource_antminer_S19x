int __fastcall sub_621DC(int a1, int a2, int a3)
{
  unsigned int v5; // r1
  int v6; // r8
  int v7; // r0
  unsigned int v8; // r1
  int v9; // r12
  int *v11; // r0
  char *v12; // r0
  int *v13; // r0
  char *v14; // r0
  int *v15; // r0
  char *v16; // r0
  int v17; // [sp+0h] [bp-8h] BYREF

  v17 = (100 * a1 / 255) | ((100 * a1 / 255) << 8);
  if ( byte_108050 )
  {
    v6 = ioctl(dword_108118, dword_B8CC0, &v17);
  }
  else
  {
    v5 = -1073459962;
    if ( a3 != 2 )
      v5 = -1073459961;
    v6 = ioctl(dword_108118, v5, &v17);
  }
  if ( v6 == -1 )
  {
    v11 = _errno_location();
    v12 = strerror(*v11);
    _printf_chk(1, "audio_gain: agc write: %s\n", v12);
  }
  else
  {
    if ( dword_B8CC8 != a2 )
    {
      v7 = (unsigned __int8)byte_1080B4;
      if ( byte_1080B4 )
        v8 = dword_B8CC4;
      else
        v8 = 19712;
      if ( byte_1080B4 )
        v7 = dword_108118;
      else
        HIWORD(v8) = -16380;
      if ( !byte_1080B4 )
        v7 = dword_108118;
      v17 = (100 * a2 / 255) | ((100 * a2 / 255) << 8);
      v6 = ioctl(v7, v8);
      if ( v6 == -1 )
      {
        v13 = _errno_location();
        v14 = strerror(*v13);
        _printf_chk(1, "audio_gain: mongain write: %s\n", v14);
        return v6;
      }
      dword_B8CC8 = a2;
    }
    if ( dword_B8CCC != a3 )
    {
      if ( a3 == 2 )
        v9 = 64;
      else
        v9 = 128;
      v17 = v9;
      v6 = ioctl(dword_108118, 0xC0044DFF, &v17);
      if ( v6 == -1 )
      {
        v15 = _errno_location();
        v16 = strerror(*v15);
        _printf_chk(1, "SOUND_MIXER_WRITE_RECSRC: %s\n", v16);
      }
      else
      {
        dword_B8CCC = a3;
      }
    }
  }
  return v6;
}

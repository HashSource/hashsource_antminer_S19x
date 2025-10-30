int __fastcall sub_612E0(int a1, int a2, int a3)
{
  int v5; // r8
  unsigned int v6; // r1
  int v7; // r7
  int *v8; // r2
  unsigned int v9; // r1
  unsigned int v10; // r1
  int v11; // r3
  int *v13; // r0
  char *v14; // r0
  int *v15; // r0
  char *v16; // r0
  int *v17; // r0
  char *v18; // r0
  int v19; // [sp+0h] [bp-8h] BYREF

  v5 = dword_1070F4;
  v19 = (100 * a1 / 255) | ((100 * a1 / 255) << 8);
  if ( byte_10702C )
  {
    v7 = ioctl(dword_1070F4, dword_B7CC0, &v19);
  }
  else
  {
    v6 = -1073459961;
    if ( a3 == 2 )
      v6 = -1073459962;
    v7 = ioctl(dword_1070F4, v6, &v19);
  }
  if ( v7 == -1 )
  {
    v13 = _errno_location();
    v14 = strerror(*v13);
    _printf_chk(1, "audio_gain: agc write: %s\n", v14);
  }
  else
  {
    v8 = &dword_B7CC0;
    if ( dword_B7CC8 != a2 )
    {
      if ( byte_107090 )
      {
        v9 = dword_B7CC4;
      }
      else
      {
        v9 = 19712;
        v8 = &v19;
      }
      if ( byte_107090 )
        v8 = &v19;
      else
        HIWORD(v9) = -16380;
      v19 = (100 * a2 / 255) | ((100 * a2 / 255) << 8);
      v7 = ioctl(v5, v9, v8);
      if ( v7 == -1 )
      {
        v17 = _errno_location();
        v18 = strerror(*v17);
        _printf_chk(1, "audio_gain: mongain write: %s\n", v18);
        return v7;
      }
      dword_B7CC8 = a2;
    }
    if ( dword_B7CCC != a3 )
    {
      LOWORD(v10) = 19967;
      if ( a3 == 2 )
        v11 = 64;
      else
        v11 = 128;
      HIWORD(v10) = -16380;
      v19 = v11;
      v7 = ioctl(v5, v10, &v19);
      if ( v7 == -1 )
      {
        v15 = _errno_location();
        v16 = strerror(*v15);
        _printf_chk(1, "SOUND_MIXER_WRITE_RECSRC: %s\n", v16);
      }
      else
      {
        dword_B7CCC = a3;
      }
    }
  }
  return v7;
}

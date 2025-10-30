int __fastcall sub_60AC0(const char *a1, int a2, int a3)
{
  FILE *v4; // r8
  char *v5; // r0
  size_t v6; // r0
  size_t v7; // r9
  size_t v8; // r6
  int v9; // r4
  const unsigned __int16 **v10; // r0
  char *v11; // r3
  const unsigned __int16 *v12; // r1
  int v13; // t1
  int v14; // r4
  unsigned int v15; // r3
  const unsigned __int16 *v16; // r2
  char *v17; // r10
  char *v18; // r6
  int v19; // t1
  const unsigned __int16 **v20; // r0
  unsigned int v21; // r3
  int v22; // r3
  int v24; // r3
  int v26; // r0
  int v27; // t1
  int v28; // t1
  const char *v29; // r4
  int v30; // r5
  int v31; // r4
  int v32; // r6
  int v33; // r0
  int v34; // r6
  int v35; // r0
  int *v37; // r0
  char *v38; // r0
  int *v39; // r0
  char *v40; // r0
  int *v41; // r0
  char *v42; // r0
  void *v45; // [sp+2Ch] [bp-108h] BYREF
  char v46[20]; // [sp+30h] [bp-104h] BYREF
  _BYTE v47[32]; // [sp+44h] [bp-F0h] BYREF
  char v48[100]; // [sp+64h] [bp-D0h] BYREF
  char v49[100]; // [sp+C8h] [bp-6Ch] BYREF

  sub_6C054(v47, 30, "/dev/mixer%d", a3);
  sub_6C054(v46, 20, "%s%d", "/etc/ntp.audio", a3);
  v4 = (FILE *)fopen64(v46, "r");
  if ( v4
    || (_printf_chk(1, "audio_config_read: <%s> NO\n", v46),
        sub_6C054(v46, 20, "%s.%d", "/etc/ntp.audio", a3),
        (v4 = (FILE *)fopen64(v46, "r")) != 0)
    || (_printf_chk(1, "audio_config_read: <%s> NO\n", v46),
        sub_6C054(v46, 20, "%s", "/etc/ntp.audio"),
        (v4 = (FILE *)fopen64(v46, "r")) != 0) )
  {
    _printf_chk(1, "audio_config_read: reading <%s>\n", v46);
    while ( 1 )
    {
      do
      {
LABEL_3:
        if ( !fgets(v48, 100, v4) )
        {
          fclose(v4);
          goto LABEL_49;
        }
        v5 = strchr(v48, 35);
        if ( v5 )
          *v5 = 0;
        v6 = strlen(v48);
        v7 = v6;
        if ( v6 )
        {
          v8 = v6 - 1;
          v9 = (unsigned __int8)v48[v6 - 1];
          if ( (v9 & 0x80) == 0 )
          {
            v10 = _ctype_b_loc();
            v11 = &v48[v8];
            v12 = *v10;
            while ( 1 )
            {
              v7 = v8 + 1;
              if ( (v12[v9] & 0x2000) == 0 )
                break;
              *v11 = 0;
              if ( !v8 )
                goto LABEL_46;
              v13 = (unsigned __int8)*--v11;
              v9 = v13;
              if ( (v13 & 0x80) != 0 )
              {
                v7 = v8;
                break;
              }
              --v8;
            }
          }
        }
        else
        {
LABEL_46:
          v7 = 0;
        }
        v14 = (unsigned __int8)v48[0];
      }
      while ( !v48[0] );
      v15 = v48[0] & 0x80;
      if ( v15 )
      {
        v17 = v48;
      }
      else
      {
        v16 = *_ctype_b_loc();
        v17 = v48;
        while ( (v16[v14] & 0x2000) != 0 )
        {
          v27 = (unsigned __int8)*++v17;
          v14 = v27;
          if ( !v27 )
            goto LABEL_3;
          v15 = v14 & 0xFFFFFF80;
          if ( (v14 & 0xFFFFFF80) != 0 )
            goto LABEL_19;
        }
        v14 = (unsigned __int8)*v17;
        if ( !*v17 )
        {
          v18 = v17;
          goto LABEL_35;
        }
        v15 = v14 & 0x80;
      }
LABEL_19:
      v18 = v17;
      while ( 1 )
      {
        if ( !v15 )
        {
          v20 = _ctype_b_loc();
          v21 = (*v20)[(__int16)v14];
          if ( (v21 & 0x200) != 0 )
          {
            *v18 = (*_ctype_toupper_loc())[(__int16)v14];
            goto LABEL_21;
          }
          v22 = (v21 >> 13) & 1;
          if ( v14 == 61 ? v22 | 1 : v22 )
            break;
        }
LABEL_21:
        v19 = (unsigned __int8)*++v18;
        v14 = v19;
        if ( !v19 )
          goto LABEL_35;
        v15 = v14 & 0xFFFFFF80;
      }
      v24 = (unsigned __int8)*v18;
      if ( *v18 )
      {
        do
        {
          if ( (v24 & 0x80) != 0 )
            break;
          if ( v24 != 61 && !(((*v20)[v24] >> 13) & 1) )
            break;
          v28 = (unsigned __int8)*++v18;
          v24 = v28;
        }
        while ( v28 );
      }
LABEL_35:
      if ( !strncmp(v17, "IDEV", 4u) && sscanf(v18, "%99s", v49) == 1 )
      {
        sub_6D4DC(&byte_106FC8);
        _printf_chk(1, "idev <%s>\n", v49);
      }
      else if ( !strncmp(v17, "CDEV", 4u) && sscanf(v18, "%99s", v49) == 1 )
      {
        sub_6D4DC(&byte_106F64);
        _printf_chk(1, "cdev <%s>\n", v49);
      }
      else if ( !strncmp(v17, "AGC", 3u) && sscanf(v18, "%99s", v49) == 1 )
      {
        sub_6D4DC(&byte_10702C);
        _printf_chk(1, "agc <%s> %d\n", v49, v7);
      }
      else if ( !strncmp(v17, "MONITOR", 7u) && sscanf(v18, "%99s", v49) == 1 )
      {
        sub_6D4DC(&byte_107090);
        v26 = sub_60A30(v49, -1);
        _printf_chk(1, "monitor <%s> %d\n", v49, v26);
      }
    }
  }
  _printf_chk(1, "audio_config_read: <%s> NO\n", v46);
LABEL_49:
  v29 = v47;
  if ( byte_106F64 )
    v29 = &byte_106F64;
  if ( byte_106FC8 )
    a1 = &byte_106FC8;
  v30 = open64(a1, 2050);
  if ( v30 < 0 )
  {
    sub_64E00(3, "audio_init: %s %m", a1);
  }
  else
  {
    dword_1070F4 = open64(v29, 2);
    if ( dword_1070F4 < 0 )
    {
      sub_64E00(3, "audio_init: invalid control device <%s>", v29);
      close(v30);
      return dword_1070F4;
    }
    else
    {
      _printf_chk(1, "audio_init: <%s> bufsiz %d\n", a1, a2);
      v45 = &unk_100006;
      if ( ioctl(v30, 0xC004500A, &v45) == -1 )
      {
        v41 = _errno_location();
        v42 = strerror(*v41);
        _printf_chk(1, "audio_init: SNDCTL_DSP_SETFRAGMENT: %s\n", v42);
      }
      v31 = dword_1070F4;
      if ( ioctl(dword_1070F4, 0x80044DFE, &dword_1070F8) == -1 )
      {
        v39 = _errno_location();
        v40 = strerror(*v39);
        _printf_chk(1, "SOUND_MIXER_READ_DEVMASK: %s\n", v40);
        v31 = dword_1070F4;
      }
      if ( ioctl(v31, 0x80044DFD, &dword_1070FC) == -1 )
      {
        v37 = _errno_location();
        v38 = strerror(*v37);
        _printf_chk(1, "SOUND_MIXER_READ_RECMASK: %s\n", v38);
      }
      if ( byte_10702C )
      {
        v32 = dword_1070FC;
        v33 = sub_60A30(&byte_10702C, dword_1070FC);
        if ( v33 < 0 )
          _printf_chk(1, "input %s not in recmask %#x\n", &byte_10702C, v32);
        else
          dword_B7CC0 = v33 | 0xC0044D00;
      }
      if ( byte_107090 )
      {
        v34 = dword_1070F8;
        v35 = sub_60A30(&byte_107090, dword_1070F8);
        if ( v35 < 0 )
          _printf_chk(1, "monitor %s not in devmask %#x\n", &byte_107090, v34);
        else
          dword_B7CC4 = v35 | 0xC0044D00;
      }
    }
  }
  return v30;
}

int __fastcall sub_619B8(const char *a1, int a2, int a3)
{
  FILE *v4; // r7
  char *v5; // r0
  signed int v6; // r0
  signed int v7; // r5
  int v8; // r4
  const unsigned __int16 **v9; // r0
  char *v10; // r3
  const unsigned __int16 *v11; // r1
  int v12; // t1
  int v13; // r4
  unsigned int v14; // r3
  char *v15; // r9
  const unsigned __int16 *v16; // r2
  char *v17; // r10
  int v18; // t1
  const unsigned __int16 **v19; // r0
  unsigned int v20; // r3
  int v21; // r3
  int v23; // r3
  int v25; // r0
  int v26; // t1
  int v27; // t1
  char *v28; // r1
  char *v29; // r3
  const char *v30; // r4
  int v31; // r5
  int v32; // r4
  int v33; // r6
  int v34; // r0
  int v35; // r6
  int v36; // r0
  int *v38; // r0
  char *v39; // r0
  int *v40; // r0
  char *v41; // r0
  int *v42; // r0
  char *v43; // r0
  void *v46; // [sp+2Ch] [bp-108h] BYREF
  char v47[20]; // [sp+30h] [bp-104h] BYREF
  _BYTE v48[32]; // [sp+44h] [bp-F0h] BYREF
  char v49[100]; // [sp+64h] [bp-D0h] BYREF
  char v50[100]; // [sp+C8h] [bp-6Ch] BYREF

  sub_6D00C(v48, 30, "/dev/mixer%d", a3);
  sub_6D00C(v47, 20, "%s%d", "/etc/ntp.audio", a3);
  v4 = (FILE *)fopen64(v47, "r");
  if ( v4
    || (_printf_chk(1, "audio_config_read: <%s> NO\n", v47),
        sub_6D00C(v47, 20, "%s.%d", "/etc/ntp.audio", a3),
        (v4 = (FILE *)fopen64(v47, "r")) != 0)
    || (_printf_chk(1, "audio_config_read: <%s> NO\n", v47),
        sub_6D00C(v47, 20, "%s", "/etc/ntp.audio"),
        (v4 = (FILE *)fopen64(v47, "r")) != 0) )
  {
    _printf_chk(1, "audio_config_read: reading <%s>\n", v47);
    while ( 1 )
    {
      do
      {
LABEL_3:
        if ( !fgets(v49, 100, v4) )
        {
          fclose(v4);
          goto LABEL_54;
        }
        v5 = strchr(v49, 35);
        if ( v5 )
          *v5 = 0;
        v6 = strlen(v49);
        if ( v6 > 0 )
        {
          v7 = v6 - 1;
          v8 = (unsigned __int8)v49[v6 - 1];
          if ( (v8 & 0x80) == 0 )
          {
            v9 = _ctype_b_loc();
            v10 = &v49[v7];
            v11 = *v9;
            while ( 1 )
            {
              v6 = v7 + 1;
              if ( (v11[v8] & 0x2000) == 0 )
                break;
              *v10 = 0;
              if ( !v7 )
                goto LABEL_14;
              v12 = (unsigned __int8)*--v10;
              v8 = v12;
              if ( (v12 & 0x80) != 0 )
                goto LABEL_14;
              --v7;
            }
          }
        }
        v7 = v6;
LABEL_14:
        v13 = (unsigned __int8)v49[0];
      }
      while ( !v49[0] );
      v14 = v49[0] & 0x80;
      if ( v14 )
      {
        v15 = v49;
      }
      else
      {
        v15 = v49;
        v16 = *_ctype_b_loc();
        while ( (v16[v13] & 0x2000) != 0 )
        {
          v26 = (unsigned __int8)*++v15;
          v13 = v26;
          if ( !v26 )
            goto LABEL_3;
          v14 = v13 & 0xFFFFFF80;
          if ( (v13 & 0xFFFFFF80) != 0 )
            goto LABEL_20;
        }
        v13 = (unsigned __int8)*v15;
        if ( !*v15 )
        {
          v17 = v15;
          goto LABEL_36;
        }
        v14 = v13 & 0x80;
      }
LABEL_20:
      v17 = v15;
      while ( 1 )
      {
        if ( !v14 )
        {
          v19 = _ctype_b_loc();
          v20 = (*v19)[(__int16)v13];
          if ( (v20 & 0x200) != 0 )
          {
            *v17 = (*_ctype_toupper_loc())[(__int16)v13];
            goto LABEL_22;
          }
          v21 = (v20 >> 13) & 1;
          if ( v13 == 61 ? v21 | 1 : v21 )
            break;
        }
LABEL_22:
        v18 = (unsigned __int8)*++v17;
        v13 = v18;
        if ( !v18 )
          goto LABEL_36;
        v14 = v13 & 0xFFFFFF80;
      }
      v23 = (unsigned __int8)*v17;
      if ( *v17 )
      {
        do
        {
          if ( (v23 & 0x80) != 0 )
            break;
          if ( v23 != 61 && !(((*v19)[v23] >> 13) & 1) )
            break;
          v27 = (unsigned __int8)*++v17;
          v23 = v27;
        }
        while ( v27 );
      }
LABEL_36:
      if ( !strncmp(v15, "IDEV", 4u) && sscanf(v17, "%99s", v50) == 1 )
      {
        sub_6E4B4(&byte_107FEC);
        _printf_chk(1, "idev <%s>\n", v50);
      }
      else if ( !strncmp(v15, "CDEV", 4u) && sscanf(v17, "%99s", v50) == 1 )
      {
        sub_6E4B4(&byte_107F88);
        _printf_chk(1, "cdev <%s>\n", v50);
      }
      else if ( !strncmp(v15, "AGC", 3u) && sscanf(v17, "%99s", v50) == 1 )
      {
        sub_6E4B4(&byte_108050);
        _printf_chk(1, "agc <%s> %d\n", v50, v7);
      }
      else if ( !strncmp(v15, "MONITOR", 7u) && sscanf(v17, "%99s", v50) == 1 )
      {
        sub_6E4B4(&byte_1080B4);
        v25 = sub_61924(v50, -1);
        _printf_chk(1, "monitor <%s> %d\n", v50, v25);
      }
    }
  }
  _printf_chk(1, "audio_config_read: <%s> NO\n", v47);
LABEL_54:
  v28 = v48;
  v29 = &byte_107F88;
  if ( byte_107F88 )
    v28 = &byte_107F88;
  if ( byte_107FEC )
    v29 = &byte_107FEC;
  v30 = v28;
  if ( byte_107FEC )
    a1 = v29;
  v31 = open64(a1, 2050);
  if ( v31 < 0 )
  {
    sub_65D40(3, "audio_init: %s %m", a1);
  }
  else
  {
    dword_108118 = open64(v30, 2);
    if ( dword_108118 < 0 )
    {
      sub_65D40(3, "audio_init: invalid control device <%s>", v30);
      close(v31);
      return dword_108118;
    }
    else
    {
      _printf_chk(1, "audio_init: <%s> bufsiz %d\n", a1, a2);
      v46 = &unk_100006;
      if ( ioctl(v31, 0xC004500A, &v46) == -1 )
      {
        v40 = _errno_location();
        v41 = strerror(*v40);
        _printf_chk(1, "audio_init: SNDCTL_DSP_SETFRAGMENT: %s\n", v41);
      }
      v32 = dword_108118;
      if ( ioctl(dword_108118, 0x80044DFE, &dword_10811C) == -1 )
      {
        v42 = _errno_location();
        v43 = strerror(*v42);
        _printf_chk(1, "SOUND_MIXER_READ_DEVMASK: %s\n", v43);
        v32 = dword_108118;
      }
      if ( ioctl(v32, 0x80044DFD, &dword_108120) == -1 )
      {
        v38 = _errno_location();
        v39 = strerror(*v38);
        _printf_chk(1, "SOUND_MIXER_READ_RECMASK: %s\n", v39);
      }
      if ( byte_108050 )
      {
        v33 = dword_108120;
        v34 = sub_61924(&byte_108050, dword_108120);
        if ( v34 < 0 )
          _printf_chk(1, "input %s not in recmask %#x\n", &byte_108050, v33);
        else
          dword_B8CC0 = v34 | 0xC0044D00;
      }
      if ( byte_1080B4 )
      {
        v35 = dword_10811C;
        v36 = sub_61924(&byte_1080B4, dword_10811C);
        if ( v36 < 0 )
          _printf_chk(1, "monitor %s not in devmask %#x\n", &byte_1080B4, v35);
        else
          dword_B8CC4 = v36 | 0xC0044D00;
      }
    }
  }
  return v31;
}

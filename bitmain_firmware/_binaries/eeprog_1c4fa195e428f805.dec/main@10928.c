int __fastcall main(int a1, char **a2, char **a3)
{
  int v3; // r4
  int v6; // r11
  int v7; // r10
  int v8; // r9
  int v9; // r0
  int v10; // r8
  int v11; // r5
  char *v12; // r4
  char *v13; // r0
  bool v14; // zf
  int v15; // r2
  unsigned int v16; // r6
  char **v18; // r1
  int v19; // r2
  int v20; // [sp+Ch] [bp-90h]
  int v21; // [sp+10h] [bp-8Ch]
  int v22; // [sp+18h] [bp-84h] BYREF
  int v23; // [sp+1Ch] [bp-80h] BYREF
  _BYTE v24[16]; // [sp+20h] [bp-7Ch] BYREF
  _BYTE v25[104]; // [sp+30h] [bp-6Ch] BYREF

  v3 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  dword_22240 = 0;
  v21 = 0;
  v20 = 0;
  while ( 1 )
  {
    v9 = getopt(a1, a2, "1:8fr:qhw:xd");
    if ( v9 == -1 )
      break;
    if ( v9 == 102 )
    {
      ++v6;
    }
    else if ( v9 > 102 )
    {
      switch ( v9 )
      {
        case 'q':
          ++dword_22240;
          break;
        case 'x':
          ++v20;
          break;
        case 'h':
          sub_10E50(203);
        default:
LABEL_8:
          if ( v8 )
            sub_10E80("Both read and write requested", 206);
          v8 = v9;
          v21 = optarg;
          break;
      }
    }
    else
    {
      switch ( v9 )
      {
        case '8':
          if ( v3 )
            sub_10E80("EEPROM type switch (-8 or -16) used twice", 193);
          v3 = 1;
          break;
        case 'd':
          ++v7;
          break;
        case '1':
          if ( *(_BYTE *)optarg != 54 || strlen((const char *)optarg) != 1 )
            sub_10E50(182);
          if ( v3 )
            sub_10E80("EEPROM type switch (-8 or -16) used twice", 183);
          v3 = 2;
          break;
        default:
          goto LABEL_8;
      }
    }
  }
  if ( v3 )
    v10 = v3;
  else
    v10 = 1;
  if ( !v8 )
    sub_10E50(214);
  v11 = a1 - optind;
  if ( v11 == 1 )
  {
    if ( _xstat64(3, a2[optind], v25) == -1 )
    {
      v12 = getenv("EEPROG_DEV");
      v13 = a2[optind];
    }
    else
    {
      v12 = a2[optind];
      v13 = getenv("EEPROG_I2C_ADDR");
    }
  }
  else if ( v11 == 2 )
  {
    v18 = &a2[optind];
    v12 = *v18;
    ++optind;
    v13 = v18[1];
  }
  else
  {
    if ( v11 )
      sub_10E50(238);
    v12 = getenv("EEPROG_DEV");
    v13 = getenv("EEPROG_I2C_ADDR");
  }
  v14 = v12 == 0;
  if ( v12 )
    v14 = v13 == 0;
  v15 = v14;
  if ( v14 )
    sub_10E50(240);
  v16 = strtoul(v13, (char **)v15, v15);
  if ( !dword_22240 )
  {
    fprintf((FILE *)stderr, "eeprog %s, a 24Cxx EEPROM reader/writer\n", "0.7.5");
    if ( !dword_22240 )
    {
      fwrite("Copyright (c) 2003 by Stefano Barbato - All rights reserved.\n", 1u, 0x3Du, (FILE *)stderr);
      if ( !dword_22240 )
      {
        if ( v10 == 1 )
          v19 = 8;
        else
          v19 = 16;
        fprintf((FILE *)stderr, "  Bus: %s, Address: 0x%x, Mode: %dbit\n", v12, v16, v19);
      }
    }
  }
  if ( v7 )
  {
    fwrite("Dummy mode selected, nothing done.\n", 1u, 0x23u, (FILE *)stderr);
  }
  else
  {
    if ( sub_111B0(v12, v16, v10, v24) < 0 )
      sub_10E80("unable to open eeprom device file (check that the file exists and that it's readable)", 254);
    if ( v8 == 114 )
    {
      if ( !v6 )
        sub_10F30();
      v23 = 1;
      sub_10ED8(v21, &v22, &v23);
      if ( !dword_22240 )
        fprintf((FILE *)stderr, "  Reading %d bytes from 0x%x\n", v23, v22);
      sub_10F6C(v24, v22, v23, v20);
    }
    else
    {
      if ( v8 != 119 )
        sub_10E50(274);
      if ( !v6 )
        sub_10F30();
      sub_10ED8(v21, &v22, &v23);
      if ( !dword_22240 )
        fprintf((FILE *)stderr, "  Writing stdin starting at address 0x%x\n", v22);
      sub_11094(v24, v22);
    }
    sub_11334(v24);
  }
  return 0;
}

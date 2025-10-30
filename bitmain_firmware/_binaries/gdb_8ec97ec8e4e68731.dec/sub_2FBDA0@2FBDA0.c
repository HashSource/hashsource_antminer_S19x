int __fastcall sub_2FBDA0(int a1)
{
  int v3; // r3
  int v4; // r7
  void *v5; // r7
  char *v6; // r9
  DIR *v7; // r4
  char *v8; // r0
  char *v9; // r8
  bool v10; // zf
  int v11; // [sp+4h] [bp-6Ch] BYREF
  _BYTE v12[16]; // [sp+8h] [bp-68h] BYREF
  int v13; // [sp+18h] [bp-58h]

  if ( !off_48FE84 )
  {
    v3 = *(_BYTE *)(a1 + 44) & 0x30;
    if ( (*(_BYTE *)(a1 + 44) & 0x30) != 0 )
      goto LABEL_5;
    if ( dword_471490 )
    {
      if ( dword_48FE88 )
      {
        v4 = sub_2FBC38((const char *)dword_48FE88, a1, &dword_471490);
      }
      else
      {
        if ( !dword_48FE80 )
          return 0;
        v5 = (void *)sub_31E27C("/usr/bin", "/../lib/bfd-plugins", dword_48FE88);
        v6 = (char *)sub_324BE0(dword_48FE80, "/usr/bin", v5);
        free(v5);
        v7 = opendir(v6);
        if ( !v7 )
        {
          free(v6);
          return 0;
        }
        while ( 1 )
        {
          v4 = readdir64(v7);
          if ( !v4 )
            break;
          v9 = (char *)sub_31E27C(v6, &word_398974, v4 + 19);
          v10 = _xstat64(3, v9, v12) == 0;
          v8 = v9;
          if ( v10 && (v13 & 0xF000) == 0x8000 )
          {
            v4 = sub_2FBC38(v9, a1, &v11);
            if ( dword_471490 <= 0 )
              dword_471490 = v11;
            free(v9);
            if ( v4 )
              break;
          }
          else
          {
            if ( dword_471490 <= 0 )
            {
              v8 = v9;
              dword_471490 = v11;
            }
            free(v8);
          }
        }
        free(v6);
        closedir(v7);
      }
      if ( v4 )
      {
        v3 = *(_BYTE *)(a1 + 44) & 0x30;
LABEL_5:
        if ( v3 == 16 )
          return *(_DWORD *)(a1 + 4);
      }
    }
    return 0;
  }
  return off_48FE84();
}

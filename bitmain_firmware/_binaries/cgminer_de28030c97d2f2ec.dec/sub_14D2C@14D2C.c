int __fastcall sub_14D2C(int a1, const char **a2)
{
  FILE *v3; // r0
  void *v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  char v11[12]; // [sp+10h] [bp-B4Ch] BYREF
  char v12[512]; // [sp+810h] [bp-34Ch] BYREF
  _BYTE v13[16]; // [sp+A10h] [bp-14Ch] BYREF
  _BYTE v14[128]; // [sp+A20h] [bp-13Ch] BYREF
  _BYTE s[128]; // [sp+AA0h] [bp-BCh] BYREF
  _BYTE v16[28]; // [sp+B20h] [bp-3Ch] BYREF
  FILE *stream; // [sp+B3Ch] [bp-20h]
  int v18; // [sp+B40h] [bp-1Ch]
  int v19; // [sp+B44h] [bp-18h]
  int v20; // [sp+B48h] [bp-14h]
  const char **v21; // [sp+B4Ch] [bp-10h]
  int v22; // [sp+B50h] [bp-Ch]
  int v23; // [sp+B54h] [bp-8h]

  v23 = 0;
  v22 = 0;
  memset(&v16[12], 0, 16);
  v21 = a2;
  v20 = 0;
  v19 = 0;
  memset(v16, 0, 10);
  memset(s, 0, sizeof(s));
  memset(v14, 0, sizeof(v14));
  memset(v13, 0, 15);
  memset(v12, 0, sizeof(v12));
  v18 = 0;
  if ( v21 && a1 )
  {
    sub_13C84(a1, v21);
    sub_13E18(a1);
    v3 = (FILE *)fopen64("/tmp/warning.log", "r");
    stream = v3;
    if ( v3 )
    {
      v20 = sub_66A14(v3);
      while ( fgets(v12, 512, stream) )
      {
        memset(v16, 0, 0xAu);
        memset(s, 0, sizeof(s));
        memset(v14, 0, sizeof(v14));
        memset(v13, 0, 0xFu);
        sscanf(v12, "%[^;]; %[^;]; %[^;]; %s", v16, s, v14, v13);
        v4 = memset(v12, 0, sizeof(v12));
        v19 = sub_65ED4(v4);
        v5 = sub_67728(v16);
        sub_6611C(v19, "code", v5);
        v6 = sub_67728(s);
        sub_6611C(v19, "cause", v6);
        v7 = sub_67728(v14);
        sub_6611C(v19, "suggestion", v7);
        v8 = sub_67728(v13);
        sub_6611C(v19, "timestamp", v8);
        sub_66EA4(v20, v19);
      }
      fclose(stream);
      sub_6611C(a1, "WARNING", v20);
      return v23;
    }
    else
    {
      v23 = -2147483647;
      return -2147483647;
    }
  }
  else
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
    {
      snprintf(v11, 0x800u, "%s: input bad api param\n", "get_warning");
      sub_1E4EC(3, v11, 0);
    }
    return -2147483646;
  }
}

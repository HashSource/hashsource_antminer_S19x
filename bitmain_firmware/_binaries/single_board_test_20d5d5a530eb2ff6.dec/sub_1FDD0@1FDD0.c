int sub_1FDD0()
{
  int v0; // r0
  int v1; // r0
  char *v2; // r3
  int v3; // r0
  char v5[47]; // [sp+0h] [bp-70h] BYREF
  char v6; // [sp+2Fh] [bp-41h] BYREF
  _BYTE s[64]; // [sp+30h] [bp-40h] BYREF

  memset(s, 0, sizeof(s));
  s[0] = 32;
  sub_1E938(v5, 0x30u);
  printf("%s ", v5);
  printf("%s :  \n", "prepare_platform_environment");
  word_5FF4B0 = 32;
  v0 = sub_3CC5C(&word_5FF4B0, v5);
  v1 = sub_6DC7C(v0);
  v2 = &v6;
  if ( v1 )
  {
    sub_1E938(v5, 0x30u);
    printf("%s ", v5);
    printf("%s : platform init fail!!!\n", "prepare_platform_environment");
    strcpy(byte_5FF5B0, "platform init fail!!!");
    sub_3CC5C(byte_5FF5B0, v5);
    return 0;
  }
  else
  {
    do
      *++v2 = 32;
    while ( v2 != &s[63] );
    if ( sub_6FB58(0, s, 64) )
    {
      sub_1E938(v5, 0x30u);
      printf("%s ", v5);
      printf("%s : LCD init fail!!!\n", "prepare_platform_environment");
      strcpy(byte_5FF6B0, "LCD init fail!!!");
      sub_3CC5C(byte_5FF6B0, v5);
      return 0;
    }
    else
    {
      v3 = sub_6E938(0, 0);
      dword_21B3B0 = v3;
      if ( v3 < 0 )
      {
        sub_6FBF4(v3);
        sub_1F650(1, "Fan init");
        sub_1F650(2, "fail");
        sub_1E938(v5, 0x30u);
        printf("%s ", v5);
        printf("%s : FAN init fail!!!\n", "prepare_platform_environment");
        strcpy(byte_5FF7B0, "FAN init fail!!!");
        sub_3CC5C(byte_5FF7B0, v5);
        return 0;
      }
      else
      {
        return 1;
      }
    }
  }
}

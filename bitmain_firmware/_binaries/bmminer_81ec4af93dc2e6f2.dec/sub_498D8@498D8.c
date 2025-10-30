int __fastcall sub_498D8(int a1, const char *a2)
{
  unsigned int v4; // r6
  int v6; // r3
  int *v7; // r8
  int v8; // r3
  int *v9; // r0
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v4 = a1 - 160;
  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(s, 0x800u, "[DEBUG] sweep_type = 0x%X, pattern_file_path = %s\n", a1, a2);
    sub_3AF5C(4, s, 0, v6);
    if ( v4 > 1 )
      goto LABEL_3;
    if ( (unsigned int)off_AFC24 > 4 )
    {
      strcpy(s, "[DEBUG] allocate memory for pattern test.\n");
      sub_3AF5C(4, s, 0, *(unsigned __int16 *)"");
    }
  }
  else if ( v4 > 1 )
  {
LABEL_3:
    sub_46318(20, 255);
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
    snprintf(s, 0x800u, "Invalid sweep type 0x%X\n", a1);
LABEL_13:
    sub_3AF5C(3, s, 0, v8);
    return -1;
  }
  v7 = (int *)dword_530F08;
  if ( !dword_530F08 )
  {
    v9 = (int *)calloc(0x44u, 1u);
    v7 = v9;
    dword_530F08 = (int)v9;
    if ( !v9 )
    {
      sub_46318(13, 255);
      if ( (unsigned int)off_AFC24 <= 3 )
        return -1;
      strcpy(s, "Fail to allocate memory for send work context.\n");
      v8 = *(_DWORD *)"t.\n";
      goto LABEL_13;
    }
    v9[2] = 0;
    v9[3] = 0;
    v9[4] = 0;
    v9[5] = 0;
  }
  *v7 = a1;
  if ( a1 == 160 )
    v7[1] = (int)sub_490B8();
  else
    v7[1] = (int)sub_481CC();
  return (*(int (__fastcall **)(const char *))(*(_DWORD *)(dword_530F08 + 4) + 4))(a2);
}

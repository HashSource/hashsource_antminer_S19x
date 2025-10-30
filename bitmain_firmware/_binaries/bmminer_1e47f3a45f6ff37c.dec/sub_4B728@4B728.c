int __fastcall sub_4B728(int a1, const char *a2)
{
  int v5; // r3
  int *v6; // r8
  int v7; // r3
  int *v8; // r0
  int *v9; // r9
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(s, 0x800u, "[DEBUG] sweep_type = 0x%X, pattern_file_path = %s\n", a1, a2);
    sub_3B6AC(4, s, 0, v5);
    if ( (unsigned int)(a1 - 160) > 1 )
      goto LABEL_3;
    if ( (unsigned int)dword_B308C > 4 )
    {
      strcpy(s, "[DEBUG] allocate memory for pattern test.\n");
      sub_3B6AC(4, s, 0, *(unsigned __int16 *)"");
    }
  }
  else if ( (unsigned int)(a1 - 160) > 1 )
  {
LABEL_3:
    sub_481F0(20, 255);
    if ( (unsigned int)dword_B308C <= 3 )
      return -1;
    snprintf(s, 0x800u, "Invalid sweep type 0x%X\n", a1);
    sub_3B6AC(3, s, 0, v7);
    return -1;
  }
  v6 = (int *)dword_535D94;
  if ( !dword_535D94 )
  {
    v8 = (int *)malloc(0x44u);
    v9 = v8;
    dword_535D94 = (int)v8;
    if ( !v8 )
    {
      sub_481F0(13, 255);
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(s, "Fail to allocate memory for send work context.\n");
        sub_3B6AC(3, s, 0, *(int *)"t.\n");
      }
      return -1;
    }
    memset(v8, 0, 0x44u);
    v9[2] = 0;
    v9[3] = 0;
    v9[4] = 0;
    v9[5] = 0;
    v6 = v9;
  }
  *v6 = a1;
  if ( a1 == 160 )
    v6[1] = (int)sub_4AF08();
  else
    v6[1] = (int)sub_4A144();
  return (*(int (__fastcall **)(const char *))(*(_DWORD *)(dword_535D94 + 4) + 4))(a2);
}

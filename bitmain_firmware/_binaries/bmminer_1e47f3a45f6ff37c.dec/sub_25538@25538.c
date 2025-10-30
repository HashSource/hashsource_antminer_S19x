int __fastcall sub_25538(int a1, char **a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  const char *v7; // r8
  size_t v8; // r0
  char *v9; // r0
  const char *v10; // r4
  _DWORD *v11; // r0
  const char *v12; // lr
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  _DWORD *v17; // lr
  unsigned int v18; // r1
  const char *v19; // r0
  int v20; // r3
  int v21; // r3
  _DWORD *v22; // r0
  const char *v23; // r0
  int v24; // r3
  const char *v25; // r0
  int v26; // r3
  _DWORD v27[512]; // [sp+0h] [bp-800h] BYREF

  v4 = (_DWORD *)sub_75FEC(a1, "machine");
  v5 = v4;
  if ( v4 && *v4 == 2 )
  {
    if ( (unsigned int)dword_B308C > 4 )
    {
      v19 = (const char *)sub_777D0(v4);
      snprintf((char *)v27, 0x800u, "load machine %s conf\n", v19);
      sub_3B6AC(4, v27, 0, v20);
    }
    v7 = (const char *)sub_777D0(v5);
    v8 = strlen(v7);
    v9 = (char *)calloc(v8 + 1, 1u);
    v10 = v9;
    *a2 = v9;
    if ( v9 )
    {
      strcpy(v9, v7);
      if ( (unsigned int)dword_B308C > 4 )
      {
        snprintf((char *)v27, 0x800u, "machine : %s \n", v10);
        sub_3B6AC(4, v27, 0, v21);
      }
      v11 = (_DWORD *)sub_75FEC(a1, "hw_version");
      if ( v11 && *v11 == 2 )
      {
        if ( (unsigned int)dword_B308C > 4 )
        {
          v23 = (const char *)sub_777D0(v11);
          snprintf((char *)v27, 0x800u, "hw_version: %s\n", v23);
          sub_3B6AC(4, v27, 0, v24);
        }
        v22 = (_DWORD *)sub_75FEC(a1, "sw_version");
        if ( v22 && *v22 == 2 )
        {
          if ( (unsigned int)dword_B308C > 4 )
          {
            v25 = (const char *)sub_777D0(v22);
            snprintf((char *)v27, 0x800u, "sw_version: %s\n", v25);
            sub_3B6AC(4, v27, 0, v26);
          }
          return 0;
        }
        if ( (unsigned int)dword_B308C <= 3 )
          return -1;
        v12 = "get sw_version failed\n";
      }
      else
      {
        if ( (unsigned int)dword_B308C <= 3 )
          return -1;
        v12 = "get hw_version failed\n";
      }
      v13 = *(_DWORD *)v12;
      v14 = *((_DWORD *)v12 + 1);
      v15 = *((_DWORD *)v12 + 2);
      v16 = *((_DWORD *)v12 + 3);
      v17 = v12 + 16;
      v27[0] = v13;
      v27[1] = v14;
      v27[2] = v15;
      v27[3] = v16;
      v18 = v17[1];
      v27[4] = *v17;
      LOWORD(v27[5]) = v18;
      BYTE2(v27[5]) = BYTE2(v18);
      sub_3B6AC(3, v27, 0, HIWORD(v18));
      return -1;
    }
    if ( (unsigned int)dword_B308C <= 3 )
      return -1;
    strcpy((char *)v27, "get machine failed, Cannot allocate space\n");
    sub_3B6AC(3, v27, 0, *(unsigned __int16 *)"");
    return -1;
  }
  else
  {
    if ( (unsigned int)dword_B308C <= 3 )
      return -1;
    strcpy((char *)v27, "get machine failed\n");
    sub_3B6AC(3, v27, 0, *(_DWORD *)"failed\n");
    return -1;
  }
}

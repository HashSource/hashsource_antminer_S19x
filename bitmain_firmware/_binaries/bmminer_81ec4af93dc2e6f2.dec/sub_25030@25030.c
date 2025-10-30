int __fastcall sub_25030(int a1, char **a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  const char *v7; // r8
  size_t v8; // r0
  char *v9; // r0
  const char *v10; // r5
  _DWORD *v11; // r0
  void *v12; // r3
  const char *v13; // lr
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  _DWORD *v18; // lr
  unsigned int v19; // r1
  const char *v20; // r0
  int v21; // r3
  int v22; // r3
  _DWORD *v23; // r0
  void *v24; // r3
  const char *v25; // r0
  int v26; // r3
  const char *v27; // r0
  int v28; // r3
  _DWORD v29[512]; // [sp+0h] [bp-800h] BYREF

  v4 = (_DWORD *)sub_72B10(a1, "machine");
  v5 = v4;
  if ( !v4 )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
LABEL_18:
    strcpy((char *)v29, "get machine failed\n");
    sub_3AF5C(3, v29, 0, *(_DWORD *)"failed\n");
    return -1;
  }
  if ( *v4 != 2 )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
    goto LABEL_18;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    v20 = (const char *)sub_74300(v4);
    snprintf((char *)v29, 0x800u, "load machine %s conf\n", v20);
    sub_3AF5C(4, v29, 0, v21);
  }
  v7 = (const char *)sub_74300(v5);
  v8 = strlen(v7);
  v9 = (char *)calloc(v8 + 1, 1u);
  v10 = v9;
  *a2 = v9;
  if ( v9 )
  {
    strcpy(v9, v7);
    if ( (unsigned int)off_AFC24 > 4 )
    {
      snprintf((char *)v29, 0x800u, "machine : %s \n", v10);
      sub_3AF5C(4, v29, 0, v22);
    }
    v11 = (_DWORD *)sub_72B10(a1, "hw_version");
    if ( !v11 )
    {
      v12 = off_AFC24;
LABEL_13:
      if ( (unsigned int)v12 <= 3 )
        return -1;
      v13 = "get hw_version failed\n";
LABEL_16:
      v14 = *(_DWORD *)v13;
      v15 = *((_DWORD *)v13 + 1);
      v16 = *((_DWORD *)v13 + 2);
      v17 = *((_DWORD *)v13 + 3);
      v18 = v13 + 16;
      v29[0] = v14;
      v29[1] = v15;
      v29[2] = v16;
      v29[3] = v17;
      v19 = v18[1];
      v29[4] = *v18;
      LOWORD(v29[5]) = v19;
      BYTE2(v29[5]) = BYTE2(v19);
      sub_3AF5C(3, v29, 0, HIWORD(v19));
      return -1;
    }
    v12 = off_AFC24;
    if ( *v11 != 2 )
      goto LABEL_13;
    if ( (unsigned int)off_AFC24 > 4 )
    {
      v25 = (const char *)sub_74300(v11);
      snprintf((char *)v29, 0x800u, "hw_version: %s\n", v25);
      sub_3AF5C(4, v29, 0, v26);
    }
    v23 = (_DWORD *)sub_72B10(a1, "sw_version");
    if ( !v23 )
    {
      v24 = off_AFC24;
LABEL_26:
      if ( (unsigned int)v24 <= 3 )
        return -1;
      v13 = "get sw_version failed\n";
      goto LABEL_16;
    }
    v24 = off_AFC24;
    if ( *v23 != 2 )
      goto LABEL_26;
    if ( (unsigned int)off_AFC24 > 4 )
    {
      v27 = (const char *)sub_74300(v23);
      snprintf((char *)v29, 0x800u, "sw_version: %s\n", v27);
      sub_3AF5C(4, v29, 0, v28);
    }
    return 0;
  }
  else
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
    strcpy((char *)v29, "get machine failed, Cannot allocate space\n");
    sub_3AF5C(3, v29, 0, *(unsigned __int16 *)"");
    return -1;
  }
}

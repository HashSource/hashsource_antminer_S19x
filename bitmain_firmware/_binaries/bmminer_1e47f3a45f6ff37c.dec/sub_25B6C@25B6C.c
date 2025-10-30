int __fastcall sub_25B6C(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r7
  unsigned int v8; // r4
  const char *v9; // r5
  const char *v10; // r9
  _DWORD *v11; // r0
  _DWORD *v12; // r9
  _DWORD *v13; // r0
  _DWORD *v14; // r5
  int v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r5
  _DWORD *v18; // r0
  int v19; // r0
  int v20; // r3
  const char *v21; // r0
  int v22; // r3
  const char *v23; // r0
  int v24; // r3
  int v25; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v5 = (_DWORD *)sub_75FEC(a1, "fan");
  v6 = v5;
  if ( !v5 || *v5 != 1 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "get fan failed\n");
      sub_3B6AC(3, s, 0, *(_DWORD *)"ed\n");
    }
    return -1;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(s, "fan:\n");
    sub_3B6AC(4, s, 0, "fan:\n");
  }
  v8 = 0;
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v8 >= sub_76B34(v6) )
    {
      if ( !strncmp(v10, "right", 5u) )
      {
        if ( !strncmp(v9, "in", 2u) )
          goto LABEL_44;
        if ( strncmp(v10, "left", 4u) )
        {
          if ( strncmp(v9, "out", 2u) )
            goto LABEL_38;
LABEL_43:
          *a2 = 1;
          return 0;
        }
      }
      else if ( strncmp(v10, "left", 4u) )
      {
        goto LABEL_38;
      }
      if ( strncmp(v9, "out", 2u) )
      {
        if ( !strncmp(v9, "in", 2u) )
          goto LABEL_43;
LABEL_38:
        if ( (unsigned int)dword_B308C > 3 )
        {
          snprintf(s, 0x800u, "unkonwn wind position %s, direction %s\n", v10, v9);
          goto LABEL_27;
        }
        return -1;
      }
LABEL_44:
      *a2 = 0;
      return 0;
    }
    v16 = (_DWORD *)sub_76B80(v6, v8);
    v17 = v16;
    if ( !v16 || *v16 )
    {
      if ( (unsigned int)dword_B308C <= 3 )
        return -1;
      snprintf(s, 0x800u, "get array %d failed\n", v8);
      goto LABEL_27;
    }
    v18 = (_DWORD *)sub_75FEC(v16, "id");
    if ( !v18 || *v18 != 3 )
      break;
    if ( (unsigned int)dword_B308C > 4 )
    {
      v19 = sub_77C98(v18);
      snprintf(s, 0x800u, "id: %d\n", v19);
      sub_3B6AC(4, s, 0, v20);
    }
    v11 = (_DWORD *)sub_75FEC(v17, "position");
    v12 = v11;
    if ( !v11 || *v11 != 2 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(s, 0x800u, "get arrya %d position failed\n", v8);
        goto LABEL_27;
      }
      return -1;
    }
    if ( (unsigned int)dword_B308C > 4 )
    {
      v21 = (const char *)sub_777D0(v11);
      snprintf(s, 0x800u, "position: %s\n", v21);
      sub_3B6AC(4, s, 0, v22);
    }
    v10 = (const char *)sub_777D0(v12);
    v13 = (_DWORD *)sub_75FEC(v17, "direction");
    v14 = v13;
    if ( !v13 || *v13 != 2 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(s, 0x800u, "get arrya%d direction failed\n", v8);
        goto LABEL_27;
      }
      return -1;
    }
    if ( (unsigned int)dword_B308C > 4 )
    {
      v23 = (const char *)sub_777D0(v13);
      snprintf(s, 0x800u, "direction: %s\n", v23);
      sub_3B6AC(4, s, 0, v24);
    }
    ++v8;
    v15 = sub_777D0(v14);
    ++*a3;
    v9 = (const char *)v15;
  }
  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(s, 0x800u, "get arrya %d id failed\n", v8);
LABEL_27:
    sub_3B6AC(3, s, 0, v25);
    return -1;
  }
  return -1;
}

int __fastcall sub_25664(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r7
  unsigned int v7; // r5
  const char *v8; // r6
  const char *v9; // r8
  _DWORD *v10; // r0
  _DWORD *v11; // r8
  void *v12; // r3
  _DWORD *v13; // r0
  _DWORD *v14; // r6
  void *v15; // r3
  _DWORD *v16; // r0
  _DWORD *v17; // r6
  _DWORD *v18; // r0
  void *v19; // r3
  int v20; // r0
  int v21; // r3
  const char *v22; // r0
  int v23; // r3
  const char *v24; // r0
  int v25; // r3
  int v26; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v4 = (_DWORD *)sub_72B10(a1, "fan");
  v5 = v4;
  if ( !v4 )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
    goto LABEL_25;
  }
  if ( *v4 != 1 )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
LABEL_25:
    strcpy(s, "get fan failed\n");
    sub_3AF5C(3, s, 0, *(_DWORD *)"ed\n");
    return -1;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(s, "fan:\n");
    sub_3AF5C(4, s, 0, "fan:\n");
  }
  v7 = 0;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    if ( v7 >= sub_7365C(v5) )
    {
      if ( !strncmp(v9, "right", 5u) )
      {
        if ( strncmp(v8, "in", 2u) )
        {
          if ( strncmp(v9, "left", 4u) )
          {
            if ( !strncmp(v8, "out", 2u) )
            {
LABEL_42:
              *a2 = 1;
              return 0;
            }
LABEL_46:
            if ( (unsigned int)off_AFC24 > 3 )
            {
              snprintf(s, 0x800u, "unkonwn wind position %s, direction %s\n", v9, v8);
              goto LABEL_28;
            }
            return -1;
          }
          if ( strncmp(v8, "out", 2u) )
            goto LABEL_46;
        }
      }
      else
      {
        if ( strncmp(v9, "left", 4u) )
          goto LABEL_46;
        if ( strncmp(v8, "out", 2u) )
        {
          if ( !strncmp(v8, "in", 2u) )
            goto LABEL_42;
          goto LABEL_46;
        }
      }
      *a2 = 0;
      return 0;
    }
    v16 = (_DWORD *)sub_736A8(v5, v7);
    v17 = v16;
    if ( !v16 || *v16 )
    {
      if ( (unsigned int)off_AFC24 <= 3 )
        return -1;
      snprintf(s, 0x800u, "get array %d failed\n", v7);
      goto LABEL_28;
    }
    v18 = (_DWORD *)sub_72B10(v16, "id");
    if ( !v18 )
      break;
    v19 = off_AFC24;
    if ( *v18 != 3 )
      goto LABEL_30;
    if ( (unsigned int)off_AFC24 > 4 )
    {
      v20 = sub_747D0(v18);
      snprintf(s, 0x800u, "id: %d\n", v20);
      sub_3AF5C(4, s, 0, v21);
    }
    v10 = (_DWORD *)sub_72B10(v17, "position");
    v11 = v10;
    if ( !v10 )
    {
      v12 = off_AFC24;
LABEL_33:
      if ( (unsigned int)v12 > 3 )
      {
        snprintf(s, 0x800u, "get arrya %d position failed\n", v7);
        goto LABEL_28;
      }
      return -1;
    }
    v12 = off_AFC24;
    if ( *v10 != 2 )
      goto LABEL_33;
    if ( (unsigned int)off_AFC24 > 4 )
    {
      v22 = (const char *)sub_74300(v10);
      snprintf(s, 0x800u, "position: %s\n", v22);
      sub_3AF5C(4, s, 0, v23);
    }
    v9 = (const char *)sub_74300(v11);
    v13 = (_DWORD *)sub_72B10(v17, "direction");
    v14 = v13;
    if ( !v13 )
    {
      v15 = off_AFC24;
LABEL_36:
      if ( (unsigned int)v15 > 3 )
      {
        snprintf(s, 0x800u, "get arrya%d direction failed\n", v7);
        goto LABEL_28;
      }
      return -1;
    }
    v15 = off_AFC24;
    if ( *v13 != 2 )
      goto LABEL_36;
    if ( (unsigned int)off_AFC24 > 4 )
    {
      v24 = (const char *)sub_74300(v13);
      snprintf(s, 0x800u, "direction: %s\n", v24);
      sub_3AF5C(4, s, 0, v25);
    }
    ++v7;
    v8 = (const char *)sub_74300(v14);
    ++*a3;
  }
  v19 = off_AFC24;
LABEL_30:
  if ( (unsigned int)v19 > 3 )
  {
    snprintf(s, 0x800u, "get arrya %d id failed\n", v7);
LABEL_28:
    sub_3AF5C(3, s, 0, v26);
    return -1;
  }
  return -1;
}

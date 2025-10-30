int sub_2606C()
{
  _DWORD *v0; // r0
  int v1; // r4
  int v2; // r5
  unsigned int *v3; // r3
  unsigned int v4; // r2
  unsigned int v5; // r2
  int v6; // r3
  const char *v8; // r12
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r12
  _BYTE v14[252]; // [sp+4h] [bp-8FCh] BYREF
  char s[2048]; // [sp+100h] [bp-800h] BYREF

  v0 = (_DWORD *)sub_71604("/etc/topol.conf", 0, v14);
  v1 = (int)v0;
  if ( v0 && !*v0 )
  {
    memset(&dword_5BA9B0, 0, 0x34u);
    memset(&dword_5BA9E4, 0, 0x104u);
    v2 = sub_25030(v1, (char **)&dword_5BA920);
    if ( v2 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "parse machine failed\n");
        sub_3AF5C(3, s, 0, *(_DWORD *)"e failed\n");
      }
      goto LABEL_10;
    }
    v2 = sub_24EC0(v1);
    if ( v2 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "parse processor failed\n");
        sub_3AF5C(3, s, 0, *(_DWORD *)"sor failed\n");
      }
      goto LABEL_10;
    }
    v2 = sub_252EC(v1, (size_t *)&dword_5BA9A8, (void **)&dword_5BA9AC);
    if ( v2 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        v8 = "parse power failed\n";
LABEL_22:
        v9 = *(_DWORD *)v8;
        v10 = *((_DWORD *)v8 + 1);
        v11 = *((_DWORD *)v8 + 2);
        v12 = *((_DWORD *)v8 + 3);
        v13 = *((_DWORD *)v8 + 4);
        *(_DWORD *)s = v9;
        *(_DWORD *)&s[4] = v10;
        *(_DWORD *)&s[8] = v11;
        *(_DWORD *)&s[12] = v12;
        *(_DWORD *)&s[16] = v13;
        sub_3AF5C(3, s, 0, v12);
      }
    }
    else
    {
      v2 = sub_25664(v1, &dword_5BA970, &dword_5BA974);
      if ( v2 )
      {
        if ( (unsigned int)off_AFC24 > 3 )
        {
          strcpy(s, "parse fan failed\n");
          sub_3AF5C(3, s, 0, *(_DWORD *)"iled\n");
        }
        goto LABEL_10;
      }
      v2 = sub_247D8(v1, &dword_5BA920);
      if ( v2 )
      {
        if ( (unsigned int)off_AFC24 > 3 )
        {
          strcpy(s, "parse asic failed\n");
          sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
        }
        goto LABEL_10;
      }
      if ( sub_12890(v1, (int)&dword_5BA920) && (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "parse strategy failed\n");
        sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
      }
      sub_25DD0((int)&dword_5BA920);
      if ( sub_1333C(v1, (int)&dword_5BA920) && (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "parse mixed levels failed\n");
        sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
      }
      if ( sub_25BAC(v1, (int)&dword_5BA920) && (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "parse mixed levels failed");
        sub_3AF5C(3, s, 0, *(_DWORD *)"levels failed");
      }
      v2 = sub_1353C(v1, &dword_5BA920);
      if ( !v2 )
      {
        v2 = sub_24DB0(&dword_5BA920);
        if ( v2 && (unsigned int)off_AFC24 > 3 )
        {
          strcpy(s, "init topol runtime failed\n");
          sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
        }
        goto LABEL_10;
      }
      if ( (unsigned int)off_AFC24 > 3 )
      {
        v8 = "parse chain failed\n";
        goto LABEL_22;
      }
    }
LABEL_10:
    if ( *(_DWORD *)(v1 + 4) != -1 )
    {
      v3 = (unsigned int *)(v1 + 4);
      __dmb(0xBu);
      do
      {
        v4 = __ldrex(v3);
        v5 = v4 - 1;
      }
      while ( __strex(v5, v3) );
      if ( !v5 )
        sub_74C7C(v1);
    }
    return v2;
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(s, 0x800u, "load topol config file %s failed\n", "/etc/topol.conf");
    sub_3AF5C(3, s, 0, v6);
    return -1;
  }
  return -1;
}

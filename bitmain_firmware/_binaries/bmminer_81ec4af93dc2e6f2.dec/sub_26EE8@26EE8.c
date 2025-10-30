int __fastcall sub_26EE8(int a1)
{
  _DWORD *v1; // r0
  int v2; // r4
  int v3; // r5
  unsigned int *v4; // r3
  unsigned int v5; // r2
  unsigned int v6; // r2
  int v7; // r3
  const char *v9; // r12
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r12
  _BYTE v15[252]; // [sp+4h] [bp-8FCh] BYREF
  char s[2048]; // [sp+100h] [bp-800h] BYREF

  v1 = (_DWORD *)sub_71604(a1, 0, v15);
  v2 = (int)v1;
  if ( v1 && !*v1 )
  {
    v3 = sub_25030((int)v1, (char **)&dword_B10A0);
    if ( v3 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "parse machine failed\n");
        sub_3AF5C(3, s, 0, *(_DWORD *)"e failed\n");
      }
      goto LABEL_10;
    }
    v3 = sub_24EC0(v2);
    if ( v3 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "parse processor failed\n");
        sub_3AF5C(3, s, 0, *(_DWORD *)"sor failed\n");
      }
      goto LABEL_10;
    }
    v3 = sub_252EC(v2, &dword_B10F4[13], (void **)&unk_B112C);
    if ( v3 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        v9 = "parse power failed\n";
LABEL_22:
        v10 = *(_DWORD *)v9;
        v11 = *((_DWORD *)v9 + 1);
        v12 = *((_DWORD *)v9 + 2);
        v13 = *((_DWORD *)v9 + 3);
        v14 = *((_DWORD *)v9 + 4);
        *(_DWORD *)s = v10;
        *(_DWORD *)&s[4] = v11;
        *(_DWORD *)&s[8] = v12;
        *(_DWORD *)&s[12] = v13;
        *(_DWORD *)&s[16] = v14;
        sub_3AF5C(3, s, 0, v13);
      }
    }
    else
    {
      v3 = sub_25664(v2, &dword_B10F0, dword_B10F4);
      if ( v3 )
      {
        if ( (unsigned int)off_AFC24 > 3 )
        {
          strcpy(s, "parse fan failed\n");
          sub_3AF5C(3, s, 0, *(_DWORD *)"iled\n");
        }
        goto LABEL_10;
      }
      v3 = sub_247D8(v2, &dword_B10A0);
      if ( v3 )
      {
        if ( (unsigned int)off_AFC24 > 3 )
        {
          strcpy(s, "parse asic failed\n");
          sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
        }
        goto LABEL_10;
      }
      if ( sub_12890(v2, (int)&dword_B10A0) && (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "parse strategy failed\n");
        sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
      }
      sub_25DD0((int)&dword_B10A0);
      if ( sub_1333C(v2, (int)&dword_B10A0) && (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "parse mixed levels failed\n");
        sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
      }
      if ( sub_25BAC(v2, (int)&dword_B10A0) && (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "parse mixed levels failed");
        sub_3AF5C(3, s, 0, *(_DWORD *)"levels failed");
      }
      v3 = sub_1353C(v2, &dword_B10A0);
      if ( !v3 )
      {
        v3 = sub_24DB0(&dword_B10A0);
        if ( v3 && (unsigned int)off_AFC24 > 3 )
        {
          strcpy(s, "init topol runtime failed\n");
          sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
        }
        goto LABEL_10;
      }
      if ( (unsigned int)off_AFC24 > 3 )
      {
        v9 = "parse chain failed\n";
        goto LABEL_22;
      }
    }
LABEL_10:
    if ( *(_DWORD *)(v2 + 4) != -1 )
    {
      v4 = (unsigned int *)(v2 + 4);
      __dmb(0xBu);
      do
      {
        v5 = __ldrex(v4);
        v6 = v5 - 1;
      }
      while ( __strex(v6, v4) );
      if ( !v6 )
        sub_74C7C(v2);
    }
    return v3;
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(s, 0x800u, "load topol config file %s failed\n", "/etc/topol.conf");
    sub_3AF5C(3, s, 0, v7);
    return -1;
  }
  return -1;
}

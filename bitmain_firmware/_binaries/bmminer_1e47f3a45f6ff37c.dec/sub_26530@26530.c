int sub_26530()
{
  _DWORD *v0; // r0
  int v1; // r6
  int v3; // r7
  unsigned int *v4; // r3
  unsigned int v5; // r2
  unsigned int v6; // r2
  int v7; // r3
  _BYTE v8[252]; // [sp+4h] [bp-900h] BYREF
  char s[2052]; // [sp+100h] [bp-804h] BYREF

  v0 = (_DWORD *)sub_74B18("/etc/topol.conf", 0, v8);
  v1 = (int)v0;
  if ( v0 && !*v0 )
  {
    dword_5BF868 = 0;
    dword_5BF86C = 0;
    dword_5BF870 = 0;
    dword_5BF874 = 0;
    dword_5BF878 = 0;
    dword_5BF87C = 0;
    dword_5BF880 = 0;
    dword_5BF884 = 0;
    dword_5BF888 = 0;
    dword_5BF88C = 0;
    dword_5BF890 = 0;
    dword_5BF894 = 0;
    dword_5BF898 = 0;
    memset(&dword_5BF89C, 0, 0x104u);
    v3 = sub_25538(v1, (char **)&dword_5BF7D8);
    if ( v3 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(s, "parse machine failed\n");
        sub_3B6AC(3, s, 0, *(_DWORD *)"e failed\n");
      }
    }
    else
    {
      v3 = sub_253CC(v1);
      if ( v3 )
      {
        if ( (unsigned int)dword_B308C > 3 )
        {
          strcpy(s, "parse processor failed\n");
          sub_3B6AC(3, s, 0, *(_DWORD *)"sor failed\n");
        }
      }
      else
      {
        v3 = sub_257EC(v1, (size_t *)&dword_5BF860, (char **)&dword_5BF864);
        if ( v3 )
        {
          if ( (unsigned int)dword_B308C > 3 )
          {
            strcpy(s, "parse power failed\n");
            sub_3B6AC(3, s, 0, *(_DWORD *)"failed\n");
          }
        }
        else
        {
          v3 = sub_25B6C(v1, &dword_5BF828, dword_5BF82C);
          if ( v3 )
          {
            if ( (unsigned int)dword_B308C > 3 )
            {
              strcpy(s, "parse fan failed\n");
              sub_3B6AC(3, s, 0, *(_DWORD *)"iled\n");
            }
          }
          else
          {
            v3 = sub_24CE8(v1, &dword_5BF7D8);
            if ( v3 )
            {
              if ( (unsigned int)dword_B308C > 3 )
              {
                strcpy(s, "parse asic failed\n");
                sub_3B6AC(3, s, 0, *(_DWORD *)"ailed\n");
              }
            }
            else
            {
              if ( sub_12B38(v1, (int)&dword_5BF7D8) && (unsigned int)dword_B308C > 3 )
              {
                strcpy(s, "parse strategy failed\n");
                sub_3B6AC(3, s, 0, *(unsigned __int16 *)"");
              }
              sub_26294((int)&dword_5BF7D8);
              if ( sub_135E4(v1, (int)&dword_5BF7D8) && (unsigned int)dword_B308C > 3 )
              {
                strcpy(s, "parse mixed levels failed\n");
                sub_3B6AC(3, s, 0, *(unsigned __int16 *)"");
              }
              if ( sub_26078(v1, (int)&dword_5BF7D8) && (unsigned int)dword_B308C > 3 )
              {
                strcpy(s, "parse mixed levels failed");
                sub_3B6AC(3, s, 0, *(_DWORD *)"levels failed");
              }
              v3 = sub_137E4(v1, &dword_5BF7D8);
              if ( v3 )
              {
                if ( (unsigned int)dword_B308C > 3 )
                {
                  strcpy(s, "parse chain failed\n");
                  sub_3B6AC(3, s, 0, *(_DWORD *)"failed\n");
                }
              }
              else
              {
                v3 = sub_252C0(&dword_5BF7D8);
                if ( v3 && (unsigned int)dword_B308C > 3 )
                {
                  strcpy(s, "init topol runtime failed\n");
                  sub_3B6AC(3, s, 0, *(unsigned __int16 *)"");
                }
              }
            }
          }
        }
      }
    }
    if ( *(_DWORD *)(v1 + 4) == -1 )
      return v3;
    v4 = (unsigned int *)(v1 + 4);
    __dmb(0xFu);
    do
    {
      v5 = __ldrex(v4);
      v6 = v5 - 1;
    }
    while ( __strex(v6, v4) );
    if ( v6 )
    {
      return v3;
    }
    else
    {
      sub_780F0(v1);
      return v3;
    }
  }
  else
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(s, 0x800u, "load topol config file %s failed\n", "/etc/topol.conf");
      sub_3B6AC(3, s, 0, v7);
    }
    return -1;
  }
}

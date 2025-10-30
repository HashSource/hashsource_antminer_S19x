int __fastcall sub_27440(int a1)
{
  _DWORD *v1; // r0
  int v2; // r5
  int v4; // r4
  unsigned int *v5; // r3
  unsigned int v6; // r2
  unsigned int v7; // r2
  int v8; // r3
  _BYTE v9[252]; // [sp+4h] [bp-8FCh] BYREF
  char s[2048]; // [sp+100h] [bp-800h] BYREF

  v1 = (_DWORD *)sub_74B18(a1, 0, v9);
  v2 = (int)v1;
  if ( v1 && !*v1 )
  {
    v4 = sub_25538((int)v1, (char **)&dword_B3E10);
    if ( v4 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(s, "parse machine failed\n");
        sub_3B6AC(3, s, 0, *(_DWORD *)"e failed\n");
      }
    }
    else
    {
      v4 = sub_253CC(v2);
      if ( v4 )
      {
        if ( (unsigned int)dword_B308C > 3 )
        {
          strcpy(s, "parse processor failed\n");
          sub_3B6AC(3, s, 0, *(_DWORD *)"sor failed\n");
        }
      }
      else
      {
        v4 = sub_257EC(v2, &dword_B3E64[13], (char **)&unk_B3E9C);
        if ( v4 )
        {
          if ( (unsigned int)dword_B308C > 3 )
          {
            strcpy(s, "parse power failed\n");
            sub_3B6AC(3, s, 0, *(_DWORD *)"failed\n");
          }
        }
        else
        {
          v4 = sub_25B6C(v2, &dword_B3E60, dword_B3E64);
          if ( v4 )
          {
            if ( (unsigned int)dword_B308C > 3 )
            {
              strcpy(s, "parse fan failed\n");
              sub_3B6AC(3, s, 0, *(_DWORD *)"iled\n");
            }
          }
          else
          {
            v4 = sub_24CE8(v2, &dword_B3E10);
            if ( v4 )
            {
              if ( (unsigned int)dword_B308C > 3 )
              {
                strcpy(s, "parse asic failed\n");
                sub_3B6AC(3, s, 0, *(_DWORD *)"ailed\n");
              }
            }
            else
            {
              if ( sub_12B38(v2, (int)&dword_B3E10) && (unsigned int)dword_B308C > 3 )
              {
                strcpy(s, "parse strategy failed\n");
                sub_3B6AC(3, s, 0, *(unsigned __int16 *)"");
              }
              sub_26294((int)&dword_B3E10);
              if ( sub_135E4(v2, (int)&dword_B3E10) && (unsigned int)dword_B308C > 3 )
              {
                strcpy(s, "parse mixed levels failed\n");
                sub_3B6AC(3, s, 0, *(unsigned __int16 *)"");
              }
              if ( sub_26078(v2, (int)&dword_B3E10) && (unsigned int)dword_B308C > 3 )
              {
                strcpy(s, "parse mixed levels failed");
                sub_3B6AC(3, s, 0, *(_DWORD *)"levels failed");
              }
              v4 = sub_137E4(v2, &dword_B3E10);
              if ( v4 )
              {
                if ( (unsigned int)dword_B308C > 3 )
                {
                  strcpy(s, "parse chain failed\n");
                  sub_3B6AC(3, s, 0, *(_DWORD *)"failed\n");
                }
              }
              else
              {
                v4 = sub_252C0(&dword_B3E10);
                if ( v4 && (unsigned int)dword_B308C > 3 )
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
    if ( *(_DWORD *)(v2 + 4) == -1 )
      return v4;
    v5 = (unsigned int *)(v2 + 4);
    __dmb(0xFu);
    do
    {
      v6 = __ldrex(v5);
      v7 = v6 - 1;
    }
    while ( __strex(v7, v5) );
    if ( v7 )
    {
      return v4;
    }
    else
    {
      sub_780F0(v2);
      return v4;
    }
  }
  else
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(s, 0x800u, "load topol config file %s failed\n", "/etc/topol.conf");
      sub_3B6AC(3, s, 0, v8);
    }
    return -1;
  }
}

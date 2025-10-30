void __fastcall sub_857E4(unsigned int a1, int a2)
{
  bool v2; // cc
  int v3; // r3
  int v5; // r6
  _DWORD *v6; // r9
  int v7; // r11
  const char **v8; // r10
  int v9; // r4
  int v10; // r3
  bool v11; // zf
  char *v12; // r5
  const char *v13; // t1
  char *v14; // r8
  int v15; // r3
  int v16; // r3

  v2 = a2 != 0;
  if ( a2 )
    v2 = a1 > 0xF;
  if ( v2 )
  {
    v3 = *(_DWORD *)(a2 + 16);
    v5 = v3 & 8;
    if ( (v3 & 8) == 0 )
    {
      v6 = *(_DWORD **)(a2 + 28);
      if ( v6 )
      {
        v7 = *v6;
        if ( (int)*v6 > 0 )
        {
          v8 = (const char **)(v6 + 2);
          v9 = v3 & 8;
          while ( 1 )
          {
            while ( 1 )
            {
              v13 = *v8++;
              v12 = (char *)v13;
              v14 = strchr(v13, 61);
              if ( !v14 )
                break;
              *v14 = 0;
              if ( !strcmp(v12, *(const char **)(a2 + 24)) )
                goto LABEL_19;
              v10 = 61;
              *v14 = 61;
LABEL_12:
              v11 = v9++ == v5;
              if ( !v11 )
                v10 = v5 + 2;
              ++v5;
              if ( !v11 )
                v6[v10] = v12;
              if ( v7 == v9 )
              {
LABEL_20:
                v7 = *v6;
                goto LABEL_21;
              }
            }
            if ( strcmp(v12, *(const char **)(a2 + 24)) )
              goto LABEL_12;
LABEL_19:
            ++v9;
            free(v12);
            --*v6;
            if ( v7 == v9 )
              goto LABEL_20;
          }
        }
LABEL_21:
        if ( !v7 )
        {
          v15 = *(_DWORD *)(a2 + 16) & 0xFFFFF00;
          if ( (*(_DWORD *)(a2 + 16) & 0x800) == 0 )
            v15 |= 0x20u;
          *(_DWORD *)(a2 + 16) = v15;
          free(v6);
          *(_DWORD *)(a2 + 28) = 0;
        }
      }
      else
      {
        v16 = v3 & 0xFFFFF00;
        if ( (*(_DWORD *)(a2 + 16) & 0x800) == 0 )
          v16 |= 0x20u;
        *(_DWORD *)(a2 + 16) = v16;
      }
    }
  }
}

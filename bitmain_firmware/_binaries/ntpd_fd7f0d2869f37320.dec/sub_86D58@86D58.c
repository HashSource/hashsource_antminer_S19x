void __fastcall sub_86D58(unsigned int a1, int a2)
{
  bool v2; // cc
  int v3; // r3
  int v5; // r6
  int *v6; // r9
  int v7; // r10
  _DWORD *v8; // r8
  int v9; // r4
  bool v10; // zf
  int v11; // r3
  char *v12; // r5
  const char *v13; // t1
  char *v14; // r11
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
      v6 = *(int **)(a2 + 28);
      if ( v6 )
      {
        v7 = *v6;
        if ( *v6 > 0 )
        {
          v8 = v6 + 1;
          v9 = v3 & 8;
          while ( 1 )
          {
            while ( 1 )
            {
              v13 = (const char *)v8[1];
              ++v8;
              v12 = (char *)v13;
              v14 = strchr(v13, 61);
              if ( v14 )
                break;
              if ( strcmp(v12, *(const char **)(a2 + 24)) )
                goto LABEL_9;
LABEL_17:
              ++v9;
              free(v12);
              --*v6;
              if ( v9 == v7 )
                goto LABEL_18;
            }
            *v14 = 0;
            if ( !strcmp(v12, *(const char **)(a2 + 24)) )
              goto LABEL_17;
            v11 = 61;
            *v14 = 61;
LABEL_9:
            v10 = v5 == v9++;
            if ( !v10 )
              v11 = v5 + 2;
            ++v5;
            if ( !v10 )
              v6[v11] = (int)v12;
            if ( v9 == v7 )
            {
LABEL_18:
              v7 = *v6;
              break;
            }
          }
        }
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

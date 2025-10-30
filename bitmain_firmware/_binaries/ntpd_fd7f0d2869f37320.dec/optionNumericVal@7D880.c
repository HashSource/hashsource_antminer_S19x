void __fastcall optionNumericVal(unsigned int a1, int a2)
{
  bool v2; // cc
  int *v5; // r0
  int *v6; // r9
  int v7; // r0
  char *v8; // r3
  char *v9; // r2
  int v10; // r7
  int v11; // r1
  char *v12; // r12
  unsigned int v13; // r0
  char *v14; // [sp+0h] [bp-Ch] BYREF

  v2 = a2 != 0;
  if ( a2 )
    v2 = a1 > 0xF;
  if ( v2 && (*(_DWORD *)(a2 + 16) & 8) == 0 && *(_DWORD *)(a2 + 24) )
  {
    v5 = _errno_location();
    *v5 = 0;
    v6 = v5;
    v7 = strtol(*(const char **)(a2 + 24), &v14, 0);
    v8 = *(char **)(a2 + 24);
    v9 = v14;
    v10 = v7;
    if ( v8 == v14 || *v6 )
      goto LABEL_25;
    v11 = *(_DWORD *)(a2 + 16);
    if ( (v11 & 0x1000000) == 0 )
      goto LABEL_19;
    v12 = ++v14;
    v13 = (unsigned __int8)*v9;
    if ( v13 == 84 )
    {
      v10 <<= 10;
      goto LABEL_38;
    }
    if ( v13 <= 0x54 )
    {
      if ( v13 != 71 )
      {
        if ( v13 > 0x47 )
        {
          if ( v13 == 75 )
          {
LABEL_18:
            v10 <<= 10;
            ++v9;
            goto LABEL_19;
          }
          if ( v13 == 77 )
          {
LABEL_17:
            v10 <<= 10;
            goto LABEL_18;
          }
LABEL_25:
          fprintf(stderr, off_B9520, *(_DWORD *)(a1 + 28));
          if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
            (*(void (__fastcall **)(unsigned int, int))(a1 + 84))(a1, 1);
          *v6 = 22;
          *(_DWORD *)(a2 + 24) = -1;
          return;
        }
        if ( *v9 )
          goto LABEL_25;
        v14 = v9;
LABEL_19:
        if ( !*v9 )
        {
          if ( (v11 & 0x40) != 0 )
          {
            free(v8);
            *(_DWORD *)(a2 + 16) &= ~0x40u;
          }
          *(_DWORD *)(a2 + 24) = v10;
          return;
        }
        goto LABEL_25;
      }
LABEL_38:
      v10 <<= 10;
      goto LABEL_17;
    }
    if ( v13 == 107 )
    {
LABEL_36:
      v9 = v12;
      v10 *= 1000;
      goto LABEL_19;
    }
    if ( v13 <= 0x6B )
    {
      if ( v13 != 103 )
        goto LABEL_25;
    }
    else
    {
      if ( v13 == 109 )
      {
LABEL_35:
        v10 *= 1000;
        goto LABEL_36;
      }
      if ( v13 != 116 )
        goto LABEL_25;
      v10 *= 1000;
    }
    v10 *= 1000;
    goto LABEL_35;
  }
}

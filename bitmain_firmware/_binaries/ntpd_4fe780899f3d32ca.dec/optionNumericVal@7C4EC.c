void __fastcall optionNumericVal(unsigned int a1, int a2)
{
  bool v2; // cc
  int *v5; // r0
  int *v6; // r9
  int v7; // r0
  char *v8; // r3
  int v9; // r7
  char *v10; // r2
  int v11; // r1
  char *v12; // r12
  unsigned int v13; // r0
  char *v14; // [sp+0h] [bp-Ch] BYREF

  v2 = a2 != 0;
  if ( a2 )
    v2 = a1 > 0xF;
  if ( !v2 || (*(_DWORD *)(a2 + 16) & 8) != 0 || !*(_DWORD *)(a2 + 24) )
    return;
  v5 = _errno_location();
  *v5 = 0;
  v6 = v5;
  v7 = strtol(*(const char **)(a2 + 24), &v14, 0);
  v8 = *(char **)(a2 + 24);
  v9 = v7;
  v10 = v14;
  if ( v8 == v14 || *v6 )
    goto LABEL_20;
  v11 = *(_DWORD *)(a2 + 16);
  if ( (v11 & 0x1000000) != 0 )
  {
    v12 = ++v14;
    v13 = (unsigned __int8)*v10;
    if ( v13 == 84 )
    {
      v9 <<= 10;
      goto LABEL_35;
    }
    if ( v13 <= 0x54 )
    {
      if ( v13 != 71 )
      {
        if ( v13 <= 0x47 )
        {
          if ( *v10 )
            goto LABEL_20;
          v14 = v10;
          goto LABEL_19;
        }
        if ( v13 == 75 )
          goto LABEL_18;
        if ( v13 == 77 )
        {
LABEL_17:
          v9 <<= 10;
LABEL_18:
          v9 <<= 10;
          ++v10;
          goto LABEL_19;
        }
LABEL_20:
        fprintf(stderr, off_B851C[0], *(_DWORD *)(a1 + 28));
        if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
          (*(void (__fastcall **)(unsigned int, int))(a1 + 84))(a1, 1);
        *v6 = 22;
        *(_DWORD *)(a2 + 24) = -1;
        return;
      }
LABEL_35:
      v9 <<= 10;
      goto LABEL_17;
    }
    if ( v13 == 107 )
    {
LABEL_33:
      v10 = v12;
      v9 *= 1000;
      goto LABEL_19;
    }
    if ( v13 <= 0x6B )
    {
      if ( v13 != 103 )
        goto LABEL_20;
    }
    else
    {
      if ( v13 == 109 )
      {
LABEL_32:
        v9 *= 1000;
        goto LABEL_33;
      }
      if ( v13 != 116 )
        goto LABEL_20;
      v9 *= 1000;
    }
    v9 *= 1000;
    goto LABEL_32;
  }
LABEL_19:
  if ( *v10 )
    goto LABEL_20;
  if ( (v11 & 0x40) != 0 )
  {
    free(v8);
    *(_DWORD *)(a2 + 16) &= ~0x40u;
  }
  *(_DWORD *)(a2 + 24) = v9;
}

int __fastcall sub_2CBE24(_DWORD *a1, int a2)
{
  char *v4; // r0
  int v5; // r6
  int v6; // r11
  int v7; // r3
  int v8; // r2
  int v9; // r3
  int v10; // r10
  int v11; // r4
  int v12; // r5
  unsigned int *v13; // r5
  int (__fastcall *v14)(_DWORD *, int); // r3
  int v15; // r0
  int v17; // r0
  _DWORD *v18; // r4
  unsigned int i; // r8
  int v20; // r3

  v4 = sub_2AD7AC((int)a1, ".interp");
  if ( v4 )
  {
    if ( (*((_DWORD *)v4 + 5) & 2) != 0 )
      v5 = 4;
    else
      v5 = 2;
  }
  else
  {
    v5 = 2;
  }
  if ( sub_2AD7AC((int)a1, ".dynamic") )
    ++v5;
  if ( a2 && (*(_BYTE *)(a2 + 3) & 0x10) != 0 )
    ++v5;
  v6 = a1[25];
  v7 = *(_DWORD *)(a1[40] + 2348);
  v8 = *(_DWORD *)(v7 + 12);
  v9 = *(_DWORD *)(v7 + 52);
  if ( v8 )
    ++v5;
  if ( v9 )
    ++v5;
  if ( v6 )
  {
    v10 = *(_DWORD *)(v6 + 20);
    v11 = a1[25];
    v12 = v10 & 2;
LABEL_18:
    while ( 1 )
    {
      if ( v12 )
      {
        if ( !strncmp(*(const char **)v11, ".note", 5u) )
        {
          ++v5;
          if ( *(_DWORD *)(v11 + 64) == 2 )
            break;
        }
      }
LABEL_21:
      v11 = *(_DWORD *)(v11 + 12);
      if ( !v11 )
        goto LABEL_22;
      v12 = *(_DWORD *)(v11 + 20) & 2;
    }
    while ( 1 )
    {
      v11 = *(_DWORD *)(v11 + 12);
      if ( !v11 )
        break;
      v12 = *(_DWORD *)(v11 + 20) & 2;
      if ( *(_DWORD *)(v11 + 64) != 2 )
        goto LABEL_18;
      if ( !v12 )
        goto LABEL_21;
      if ( strncmp(*(const char **)v11, ".note", 5u) )
        goto LABEL_18;
    }
LABEL_22:
    if ( (v10 & 0x400) != 0 )
    {
LABEL_37:
      ++v5;
    }
    else
    {
      while ( 1 )
      {
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
          break;
        if ( (*(_DWORD *)(v6 + 20) & 0x400) != 0 )
          goto LABEL_37;
      }
    }
  }
  v13 = *(unsigned int **)(a1[1] + 444);
  if ( (a1[10] & 0x2000) != 0 )
  {
    v17 = sub_2ABAF4(v13[6]);
    v18 = (_DWORD *)a1[25];
    for ( i = v17; v18; v18 = (_DWORD *)v18[3] )
    {
      v20 = v18[35];
      if ( (*(_DWORD *)(v20 + 8) & 0x1000000) != 0 )
      {
        if ( *(_DWORD *)(v20 + 32) <= 0x1000u )
        {
          ++v5;
          if ( v18[16] < i )
            v18[16] = i;
        }
        else
        {
          sub_2A6A5C("%B: GNU_MBIN section `%A' has invalid sh_info field: %d", a1, v18);
        }
      }
    }
  }
  v14 = (int (__fastcall *)(_DWORD *, int))v13[42];
  if ( v14 )
  {
    v15 = v14(a1, a2);
    if ( v15 == -1 )
      sub_2A6BF0((int)"elf.c", 4405, (int)"get_program_header_size");
    v5 += v15;
  }
  return v5 * *(unsigned __int8 *)(v13[98] + 1);
}

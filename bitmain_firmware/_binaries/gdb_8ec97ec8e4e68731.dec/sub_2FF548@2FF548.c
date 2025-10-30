int *__fastcall sub_2FF548(int *a1, int a2, _DWORD *a3)
{
  int *v3; // r4
  int *v4; // r10
  int *v6; // r11
  int *v7; // r6
  int *v8; // r7
  int *v9; // r9
  int v10; // r1
  _BYTE *v11; // r3
  char v12; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r0
  int *v16; // r7
  _BYTE *v18; // r3
  _BOOL4 v19; // r3

  v3 = a1;
  if ( !a1 )
    return 0;
  v4 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  do
  {
    if ( v3[3] )
    {
      v10 = 0;
      while ( 1 )
      {
        v13 = ((int (__fastcall *)(int *, int, int))v3[14])(v3 + 3, v10, a2);
        v10 = v13;
        if ( !v13 )
          break;
        if ( (*(_BYTE *)(v13 + 8) & 1) != 0 || (v11 = *(_BYTE **)(v13 + 4), *v11 != 42) )
        {
          v8 = v3;
        }
        else if ( v11[1] )
        {
          v8 = v3;
        }
        else
        {
          v4 = v3;
        }
        if ( (*(_BYTE *)(v13 + 8) & 2) != 0 )
          v7 = v3;
        v12 = *(_BYTE *)(v13 + 8) | 4;
        *(_BYTE *)(v13 + 8) = v12;
        if ( (v12 & 1) != 0 )
          goto LABEL_29;
      }
    }
    if ( v3[7] )
    {
      v14 = 0;
      while ( 1 )
      {
        v15 = ((int (__fastcall *)(int *, int, int))v3[14])(v3 + 7, v14, a2);
        v14 = v15;
        if ( !v15 )
          break;
        if ( (*(_BYTE *)(v15 + 8) & 1) != 0 )
          goto LABEL_21;
        v18 = *(_BYTE **)(v15 + 4);
        if ( *v18 == 42 )
        {
          if ( v18[1] )
            v9 = v3;
          else
            v6 = v3;
        }
        else
        {
          v9 = v3;
        }
      }
    }
    v3 = (int *)*v3;
  }
  while ( v3 );
LABEL_29:
  v19 = v8 == 0;
  if ( v9 )
    v19 = 0;
  if ( v19 )
  {
    if ( v4 )
    {
      v8 = v4;
      goto LABEL_33;
    }
LABEL_37:
    if ( v6 )
    {
      v3 = v6;
      goto LABEL_21;
    }
    return 0;
  }
  if ( !v8 )
  {
    if ( v9 )
    {
      v3 = v9;
LABEL_21:
      v16 = v3;
      *a3 = 1;
      return v16;
    }
    goto LABEL_37;
  }
LABEL_33:
  *a3 = v7 == v8;
  return v8;
}

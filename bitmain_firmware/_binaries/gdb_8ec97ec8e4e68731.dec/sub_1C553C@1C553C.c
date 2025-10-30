char *__fastcall sub_1C553C(char *a1, const char **a2, int a3, int a4)
{
  const char *v5; // r7
  int v7; // r1
  int v9; // r8
  char v10; // r10
  const char *v11; // r0
  int v12; // r9
  char v13; // r11
  int v14; // lr
  int v15; // r7
  int v16; // t1
  bool v17; // zf
  int v18; // r2
  int v19; // r3
  const char *v20; // r12
  bool v21; // zf
  int v22; // r3
  int v23; // t1
  bool v24; // zf
  int v25; // r3
  char *result; // r0
  int v27; // r8
  int v28; // r0
  int v29; // t1
  char v30; // r3
  char v31; // r3

  v5 = *a2;
  *(_DWORD *)a1 = 1;
  v7 = *(unsigned __int8 *)v5;
  strcpy(a1 + 4, "??");
  if ( v7 == 45 )
  {
    v7 = *((unsigned __int8 *)v5 + 1);
    *(_DWORD *)a1 = -1;
    ++v5;
  }
  if ( (unsigned __int8)(v7 - 48) <= 9u )
  {
    v27 = *(_DWORD *)a1;
    v28 = strtol(v5, 0, 10);
    v7 = *(unsigned __int8 *)v5;
    *(_DWORD *)a1 = v28 * v27;
    if ( (unsigned int)(v7 - 48) <= 9 )
    {
      do
      {
        v29 = *(unsigned __int8 *)++v5;
        v7 = v29;
      }
      while ( (unsigned int)(v29 - 48) <= 9 );
    }
  }
  v9 = 0;
  v10 = 63;
  v11 = v5;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 63;
  while ( 1 )
  {
    v17 = v7 == 119;
    if ( v7 != 119 )
      v17 = v7 == 98;
    v18 = v17;
    v19 = (unsigned __int8)(v7 - 103) <= 1u ? v18 | 1 : v18;
    v20 = v11;
    if ( !v19 )
      break;
LABEL_5:
    v15 = v7;
    v16 = *(unsigned __int8 *)++v11;
    v7 = v16;
    v14 = v19;
  }
  v19 = v14;
  if ( v7 == 114 )
  {
    v12 = 1;
    v19 = v14;
    v7 = v15;
    v13 = 1;
    goto LABEL_5;
  }
  if ( (unsigned __int8)(v7 - 97) <= 0x19u )
  {
    v10 = v7;
    v9 = 1;
    v7 = v15;
    goto LABEL_5;
  }
  if ( v14 )
    a1[5] = v15;
  else
    v15 = 63;
  if ( v12 )
    a1[6] = v13;
  if ( v9 )
    a1[4] = v10;
  v21 = v7 == 32;
  if ( v7 != 32 )
    v21 = v7 == 9;
  if ( v21 )
  {
    do
    {
      v23 = *(unsigned __int8 *)++v20;
      v22 = v23;
      v24 = v23 == 32;
      if ( v23 != 32 )
        v24 = v22 == 9;
    }
    while ( v24 );
  }
  v25 = (unsigned __int8)a1[4];
  *a2 = v20;
  if ( v25 == 63 )
  {
    if ( v15 == 63 )
    {
      a1[4] = a3;
      a1[5] = a4;
      return a1;
    }
    else
    {
      result = a1;
      if ( a3 == 105 )
        LOBYTE(a3) = 120;
      a1[4] = a3;
    }
  }
  else
  {
    if ( v15 == 63 )
    {
      switch ( v25 )
      {
        case 'a':
          if ( !a4 )
            LOBYTE(v25) = 0;
          a1[5] = v25;
          break;
        case 'c':
          if ( a4 )
            v31 = 98;
          else
            v31 = 0;
          a1[5] = v31;
          break;
        case 'f':
          if ( (a4 & 0xFFFFFFEF) == 0x67 )
          {
            a1[5] = a4;
          }
          else
          {
            if ( a4 )
              v30 = 103;
            else
              v30 = 0;
            a1[5] = v30;
          }
          break;
        case 's':
          a1[5] = 0;
          break;
        default:
          a1[5] = a4;
          break;
      }
    }
    return a1;
  }
  return result;
}

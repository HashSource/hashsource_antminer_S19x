int __fastcall sub_6B490(int result, unsigned int *a2, unsigned int a3, const char *a4, int a5, int a6, char a7)
{
  int v7; // r6
  char v8; // r4
  int v9; // lr
  const char *v10; // r9
  int v11; // t1
  int v13; // r9
  int v14; // lr
  int v15; // lr
  int v16; // r12
  unsigned int v17; // lr
  bool v18; // cf
  unsigned int v19; // lr
  int v20; // t1
  unsigned int v21; // r3
  bool v22; // cc
  int v23; // lr

  v7 = a6;
  if ( !a4 )
    a4 = "(null)";
  v8 = *a4;
  if ( *a4 )
  {
    v9 = a6 > 0 || a6 == -1;
    if ( v9 )
    {
      v10 = a4;
      v9 = 0;
      do
      {
        v11 = *(unsigned __int8 *)++v10;
        ++v9;
        if ( !v11 )
          break;
      }
      while ( a6 > v9 || a6 == -1 );
    }
    v13 = a7 & 1;
    v14 = a5 - v9;
    if ( v14 < 0 )
      v15 = -(a7 & 1);
    else
      v15 = -(a7 & 1) ^ v14;
    v16 = v15 + v13;
    if ( v15 + v13 <= 0 )
      goto LABEL_26;
  }
  else
  {
    v23 = -(a7 & 1);
    if ( a5 >= 0 )
      v23 ^= a5;
    v16 = v23 + (a7 & 1);
    if ( v16 <= 0 )
      goto LABEL_31;
  }
  v17 = *a2;
  do
  {
    v18 = v17 + 1 >= a3;
    if ( v17 + 1 >= a3 )
    {
      ++v17;
    }
    else
    {
      *(_BYTE *)(result + v17) = 32;
      v17 = *a2;
    }
    if ( !v18 )
      ++v17;
    --v16;
    *a2 = v17;
  }
  while ( v16 );
  v8 = *a4;
  if ( *a4 )
  {
    do
    {
LABEL_26:
      if ( a6 != -1 )
      {
        v22 = v7-- <= 0;
        if ( v22 )
          break;
      }
      v19 = *a2 + 1;
      if ( a3 > v19 )
      {
        *(_BYTE *)(result + *a2) = v8;
        v19 = *a2 + 1;
      }
      *a2 = v19;
      v20 = *(unsigned __int8 *)++a4;
      v8 = v20;
    }
    while ( v20 );
LABEL_31:
    if ( v16 )
    {
      v21 = *a2;
      do
      {
        v22 = a3 > v21 + 1;
        if ( a3 <= v21 + 1 )
        {
          ++v21;
        }
        else
        {
          *(_BYTE *)(result + v21) = 32;
          v21 = *a2;
        }
        if ( v22 )
          ++v21;
        ++v16;
        *a2 = v21;
      }
      while ( v16 );
    }
  }
  return result;
}

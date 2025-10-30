int __fastcall sub_6A520(int result, int *a2, unsigned int a3, const char *a4, int a5, int a6, char a7)
{
  int v7; // r7
  int v9; // r4
  int v10; // r12
  int v11; // lr
  bool v12; // cf
  char v13; // r7
  int v14; // lr
  unsigned int v16; // r12
  int v17; // t1
  int v18; // r3
  bool v19; // cf
  const char *v20; // r8
  int v21; // r4
  int v22; // t1

  v7 = a5;
  if ( a4 )
  {
    if ( !*a4 )
      goto LABEL_7;
  }
  else
  {
    a4 = "(null)";
  }
  if ( a6 > 0 || a6 == -1 )
  {
    v20 = a4;
    v21 = 0;
    do
    {
      v22 = *(unsigned __int8 *)++v20;
      ++v21;
      if ( !v22 )
        break;
    }
    while ( a6 > v21 || a6 == -1 );
    v7 = a5 - v21;
  }
LABEL_7:
  v9 = v7 & ~(v7 >> 31);
  if ( (a7 & 1) != 0 )
  {
    v9 = -v9;
  }
  else if ( v7 > 0 )
  {
    v10 = *a2;
    v11 = v7 & ~(v7 >> 31);
    do
    {
      v12 = v10 + 1 >= a3;
      if ( v10 + 1 >= a3 )
        ++v10;
      else
        *(_BYTE *)(result + v10) = 32;
      if ( !v12 )
        v10 = *a2 + 1;
      --v11;
      *a2 = v10;
    }
    while ( v11 );
    if ( v9 < 1 )
      --v9;
    else
      v9 = 0;
  }
  v13 = *a4;
  if ( *a4 )
  {
    v14 = a6;
    do
    {
      if ( a6 != -1 && v14-- <= 0 )
        break;
      v16 = *a2 + 1;
      if ( v16 < a3 )
      {
        *(_BYTE *)(result + *a2) = v13;
        v16 = *a2 + 1;
      }
      *a2 = v16;
      v17 = *(unsigned __int8 *)++a4;
      v13 = v17;
    }
    while ( v17 );
  }
  if ( v9 )
  {
    v18 = *a2;
    do
    {
      v19 = v18 + 1 >= a3;
      if ( v18 + 1 >= a3 )
        ++v18;
      else
        *(_BYTE *)(result + v18) = 32;
      if ( !v19 )
        v18 = *a2 + 1;
      ++v9;
      *a2 = v18;
    }
    while ( v9 );
  }
  return result;
}

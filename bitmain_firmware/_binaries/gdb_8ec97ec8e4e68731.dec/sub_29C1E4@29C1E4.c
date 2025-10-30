unsigned __int8 *__fastcall sub_29C1E4(unsigned __int8 *a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // r5
  int v5; // r6
  int v6; // lr
  int v7; // r12
  int v8; // r12
  int v9; // t1
  unsigned __int8 *v10; // r4
  int v11; // lr
  unsigned __int8 *v12; // r9
  int v13; // r8
  int v15; // lr
  int v16; // r0
  int v17; // r0
  int v18; // t1
  int v19; // r0

  v4 = 0;
  v5 = 0;
  do
  {
    v6 = *a1;
    v7 = 0;
    if ( (unsigned int)(v6 - 48) <= 9 )
    {
      do
      {
        v8 = v6 + 10 * v7;
        v9 = *++a1;
        v6 = v9;
        v7 = v8 - 48;
      }
      while ( (unsigned int)(v9 - 48) <= 9 );
    }
    v10 = a1 + 1;
    if ( v6 == 45 )
    {
      v15 = a1[1];
      v16 = 0;
      if ( (unsigned int)(v15 - 48) <= 9 )
      {
        do
        {
          v17 = v15 + 10 * v16;
          v18 = *++v10;
          v15 = v18;
          v16 = v17 - 48;
        }
        while ( (unsigned int)(v18 - 48) <= 9 );
      }
      v19 = v16 - v7;
      if ( v19 < 0 )
        abort();
      v12 = v10;
      v11 = v19 + 1;
      v13 = (2 << v19) - 1;
      ++v10;
    }
    else
    {
      v11 = 1;
      v12 = a1;
      v13 = 1;
    }
    a1 = v10;
    v5 |= (v13 & (a2 >> v7)) << v4;
    v4 += v11;
  }
  while ( *v12 == 44 );
  *a3 = v5;
  *a4 = v4;
  return v12;
}

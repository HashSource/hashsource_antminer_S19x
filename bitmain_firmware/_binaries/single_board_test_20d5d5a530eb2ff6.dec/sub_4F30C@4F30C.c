int __fastcall sub_4F30C(unsigned __int8 *a1, char *dest, size_t a3)
{
  char *v3; // r7
  char *v4; // r10
  size_t v7; // r1
  unsigned __int8 *v8; // r2
  unsigned int v9; // r8
  unsigned __int8 *v10; // r9
  size_t v11; // r4
  char *v12; // r0
  unsigned __int8 *v13; // r2
  unsigned int v14; // lr
  int v15; // r3
  unsigned int v16; // r4
  unsigned int v17; // t1
  int v18; // r10
  char *v19; // r4
  char *v20; // r1
  char *v21; // r3
  char v22; // t1
  int v24; // r3
  int v25; // t1
  int v26; // r3
  int v27; // t1

  v3 = &dest[a3];
  v4 = dest;
  v7 = a3;
  v8 = a1;
  while ( 1 )
  {
    v9 = *v8;
    v10 = v8 + 1;
    v11 = v9 >> 4;
    if ( v9 >> 4 == 15 )
    {
      v24 = 0;
      do
      {
        v25 = *v10++;
        v24 += v25;
      }
      while ( v25 == 255 );
      v11 = v24 + 15;
    }
    if ( v7 < v11 )
      return -1;
    memmove(v4, v10, v11);
    v12 = &v4[v11];
    v13 = &v10[v11];
    v14 = v3 - &v4[v11];
    if ( v14 <= 0xB )
      break;
    v15 = v9 & 0xF;
    v17 = *(unsigned __int16 *)v13;
    v8 = v13 + 2;
    v16 = v17;
    if ( v15 == 15 )
    {
      v26 = 0;
      do
      {
        v27 = *v8++;
        v26 += v27;
      }
      while ( v27 == 255 );
      v15 = v26 + 15;
    }
    v18 = v15 + 4;
    if ( v14 >= v15 + 4 && v16 <= v12 - dest )
    {
      if ( v15 != -4 )
      {
        v19 = &v12[-v16];
        v20 = &v12[v15 + 3];
        v21 = v12 - 1;
        do
        {
          v22 = *v19++;
          *++v21 = v22;
        }
        while ( v20 != v21 );
      }
      v4 = &v12[v18];
      v7 = v3 - v4;
      if ( (unsigned int)(v3 - v4) > 4 )
        continue;
    }
    return -1;
  }
  if ( v3 != v12 )
    return -1;
  return v13 - a1;
}

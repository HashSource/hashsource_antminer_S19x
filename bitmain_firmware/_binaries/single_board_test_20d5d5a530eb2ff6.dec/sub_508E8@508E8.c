int __fastcall sub_508E8(char *a1, char *dest, unsigned int a3, int a4, int a5)
{
  char *v6; // r9
  char *v8; // r7
  char *v9; // r5
  unsigned int v10; // r1
  char *v11; // r2
  unsigned int v12; // r8
  unsigned __int8 *v13; // r10
  size_t v14; // r4
  char *v15; // r0
  char *v16; // r2
  unsigned int v17; // lr
  int v18; // r3
  unsigned int v19; // r4
  unsigned int v20; // t1
  int v21; // r9
  char *v22; // r4
  char *v23; // r1
  char *v24; // r3
  char v25; // t1
  int v26; // r3
  int v27; // t1
  int v28; // r3
  int v29; // t1

  v6 = dest;
  if ( a5 && dest != (char *)(a4 + a5) )
    return sub_4ECC4(a1, dest, a3, a4, a5);
  v8 = &dest[a3];
  v9 = &dest[-a5];
  v10 = a3;
  v11 = a1;
  while ( 1 )
  {
    v12 = (unsigned __int8)*v11;
    v13 = (unsigned __int8 *)(v11 + 1);
    v14 = v12 >> 4;
    if ( v12 >> 4 == 15 )
    {
      v26 = 0;
      do
      {
        v27 = *v13++;
        v26 += v27;
      }
      while ( v27 == 255 );
      v14 = v26 + 15;
    }
    if ( v10 < v14 )
      return -1;
    memmove(v6, v13, v14);
    v15 = &v6[v14];
    v16 = (char *)&v13[v14];
    v17 = v8 - &v6[v14];
    if ( v17 <= 0xB )
      break;
    v18 = v12 & 0xF;
    v20 = *(unsigned __int16 *)v16;
    v11 = v16 + 2;
    v19 = v20;
    if ( v18 == 15 )
    {
      v28 = 0;
      do
      {
        v29 = (unsigned __int8)*v11++;
        v28 += v29;
      }
      while ( v29 == 255 );
      v18 = v28 + 15;
    }
    v21 = v18 + 4;
    if ( v17 >= v18 + 4 && v19 <= v15 - v9 )
    {
      if ( v18 != -4 )
      {
        v22 = &v15[-v19];
        v23 = &v15[v18 + 3];
        v24 = v15 - 1;
        do
        {
          v25 = *v22++;
          *++v24 = v25;
        }
        while ( v23 != v24 );
      }
      v6 = &v15[v21];
      v10 = v8 - v6;
      if ( (unsigned int)(v8 - v6) > 4 )
        continue;
    }
    return -1;
  }
  if ( v8 != v15 )
    return -1;
  return v16 - a1;
}

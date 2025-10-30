int __fastcall sub_126300(_BYTE *a1, int *a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned int v4; // r4
  int v6; // r6
  int v7; // r6
  unsigned __int8 *v8; // r2
  unsigned int v9; // r0
  _BYTE *v10; // r5
  int v11; // r3
  unsigned __int8 *v12; // r1
  int v13; // r0
  int v14; // t1
  unsigned int v15; // r3
  int result; // r0
  int v17; // r3
  unsigned __int8 *v18; // r3
  int v19; // r0
  int v20; // r7
  int v21; // r9
  int v22; // r8
  int v23; // r1
  int v24; // r12
  unsigned __int8 *v25; // r0
  int v26; // t1

  v4 = a4;
  if ( !a4 )
  {
    sub_D0048(13, 226, 222, (int)"crypto/asn1/a_int.c", 154);
    return 0;
  }
  v6 = *a3 & 0x80;
  if ( a2 )
    *a2 = v6;
  if ( a4 == 1 )
  {
    if ( a1 )
    {
      v17 = *a3;
      result = 1;
      if ( v6 )
        v17 = -v17;
      *a1 = v17;
      return result;
    }
    return v4;
  }
  if ( *a3 )
  {
    if ( *a3 != 255 )
      goto LABEL_16;
    if ( a4 <= 0x21 )
    {
      v19 = 1;
      v20 = 0;
    }
    else
    {
      v18 = a3 + 35;
      v19 = 1;
      v20 = 0;
      do
      {
        v19 += 32;
        v21 = *(v18 - 29);
        v22 = *(v18 - 31);
        v23 = *(v18 - 34) | *(v18 - 33) | *(v18 - 32);
        v24 = *(v18 - 30);
        __pld(v18);
        v18 += 32;
        v20 |= *(v18 - 49)
             | *(v18 - 50)
             | *(v18 - 51)
             | *(v18 - 52)
             | *(v18 - 53)
             | *(v18 - 54)
             | *(v18 - 55)
             | *(v18 - 56)
             | *(v18 - 57)
             | *(v18 - 58)
             | *(v18 - 59)
             | *(v18 - 60)
             | v21
             | v24
             | v22
             | v23
             | *(v18 - 48)
             | *(v18 - 47)
             | *(v18 - 46)
             | *(v18 - 45)
             | *(v18 - 44)
             | *(v18 - 43)
             | *(v18 - 42)
             | *(v18 - 41)
             | *(v18 - 40)
             | *(v18 - 39)
             | *(v18 - 38)
             | *(v18 - 37)
             | *(v18 - 36)
             | *(v18 - 35);
      }
      while ( &a3[((v4 - 34) & 0xFFFFFFE0) + 67] != v18 );
    }
    v25 = &a3[v19];
    do
    {
      v26 = *v25++;
      v20 |= v26;
    }
    while ( v4 > v25 - a3 );
    if ( !v20 )
    {
LABEL_16:
      if ( a1 )
      {
        if ( v6 )
          v7 = 255;
        else
          v7 = 0;
        v10 = &a1[v4];
        v8 = &a3[v4];
        v11 = v7 & 1;
        v9 = v4 - 1;
        goto LABEL_12;
      }
      return v4;
    }
  }
  if ( v6 == (a3[1] & 0x80) )
  {
    sub_D0048(13, 226, 221, (int)"crypto/asn1/a_int.c", 187);
    return 0;
  }
  else
  {
    if ( a1 )
    {
      if ( v6 )
        v7 = 255;
      else
        v7 = 0;
      v8 = &a3[v4];
      v9 = v4 - 2;
      v10 = &a1[--v4];
      v11 = v7 & 1;
LABEL_12:
      v12 = v8 - 1;
      v13 = (int)&v8[-v9 - 2];
      do
      {
        v14 = *v12--;
        v15 = v11 + (v14 ^ v7);
        *--v10 = v15;
        v11 = v15 >> 8;
      }
      while ( (unsigned __int8 *)v13 != v12 );
      return v4;
    }
    return v4 - 1;
  }
}

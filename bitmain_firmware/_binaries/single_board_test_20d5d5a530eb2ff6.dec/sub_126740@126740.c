size_t *__fastcall sub_126740(size_t **a1, unsigned __int8 **a2, unsigned int a3)
{
  unsigned __int8 *v6; // r7
  int v7; // lr
  int v8; // r2
  int v9; // r8
  size_t *v10; // r7
  size_t *result; // r0
  int v12; // r0
  unsigned __int8 *v13; // r0
  int v14; // t1
  size_t *v15; // r0
  unsigned int v16; // r8
  char *v17; // r3
  int v18; // r11
  int v19; // r9
  int v20; // r10
  bool v21; // cc
  int v22; // r1
  int v23; // r10
  int v24; // r9
  int v25; // r10
  int v26; // r1
  int v27[2]; // [sp+Ch] [bp-8h] BYREF

  if ( !a3 )
  {
    sub_D0048(13, 226, 222, (int)"crypto/asn1/a_int.c", 154);
    return 0;
  }
  if ( a3 == 1 )
  {
    v9 = 1;
    goto LABEL_8;
  }
  v6 = *a2;
  v7 = **a2;
  if ( !**a2 )
    goto LABEL_19;
  if ( v7 == 255 )
  {
    v16 = a3 - 31;
    if ( a3 <= 0x21 )
    {
      v8 = 0;
      v12 = 1;
    }
    else
    {
      v17 = (char *)(v6 + 35);
      v8 = 0;
      v18 = 1;
      do
      {
        v19 = (unsigned __int8)*(v17 - 33);
        v20 = (unsigned __int8)*(v17 - 34);
        v21 = v16 > v18 + 33;
        v22 = (unsigned __int8)*(v17 - 32);
        v12 = v18 + 32;
        __pld(v17);
        v18 += 32;
        v23 = v19 | v20;
        v24 = (unsigned __int8)*(v17 - 31);
        v25 = v23 | v22;
        v26 = (unsigned __int8)*(v17 - 30);
        v17 += 32;
        v8 |= (unsigned __int8)*(v17 - 47)
            | (unsigned __int8)*(v17 - 48)
            | (unsigned __int8)*(v17 - 49)
            | (unsigned __int8)*(v17 - 50)
            | (unsigned __int8)*(v17 - 51)
            | (unsigned __int8)*(v17 - 52)
            | (unsigned __int8)*(v17 - 53)
            | (unsigned __int8)*(v17 - 54)
            | (unsigned __int8)*(v17 - 55)
            | (unsigned __int8)*(v17 - 56)
            | (unsigned __int8)*(v17 - 57)
            | (unsigned __int8)*(v17 - 58)
            | (unsigned __int8)*(v17 - 59)
            | (unsigned __int8)*(v17 - 60)
            | (unsigned __int8)*(v17 - 61)
            | v25
            | v24
            | v26
            | (unsigned __int8)*(v17 - 46)
            | (unsigned __int8)*(v17 - 45)
            | (unsigned __int8)*(v17 - 44)
            | (unsigned __int8)*(v17 - 43)
            | (unsigned __int8)*(v17 - 42)
            | (unsigned __int8)*(v17 - 41)
            | (unsigned __int8)*(v17 - 40)
            | (unsigned __int8)*(v17 - 39)
            | (unsigned __int8)*(v17 - 38)
            | (unsigned __int8)*(v17 - 37)
            | (unsigned __int8)*(v17 - 36)
            | (unsigned __int8)*(v17 - 35);
      }
      while ( v21 );
    }
    v13 = &v6[v12];
    do
    {
      v14 = *v13++;
      v8 |= v14;
    }
    while ( a3 > v13 - v6 );
    if ( !v8 )
      goto LABEL_7;
LABEL_19:
    if ( (v7 & 0x80) == (v6[1] & 0x80) )
    {
      sub_D0048(13, 226, 221, (int)"crypto/asn1/a_int.c", 187);
      return 0;
    }
    v8 = 1;
    goto LABEL_7;
  }
  v8 = 0;
LABEL_7:
  v9 = a3 - v8;
LABEL_8:
  if ( a1 )
  {
    v10 = *a1;
    if ( *a1 )
    {
      if ( !sub_AE088(*a1, 0, v9) )
      {
        sub_D0048(13, 194, 65, (int)"crypto/asn1/a_int.c", 313);
        goto LABEL_12;
      }
      sub_126300((_BYTE *)v10[2], v27, *a2, a3);
      if ( !v27[0] )
      {
        *a2 += a3;
        goto LABEL_26;
      }
      goto LABEL_24;
    }
  }
  v15 = (size_t *)sub_B20A4();
  v10 = v15;
  if ( !v15 )
    return 0;
  v15[1] = 2;
  if ( !sub_AE088(v15, 0, v9) )
  {
    sub_D0048(13, 194, 65, (int)"crypto/asn1/a_int.c", 313);
    if ( !a1 )
      goto LABEL_13;
LABEL_12:
    if ( *a1 != v10 )
    {
LABEL_13:
      ASN1_INTEGER_free((int)v10);
      return 0;
    }
    return 0;
  }
  sub_126300((_BYTE *)v10[2], v27, *a2, a3);
  if ( v27[0] )
LABEL_24:
    v10[1] |= 0x100u;
  result = v10;
  *a2 += a3;
  if ( a1 )
  {
LABEL_26:
    *a1 = v10;
    return v10;
  }
  return result;
}

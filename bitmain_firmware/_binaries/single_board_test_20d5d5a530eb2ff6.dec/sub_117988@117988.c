int __fastcall sub_117988(unsigned __int8 *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // r5
  unsigned __int8 *v4; // r4
  int v5; // r3
  int v6; // r7
  int v7; // t1
  int v8; // t1
  int v9; // r2
  unsigned __int8 *v10; // r5
  unsigned __int8 *v11; // r4
  int v13; // t1
  int v16; // r4
  unsigned int v17; // r1
  int v18; // r2
  int v19; // r0

  if ( a3 > 0 && *a1 == *a2 )
  {
    v3 = a1;
    v4 = a2;
    v5 = 0;
    while ( a3 != ++v5 )
    {
      v7 = *++v3;
      v6 = v7;
      v8 = *++v4;
      if ( v6 != v8 )
        goto LABEL_7;
    }
    v5 = a3;
  }
  else
  {
    v5 = 0;
  }
LABEL_7:
  v9 = a3 - 1;
  if ( v9 >= 0 && !a1[v9] && a2[v9] == 255 )
  {
    v10 = &a2[v9];
    v11 = &a1[v9];
    do
    {
      if ( v9-- == 0 )
        break;
      if ( *--v11 )
        break;
      v13 = *--v10;
    }
    while ( v13 == 255 );
  }
  if ( v5 < v9 )
    return -1;
  if ( v5 > v9 )
    return 8 * v5;
  v16 = a1[v5];
  v17 = a2[v5];
  v18 = v16 ^ v17;
  if ( (v16 ^ v17) == 0xF )
  {
    v19 = 4;
  }
  else if ( (v16 ^ v17) <= 0xF )
  {
    switch ( v18 )
    {
      case 3:
        v19 = 6;
        break;
      case 7:
        v19 = 5;
        break;
      case 1:
        v19 = 7;
        break;
      default:
        return -1;
    }
  }
  else
  {
    switch ( v18 )
    {
      case 63:
        v19 = 2;
        break;
      case 127:
        v19 = 1;
        break;
      case 31:
        v19 = 3;
        break;
      default:
        return -1;
    }
  }
  if ( (v16 & v18) != 0 || (v18 & ~v17) != 0 )
    return -1;
  return v19 + 8 * v5;
}

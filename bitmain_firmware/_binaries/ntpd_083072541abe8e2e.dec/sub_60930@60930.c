int __fastcall sub_60930(unsigned __int8 *a1, int *a2)
{
  unsigned __int8 *v2; // r5
  int v3; // r4
  int v5; // r8
  int v6; // r7
  const unsigned __int16 *v7; // r0
  int v8; // r2
  int v9; // r12
  int v10; // t1
  unsigned int v11; // r3

  v2 = a1;
  v3 = *a1;
  if ( v3 == 45 )
  {
    v3 = a1[1];
    v5 = 56;
    v2 = a1 + 1;
    v6 = 1;
  }
  else
  {
    v5 = 55;
    v6 = 0;
  }
  if ( v3 )
  {
    v7 = *_ctype_b_loc();
    v8 = 0;
    while ( 1 )
    {
      v11 = ((v7[v3] ^ 0x800u) >> 11) & 1;
      if ( v8 > 214748364 )
        v11 = 1;
      if ( v11 )
        break;
      if ( v8 == 214748364 && v5 < v3 )
        return 0;
      v9 = v3 - 48;
      v10 = *++v2;
      v3 = v10;
      v8 = v9 + 10 * v8;
      if ( !v10 )
      {
        if ( v6 )
          v8 = -v8;
        else
          *a2 = v8;
        if ( !v6 )
          return 1;
        *a2 = v8;
        return v6;
      }
    }
  }
  return 0;
}

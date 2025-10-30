int __fastcall sub_1B3E2C(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r12
  int v5; // t1
  unsigned __int8 *v6; // r12
  bool v7; // zf
  int v9; // r3

  v2 = *a1;
  if ( (v2 & 0xDF) != 0 )
  {
    v3 = *a2;
    v4 = v3 & 0xDF;
    if ( v2 != 93 )
    {
      while ( 1 )
      {
        v7 = v4 == 0;
        if ( v4 )
          v7 = v3 == 93;
        if ( v7 )
          return 1;
        if ( v2 != v3 )
          return v2 - v3;
        v5 = *++a1;
        v2 = v5;
        v6 = a2 + 1;
        if ( (v5 & 0xDF) == 0 )
          goto LABEL_14;
        if ( v2 == 93 )
          break;
        v3 = *v6;
        ++a2;
        v4 = v3 & 0xDF;
      }
      v3 = a2[1];
      v4 = v3 & 0xDF;
    }
  }
  else
  {
    v6 = a2;
LABEL_14:
    v3 = *v6;
    v4 = v3 & 0xDF;
  }
  v9 = v3 != 93;
  if ( !v4 )
    v9 = 0;
  return -v9;
}

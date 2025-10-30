int __fastcall sub_1E0E24(unsigned __int8 *a1, int a2)
{
  int v2; // r2
  unsigned __int8 *v3; // r4
  int v4; // r3
  int v5; // t1
  unsigned int v6; // r12
  int v7; // r1
  unsigned int v8; // lr
  int v9; // r3

  if ( !a2 )
    return 0;
  v2 = 0;
  v3 = &a1[a2];
  do
  {
    v5 = *a1++;
    v4 = v5;
    v6 = v5 - 48;
    v7 = (v5 - 87) | v2;
    if ( (unsigned int)(v5 - 97) > 5 )
    {
      v8 = v4 - 65;
      v7 = v6 | v2;
      if ( v6 > 9 )
      {
        v9 = v4 - 55;
        v7 = -1;
        if ( v8 <= 5 )
          v7 = v9 | v2;
      }
    }
    v2 = 16 * v7;
  }
  while ( v3 != a1 );
  return v7;
}

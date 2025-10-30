unsigned int *__fastcall sub_48A94(unsigned int *result, int a2)
{
  unsigned int v2; // r3
  unsigned int *v3; // r4
  unsigned int v4; // r6
  unsigned int v5; // r1
  unsigned int v6; // r7
  unsigned int *v7; // r3
  unsigned int v8; // r2
  bool v9; // cc
  unsigned int v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r3

  v2 = result[4098];
  if ( a2 + v2 > 0x80000000 )
  {
    v3 = result + 4096;
    v4 = result[4100];
    v5 = v2 - 0x10000;
    v6 = result[4096];
    v7 = result;
    do
    {
      v8 = *v7++;
      v9 = v5 > v8;
      v10 = v8 - v5;
      if ( v9 )
        *(v7 - 1) = 0;
      else
        *(v7 - 1) = v10;
    }
    while ( v7 != v3 );
    result[4098] = 0x10000;
    if ( v4 <= 0x10000 )
      v11 = 0;
    else
      v11 = v4 - 0x10000;
    v12 = v11 + v6;
    if ( v4 > 0x10000 )
      result[4100] = 0x10000;
    *v3 = v12;
  }
  return result;
}

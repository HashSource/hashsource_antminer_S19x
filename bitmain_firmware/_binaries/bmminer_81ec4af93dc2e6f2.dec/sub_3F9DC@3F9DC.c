int sub_3F9DC()
{
  int v0; // r1
  int v1; // r2
  int v2; // r3
  int result; // r0
  unsigned int v4; // r3
  _DWORD *v5; // r6
  unsigned int v6; // r7
  _DWORD *v7; // r5
  unsigned int v8; // r4
  int v9; // t1
  _DWORD v10[74]; // [sp+4h] [bp-128h] BYREF

  sub_52480(v10);
  result = sub_3EC20((int)v10, v0, v1, v2);
  v4 = v10[0];
  if ( v10[0] )
  {
    v5 = v10;
    v6 = 0;
    do
    {
      if ( v5[2] )
      {
        v7 = v5 + 2;
        v8 = 0;
        do
        {
          v9 = v7[1];
          ++v7;
          result = sub_26650(v9, 1);
          ++v8;
        }
        while ( v5[2] > v8 );
        v4 = v10[0];
      }
      ++v6;
      v5 += 18;
    }
    while ( v4 > v6 );
  }
  return result;
}

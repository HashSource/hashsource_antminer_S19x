int __fastcall sub_21A76C(const char *a1, int a2, int a3, int a4)
{
  int v7; // r5
  int v8; // r4
  const char *v9; // r1
  const char *v10; // t1
  const char *v11; // r0

  if ( a3 > 0 )
  {
    v7 = a2 - 4;
    v8 = 0;
    do
    {
      ++v8;
      v10 = *(const char **)(v7 + 4);
      v7 += 4;
      v9 = v10;
      if ( a4 )
      {
        v11 = (const char *)sub_3245A4(v9);
        if ( sub_21A6F4(a1, v11) )
          return 1;
      }
      else if ( sub_21A6F4(a1, v9) )
      {
        return 1;
      }
    }
    while ( a3 != v8 );
  }
  return 0;
}

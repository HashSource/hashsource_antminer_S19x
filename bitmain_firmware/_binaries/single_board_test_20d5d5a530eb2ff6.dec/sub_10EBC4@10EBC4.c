void **__fastcall sub_10EBC4(int *a1)
{
  void **v1; // r5
  signed int i; // r4
  int v3; // r0
  unsigned int v5; // r6
  int v6; // r0
  int v7; // r1
  int v8; // r2

  v1 = sub_10BDE0(a1);
  if ( v1 )
  {
    for ( i = 0; i < sub_10C010((int)v1); ++i )
    {
      v3 = sub_10C01C(v1, i);
      if ( !sub_10FD18(v3) )
      {
        v5 = i - 1;
        if ( i > 0 )
        {
          do
          {
            v6 = sub_10C01C(v1, v5--);
            X509_free(v6, v7, v8);
          }
          while ( v5 != -1 );
        }
        sub_10BDB4(v1);
        return 0;
      }
    }
  }
  return v1;
}

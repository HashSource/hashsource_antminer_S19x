int __fastcall sub_F9E6C(_BYTE *a1, int a2, const void *a3, signed int a4)
{
  int v6; // r5
  _BYTE *v7; // r4
  _BYTE *v8; // r5

  if ( a2 - 10 <= a4 )
  {
    sub_D0048(4, 109, 110, (int)"crypto/rsa/rsa_pk1.c", 125);
    return 0;
  }
  else
  {
    v6 = a2 - 3 - a4;
    *a1 = 0;
    v7 = a1 + 2;
    a1[1] = 2;
    if ( sub_F497C((int)(a1 + 2), v6) <= 0 )
    {
      return 0;
    }
    else
    {
      if ( v6 <= 0 )
      {
        v8 = v7;
      }
      else
      {
        v8 = &v7[v6];
        do
        {
          while ( !*v7 )
          {
            if ( sub_F497C((int)v7, 1) <= 0 )
              return 0;
          }
          ++v7;
        }
        while ( v7 != v8 );
      }
      *v8 = 0;
      memcpy(v8 + 1, a3, a4);
      return 1;
    }
  }
}

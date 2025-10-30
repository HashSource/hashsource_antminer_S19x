int __fastcall sub_18B34(int a1, unsigned int a2)
{
  int v4; // r0
  int v5; // r6
  int v7; // r8
  int i; // r4
  int v9; // r0

  v4 = sub_266F0(a1) == 0;
  if ( a2 > 3 )
    v4 |= 1u;
  if ( v4 )
    return 255;
  v7 = a2 ? sub_17674() : sub_265EC(0);
  if ( v7 <= 0 )
    return 255;
  v5 = 255;
  for ( i = 0; i != v7; ++i )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v9 = sub_18898(a1, (unsigned __int8)i);
      }
      else if ( a2 == 3 )
      {
        v9 = sub_187E8(a1, (unsigned __int8)i);
      }
      else
      {
        v9 = sub_188E4(a1, (unsigned __int8)i);
      }
    }
    else
    {
      v9 = sub_18828(a1, (unsigned __int8)i);
    }
    if ( v9 != 255 )
    {
      if ( v5 == 255 )
      {
        v5 = v9;
      }
      else if ( v5 >= v9 )
      {
        v5 = v9;
      }
    }
  }
  return v5;
}

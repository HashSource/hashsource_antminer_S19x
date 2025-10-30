int __fastcall sub_18D1C(int a1, unsigned int a2)
{
  _BOOL4 v4; // r0
  int v6; // r8
  int v7; // r4
  int i; // r6
  int v9; // r0

  if ( sub_26C0C(a1) )
    v4 = a2 > 3;
  else
    v4 = 1;
  if ( v4 )
    return 255;
  if ( a2 )
    v6 = sub_179C4();
  else
    v6 = sub_26AF4(0);
  v7 = 255;
  if ( v6 > 0 )
  {
    for ( i = 0; i != v6; ++i )
    {
      if ( a2 )
      {
        if ( a2 == 1 )
        {
          v9 = sub_18C84(a1, (unsigned __int8)i);
        }
        else if ( a2 == 3 )
        {
          v9 = sub_18BD4(a1, (unsigned __int8)i);
        }
        else
        {
          v9 = sub_18CD0(a1, (unsigned __int8)i);
        }
      }
      else
      {
        v9 = sub_18C14(a1, (unsigned __int8)i);
      }
      if ( v9 != 255 )
      {
        if ( v7 == 255 )
        {
          v7 = v9;
        }
        else if ( v7 < v9 )
        {
          v7 = v9;
        }
      }
    }
  }
  return v7;
}

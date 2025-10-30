int __fastcall sub_8993C(int a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r1
  int v5; // r2
  int v6; // r4
  int v7; // r7
  bool v8; // cc
  int v9; // r1
  int v10; // r5

  v2 = sub_89910(a1);
  if ( !v2 )
    return 0;
  v3 = v2;
  if ( !sub_A3C0C(a1) )
    return 0;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = v6 < sub_10C010(v3, v4, v5);
    v9 = v6++;
    if ( !v8 )
      return v7;
    v10 = sub_10C01C(v3, v9);
    if ( !sub_A33DC(a1, v10, 65537, 0) )
    {
      if ( !v7 )
      {
        v7 = sub_10BFCC(0);
        if ( !v7 )
          return 0;
      }
      if ( !sub_10BD3C(v7, v10) )
        break;
    }
  }
  sub_10BDB4(v7);
  return 0;
}

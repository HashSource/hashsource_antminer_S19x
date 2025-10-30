int __fastcall sub_3F38C(int a1, int a2)
{
  _BOOL4 v2; // r3
  _BOOL4 v3; // r2
  _BOOL4 v4; // r12
  _BOOL4 v5; // r1
  _BOOL4 v6; // r3
  _BOOL4 v7; // r0

  v2 = a1 == 590;
  v3 = a2 == 1350;
  if ( v2 && v3 )
    return 1;
  v4 = a2 == 1340;
  if ( v2 && v4 )
    return 2;
  v5 = a2 == 1330;
  if ( v2 && v5 )
    return 3;
  v6 = a1 == 565;
  if ( v3 && v6 )
    return 4;
  if ( v4 && v6 )
    return 5;
  if ( v5 && v6 )
    return 6;
  v7 = a1 == 540;
  if ( v3 && v7 )
    return 7;
  if ( v4 && v7 )
    return 8;
  if ( v5 && v7 )
    return 9;
  return -1;
}

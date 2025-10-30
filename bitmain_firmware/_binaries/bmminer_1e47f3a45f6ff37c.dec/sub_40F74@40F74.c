int __fastcall sub_40F74(int a1, int a2)
{
  _BOOL4 v2; // r3
  _BOOL4 v3; // r2
  _BOOL4 v4; // r12
  _BOOL4 v6; // r1
  _BOOL4 v7; // r3
  _BOOL4 v8; // r0

  v2 = a1 == 590;
  v3 = a2 == 1350;
  if ( v2 && v3 )
    return 1;
  v4 = a2 == 1340;
  if ( v2 && v4 )
    return 2;
  v6 = a2 == 1330;
  if ( v2 && v6 )
    return 3;
  v7 = a1 == 565;
  if ( v7 && v3 )
    return 4;
  if ( v7 && v4 )
    return 5;
  if ( v7 && v6 )
    return 6;
  v8 = a1 == 540;
  if ( v8 && v3 )
    return 7;
  if ( v8 && v4 )
    return 8;
  if ( v8 && v6 )
    return 9;
  return -1;
}

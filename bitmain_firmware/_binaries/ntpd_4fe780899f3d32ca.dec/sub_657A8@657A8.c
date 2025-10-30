int __fastcall sub_657A8(int a1, int a2, int a3)
{
  int v3; // r5
  int v4; // r7
  int v5; // r4
  bool v6; // cc
  int v7; // r0
  int v8; // r8
  int v9; // r1

  v3 = a3;
  if ( a3 >= 0 )
  {
    v4 = 0;
  }
  else
  {
    v3 = -a3;
    v4 = 1;
  }
  v5 = a1;
  if ( v3 > 1 )
  {
    v6 = a1 <= a2;
    v7 = a1 > a2 ? a1 - a2 : a2 - a1;
    v8 = v6 ? v4 : v4 ^ 1;
    sub_8B8EC(v7, v3);
    if ( v9 )
    {
      if ( v8 )
        v9 = v3 - v9;
      if ( v4 )
        v9 = -v9;
      v5 += v9;
    }
  }
  return v5;
}

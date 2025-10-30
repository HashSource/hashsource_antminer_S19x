int __fastcall sub_BD498(int a1, int a2, int a3)
{
  int v5; // r7
  int v6; // r4
  int v7; // r5
  int v8; // r1
  int v9; // r0
  int result; // r0

  if ( !a1 )
    return 1;
  v5 = sub_10C010(a1, a2, a3);
  if ( v5 <= 0 )
    return 1;
  v6 = 0;
  v7 = 1;
  while ( 1 )
  {
    v8 = v6++;
    v9 = sub_10C01C(a1, v8);
    if ( v9 )
    {
      result = sub_BD3B8(v9, a2);
      v7 &= result;
      if ( result < 0 )
        break;
    }
    if ( v6 == v5 )
      return v7;
  }
  return result;
}

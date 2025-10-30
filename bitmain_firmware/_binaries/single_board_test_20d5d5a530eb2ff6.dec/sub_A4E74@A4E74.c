int __fastcall sub_A4E74(int a1, int a2, int a3, int a4)
{
  int v7; // r4
  int result; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r0
  bool v12; // cc
  int v13; // r1

  v7 = 0;
  if ( !a3 )
  {
    v7 = 1;
    a3 = sub_10C01C(a2, 0);
    if ( !a3 )
      return 68;
  }
  result = sub_A4D60(a1, 0, a3, a4, 1);
  if ( result == 1 )
  {
    while ( 1 )
    {
      v12 = v7 < sub_10C010(a2, v9, v10);
      v13 = v7++;
      if ( !v12 )
        break;
      v11 = sub_10C01C(a2, v13);
      result = sub_A4D60(a1, 0, v11, a4, 0);
      if ( result != 1 )
        return result;
    }
    return 1;
  }
  return result;
}

int __fastcall sub_15C300(int a1, int a2, int a3)
{
  bool v3; // cc
  int v8; // r9
  int v9; // r0
  bool v10; // zf
  int v11; // r6
  int v12; // r8
  int v13; // r6
  int v14; // r0
  bool v15; // cc

  v3 = a2 <= 0;
  if ( a2 )
    v3 = a3 <= 0;
  if ( v3 )
    return 0;
  v8 = sub_B66C8(a1);
  v9 = sub_B7170(a1);
  v10 = v8 == 0;
  if ( v8 )
    v10 = v9 == 0;
  v11 = v9;
  v12 = !v10;
  if ( v10 )
  {
    sub_B66D0(a1);
    if ( !v11 )
      return 0;
    v13 = v12;
  }
  else
  {
    v13 = sub_B69CC(v9, a2, a3);
    v14 = sub_B66D0(a1);
    v15 = v14 <= 0;
    if ( v14 )
      v15 = v13 <= 0;
    if ( !v15 && !sub_D16D8(v8, a2, v13) )
    {
      sub_B66FC(a1, 15);
      return 0;
    }
  }
  sub_B66FC(a1, 15);
  sub_B724C(a1);
  return v13;
}

int __fastcall sub_15E84(int a1, int a2)
{
  _BOOL4 v4; // r4
  _BOOL4 v5; // r3
  int result; // r0
  _BOOL4 v7; // r4
  _BOOL4 v8; // r3
  _BOOL4 v9; // r4
  _BOOL4 v10; // r0

  v4 = sub_338BD4(a1, "short") != 0;
  v5 = sub_338BD4(a2, "short") != 0;
  result = v4 && v5;
  if ( v4 && v5 )
    return 1;
  if ( v4 || v5 )
    return result;
  v7 = sub_338BD4(a1, "long") != 0;
  v8 = sub_338BD4(a2, "long") != 0;
  result = v7 && v8;
  if ( v7 && v8 )
    return 1;
  if ( v7 || v8 )
    return result;
  v9 = sub_338BD4(a1, "char") != 0;
  v10 = sub_338BD4(a2, "char") != 0;
  return v9 && v10 || !v9 && !v10;
}

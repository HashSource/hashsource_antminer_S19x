__int64 __fastcall sub_36274(int a1)
{
  double v1; // d0
  __int64 v3; // [sp+18h] [bp-Ch]

  v3 = 0;
  if ( a1 )
  {
    sub_33CF4((_DWORD *)(a1 + 192));
    if ( v1 == 0.0 )
      return 0;
    else
      return sub_68F40(COERCE_UNSIGNED_INT64(2.69595353e67 / v1), HIDWORD(COERCE_UNSIGNED_INT64(2.69595353e67 / v1)));
  }
  return v3;
}

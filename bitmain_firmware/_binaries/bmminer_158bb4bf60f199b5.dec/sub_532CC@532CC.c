__int64 __fastcall sub_532CC(_DWORD *a1)
{
  double v2; // d8
  double v3; // d8
  double v4; // d6
  double v5; // d8

  if ( !a1 )
    return 0;
  v2 = sub_778A4(a1[54], a1[55]) * 6.27710174e57;
  v3 = v2 + sub_778A4(a1[52], a1[53]) * 3.40282367e38;
  v4 = sub_778A4(a1[50], a1[51]);
  v5 = sub_778A4(a1[48], a1[49]) + v3 + v4 * 1.84467441e19;
  if ( v5 == 0.0 )
    return 0;
  else
    return sub_77970(COERCE_UNSIGNED_INT64(2.69595353e67 / v5), HIDWORD(COERCE_UNSIGNED_INT64(2.69595353e67 / v5)));
}

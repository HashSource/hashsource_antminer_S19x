_QWORD *__fastcall sub_77DF4(double a1)
{
  __int64 v1; // d0
  double v2; // r0
  _QWORD *v5; // [sp+Ch] [bp-8h]

  LODWORD(v2) = _isnan(a1);
  if ( LODWORD(v2) || _isinf(v2) )
    return 0;
  v5 = sub_74DA0(0x10u);
  if ( !v5 )
    return 0;
  sub_75E9C(v5, 4);
  v5[1] = v1;
  return v5;
}

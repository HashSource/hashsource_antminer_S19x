_QWORD *__fastcall sub_1419C(double a1)
{
  __int64 v1; // d0
  double v2; // r0
  _QWORD *result; // r0

  LODWORD(v2) = _isnan(a1);
  if ( LODWORD(v2) )
    return 0;
  if ( _isinf(v2) )
    return 0;
  result = sub_13828((void *)0x10);
  if ( !result )
    return 0;
  result[1] = v1;
  *(_DWORD *)result = 4;
  *((_DWORD *)result + 1) = 1;
  return result;
}

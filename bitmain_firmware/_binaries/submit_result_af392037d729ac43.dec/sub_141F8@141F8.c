int __fastcall sub_141F8(double a1)
{
  __int64 v1; // d0
  int v2; // r4
  double v3; // r0
  int result; // r0

  v2 = LODWORD(a1);
  if ( !LODWORD(a1) )
    return -1;
  if ( *(_DWORD *)LODWORD(a1) != 4 )
    return -1;
  LODWORD(v3) = _isnan(a1);
  if ( LODWORD(v3) )
    return -1;
  result = _isinf(v3);
  if ( result )
    return -1;
  *(_QWORD *)(v2 + 8) = v1;
  return result;
}

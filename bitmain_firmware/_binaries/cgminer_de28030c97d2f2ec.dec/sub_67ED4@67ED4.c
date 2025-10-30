int __fastcall sub_67ED4(double a1)
{
  __int64 v1; // d0
  double v2; // r0
  int v5; // [sp+Ch] [bp-8h]

  v5 = LODWORD(a1);
  if ( !LODWORD(a1) )
    return -1;
  if ( *(_DWORD *)LODWORD(a1) != 4 )
    return -1;
  LODWORD(v2) = _isnan(a1);
  if ( LODWORD(v2) || _isinf(v2) )
    return -1;
  *(_QWORD *)(v5 + 8) = v1;
  return 0;
}

_DWORD *__fastcall sub_4A44C(_DWORD *result, _DWORD *a2)
{
  int v2; // r3
  __int64 v3; // r2
  int v4; // lr
  int v5; // r1

  v2 = result[1];
  LODWORD(v3) = *result + *a2;
  *result = v3;
  HIDWORD(v3) = v2 + a2[1];
  result[1] = HIDWORD(v3);
  if ( SHIDWORD(v3) <= 999999999 )
  {
    if ( v3 < 0 )
    {
      do
      {
        HIDWORD(v3) += 1000000000;
        LODWORD(v3) = v3 - 1;
      }
      while ( v3 < 0 );
      *(_QWORD *)result = v3;
    }
  }
  else
  {
    v4 = v3 + 1;
    v5 = HIDWORD(v3) - 1000000000;
    if ( HIDWORD(v3) - 1000000000 > 999999999 )
    {
      v5 = -2000000000;
      v4 = v3 + 2;
    }
    *result = v4;
    if ( HIDWORD(v3) - 1000000000 > 999999999 )
      v5 += HIDWORD(v3);
    result[1] = v5;
  }
  return result;
}

_DWORD *__fastcall sub_1383C(_DWORD *result, _QWORD *a2)
{
  int v2; // r12
  __int64 v3; // r2

  if ( !result || *result != 1114990113 )
    sub_1073C();
  if ( !a2 )
    sub_1073C();
  v2 = result[3];
  LODWORD(v3) = result[1] + v2;
  HIDWORD(v3) = result[2] - v2;
  *a2 = v3;
  return result;
}

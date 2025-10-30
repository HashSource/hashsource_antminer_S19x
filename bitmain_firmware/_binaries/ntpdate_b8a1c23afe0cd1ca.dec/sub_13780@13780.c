_DWORD *__fastcall sub_13780(_DWORD *result, _QWORD *a2)
{
  __int64 v2; // r2

  if ( !result || *result != 1114990113 )
    sub_1073C();
  if ( !a2 )
    sub_1073C();
  LODWORD(v2) = result[1];
  HIDWORD(v2) = result[3];
  *a2 = v2;
  return result;
}

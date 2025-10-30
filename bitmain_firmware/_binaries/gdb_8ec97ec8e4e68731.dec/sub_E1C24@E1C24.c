_DWORD *__fastcall sub_E1C24(_DWORD *result, int a2)
{
  __int64 v2; // r2

  v2 = *(_QWORD *)(a2 + 24);
  if ( HIDWORD(v2) == (_DWORD)v2 )
    sub_946E0("No trace.");
  *result = a2;
  result[1] = -991146299 * ((HIDWORD(v2) - (int)v2) >> 2);
  return result;
}

__int64 *__fastcall sub_33ACD0(__int64 *result)
{
  __int64 v1; // kr00_8

  v1 = *result;
  *(_DWORD *)HIDWORD(v1) = v1;
  *(_DWORD *)(v1 + 4) = HIDWORD(v1);
  return result;
}

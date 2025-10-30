_DWORD *__fastcall sub_60B48(_DWORD *result)
{
  *(_DWORD *)(*result + 4) = result[1];
  *(_DWORD *)result[1] = *result;
  return result;
}

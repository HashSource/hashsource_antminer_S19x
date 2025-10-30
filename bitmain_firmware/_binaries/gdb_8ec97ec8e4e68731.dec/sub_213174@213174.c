_DWORD *__fastcall sub_213174(_DWORD *result)
{
  int v1; // r3

  v1 = result[1];
  *result = *(_DWORD *)(v1 + 20);
  *(_DWORD *)(v1 + 20) = result;
  return result;
}

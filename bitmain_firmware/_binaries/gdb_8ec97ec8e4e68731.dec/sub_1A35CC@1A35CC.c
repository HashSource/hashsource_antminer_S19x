_DWORD *__fastcall sub_1A35CC(int a1, int a2, const char *a3, _DWORD *a4)
{
  _DWORD *result; // r0
  int v6; // r3

  result = sub_1A2F40(a3, a1, a2);
  if ( result )
  {
    v6 = *(_DWORD *)(*result + 12);
    result = *(_DWORD **)(*result + 8);
    *a4 = v6;
  }
  return result;
}

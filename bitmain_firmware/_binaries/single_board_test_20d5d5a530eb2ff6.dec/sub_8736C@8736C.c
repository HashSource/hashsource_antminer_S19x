_DWORD *__fastcall sub_8736C(int a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 76))(a2);
  if ( result && !a3 && !*result )
    return 0;
  return result;
}

_BYTE *__fastcall sub_12179C(const char **a1, __int64 a2, int a3, const char *a4, const char *a5)
{
  int v8; // r0
  _BYTE *result; // r0

  if ( !*(_BYTE *)(a3 + 16) )
    ((void (__fastcall *)(_DWORD, int))loc_11FFD0)(*(_DWORD *)(dword_4872D8 + 344), a3);
  v8 = *(_DWORD *)(a3 + 4);
  if ( !v8 )
    sub_946E0("%s used without %s section [in module %s]", a4, a5, *a1);
  if ( a2 >= *(unsigned int *)(a3 + 8) )
    sub_946E0("%s pointing outside of %s section [in module %s]", a4, a5, *a1);
  result = (_BYTE *)(v8 + a2);
  if ( !*result )
    return 0;
  return result;
}

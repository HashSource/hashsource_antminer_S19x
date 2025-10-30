_BYTE *__fastcall sub_121E74(int a1, __int64 a2)
{
  int v5; // r0
  _BYTE *result; // r0

  if ( !*(_BYTE *)(a1 + 56) )
    ((void (__fastcall *)(_DWORD, int))loc_11FFD0)(*(_DWORD *)(dword_4872D8 + 344), a1 + 40);
  v5 = *(_DWORD *)(a1 + 44);
  if ( !v5 )
    sub_946E0("DW_FORM_GNU_strp_alt used without .debug_str section [in module %s]", **(const char ***)(a1 + 140));
  if ( a2 >= *(unsigned int *)(a1 + 48) )
    sub_946E0(
      "DW_FORM_GNU_strp_alt pointing outside of .debug_str section [in module %s]",
      **(const char ***)(a1 + 140));
  result = (_BYTE *)(v5 + a2);
  if ( !*result )
    return 0;
  return result;
}

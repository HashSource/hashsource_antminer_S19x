_BYTE *__fastcall sub_12B42C(int a1, int a2)
{
  __int64 v2; // r0

  v2 = sub_15C250(
         *(_DWORD *)(a1 + 60) + a2 * (unsigned int)*(unsigned __int8 *)(a1 + 26),
         *(unsigned __int8 *)(a1 + 26),
         *(_DWORD *)(a1 + 20));
  return sub_12179C(
           *(const char ***)(*(_DWORD *)(dword_4872D8 + 344) + 36),
           v2,
           dword_4872D8 + 140,
           "DW_FORM_strp",
           ".debug_str");
}

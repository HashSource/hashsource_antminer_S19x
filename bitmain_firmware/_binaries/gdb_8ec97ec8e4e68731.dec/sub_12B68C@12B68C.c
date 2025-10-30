int __fastcall sub_12B68C(int a1, unsigned int a2)
{
  unsigned int v3; // r6
  const char *v5; // r0

  v3 = *(_DWORD *)(a1 + 40);
  if ( v3 > a2 )
    return *(_DWORD *)(a1 + 68)
         + sub_15C250(
             *(_DWORD *)(a1 + 64) + a2 * *(unsigned __int8 *)(a1 + 26),
             *(unsigned __int8 *)(a1 + 26),
             *(_DWORD *)(a1 + 20));
  if ( dword_47AC88 > 0 )
  {
    v5 = (const char *)sub_1B87A8(*(_DWORD *)(dword_4872D8 + 344));
    sub_F43B4(&off_46D334, "Wrong .debug_names with name index %u but name_count=%u [in module %s]", a2, v3, v5);
  }
  return 0;
}

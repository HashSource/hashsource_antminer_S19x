int __fastcall sub_147398(int a1)
{
  int v2; // r1
  int result; // r0
  void *v4; // r5
  int v5; // r0
  _DWORD *v6; // [sp+8h] [bp-Ch] BYREF
  int v7; // [sp+Ch] [bp-8h]

  if ( !*(_BYTE *)(dword_4872D8 + 417) )
  {
    v5 = sub_94700(
           (int)"dwarf2read.c",
           3121,
           "%s: Assertion `%s' failed.",
           "compunit_symtab* dw2_instantiate_symtab(dwarf2_per_cu_data*)",
           "dwarf2_per_objfile->using_index");
    if ( v6 )
      *v6 = v7;
    sub_338FFC(v5);
  }
  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 24) + 4);
  if ( v2 )
    return v2;
  v4 = sub_9253C(1174244, 0);
  ((void (__fastcall *)(_DWORD **))loc_211D58)(&v6);
  if ( *(_DWORD *)(a1 + 12) )
    ((void (__fastcall *)(int))loc_146C5C)(a1);
  sub_125908();
  sub_92620(v4);
  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 24) + 4);
  if ( !v6 )
    return v2;
  result = *(_DWORD *)(*(_DWORD *)(a1 + 24) + 4);
  *v6 = v7;
  return result;
}

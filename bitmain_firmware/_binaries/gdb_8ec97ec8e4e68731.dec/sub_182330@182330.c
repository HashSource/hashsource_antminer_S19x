int __fastcall sub_182330(int a1, int a2, int a3)
{
  int v3; // r8
  int i; // r4
  int v8; // r5
  int v9; // r5
  int result; // r0

  v3 = 0;
  for ( i = 0; ; ++i )
  {
    v8 = ((int (__fastcall *)(int))loc_166E9C)(a1);
    v9 = v8 + ((int (__fastcall *)(int))loc_166F48)(a1);
    result = a1;
    if ( v9 <= i )
      break;
    if ( ((int (__fastcall *)(int, int, void *))loc_16AF90)(a1, i, &unk_46DAD4) )
    {
      v3 = 1;
      ((void (__fastcall *)(int, int, int, int, int))loc_167ECC)(a1, a2, a3, i, 1);
    }
  }
  if ( !v3 )
    return sub_25A418(a2, "No floating-point info available for this processor.\n");
  return result;
}

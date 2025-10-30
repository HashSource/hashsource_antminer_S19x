int __fastcall sub_11BAE0(int a1, int a2, int a3)
{
  int result; // r0

  result = sub_13228C(a2, *(_DWORD *)(a1 + 80));
  if ( !result )
    sub_946E0("Could not find type for DW_OP_const_type");
  if ( a3 )
  {
    if ( *(_DWORD *)(result + 20) != a3 )
      sub_946E0("DW_OP_const_type has different sizes for type and data");
  }
  return result;
}

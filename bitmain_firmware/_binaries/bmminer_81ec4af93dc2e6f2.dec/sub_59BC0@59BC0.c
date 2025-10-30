int __fastcall sub_59BC0(int a1, _DWORD *a2)
{
  int result; // r0

  result = sub_59CC8(a1, a2);
  if ( result != 1 )
  {
    result = sub_59CC8(a1, a2);
    if ( result )
      _assert_fail(
        "debug_node_color(pTree,n) == clib_red || debug_node_color(pTree,n) == clib_black",
        "3rdparty/cstl/src/c_rb.c",
        0x1DFu,
        "debug_verify_property_1");
  }
  if ( a2 != (_DWORD *)(a1 + 4) )
  {
    sub_59BC0(a1, *a2);
    return sub_59BC0(a1, a2[1]);
  }
  return result;
}

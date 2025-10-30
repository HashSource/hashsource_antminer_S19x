int __fastcall sub_5AB84(int a1, _DWORD *a2)
{
  int result; // r0

  result = sub_5AC84(a1, a2);
  if ( result != 1 )
  {
    result = sub_5AC84(a1, a2);
    if ( result )
      _assert_fail(
        "debug_node_color(pTree,n) == 1 || debug_node_color(pTree,n) == 0",
        "3rdparty/cstl/src/c_rb.c",
        0x1DFu,
        "debug_verify_property_1");
  }
  if ( (_DWORD *)(a1 + 4) != a2 )
  {
    sub_5AB84(a1, *a2);
    return sub_5AB84(a1, a2[1]);
  }
  return result;
}

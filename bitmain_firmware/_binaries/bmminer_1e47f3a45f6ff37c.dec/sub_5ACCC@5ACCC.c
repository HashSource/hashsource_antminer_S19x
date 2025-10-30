int __fastcall sub_5ACCC(int a1, int *a2)
{
  int result; // r0

  result = sub_5AC84(a1, (int)a2);
  if ( result == 1 )
  {
    if ( sub_5AC84(a1, *a2) )
      _assert_fail(
        "debug_node_color(pTree,n->left) == 0",
        "3rdparty/cstl/src/c_rb.c",
        0x1EFu,
        "debug_verify_property_4");
    if ( sub_5AC84(a1, a2[1]) )
      _assert_fail(
        "debug_node_color(pTree,n->right) == 0",
        "3rdparty/cstl/src/c_rb.c",
        0x1F0u,
        "debug_verify_property_4");
    result = sub_5AC84(a1, a2[2]);
    if ( result )
      _assert_fail(
        "debug_node_color(pTree,n->parent) == 0",
        "3rdparty/cstl/src/c_rb.c",
        0x1F1u,
        "debug_verify_property_4");
  }
  if ( (int *)(a1 + 4) != a2 )
  {
    sub_5ACCC(a1, *a2);
    return sub_5ACCC(a1, a2[1]);
  }
  return result;
}

int __fastcall sub_59D10(int a1, int *a2)
{
  int result; // r0

  result = sub_59CC8(a1, (int)a2);
  if ( result == 1 )
  {
    if ( sub_59CC8(a1, *a2) )
      _assert_fail(
        "debug_node_color(pTree,n->left) == clib_black",
        "3rdparty/cstl/src/c_rb.c",
        0x1EFu,
        "debug_verify_property_4");
    if ( sub_59CC8(a1, a2[1]) )
      _assert_fail(
        "debug_node_color(pTree,n->right) == clib_black",
        "3rdparty/cstl/src/c_rb.c",
        0x1F0u,
        "debug_verify_property_4");
    result = sub_59CC8(a1, a2[2]);
    if ( result )
      _assert_fail(
        "debug_node_color(pTree,n->parent) == clib_black",
        "3rdparty/cstl/src/c_rb.c",
        0x1F1u,
        "debug_verify_property_4");
  }
  if ( a2 != (int *)(a1 + 4) )
  {
    sub_59D10(a1, *a2);
    return sub_59D10(a1, a2[1]);
  }
  return result;
}

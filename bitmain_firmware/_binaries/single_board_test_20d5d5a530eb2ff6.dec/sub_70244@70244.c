int __fastcall sub_70244(int result, _DWORD *a2)
{
  int v2; // r6
  _DWORD *v4; // r5

  v2 = result;
  v4 = (_DWORD *)(result + 4);
  while ( a2 != v4 )
  {
    if ( a2[3] > 1u )
      _assert_fail(
        "debug_node_color(pTree,n) == 1 || debug_node_color(pTree,n) == 0",
        "../../hal/3rdparty/cstl/src/c_rb.c",
        0x1DFu,
        "debug_verify_property_1");
    result = sub_70244(v2, *a2);
    a2 = (_DWORD *)a2[1];
  }
  return result;
}

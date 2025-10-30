int __fastcall sub_6A138(int result, _DWORD *a2)
{
  _DWORD *v2; // r5
  int v3; // r6
  _DWORD *v4; // r4

  v2 = (_DWORD *)(result + 4);
  if ( a2 != (_DWORD *)(result + 4) )
  {
    v3 = result;
    v4 = a2;
    do
    {
      if ( v4[3] > 1u )
        _assert_fail(
          "debug_node_color(pTree,n) == clib_red || debug_node_color(pTree,n) == clib_black",
          "3rdparty/cstl/src/c_rb.c",
          0x1DFu,
          "debug_verify_property_1");
      result = sub_6A138(v3, *v4);
      v4 = (_DWORD *)v4[1];
    }
    while ( v4 != v2 );
  }
  return result;
}

int __fastcall sub_70284(int result, _DWORD *a2)
{
  int v2; // r6
  _DWORD *v4; // r5
  _DWORD *v5; // r1
  _DWORD *v6; // r3
  _DWORD *v7; // r2

  v2 = result;
  v4 = (_DWORD *)(result + 4);
  while ( a2 != v4 )
  {
    v5 = (_DWORD *)*a2;
    if ( a2[3] == 1 )
    {
      if ( v5 != v4 && v5[3] )
        _assert_fail(
          "debug_node_color(pTree,n->left) == 0",
          "../../hal/3rdparty/cstl/src/c_rb.c",
          0x1EFu,
          "debug_verify_property_4");
      v6 = (_DWORD *)a2[1];
      if ( v6 != v4 && v6[3] )
        _assert_fail(
          "debug_node_color(pTree,n->right) == 0",
          "../../hal/3rdparty/cstl/src/c_rb.c",
          0x1F0u,
          "debug_verify_property_4");
      v7 = (_DWORD *)a2[2];
      if ( v7 != v4 )
      {
        if ( v7[3] )
          _assert_fail(
            "debug_node_color(pTree,n->parent) == 0",
            "../../hal/3rdparty/cstl/src/c_rb.c",
            0x1F1u,
            "debug_verify_property_4");
      }
      a2 = (_DWORD *)a2[1];
    }
    else
    {
      a2 = (_DWORD *)a2[1];
    }
    result = sub_70284(v2);
  }
  return result;
}

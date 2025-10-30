int __fastcall sub_6A198(int result, _DWORD *a2)
{
  int v2; // r6
  _DWORD *v4; // r5
  _DWORD *v5; // r1
  _DWORD *v6; // r3
  _DWORD *v7; // r2

  v2 = result;
  v4 = (_DWORD *)(result + 4);
  while ( 2 )
  {
    if ( a2 != v4 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v5 = (_DWORD *)*a2;
          if ( a2[3] == 1 )
            break;
          a2 = (_DWORD *)a2[1];
LABEL_4:
          result = sub_6A198(v2);
          if ( a2 == v4 )
            return result;
        }
        if ( v5 != v4 && v5[3] )
          _assert_fail(
            "debug_node_color(pTree,n->left) == clib_black",
            "3rdparty/cstl/src/c_rb.c",
            0x1EFu,
            "debug_verify_property_4");
        v6 = (_DWORD *)a2[1];
        if ( v6 == v4 )
          break;
        if ( v6[3] )
          _assert_fail(
            "debug_node_color(pTree,n->right) == clib_black",
            "3rdparty/cstl/src/c_rb.c",
            0x1F0u,
            "debug_verify_property_4");
        v7 = (_DWORD *)a2[2];
        if ( v7 != v4 )
          goto LABEL_12;
        a2 = (_DWORD *)a2[1];
        result = sub_6A198(v2);
      }
      v7 = (_DWORD *)a2[2];
      if ( v7 == v4 )
      {
        a2 = (_DWORD *)*a2;
        continue;
      }
LABEL_12:
      if ( v7[3] )
        _assert_fail(
          "debug_node_color(pTree,n->parent) == clib_black",
          "3rdparty/cstl/src/c_rb.c",
          0x1F1u,
          "debug_verify_property_4");
      a2 = (_DWORD *)a2[1];
      goto LABEL_4;
    }
    return result;
  }
}

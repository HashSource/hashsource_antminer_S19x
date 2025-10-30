int __fastcall sub_6A330(_DWORD **a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5
  int v5; // [sp+4h] [bp-4h] BYREF

  v2 = a1 + 1;
  v1 = *a1;
  sub_6A138((int)a1, *a1);
  if ( v1 != v2 && v1[3] )
    _assert_fail(
      "debug_node_color(pTree,root) == clib_black",
      "3rdparty/cstl/src/c_rb.c",
      0x1E6u,
      "debug_verify_property_2");
  sub_6A198((int)a1, v1);
  v5 = -1;
  return sub_6A2A0((int)a1, v1, 0, &v5);
}

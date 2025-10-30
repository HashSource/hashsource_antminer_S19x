int __fastcall sub_70318(int result, _DWORD *a2, int a3, _DWORD *a4)
{
  int v4; // r8
  _DWORD *v8; // r7
  int v9; // r5

  v4 = result;
  v8 = (_DWORD *)(result + 4);
  while ( a2 != v8 )
  {
    if ( !a2[3] )
      ++a3;
    result = sub_70318(v4, *a2, a3, a4);
    a2 = (_DWORD *)a2[1];
  }
  v9 = a3 + 1;
  if ( *a4 == -1 )
  {
    *a4 = v9;
  }
  else if ( *a4 != v9 )
  {
    _assert_fail(
      "black_count == *path_black_count",
      "../../hal/3rdparty/cstl/src/c_rb.c",
      0x205u,
      "debug_verify_property_5_helper");
  }
  return result;
}

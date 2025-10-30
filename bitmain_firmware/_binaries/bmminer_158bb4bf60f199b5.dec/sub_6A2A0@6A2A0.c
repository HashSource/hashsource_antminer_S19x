int __fastcall sub_6A2A0(int result, _DWORD *a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // r4
  _DWORD *v5; // r8
  int v6; // r9
  int v7; // r5
  int i; // r6

  v4 = a2;
  v5 = (_DWORD *)(result + 4);
  v6 = result;
  v7 = a3;
  for ( i = a3 + 1; v4 != v5; v4 = (_DWORD *)v4[1] )
  {
    if ( !v4[3] )
      v7 = i++;
    result = sub_6A2A0(v6, *v4, v7, a4);
  }
  if ( *a4 == -1 )
  {
    *a4 = i;
  }
  else if ( *a4 != i )
  {
    _assert_fail(
      "black_count == *path_black_count",
      "3rdparty/cstl/src/c_rb.c",
      0x205u,
      "debug_verify_property_5_helper");
  }
  return result;
}

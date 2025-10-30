int __fastcall sub_5AE38(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int result; // r0
  int v6; // [sp+0h] [bp-14h]
  int v8; // [sp+4h] [bp-10h]

  result = sub_5AC84(a1, (int)a2);
  if ( !result )
    ++a3;
  if ( (_DWORD *)(a1 + 4) == a2 )
  {
    if ( *a4 == -1 )
    {
      *a4 = a3;
    }
    else if ( *a4 != a3 )
    {
      _assert_fail(
        "black_count == *path_black_count",
        "3rdparty/cstl/src/c_rb.c",
        0x205u,
        "debug_verify_property_5_helper");
    }
  }
  else
  {
    sub_5AE38(a1, *a2, a3, a4, a4, a3);
    return sub_5AE38(a1, a2[1], v8, v6, v6, v8);
  }
  return result;
}

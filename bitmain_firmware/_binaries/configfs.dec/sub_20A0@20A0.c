__int64 __fastcall sub_20A0(__int64 a1, __int64 a2)
{
  __int64 v4; // x1
  __int64 result; // x0
  __int64 i; // x19
  int is_root; // w0

  sub_1978(a1, a2);
  v4 = *(_QWORD *)(a1 + 96);
  if ( v4 || (is_root = configfs_is_root(a1), v4 = a2, is_root) )
  {
    *(_QWORD *)(a2 + 96) = v4;
    result = *(_QWORD *)(a2 + 104);
    for ( i = result - 120; a2 + 104 != result; i = result - 120 )
    {
      sub_20A0(a2, i);
      result = *(_QWORD *)(i + 120);
    }
  }
  else
  {
    __break(0x800u);
    return sub_2130();
  }
  return result;
}

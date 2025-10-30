__int64 __fastcall sub_1FD8(__int64 a1, __int64 a2)
{
  __int64 v3; // x0
  __int64 result; // x0
  __int64 (__fastcall *v5)(__int64, __int64); // x2

  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 16);
    if ( result )
    {
      v5 = *(__int64 (__fastcall **)(__int64, __int64))(result + 24);
      if ( v5 )
        return v5(a1, a2);
    }
  }
  else
  {
    __break(0x800u);
    return sub_2030();
  }
  return result;
}

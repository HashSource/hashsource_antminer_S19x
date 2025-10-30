__int64 __fastcall sub_2030(__int64 a1, __int64 a2)
{
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 (__fastcall *v5)(__int64, __int64); // x2

  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 16);
    if ( v4 && (v5 = *(__int64 (__fastcall **)(__int64, __int64))(v4 + 32)) != 0 )
      return v5(a1, a2);
    else
      return config_item_put(a2);
  }
  else
  {
    __break(0x800u);
    return sub_20A0();
  }
}

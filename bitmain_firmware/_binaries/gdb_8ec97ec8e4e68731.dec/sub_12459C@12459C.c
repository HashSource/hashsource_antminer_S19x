__int64 __fastcall sub_12459C(int a1)
{
  __int16 v1; // r2
  int v2; // r3
  bool v3; // zf
  unsigned int v5; // r3
  bool v6; // cc
  int v7; // r0
  const char *v8; // r2

  v1 = *(_WORD *)(a1 + 2);
  v2 = v1 & 0x7FFF;
  v3 = v2 == 13;
  if ( v2 != 13 )
    v3 = v2 == 33;
  if ( v3 )
    return *(_QWORD *)(a1 + 8);
  v5 = v2 - 5;
  v6 = (v1 & 0x7FFBu) > 0xB;
  if ( (v1 & 0x7FFB) != 0xB )
    v6 = v5 > 2;
  if ( !v6 )
    return *(_QWORD *)(a1 + 8);
  if ( dword_47AC88 <= 0 )
    return 0;
  v7 = sub_321640(v1 & 0x7FFF);
  v8 = "DW_FORM_<unknown>";
  if ( v7 )
    v8 = (const char *)v7;
  sub_F43B4(&off_46D334, "Attribute value is not a constant (%s)", v8);
  return 0;
}

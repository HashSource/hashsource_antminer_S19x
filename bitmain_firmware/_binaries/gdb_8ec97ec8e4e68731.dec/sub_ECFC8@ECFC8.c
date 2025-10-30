int __fastcall sub_ECFC8(int a1, int a2)
{
  int v2; // r7
  int v5; // r0
  int v6; // r0
  int v7; // r4
  void *v8; // r7
  int v9; // r1
  int v10; // r1
  int v11; // r0
  int v12; // r4
  __int64 v14; // r4
  int v15; // r0
  int v16; // r0

  v5 = sub_26BC70(a1);
  v6 = sub_171258(v5);
  if ( (unsigned int)**(unsigned __int8 **)(v6 + 24) - 3 > 1 )
  {
    v14 = sub_94700(
            (int)"c-varobj.c",
            255,
            "%s: Assertion `%s' failed.",
            "value* value_struct_element_index(value*, int)",
            "TYPE_CODE (type) == TYPE_CODE_STRUCT || TYPE_CODE (type) == TYPE_CODE_UNION");
    sub_92E40(v2);
    v15 = v14;
    if ( HIDWORD(v14) != 1 )
    {
      sub_339E78(v14);
      sub_92E60();
    }
    v12 = 0;
    v16 = sub_339E78(v15);
    sub_339EF8(v16);
  }
  else
  {
    v7 = v6;
    v8 = sub_92E28();
    if ( sub_174F0C(*(_DWORD *)(*(_DWORD *)(v7 + 24) + 24) + 24 * a2, v9) )
      v11 = ((int (__fastcall *)(int, int))loc_26D23C)(v7, a2);
    else
      v11 = ((int (__fastcall *)(int, int, _DWORD, _DWORD, int, int))loc_26F358)(a1, v10, 0, 0, a2, v7);
    v12 = v11;
    sub_92E40((int)v8);
  }
  return v12;
}

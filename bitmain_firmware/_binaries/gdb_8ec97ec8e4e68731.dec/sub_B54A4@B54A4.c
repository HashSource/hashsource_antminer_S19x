int __fastcall sub_B54A4(int a1, int a2, int *a3, int *a4)
{
  int v5; // r4
  int v8; // r3
  int v9; // r0
  int v10; // r0
  int v11; // r3
  int v12; // r4
  int result; // r0
  __int64 v14; // r0

  v5 = a2;
  if ( sub_A0C94(a2) )
  {
    if ( !a1 )
    {
      v8 = *(_DWORD *)(v5 + 24);
      if ( *(_BYTE *)v8 == 23 )
      {
        do
        {
          v9 = *(_DWORD *)(v8 + 20);
          v8 = *(_DWORD *)(v9 + 24);
        }
        while ( *(_BYTE *)v8 == 23 );
        v10 = sub_A8678(v9);
        v5 = sub_1700C0(v10);
        goto LABEL_6;
      }
      sub_94700(
        (int)"ada-varobj.c",
        135,
        "%s: Assertion `%s' failed.",
        "void ada_varobj_ind(value*, type*, value**, type**)",
        "TYPE_CODE (parent_type) == TYPE_CODE_TYPEDEF");
    }
    v14 = sub_94700(
            (int)"ada-varobj.c",
            134,
            "%s: Assertion `%s' failed.",
            "void ada_varobj_ind(value*, type*, value**, type**)",
            "parent_value == NULL");
    return sub_B55AC(v14, HIDWORD(v14));
  }
  if ( a1 && sub_26EBA8(a1) )
  {
    v12 = sub_AB378(a1);
    result = sub_26BC70(v12);
    goto LABEL_7;
  }
LABEL_6:
  v11 = *(_DWORD *)(v5 + 24);
  v12 = 0;
  result = *(_DWORD *)(v11 + 20);
LABEL_7:
  if ( a3 )
    *a3 = v12;
  if ( a4 )
    *a4 = result;
  return result;
}

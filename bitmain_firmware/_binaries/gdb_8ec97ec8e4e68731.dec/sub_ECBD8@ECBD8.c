int __fastcall sub_ECBD8(int *a1, int *a2, _DWORD *a3, int a4)
{
  char v4; // r4
  int *v5; // r5
  _DWORD *v6; // r7
  int v7; // r8
  int v9; // r0
  int result; // r0
  char *v11; // r2
  int v12; // r2
  int v13; // r4
  void *v14; // r9
  int v15; // r0
  __int64 v16; // r0

  v9 = *a2;
  if ( !*a2 )
  {
    sub_94700(
      (int)"c-varobj.c",
      70,
      "%s: Assertion `%s' failed.",
      "void adjust_value_for_child_access(value**, type**, int*, int)",
      "type && *type");
LABEL_27:
    v16 = sub_94700(
            (int)"c-varobj.c",
            81,
            "%s: Assertion `%s' failed.",
            "void adjust_value_for_child_access(value**, type**, int*, int)",
            "!TYPE_IS_REFERENCE (*type)");
    if ( HIDWORD(v16) != 1 )
    {
      sub_339E78(v16);
      sub_92E60();
    }
    v15 = sub_339E78(v16);
    *a1 = 0;
    result = sub_339EF8(v15);
    goto LABEL_22;
  }
  v4 = a4;
  if ( a3 )
    a4 = 0;
  v5 = a2;
  if ( a3 )
    *a3 = a4;
  v6 = a3;
  result = sub_171258(v9);
  v11 = *(char **)(result + 24);
  *v5 = result;
  v12 = *v11;
  if ( (unsigned __int8)(v12 - 18) <= 1u )
    goto LABEL_27;
  if ( v12 != 1 || (result = sub_171598(), v7 = result, (unsigned int)**(unsigned __int8 **)(result + 24) - 3 > 1) )
  {
LABEL_8:
    if ( !a1 )
      return result;
    goto LABEL_9;
  }
  if ( !a1 )
  {
    *v5 = result;
    if ( !v6 )
      return result;
    goto LABEL_18;
  }
  if ( !*a1 )
  {
LABEL_22:
    *v5 = v7;
    if ( v6 )
      goto LABEL_18;
    goto LABEL_9;
  }
  v14 = sub_92E28();
  *a1 = sub_26210C(*a1);
  result = sub_92E40((int)v14);
  *v5 = v7;
  if ( v6 )
  {
LABEL_18:
    *v6 = 1;
    goto LABEL_8;
  }
LABEL_9:
  result = *a1;
  if ( *a1 )
    v13 = v4 & 1;
  else
    v13 = 0;
  if ( v13 )
    return sub_26EDE8();
  return result;
}

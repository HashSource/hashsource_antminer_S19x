int __fastcall sub_14C89C(int a1, _DWORD *a2, int a3, int a4, _DWORD *a5, int a6, int a7)
{
  _DWORD *v7; // r0
  int v10; // r3
  _DWORD *v11; // r0
  __int64 v12; // r0
  char *v13; // r2
  int v14; // r3
  int v15; // r4
  int v17; // r0
  _BOOL4 v18; // r2

  v7 = (_DWORD *)*a5;
  if ( !*a5 )
    sub_946E0("Cannot evaluate function -- may be inlined");
  if ( a3 != 2 )
  {
    v10 = **(char **)(sub_26BC70(v7) + 24);
    if ( v10 == 27 )
      JUMPOUT(0x26CD64);
    if ( v10 == 28 )
    {
      v11 = (_DWORD *)*a5;
      if ( **(_BYTE **)(v11[16] + 24) == 28 )
      {
        v18 = *v11 == 4;
        if ( a4 <= 0 )
          v18 = 0;
        if ( v18 )
          JUMPOUT(0x15841C);
      }
      sub_94700(
        (int)"value.c",
        2737,
        "%s: Assertion `%s' failed.",
        "value* call_xmethod(value*, int, value**)",
        "TYPE_CODE (value_type (method)) == TYPE_CODE_XMETHOD && method->lval == lval_xcallable && argc > 0");
      JUMPOUT(0x26D130);
    }
    return sub_17E6EC(*a5, a7, a4, a5 + 1);
  }
  v12 = sub_26BC70(v7);
  v13 = *(char **)(v12 + 24);
  v14 = *v13;
  if ( v14 == 27 )
  {
    v17 = *(_DWORD *)(sub_1780B4(*a2) + 12);
    return sub_260DBC(v17);
  }
  if ( v14 == 28 )
  {
    v17 = ((int (__fastcall *)(_DWORD, int, _DWORD *))loc_26D034)(*a5, a4, a5 + 1);
    if ( !v17 )
      sub_946E0("Xmethod is missing return type.");
    return sub_260DBC(v17);
  }
  if ( (v14 & 0xFFFFFFF7) != 7 )
    sub_946E0("Expression of type other than \"Function returning ...\" used as function", HIDWORD(v12));
  v15 = *((_DWORD *)v13 + 5);
  if ( !v15 )
  {
    if ( !a7 )
      sub_17D5CC(a6, HIDWORD(v12));
    v15 = a7;
  }
  return sub_26BB80(v15);
}

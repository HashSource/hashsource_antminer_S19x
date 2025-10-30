int __fastcall sub_1CDA38(int a1, int a2, int a3, int a4, int a5, int a6)
{
  bool v7; // zf
  __int64 v8; // r0
  int v9; // r2

  if ( a4 != a1 )
    return 0;
  switch ( a4 )
  {
    case 1:
      return a3 == a6;
    case 0:
      return 1;
    case 2:
      v7 = a2 == a5;
      if ( a2 == a5 )
        return a3 == a6;
      return v7;
    default:
      v8 = sub_94700(
             (int)"prologue-value.c",
             203,
             "%s: %s",
             "int pv_is_identical(pv_t, pv_t)",
             "unexpected prologue value kind");
      return sub_1CDB14(v8, HIDWORD(v8), v9);
  }
}

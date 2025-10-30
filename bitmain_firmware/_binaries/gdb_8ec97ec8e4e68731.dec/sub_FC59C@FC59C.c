int __fastcall sub_FC59C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // r5
  void *v12; // r5
  int v13; // r4
  __int64 v15; // kr00_8
  int v16; // r0
  int *v17; // r3

  if ( !off_46D394 )
  {
    v15 = sub_94700(
            (int)"cp-abi.c",
            74,
            "%s: Assertion `%s' failed.",
            "int baseclass_offset(type*, int, const gdb_byte*, LONGEST, CORE_ADDR, const value*)",
            "current_cp_abi.baseclass_offset != NULL");
    sub_92E40(v8);
    v16 = v15;
    if ( HIDWORD(v15) == 1 )
    {
      v17 = (int *)sub_339E78(v15);
      if ( v17[1] != 9 )
        sub_92F1C(*v17, v17[1], v17[2]);
      v16 = sub_92F64(9, "Cannot determine virtual baseclass offset of incomplete object");
    }
    sub_339E78(v16);
    sub_92E60();
  }
  v12 = sub_92E28();
  v13 = off_46D394(a1, a2, a3, off_46D394, a5, a6, a7, a8);
  sub_92E40((int)v12);
  return v13;
}

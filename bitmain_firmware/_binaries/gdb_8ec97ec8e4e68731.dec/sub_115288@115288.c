char *__fastcall sub_115288(int a1, char *a2, __int64 a3)
{
  unsigned int v4; // r10
  int v5; // r11
  unsigned __int64 v6; // r4
  char v8; // r1
  unsigned int v9; // r6
  bool v10; // zf
  bool v11; // zf
  char *result; // r0
  int v13; // r0
  const char *v14; // r3

  v4 = (unsigned __int64)(a3 + 7) >> 32;
  v5 = a3 + 7;
  HIDWORD(v6) = HIDWORD(a3);
  if ( ((unsigned __int64)(a3 + 7) >> 3) - 1 > 7 )
  {
    v13 = sub_94700(
            (int)"dwarf2loc.c",
            2945,
            "%s: Assertion `%s' failed.",
            "void access_memory(gdbarch*, agent_expr*, ULONGEST)",
            "nbytes > 0 && nbytes <= sizeof (LONGEST)");
    return (char *)sub_25A418(v13, "Entry values and tail call frames debugging is %s.\n", v14);
  }
  LODWORD(v6) = a3;
  if ( (a2[48] & 1) != 0 )
    sub_C0A80(a2, (a3 + 7) >> 3);
  if ( v6 > 8 )
  {
    if ( v6 <= 0x10 )
    {
      result = sub_C09B8(a2, 24);
      v9 = v5 & 0xFFFFFFF8;
      v11 = v4 == HIDWORD(v6);
      if ( v4 == HIDWORD(v6) )
        v11 = v9 == (_DWORD)v6;
      if ( !v11 )
        goto LABEL_15;
      return result;
    }
    if ( v6 > 0x20 )
      v8 = 26;
    else
      v8 = 25;
    result = sub_C09B8(a2, v8);
  }
  else
  {
    result = sub_C09B8(a2, 23);
  }
  v9 = v5 & 0xFFFFFFF8;
  v10 = v4 == HIDWORD(v6);
  if ( v4 == HIDWORD(v6) )
    v10 = v9 == (_DWORD)v6;
  if ( !v10 )
  {
LABEL_15:
    if ( ((int (__fastcall *)(int))loc_165D78)(a1) )
    {
      sub_C0B5C(a2, __PAIR64__(v4, v9) - v6);
      return sub_C09B8(a2, 11);
    }
    else
    {
      return sub_C0A74(a2, v6);
    }
  }
  return result;
}

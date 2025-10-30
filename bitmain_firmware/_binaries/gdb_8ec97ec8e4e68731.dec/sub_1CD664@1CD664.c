int __fastcall sub_1CD664(int a1)
{
  int v2; // r0
  int result; // r0
  _DWORD *v4; // r0

  v2 = sub_183AE4(a1);
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 12) )
    {
      v4 = (_DWORD *)((int (*)(void))loc_23E7D8)();
      if ( v4 )
        return sub_23F9F0(v4[2], v4[3], v4[4]);
    }
  }
  sub_23F9F0(dword_475848, qword_47584C, HIDWORD(qword_47584C));
  result = a1;
  if ( dword_487D2C != a1 )
  {
    if ( !a1 )
    {
      sub_94700(
        (int)"progspace.c",
        195,
        "%s: Assertion `%s' failed.",
        "void set_current_program_space(program_space*)",
        "pspace != NULL");
      JUMPOUT(0x1CD2E4);
    }
    dword_487D2C = a1;
    return sub_15D778();
  }
  return result;
}

int __fastcall sub_1D3BC4(_BYTE *a1, int a2, int a3)
{
  _BYTE *v3; // r3
  __int64 v4; // r4

  v3 = a1;
  if ( !a1 || (v3 = (_BYTE *)(unsigned __int8)*a1, !*a1) )
    sub_946E0("Command requires an argument (insn number to go to).", a2, a3, v3);
  v4 = sub_14CC00((int)a1);
  sub_1D2E50();
  return sub_232790(v4, HIDWORD(v4));
}

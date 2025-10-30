int __fastcall sub_15F70C(int a1)
{
  __int64 v1; // r0
  int result; // r0
  int v3; // r5
  int v4; // r0

  if ( !sub_22EB0C(a1) )
    sub_946E0("No registers.");
  if ( !sub_22EAC0() )
LABEL_13:
    sub_946E0("No stack.", HIDWORD(v1));
  if ( !sub_22EA74() )
    sub_946E0("No memory.");
  if ( sub_24B59C() < 0 )
    sub_23F788();
  if ( !dword_487758 )
  {
    v3 = dword_487D2C;
    v4 = sub_1DDBBC(0);
    dword_487758 = (int)sub_15D314(v3, v4);
  }
  result = ((int (*)(void))loc_15F198)();
  if ( !result )
  {
    v1 = sub_94700(
           (int)"frame.c",
           1598,
           "%s: Assertion `%s' failed.",
           "frame_info* get_current_frame()",
           "current_frame != NULL");
    goto LABEL_13;
  }
  return result;
}

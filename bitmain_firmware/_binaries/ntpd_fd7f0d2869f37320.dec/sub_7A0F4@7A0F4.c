int __fastcall sub_7A0F4(int a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( !a1 )
    JUMPOUT(0x7A160);
  return sub_7A120(a1, a2, _stack_chk_guard, (int)&_stack_chk_guard, a5, a6);
}

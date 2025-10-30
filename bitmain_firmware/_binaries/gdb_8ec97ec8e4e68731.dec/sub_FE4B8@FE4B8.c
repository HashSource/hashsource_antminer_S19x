void __fastcall __noreturn sub_FE4B8(int val)
{
  if ( dword_46D418 )
  {
    if ( !fork() )
      sub_258A20();
    dword_46D418 = 0;
  }
  siglongjmp((struct __jmp_buf_tag *)&unk_47B018, val);
}

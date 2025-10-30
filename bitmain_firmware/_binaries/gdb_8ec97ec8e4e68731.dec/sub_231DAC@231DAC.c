void __fastcall sub_231DAC(int a1)
{
  sub_243C34(a1);
  if ( sub_183CA8() )
  {
    if ( a1 && sub_183D9C() && !sub_25A3E4("A program is being debugged already.  Kill it? ") )
      sub_946E0("Program not killed.");
    sub_183B38((int (__fastcall *)(int, int))sub_230894, 0);
  }
  while ( dword_489AD8 > 1 )
    sub_231D04(dword_489F70);
  sub_230804(a1);
}

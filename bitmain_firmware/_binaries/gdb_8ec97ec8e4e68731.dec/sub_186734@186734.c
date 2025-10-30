int __fastcall sub_186734(int a1, int a2, int a3, const char *a4)
{
  if ( sub_231004() )
    return sub_25A418(a1, "Disabling randomization of debuggee's virtual address space is %s.\n", a4);
  else
    return sub_25A6BC(
             "Disabling randomization of debuggee's virtual address space is unsupported on\nthis platform.\n",
             a1);
}

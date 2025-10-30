int __fastcall sub_2552AC(int a1, int a2, int a3, _BYTE *a4)
{
  if ( *a4 == 48 )
    return sub_25A418(a1, "Will not print nested types defined in a class\n");
  else
    return sub_25A418(a1, "Will print %s nested types defined in a class\n", a4);
}

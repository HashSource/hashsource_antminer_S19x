int __fastcall sub_EEB10(int a1, int a2, int a3, char *s1)
{
  if ( !strcmp(s1, "auto") )
    return sub_25A418(a1, "The host character set is \"auto; currently %s\".\n", off_46C0F4[0]);
  else
    return sub_25A418(a1, "The host character set is \"%s\".\n", s1);
}

int __fastcall sub_178F48(char *s1)
{
  if ( *s1 == 95 && sub_10A844((unsigned __int8)s1[1]) && s1[2] == 95 || !strncmp(s1, "__dt__", 6u) )
    return 2;
  else
    return 0;
}

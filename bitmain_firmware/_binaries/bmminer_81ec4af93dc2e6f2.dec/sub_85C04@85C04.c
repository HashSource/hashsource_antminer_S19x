int __fastcall sub_85C04(const char *a1)
{
  if ( a1 )
    return strcmp(a1, "!") == 0;
  sub_89984(2, "src/rule.c", 1002, "a_rule is null or 0");
  return -1;
}

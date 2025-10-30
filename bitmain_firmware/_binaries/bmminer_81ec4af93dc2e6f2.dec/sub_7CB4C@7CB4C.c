int __fastcall sub_7CB4C(const void *a1, int a2)
{
  int result; // r0
  int i; // [sp+14h] [bp-8h]

  if ( !a1 )
    return sub_89984(2, "src/category_table.c", 21, "categories is null or 0");
  sub_89984(a2, "src/category_table.c", 22, "-category_table[%p]-", a1);
  result = sub_89710(a1);
  for ( i = result; i; i = result )
  {
    sub_7C164(*(const void ***)(i + 8), a2);
    result = sub_897AC(a1, i);
  }
  return result;
}

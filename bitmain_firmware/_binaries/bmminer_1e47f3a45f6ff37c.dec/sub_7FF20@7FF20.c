int __fastcall sub_7FF20(const void *a1, int a2)
{
  int result; // r0
  int i; // [sp+14h] [bp-8h]

  if ( !a1 )
    return sub_8CD10(2, "src/category_table.c", 21, "categories is null or 0");
  sub_8CD10(a2, "src/category_table.c", 22, "-category_table[%p]-", a1);
  result = sub_8CA9C(a1);
  for ( i = result; i; i = result )
  {
    sub_7F53C(*(const void ***)(i + 8), a2);
    result = sub_8CB38(a1, i);
  }
  return result;
}

int __fastcall sub_8021C(int a1)
{
  int result; // r0
  int i; // [sp+Ch] [bp-8h]

  if ( !a1 )
    return sub_8CD10(2, "src/category_table.c", 91, "categories is null or 0");
  result = sub_8CA9C(a1);
  for ( i = result; i; i = result )
  {
    sub_7FD68(*(_DWORD **)(i + 8));
    result = sub_8CB38(a1, i);
  }
  return result;
}

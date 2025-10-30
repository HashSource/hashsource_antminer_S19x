int __fastcall sub_7CE48(int a1)
{
  int result; // r0
  int i; // [sp+Ch] [bp-8h]

  if ( !a1 )
    return sub_89984(2, "src/category_table.c", 91, "categories is null or 0");
  result = sub_89710(a1);
  for ( i = result; i; i = result )
  {
    sub_7C994(*(_DWORD **)(i + 8));
    result = sub_897AC(a1, i);
  }
  return result;
}

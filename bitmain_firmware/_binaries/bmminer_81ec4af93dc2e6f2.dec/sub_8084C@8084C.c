int __fastcall sub_8084C(const void *a1, int a2)
{
  int result; // r0
  int i; // [sp+14h] [bp-8h]

  if ( !a1 )
    return sub_89984(2, "src/record_table.c", 21, "records is null or 0");
  sub_89984(a2, "src/record_table.c", 22, "-record_table[%p]-", a1);
  result = sub_89710(a1);
  for ( i = result; i; i = result )
  {
    sub_80608(*(const void ***)(i + 8), a2);
    result = sub_897AC(a1, i);
  }
  return result;
}

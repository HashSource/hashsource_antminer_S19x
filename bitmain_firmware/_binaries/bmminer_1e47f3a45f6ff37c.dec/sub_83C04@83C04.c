int __fastcall sub_83C04(const void *a1, int a2)
{
  int result; // r0
  int i; // [sp+14h] [bp-8h]

  if ( !a1 )
    return sub_8CD10(2, "src/record_table.c", 21, "records is null or 0");
  sub_8CD10(a2, "src/record_table.c", 22, "-record_table[%p]-", a1);
  result = sub_8CA9C(a1);
  for ( i = result; i; i = result )
  {
    sub_839C0(*(const void ***)(i + 8), a2);
    result = sub_8CB38(a1, i);
  }
  return result;
}

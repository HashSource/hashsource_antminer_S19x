int __fastcall sub_82838(int a1, int a2)
{
  if ( a1 )
    return sub_8CD10(
             a2,
             "src/format.c",
             29,
             "---format[%p][%s = %s(%p)]---",
             (const void *)a1,
             (const char *)a1,
             (const char *)(a1 + 4097),
             *(const void **)(a1 + 8196));
  else
    return sub_8CD10(2, "src/format.c", 24, "a_format is null or 0");
}

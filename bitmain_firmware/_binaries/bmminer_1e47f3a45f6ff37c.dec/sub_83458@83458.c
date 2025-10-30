int __fastcall sub_83458(_DWORD *a1, int a2)
{
  int result; // r0
  int i; // [sp+1Ch] [bp-8h]

  if ( !a1 )
    return sub_8CD10(2, "src/mdc.c", 21, "a_mdc is null or 0");
  sub_8CD10(a2, "src/mdc.c", 22, "---mdc[%p]---", a1);
  result = sub_8CA9C(*a1);
  for ( i = result; i; i = result )
  {
    sub_8CD10(
      a2,
      "src/mdc.c",
      28,
      "----mdc_kv[%p][%s]-[%s]----",
      *(const void **)(i + 8),
      *(const char **)(i + 8),
      (const char *)(*(_DWORD *)(i + 8) + 1025));
    result = sub_8CB38(*a1, i);
  }
  return result;
}

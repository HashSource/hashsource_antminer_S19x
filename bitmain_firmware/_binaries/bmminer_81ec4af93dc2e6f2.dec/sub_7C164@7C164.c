int __fastcall sub_7C164(const void **a1, int a2)
{
  int result; // r0
  int i; // [sp+1Ch] [bp-8h]

  if ( !a1 )
    return sub_89984(2, "src/category.c", 22, "a_category is null or 0");
  result = sub_89984(a2, "src/category.c", 26, "--category[%p][%s][%p]--", a1, (const char *)a1, a1[274]);
  if ( a1[274] )
  {
    for ( i = 0; i < *((_DWORD *)a1[274] + 1); ++i )
      result = sub_8237C(*(_DWORD *)(*(_DWORD *)a1[274] + 4 * i), a2);
  }
  return result;
}

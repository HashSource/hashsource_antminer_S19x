int __fastcall sub_839C0(const void **a1, int a2)
{
  if ( a1 )
    return sub_8CD10(a2, "src/record.c", 15, "--record:[%p][%s:%p]--", a1, (const char *)a1, a1[257]);
  else
    return sub_8CD10(2, "src/record.c", 14, "a_record is null or 0");
}

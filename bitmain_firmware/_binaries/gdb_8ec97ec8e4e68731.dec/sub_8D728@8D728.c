void __fastcall __noreturn sub_8D728(const char *a1)
{
  const char *v1; // r1

  v1 = a1;
  if ( !a1 )
    v1 = "Error";
  sub_946E0("%s in expression, near `%s'.", v1);
}

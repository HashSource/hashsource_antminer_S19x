int __fastcall sub_16104(const char *a1, const char *a2)
{
  const char *v2; // r2
  int v3; // r0

  v2 = a2;
  if ( a1 )
    sub_92F64(2, "No label \"%s\" defined in function \"%s\".", a2, a1);
  v3 = sub_92F64(2, "No label \"%s\" defined in current function.", v2);
  return sub_16134(v3);
}

int __fastcall sub_115E74(int *a1, int a2)
{
  int v2; // r4
  int result; // r0
  int v5; // r4

  v2 = *a1;
  if ( *a1 == a2 )
  {
    result = *a1;
    if ( v2 )
      return 1;
  }
  else
  {
    result = sub_115E5C(a2);
    v5 = result;
    if ( result )
    {
      X509_NAME_free(*a1);
      *a1 = v5;
      return 1;
    }
  }
  return result;
}

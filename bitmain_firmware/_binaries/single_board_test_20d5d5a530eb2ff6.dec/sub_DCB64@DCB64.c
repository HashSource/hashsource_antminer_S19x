int sub_DCB64()
{
  int result; // r0
  int v1; // r4
  int v2; // r5

  result = sub_E0740(16, "crypto/hmac/hmac.c", 137);
  v1 = result;
  if ( result )
  {
    v2 = sub_DCAD0(result);
    result = v1;
    if ( !v2 )
    {
      sub_DCA8C(v1);
      return 0;
    }
  }
  return result;
}

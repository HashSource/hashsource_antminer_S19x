int *__fastcall sub_113A18(int a1)
{
  int v2; // r1
  int *result; // r0
  int v4; // r0

  if ( dword_6E1C54 )
  {
    v2 = sub_10BC4C(dword_6E1C54, a1);
    result = (int *)dword_6E1C54;
    if ( v2 >= 0 )
    {
      v4 = sub_10BC04((int *)dword_6E1C54, v2);
      X509_VERIFY_PARAM_free(v4);
      result = (int *)dword_6E1C54;
    }
    return (int *)(sub_10BD3C(result, a1) != 0);
  }
  result = (int *)sub_10BFD4(sub_113380);
  dword_6E1C54 = (int)result;
  if ( result )
    return (int *)(sub_10BD3C(result, a1) != 0);
  return result;
}

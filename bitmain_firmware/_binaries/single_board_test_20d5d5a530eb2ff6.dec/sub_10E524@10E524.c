int *__fastcall sub_10E524(int a1, unsigned int a2, int a3)
{
  int *result; // r0
  int *v5; // r4

  result = (int *)sub_10E518(a1, a2);
  v5 = result;
  if ( result )
  {
    if ( (a3 & 0xFFFFFFFB) == 1 || a3 != sub_AD77C(result) )
    {
      sub_D0048(11, 139, 122, (int)"crypto/x509/x509_att.c", 320);
      return 0;
    }
    else
    {
      return (int *)v5[1];
    }
  }
  return result;
}

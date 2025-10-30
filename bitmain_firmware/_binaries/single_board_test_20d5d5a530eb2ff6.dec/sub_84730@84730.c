int __fastcall sub_84730(int a1, int a2, int a3)
{
  int result; // r0
  int v6; // r6

  if ( !a3 )
    return sub_84680(a1, a2, 0);
  result = sub_10EBC4(a3);
  v6 = result;
  if ( result )
  {
    if ( sub_84680(a1, a2, result) )
    {
      return 1;
    }
    else
    {
      sub_10BFDC(v6, X509_free);
      return 0;
    }
  }
  return result;
}

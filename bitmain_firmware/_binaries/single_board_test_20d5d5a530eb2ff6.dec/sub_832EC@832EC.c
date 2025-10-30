int __fastcall sub_832EC(int result)
{
  int v1; // r4
  int v2; // r5
  bool v3; // cc

  if ( result )
  {
    v1 = result;
    v2 = EVP_PKEY_new();
    v3 = sub_DA108(v2, v1) <= 0;
    result = v2;
    if ( v3 )
    {
      sub_DA240(v2);
      return 0;
    }
  }
  return result;
}

int __fastcall sub_12D254(_DWORD *a1, char *a2, size_t a3)
{
  int result; // r0
  int v7; // r5

  result = sub_B2068();
  v7 = result;
  if ( result )
  {
    if ( sub_1280A4(result, a2, a3) )
    {
      sub_AD794(a1, 4, v7);
      return 1;
    }
    else
    {
      j_ASN1_STRING_free(v7);
      return 0;
    }
  }
  return result;
}

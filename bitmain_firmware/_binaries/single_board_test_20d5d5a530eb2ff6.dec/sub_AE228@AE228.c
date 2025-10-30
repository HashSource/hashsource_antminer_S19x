int __fastcall sub_AE228(int *a1)
{
  size_t *v2; // r0
  int v3; // r5
  int v4; // r4
  int result; // r0

  if ( !a1 )
    return 0;
  v2 = (size_t *)sub_AE1D0();
  v3 = (int)v2;
  if ( !v2 )
    return 0;
  v4 = sub_AE140(v2, a1);
  result = v3;
  if ( !v4 )
  {
    ASN1_STRING_free(v3);
    return 0;
  }
  return result;
}

int __fastcall sub_10FCA4(int result, int *a2)
{
  size_t *v2; // r0

  if ( result )
  {
    v2 = (size_t *)(result + 4);
    if ( v2 == (size_t *)a2 )
      return 1;
    else
      return sub_AE140(v2, a2);
  }
  return result;
}

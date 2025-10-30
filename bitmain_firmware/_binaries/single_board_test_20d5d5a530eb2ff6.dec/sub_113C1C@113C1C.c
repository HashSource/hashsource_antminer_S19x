int __fastcall sub_113C1C(int result, int *a2)
{
  if ( result )
  {
    if ( (int *)result == a2 )
      return 1;
    else
      return sub_AE140((size_t *)result, a2);
  }
  return result;
}

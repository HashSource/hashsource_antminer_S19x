void __fastcall sub_2ABE7C(void **a1)
{
  if ( a1[42] )
  {
    sub_2AAA1C((int)(a1 + 18));
    sub_324D50(a1[42]);
  }
  if ( *a1 )
    free(*a1);
  free(a1[34]);
  free(a1);
}

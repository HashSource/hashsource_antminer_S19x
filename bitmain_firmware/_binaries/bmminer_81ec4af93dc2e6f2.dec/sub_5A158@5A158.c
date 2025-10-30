void __fastcall sub_5A158(void **a1)
{
  if ( a1 )
  {
    free(*a1);
    free(a1);
  }
}

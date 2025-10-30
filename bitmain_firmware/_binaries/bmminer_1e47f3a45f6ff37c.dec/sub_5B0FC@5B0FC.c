void __fastcall sub_5B0FC(void **a1)
{
  if ( a1 )
  {
    free(*a1);
    free(a1);
  }
}

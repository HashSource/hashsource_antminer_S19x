void __fastcall sub_6AC78(void **a1)
{
  if ( a1 )
  {
    free(*a1);
    free(a1);
  }
}

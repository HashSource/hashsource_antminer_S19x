void __fastcall sub_70938(void **a1)
{
  if ( a1 )
  {
    free(*a1);
    j_free(a1);
  }
}

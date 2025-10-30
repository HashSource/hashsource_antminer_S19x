void __fastcall sub_219828(int a1, void **a2)
{
  if ( a2 )
  {
    if ( *a2 )
      free(*a2);
    free(a2);
  }
}

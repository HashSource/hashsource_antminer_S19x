void __fastcall sub_1F7D58(void (**a1)(void))
{
  if ( a1 )
  {
    if ( *a1 )
      (*a1)();
    free(a1);
  }
}

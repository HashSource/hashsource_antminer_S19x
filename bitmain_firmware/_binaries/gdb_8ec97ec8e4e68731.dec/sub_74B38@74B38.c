void sub_74B38()
{
  int v0; // r1

  v0 = dword_474A80;
  if ( dword_474A80 )
  {
    dword_474A80 = 0;
    dword_487CC0 = v0;
  }
  obstack_free(&stru_474A84, 0);
}

void __fastcall sub_11C93C(int *a1)
{
  int v2; // r4

  v2 = *a1;
  if ( *a1 )
  {
    obstack_free((struct obstack *)(v2 + 4), 0);
    free((void *)v2);
  }
  *a1 = 0;
}

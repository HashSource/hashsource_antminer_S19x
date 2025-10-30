int __fastcall sub_8D414(int *a1, const void *a2, size_t *a3)
{
  int v6; // r4

  v6 = 10;
  while ( 1 )
  {
    if ( sub_F497C(a2, *a3) <= 0 )
      return 0;
    if ( !sub_87B34(a1, a2, *a3) )
      break;
    if ( !--v6 )
      return 0;
  }
  return 1;
}

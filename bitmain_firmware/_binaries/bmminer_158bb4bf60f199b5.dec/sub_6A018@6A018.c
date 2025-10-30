int __fastcall sub_6A018(void **a1)
{
  int v2; // r5

  if ( !a1 )
    return 0;
  v2 = sub_6A9A0(*a1);
  free(a1);
  return v2;
}

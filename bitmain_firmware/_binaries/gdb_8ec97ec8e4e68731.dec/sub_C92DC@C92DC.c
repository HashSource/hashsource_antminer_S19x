bool __fastcall sub_C92DC(int *a1)
{
  int v1; // r3

  v1 = *a1;
  if ( !*a1 )
  {
    if ( !off_4899F8() )
      return 1;
    v1 = *a1;
  }
  return v1 == 1 && off_489A00() == 0;
}

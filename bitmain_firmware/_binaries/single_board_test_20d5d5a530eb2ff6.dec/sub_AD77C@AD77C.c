int __fastcall sub_AD77C(int *a1)
{
  int v1; // r3

  v1 = *a1;
  if ( (*a1 & 0xFFFFFFFB) != 1 && !a1[1] )
    return 0;
  return v1;
}

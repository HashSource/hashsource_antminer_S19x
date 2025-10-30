int __fastcall sub_EC568(int *a1, int *a2)
{
  int result; // r0

  result = sub_EB338(*a1, *a2);
  if ( !result )
  {
    result = sub_1280A0((int)(a1 + 2), (int)(a2 + 2));
    if ( !result )
      return sub_1280A0((int)(a1 + 6), (int)(a2 + 6));
  }
  return result;
}

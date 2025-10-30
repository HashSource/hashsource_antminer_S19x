int __fastcall sub_32596C(int *a1)
{
  int result; // r0

  if ( a1[6] <= 0 )
    return 0;
  result = (*(int (**)(void))(a1[17] + 24))();
  a1[14] = result;
  a1[6] = -1;
  return result;
}

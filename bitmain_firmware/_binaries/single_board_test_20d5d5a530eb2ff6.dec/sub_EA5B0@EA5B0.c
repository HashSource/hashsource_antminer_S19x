int *__fastcall sub_EA5B0(int *result)
{
  int v1; // r1

  if ( result )
  {
    v1 = *result;
    if ( dword_6E1AA4 < 0 || dword_6E1AA4 == v1 )
      return (int *)sub_EA530(result[2], v1);
  }
  return result;
}

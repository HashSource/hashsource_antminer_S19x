int __fastcall sub_2B2F64(_DWORD *a1)
{
  int result; // r0

  result = sub_2EF5B0(a1[311], 0, 6);
  if ( a1[96] )
  {
    result = result == 8 || result > 9;
    if ( result )
      goto LABEL_6;
  }
  else if ( result > 2 )
  {
LABEL_6:
    a1[97] = 1;
  }
  return result;
}

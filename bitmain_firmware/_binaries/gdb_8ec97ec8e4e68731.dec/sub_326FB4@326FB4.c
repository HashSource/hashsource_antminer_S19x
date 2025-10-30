int __fastcall sub_326FB4(int *a1)
{
  int result; // r0

  result = *a1;
  if ( result )
  {
    while ( *(_DWORD *)(result + 8) )
      result = *(_DWORD *)(result + 8);
  }
  return result;
}

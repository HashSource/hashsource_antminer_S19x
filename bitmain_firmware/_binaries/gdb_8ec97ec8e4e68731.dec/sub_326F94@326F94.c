int __fastcall sub_326F94(int *a1)
{
  int result; // r0

  result = *a1;
  if ( result )
  {
    while ( *(_DWORD *)(result + 12) )
      result = *(_DWORD *)(result + 12);
  }
  return result;
}

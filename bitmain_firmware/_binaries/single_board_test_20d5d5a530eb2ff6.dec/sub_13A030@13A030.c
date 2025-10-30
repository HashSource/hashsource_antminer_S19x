int __fastcall sub_13A030(int *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int result; // r0

  result = *a1;
  if ( result )
  {
    if ( result != 1 )
      return 0;
    if ( a2 )
    {
      *a2 = a1[1];
      return result;
    }
  }
  else
  {
    if ( a3 )
      *a3 = *(_DWORD *)a1[1];
    if ( a4 )
    {
      *a4 = *(_DWORD *)(a1[1] + 4);
      return 1;
    }
  }
  return 1;
}

int __fastcall sub_15E4B0(int a1, int a2, int a3, int a4)
{
  int result; // r0

  if ( a2 == 3 )
  {
    a4 = *(_DWORD *)(a1 + 12);
    result = 1;
  }
  else
  {
    result = 0;
  }
  if ( a2 == 3 )
    *(_DWORD *)(a4 + 204) = a3;
  return result;
}

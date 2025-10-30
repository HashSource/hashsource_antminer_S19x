int __fastcall sub_1753C(_DWORD *a1, int a2)
{
  int result; // r0

  result = sub_13DC8(a1);
  if ( result )
  {
    if ( (a2 & *(_DWORD *)(result + 144)) != 0 )
      return 0;
  }
  return result;
}

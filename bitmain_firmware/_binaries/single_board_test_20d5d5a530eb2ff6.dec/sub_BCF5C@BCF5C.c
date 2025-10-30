int __fastcall sub_BCF5C(int a1, int a2)
{
  int result; // r0

  result = sub_10FD18(a2);
  if ( result )
  {
    *(_DWORD *)(a1 + 4) = a2;
    return 1;
  }
  return result;
}

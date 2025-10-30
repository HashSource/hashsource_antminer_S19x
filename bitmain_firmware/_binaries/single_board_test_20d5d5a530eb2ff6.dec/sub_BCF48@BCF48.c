int __fastcall sub_BCF48(_DWORD *a1, int a2)
{
  int result; // r0

  result = sub_10FD18(a2);
  if ( result )
  {
    *a1 = a2;
    return 1;
  }
  return result;
}

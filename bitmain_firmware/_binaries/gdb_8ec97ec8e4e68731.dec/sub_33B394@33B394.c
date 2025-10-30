int __fastcall sub_33B394(int a1, int a2, unsigned int a3, int a4)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  if ( a2 + 0x7FFFFFFF - result < a3 )
    sub_33D184(a4);
  return result;
}

int __fastcall sub_BAE2C(int a1)
{
  int result; // r0

  result = sub_BADF8();
  if ( result )
    *(_DWORD *)(result + 12) = a1;
  return result;
}

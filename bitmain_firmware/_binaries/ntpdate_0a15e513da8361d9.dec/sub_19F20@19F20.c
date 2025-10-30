unsigned int __fastcall sub_19F20(int a1)
{
  unsigned int result; // r0

  if ( !a1 )
    sub_10C38();
  result = *(_DWORD *)(a1 + 4);
  if ( result > 0x3B9AC9FF )
    sub_10C38();
  return result;
}

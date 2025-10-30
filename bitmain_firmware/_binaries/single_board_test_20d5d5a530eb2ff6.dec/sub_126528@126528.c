int __fastcall sub_126528(int a1, int a2)
{
  int v2; // r4
  int result; // r0

  v2 = *(_DWORD *)(a1 + 4) & 0x100;
  if ( v2 == (*(_DWORD *)(a2 + 4) & 0x100) )
  {
    result = sub_AE280(a1, a2);
    if ( v2 )
      return -result;
  }
  else if ( v2 )
  {
    return -1;
  }
  else
  {
    return 1;
  }
  return result;
}

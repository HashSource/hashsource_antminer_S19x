int __fastcall sub_16D988(int a1, int a2)
{
  if ( !a1 )
    return -1;
  *(_DWORD *)(a1 + 20) = a2;
  return 0;
}

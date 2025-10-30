int __fastcall sub_16D9AC(int a1, int a2)
{
  if ( !a1 )
    return -1;
  *(_DWORD *)(a1 + 32) = a2;
  return 0;
}

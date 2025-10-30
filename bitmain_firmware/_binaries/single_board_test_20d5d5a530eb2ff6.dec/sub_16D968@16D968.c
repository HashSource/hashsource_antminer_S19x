int __fastcall sub_16D968(int a1, int a2)
{
  if ( !a1 )
    return -1;
  *(_DWORD *)(a1 + 12) = a2;
  return 0;
}

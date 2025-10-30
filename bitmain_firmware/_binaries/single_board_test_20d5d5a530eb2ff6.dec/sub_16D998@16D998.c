int __fastcall sub_16D998(int a1, int a2, int a3)
{
  if ( !a1 )
    return -1;
  *(_DWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 28) = a3;
  return 0;
}

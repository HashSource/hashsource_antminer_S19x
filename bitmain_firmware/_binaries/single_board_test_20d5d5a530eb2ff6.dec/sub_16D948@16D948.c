int __fastcall sub_16D948(int a1, int a2)
{
  if ( !a1 )
    return -1;
  *(_DWORD *)(a1 + 4) = a2;
  return 0;
}

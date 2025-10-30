int __fastcall sub_120D90(int a1)
{
  if ( sub_120C28(a1, -1, -1) != 1 )
    return 0;
  if ( (*(_DWORD *)(a1 + 128) & 2) != 0 )
    return *(_DWORD *)(a1 + 132);
  return -1;
}

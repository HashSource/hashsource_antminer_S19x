int __fastcall sub_120DBC(int a1)
{
  if ( sub_120C28(a1, -1, -1) != 1 )
    return 0;
  if ( (*(_DWORD *)(a1 + 128) & 4) != 0 )
    return *(_DWORD *)(a1 + 136);
  return -1;
}

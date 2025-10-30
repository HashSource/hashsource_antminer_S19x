int __fastcall sub_120E64(int a1)
{
  if ( sub_120C28(a1, -1, -1) == 1 && (*(_DWORD *)(a1 + 128) & 1) != 0 )
    return *(_DWORD *)(a1 + 120);
  else
    return -1;
}

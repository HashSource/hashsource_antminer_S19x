int __fastcall sub_120E88(int a1)
{
  if ( sub_120C28(a1, -1, -1) == 1 && (*(_DWORD *)(a1 + 128) & 0x400) != 0 )
    return *(_DWORD *)(a1 + 124);
  else
    return -1;
}

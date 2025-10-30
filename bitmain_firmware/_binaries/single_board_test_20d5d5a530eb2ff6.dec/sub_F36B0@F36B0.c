int __fastcall sub_F36B0(int a1, unsigned int a2)
{
  if ( a2 > 0x1000000 )
    return 0;
  *(_DWORD *)(a1 + 68) = a2;
  return 1;
}

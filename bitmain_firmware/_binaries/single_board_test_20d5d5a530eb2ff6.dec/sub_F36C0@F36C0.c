int __fastcall sub_F36C0(int a1, int a2)
{
  if ( a2 > 0x100000 )
    return 0;
  *(_DWORD *)(a1 + 76) = a2;
  return 1;
}

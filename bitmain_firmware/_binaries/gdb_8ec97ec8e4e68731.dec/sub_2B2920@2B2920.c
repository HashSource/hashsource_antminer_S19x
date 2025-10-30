int __fastcall sub_2B2920(_DWORD *a1, int a2)
{
  if ( (*(_DWORD *)(a2 + 8) & 0x20000000) != 0 )
    *a1 |= 0x80000000;
  return 1;
}

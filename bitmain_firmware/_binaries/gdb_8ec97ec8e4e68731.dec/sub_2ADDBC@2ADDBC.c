int __fastcall sub_2ADDBC(int a1, int a2, int a3)
{
  if ( (*(_BYTE *)(a1 + 43) & 0x40) != 0 )
  {
    ((void (__fastcall *)(int))loc_2A6C48)(5);
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 36) = a3;
    return 1;
  }
}

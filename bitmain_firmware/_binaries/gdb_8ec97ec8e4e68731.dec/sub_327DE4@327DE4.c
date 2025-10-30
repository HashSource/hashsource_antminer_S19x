int __fastcall sub_327DE4(int a1, int a2, int a3)
{
  if ( (a2 & 0xDD) == 0 || (a2 & 0x40000000) != 0 )
    return sub_3313E4(a3);
  *(_BYTE *)(a1 + 8) = 32;
  *(_DWORD *)(a1 + 4) = 0;
  *(_WORD *)(a1 + 10) = 0;
  *(_DWORD *)a1 = 1;
  return sub_3313E4(a3);
}

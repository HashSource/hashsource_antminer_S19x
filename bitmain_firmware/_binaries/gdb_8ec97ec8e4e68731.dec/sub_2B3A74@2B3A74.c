void __fastcall sub_2B3A74(int a1, int a2)
{
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 40) & 0xFE00001F
                       | (32 * (((unsigned int)&loc_FFEFC + 3) & (*(_DWORD *)(a1 + 40) >> 5) & 0xFFFFF));
  sub_2B3A44(a1, a2);
}
